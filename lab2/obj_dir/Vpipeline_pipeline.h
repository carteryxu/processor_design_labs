// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpipeline.h for the primary calling header

#ifndef VERILATED_VPIPELINE_PIPELINE_H_
#define VERILATED_VPIPELINE_PIPELINE_H_  // guard

#include "verilated.h"
class Vpipeline_AGEX_STAGE;
class Vpipeline_WB_STAGE;


class Vpipeline__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpipeline_pipeline final {
  public:
    // CELLS
    Vpipeline_AGEX_STAGE* my_AGEX_stage;
    Vpipeline_WB_STAGE* my_WB_stage;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __PVT__from_DE_to_FE;
    CData/*0:0*/ __PVT__from_AGEX_to_DE;
    CData/*7:0*/ __PVT__my_FE_stage__DOT__BHR;
    CData/*7:0*/ __PVT__my_FE_stage__DOT__pht_index_FE;
    CData/*0:0*/ __PVT__my_FE_stage__DOT__update_predictor_AGEX;
    CData/*2:0*/ my_DE_stage__DOT____Vxrand___1;
    CData/*3:0*/ my_DE_stage__DOT____Vxrand___0;
    CData/*5:0*/ __PVT__my_DE_stage__DOT__op_I_DE;
    CData/*3:0*/ __PVT__my_DE_stage__DOT__type_I_DE;
    CData/*2:0*/ __PVT__my_DE_stage__DOT__type_immediate_DE;
    CData/*0:0*/ __PVT__my_DE_stage__DOT__wr_reg_DE;
    CData/*0:0*/ __PVT__my_DE_stage__DOT__use_rs1_DE;
    CData/*0:0*/ __PVT__my_DE_stage__DOT__use_rs2_DE;
    CData/*0:0*/ __VdlySet__my_MEM_stage__DOT__dmem__v0;
    SData/*13:0*/ __VdlyDim0__my_MEM_stage__DOT__dmem__v0;
    IData/*31:0*/ __PVT__cycle_count;
    VlWide<5>/*138:0*/ __PVT__my_FE_stage__DOT__FE_latch;
    IData/*31:0*/ __PVT__my_FE_stage__DOT__PC_FE_latch;
    IData/*31:0*/ __PVT__my_FE_stage__DOT__inst_count_FE;
    IData/*31:0*/ __PVT__my_FE_stage__DOT__inst_count_AGEX;
    IData/*31:0*/ __PVT__my_FE_stage__DOT__inst_FE;
    IData/*31:0*/ __PVT__my_FE_stage__DOT__pcplus_FE;
    IData/*31:0*/ __PVT__my_FE_stage__DOT__br_target_AGEX;
    IData/*31:0*/ __PVT__my_FE_stage__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __PVT__my_FE_stage__DOT__unnamedblk2__DOT__i;
    VlWide<8>/*250:0*/ __PVT__my_DE_stage__DOT__DE_latch;
    IData/*31:0*/ __PVT__my_DE_stage__DOT__regval_WB;
    IData/*31:0*/ __PVT__my_DE_stage__DOT__in_use_regs;
    IData/*31:0*/ my_DE_stage__DOT____VdfgExtracted_h54a4af44__0;
    VlWide<6>/*172:0*/ __PVT__my_MEM_stage__DOT__MEM_latch;
    VlWide<5>/*138:0*/ __Vdly__my_FE_stage__DOT__FE_latch;
    IData/*31:0*/ __VdlyVal__my_MEM_stage__DOT__dmem__v0;
    VlUnpacked<IData/*31:0*/, 16384> __PVT__my_FE_stage__DOT__imem;
    VlUnpacked<CData/*1:0*/, 256> __PVT__my_FE_stage__DOT__PHT;
    VlUnpacked<IData/*31:0*/, 16> __PVT__my_FE_stage__DOT__BTB_target;
    VlUnpacked<IData/*25:0*/, 16> __PVT__my_FE_stage__DOT__BTB_tag;
    VlUnpacked<CData/*0:0*/, 16> __PVT__my_FE_stage__DOT__BTB_valid;
    VlUnpacked<IData/*31:0*/, 32> __PVT__my_DE_stage__DOT__regs;
    VlUnpacked<IData/*31:0*/, 16384> __PVT__my_MEM_stage__DOT__dmem;

    // INTERNAL VARIABLES
    Vpipeline__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpipeline_pipeline() = default;
    ~Vpipeline_pipeline() = default;
    void ctor(Vpipeline__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vpipeline_pipeline);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
