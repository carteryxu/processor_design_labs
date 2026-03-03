 `include "define.vh" 


module FE_STAGE(
  input wire clk,
  input wire reset,
  input wire [`from_DE_to_FE_WIDTH-1:0] from_DE_to_FE,
  input wire [`from_AGEX_to_FE_WIDTH-1:0] from_AGEX_to_FE,   
  input wire [`from_MEM_to_FE_WIDTH-1:0] from_MEM_to_FE,   
  input wire [`from_WB_to_FE_WIDTH-1:0] from_WB_to_FE, 
  output wire [`FE_latch_WIDTH-1:0] FE_latch_out
);

  `UNUSED_VAR (from_MEM_to_FE)
  `UNUSED_VAR (from_WB_to_FE)

  // I-MEM
  (* ram_init_file = `IDMEMINITFILE *)
  reg [`DBITS-1:0] imem [`IMEMWORDS-1:0];
 
  initial begin
      $readmemh(`IDMEMINITFILE , imem);
  end

  // Display memory contents with verilator 
  /*
  always @(posedge clk) begin
    for (integer i=0 ; i<`IMEMWORDS ; i=i+1) begin
        $display("%h", imem[i]);
    end
  end
  */

// branch prediction registers
reg [7:0] BHR; // length of 8 bits, use PC[9:2] XOR BHR to index PHT
reg [1:0] PHT [255:0]; // 2^8 2 bit-counters
// BTB: index w/ PC[5:2], valid, tag, target
reg [31:0] BTB_target [15:0]; // 16 entry btb targets
reg [25:0] BTB_tag [15:0]; 
reg BTB_valid [15:0];

wire [7:0] pht_index_FE = PC_FE_latch[9:2] ^ BHR; 
wire [3:0] btb_index_FE = PC_FE_latch[5:2]; 

// btb hit detection
wire btb_hit_FE = BTB_valid[btb_index_FE] && (BTB_tag[btb_index_FE] == PC_FE_latch[31:6]); // instruction matches tag
wire pht_pred_FE = PHT[pht_index_FE][1]; // msb = 1 taken, msb = 0 not taken
wire [`DBITS-1:0] predicted_target_FE = BTB_target[btb_index_FE]; // predicted target addrsees

  /* pipeline latch */ 
  reg [`FE_latch_WIDTH-1:0] FE_latch;  // FE latch 
  wire valid_FE;
  assign valid_FE = !(reset || br_mispred_AGEX || stall_pipe_FE) && |inst_FE;
   
  //`UNUSED_VAR(valid_FE)
  reg [`DBITS-1:0] PC_FE_latch; // PC latch in the FE stage   // you could use a part of FE_latch as a PC latch as well 
  
  reg [`DBITS-1:0] inst_count_FE; /* for debugging purpose */ 
  
  wire [`DBITS-1:0] inst_count_AGEX; /* for debugging purpose. resent the instruction counter */ 

  wire [`INSTBITS-1:0] inst_FE;  // instruction value in the FE stage 
  wire [`DBITS-1:0] pcplus_FE;  // pc plus value in the FE stage 
  wire stall_pipe_FE; // signal to indicate when a front-end needs to be stall
  
  wire [`FE_latch_WIDTH-1:0] FE_latch_contents;  // the signals that will be FE latch contents 
  
  // reading instruction from imem 
  assign inst_FE = imem[PC_FE_latch[`IMEMADDRBITS-1:`IMEMWORDBITS]];  // this code works. imem is stored 4B together 
  
  // wire to send the FE latch contents to the DE stage 
  assign FE_latch_out = FE_latch; 
 

  // This is the value of "incremented PC", computed in the FE stage
  assign pcplus_FE = (btb_hit_FE && pht_pred_FE) ? predicted_target_FE : (PC_FE_latch + `INSTSIZE);
  
   
   // the order of latch contents should be matched in the decode stage when we extract the contents. 
  assign FE_latch_contents = {
                                valid_FE, 
                                inst_FE, 
                                PC_FE_latch, 
                                pcplus_FE, // please feel free to add more signals such as valid bits etc. 
                                inst_count_FE,
                                 // if you add more bits here, please increase the width of latch in VX_define.vh 
                                pht_index_FE,
                                PHT[pht_index_FE]
                                };




  // **TODO: Complete the rest of the pipeline 
  //assign stall_pipe_FE = 1;   // you need
  wire br_mispred_AGEX;  
  wire [`DBITS-1:0] br_target_AGEX;  
  wire update_predictor_AGEX;
  wire [7:0] pht_index_AGEX;
  wire [1:0] new_pht_counter_AGEX;
  wire bhr_update_bit_AGEX;
  wire [3:0] btb_index_AGEX;
  wire [25:0] btb_tag_AGEX;
  wire[`DBITS-1:0] btb_target_AGEX;

  assign {
    stall_pipe_FE
  } = from_DE_to_FE[0]; 

  assign {
    br_mispred_AGEX,
    br_target_AGEX,
    update_predictor_AGEX,
    pht_index_AGEX,
    new_pht_counter_AGEX,
    bhr_update_bit_AGEX,
    btb_index_AGEX,
    btb_tag_AGEX,
    btb_target_AGEX
  } = from_AGEX_to_FE;

  always @ (posedge clk) begin
  /* you need to extend this always block */
    if (reset) begin 
      PC_FE_latch <= `STARTPC;
      inst_count_FE <= 1;  /* inst_count starts from 1 for easy human reading. 1st fetch instructions can have 1 */ 
      BHR <= 8'b0;
      for (integer i = 0; i < 256; i = i + 1) begin
        PHT[i] = 2'b01; // weakyl not taken
      end
      for (integer i = 0; i < 16; i = i + 1) begin
        BTB_valid[i] = 1'b0;
        BTB_tag[i] = 26'b0;
        BTB_target[i] = 32'b0;
      end
    end 
    else begin
      if (br_mispred_AGEX)
        PC_FE_latch <= br_target_AGEX;
      else if (stall_pipe_FE) 
        PC_FE_latch <= PC_FE_latch; 
      else begin 
        PC_FE_latch <= pcplus_FE;
        inst_count_FE <= inst_count_FE + 1; 
      end 

      // update branch prediction
      if (update_predictor_AGEX) begin
        BHR <= {BHR[6:0], bhr_update_bit_AGEX}; // shift left, insert new bit
        PHT[pht_index_AGEX] <= new_pht_counter_AGEX;

        // update btb
        BTB_valid[btb_index_AGEX] <= 1'b1;
        BTB_tag[btb_index_AGEX] <= btb_tag_AGEX;
        BTB_target[btb_index_AGEX] <= btb_target_AGEX;
      end
    end
  end
  

  always @ (posedge clk) begin
    if (reset) begin 
      FE_latch <= '0; 
    end else begin 
      if (br_mispred_AGEX)
        FE_latch <= '0;
      else if (stall_pipe_FE)
        FE_latch <= FE_latch; 
      else 
        FE_latch <= FE_latch_contents; 
    end  
  end

endmodule
