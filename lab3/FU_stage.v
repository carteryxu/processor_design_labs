`include "define.vh" 

module FU_STAGE(
  input wire                              clk,
  input wire                              reset,
  input wire [`from_DE_to_FU_WIDTH-1:0]    from_DE_to_FU,   
  output wire [`from_FU_to_DE_WIDTH-1:0]   from_FU_to_DE
);
  /////////////////////////////////////////////////////////////////
  //TODO: add your code here to instantiate the external_alu module
  wire [`ALUDATABITS-1:0] OP1;
  wire [`ALUDATABITS-1:0] OP2;
  wire [`ALUOPBITS-1:0] ALUOP;
  wire [`ALUCSRINBITS-1:0] CSR_ALU_IN; // cpu commands to alu 
  wire [`ALUDATABITS-1:0] OP3; // actual vaalue from alu 
  wire [`ALUCSROUTBITS-1:0] CSR_ALU_OUT; // status

  assign {OP1, OP2, ALUOP, CSR_ALU_IN} = from_DE_to_FU; 

  external_alu u_external_alu (
    .clk(clk),
    .rst(reset),
    .OP1(OP1),
    .OP2(OP2),
    .ALUOP(ALUOP),
    .CSR_ALU_IN(CSR_ALU_IN),
    .OP3(OP3),
    .CSR_ALU_OUT(CSR_ALU_OUT)
  );

  assign from_FU_to_DE = {OP3, CSR_ALU_OUT};



endmodule