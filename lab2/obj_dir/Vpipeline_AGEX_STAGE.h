// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpipeline.h for the primary calling header

#ifndef VERILATED_VPIPELINE_AGEX_STAGE_H_
#define VERILATED_VPIPELINE_AGEX_STAGE_H_  // guard

#include "verilated.h"


class Vpipeline__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpipeline_AGEX_STAGE final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__from_MEM_to_AGEX,0,0);
    VL_IN8(__PVT__from_WB_to_AGEX,0,0);
    VL_OUT8(__PVT__from_AGEX_to_DE,0,0);
    CData/*0:0*/ __VdfgExtracted_h6ac6cdbe__0;
    CData/*0:0*/ __VdfgExtracted_h690ea6c9__0;
    CData/*0:0*/ __VdfgRegularize_h3f620fe0_0_0;
    CData/*0:0*/ __VdfgRegularize_h3f620fe0_0_1;
    VL_INW(__PVT__from_DE_latch,250,0,8);
    VL_OUTW(__PVT__AGEX_latch_out,174,0,6);
    VL_OUTW(__PVT__from_AGEX_to_FE,106,0,4);
    VlWide<6>/*174:0*/ __PVT__AGEX_latch;
    IData/*31:0*/ __PVT__aluout_AGEX;
    IData/*31:0*/ __PVT__memaddr_AGEX;
    IData/*31:0*/ total_branches;
    IData/*31:0*/ correct_predictions;
    IData/*31:0*/ __VdfgExtracted_h32f0a660__0;
    IData/*31:0*/ __VdfgExtracted_hbcc182c0__0;

    // INTERNAL VARIABLES
    Vpipeline__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpipeline_AGEX_STAGE() = default;
    ~Vpipeline_AGEX_STAGE() = default;
    void ctor(Vpipeline__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vpipeline_AGEX_STAGE);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
