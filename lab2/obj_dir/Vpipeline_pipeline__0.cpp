// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline__pch.h"

void Vpipeline_pipeline___nba_sequent__TOP__pipeline__0(Vpipeline_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__0\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__my_FE_stage__DOT__inst_count_FE;
    __Vdly__my_FE_stage__DOT__inst_count_FE = 0;
    IData/*31:0*/ __Vdly__my_FE_stage__DOT__PC_FE_latch;
    __Vdly__my_FE_stage__DOT__PC_FE_latch = 0;
    CData/*7:0*/ __Vdly__my_FE_stage__DOT__BHR;
    __Vdly__my_FE_stage__DOT__BHR = 0;
    IData/*31:0*/ __VdlyVal__my_FE_stage__DOT__BTB_target__v0;
    __VdlyVal__my_FE_stage__DOT__BTB_target__v0 = 0;
    CData/*3:0*/ __VdlyDim0__my_FE_stage__DOT__BTB_target__v0;
    __VdlyDim0__my_FE_stage__DOT__BTB_target__v0 = 0;
    CData/*0:0*/ __VdlySet__my_FE_stage__DOT__BTB_target__v0;
    __VdlySet__my_FE_stage__DOT__BTB_target__v0 = 0;
    IData/*25:0*/ __VdlyVal__my_FE_stage__DOT__BTB_tag__v0;
    __VdlyVal__my_FE_stage__DOT__BTB_tag__v0 = 0;
    CData/*3:0*/ __VdlyDim0__my_FE_stage__DOT__BTB_tag__v0;
    __VdlyDim0__my_FE_stage__DOT__BTB_tag__v0 = 0;
    CData/*0:0*/ __VdlySet__my_FE_stage__DOT__BTB_tag__v0;
    __VdlySet__my_FE_stage__DOT__BTB_tag__v0 = 0;
    CData/*3:0*/ __VdlyDim0__my_FE_stage__DOT__BTB_valid__v0;
    __VdlyDim0__my_FE_stage__DOT__BTB_valid__v0 = 0;
    CData/*0:0*/ __VdlySet__my_FE_stage__DOT__BTB_valid__v0;
    __VdlySet__my_FE_stage__DOT__BTB_valid__v0 = 0;
    CData/*1:0*/ __VdlyVal__my_FE_stage__DOT__PHT__v0;
    __VdlyVal__my_FE_stage__DOT__PHT__v0 = 0;
    CData/*7:0*/ __VdlyDim0__my_FE_stage__DOT__PHT__v0;
    __VdlyDim0__my_FE_stage__DOT__PHT__v0 = 0;
    CData/*0:0*/ __VdlySet__my_FE_stage__DOT__PHT__v0;
    __VdlySet__my_FE_stage__DOT__PHT__v0 = 0;
    // Body
    __Vdly__my_FE_stage__DOT__inst_count_FE = vlSelfRef.__PVT__my_FE_stage__DOT__inst_count_FE;
    __Vdly__my_FE_stage__DOT__PC_FE_latch = vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch;
    vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[0U] 
        = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[0U];
    vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[1U] 
        = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[1U];
    vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[2U] 
        = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[2U];
    vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[3U] 
        = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U];
    vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[4U] 
        = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U];
    __VdlySet__my_FE_stage__DOT__BTB_valid__v0 = 0U;
    vlSelfRef.__VdlySet__my_MEM_stage__DOT__dmem__v0 = 0U;
    __Vdly__my_FE_stage__DOT__BHR = vlSelfRef.__PVT__my_FE_stage__DOT__BHR;
    __VdlySet__my_FE_stage__DOT__BTB_tag__v0 = 0U;
    __VdlySet__my_FE_stage__DOT__PHT__v0 = 0U;
    __VdlySet__my_FE_stage__DOT__BTB_target__v0 = 0U;
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__my_FE_stage__DOT__unnamedblk2__DOT__i = 0x00000010U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_target[0U] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_target[1U] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_target[2U] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_target[3U] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_target[4U] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_target[5U] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_target[6U] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_target[7U] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_target[8U] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_target[9U] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_target[0x0aU] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_target[0x0bU] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_target[0x0cU] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_target[0x0dU] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_target[0x0eU] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_target[0x0fU] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_valid[0U] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_valid[1U] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_valid[2U] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_valid[3U] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_valid[4U] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_valid[5U] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_valid[6U] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_valid[7U] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_valid[8U] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_valid[9U] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_valid[0x0aU] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_valid[0x0bU] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_valid[0x0cU] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_valid[0x0dU] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_valid[0x0eU] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_valid[0x0fU] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_tag[0U] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_tag[1U] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_tag[2U] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_tag[3U] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_tag[4U] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_tag[5U] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_tag[6U] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_tag[7U] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_tag[8U] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_tag[9U] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_tag[0x0aU] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_tag[0x0bU] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_tag[0x0cU] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_tag[0x0dU] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_tag[0x0eU] = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_tag[0x0fU] = 0U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__my_FE_stage__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000100U, vlSelfRef.__PVT__my_FE_stage__DOT__unnamedblk1__DOT__i)) {
            vlSelfRef.__PVT__my_FE_stage__DOT__PHT[(0x000000ffU 
                                                    & vlSelfRef.__PVT__my_FE_stage__DOT__unnamedblk1__DOT__i)] = 1U;
            vlSelfRef.__PVT__my_FE_stage__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.__PVT__my_FE_stage__DOT__unnamedblk1__DOT__i);
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__cycle_count = 0U;
        __Vdly__my_FE_stage__DOT__inst_count_FE = 1U;
        __Vdly__my_FE_stage__DOT__PC_FE_latch = 0x00000200U;
        vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[0U] = 0U;
        vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[1U] = 0U;
        vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[2U] = 0U;
        vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[3U] = 0U;
        vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[4U] = 0U;
        __Vdly__my_FE_stage__DOT__BHR = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs = 0U;
    } else {
        vlSelfRef.__PVT__cycle_count = ((IData)(1U) 
                                        + vlSelfRef.__PVT__cycle_count);
        if ((1U & (~ (IData)(vlSelfRef.__PVT__from_AGEX_to_DE)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__from_DE_to_FE)))) {
                __Vdly__my_FE_stage__DOT__inst_count_FE 
                    = ((IData)(1U) + vlSelfRef.__PVT__my_FE_stage__DOT__inst_count_FE);
            }
        }
        if (vlSelfRef.__PVT__from_AGEX_to_DE) {
            __Vdly__my_FE_stage__DOT__PC_FE_latch = vlSelfRef.__PVT__my_FE_stage__DOT__br_target_AGEX;
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[0U] = 0U;
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[1U] = 0U;
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[2U] = 0U;
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[3U] = 0U;
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[4U] = 0U;
        } else if (vlSelfRef.__PVT__from_DE_to_FE) {
            __Vdly__my_FE_stage__DOT__PC_FE_latch = vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch;
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[0U] 
                = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[0U];
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[1U] 
                = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[1U];
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[2U] 
                = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[2U];
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[3U] 
                = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U];
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[4U] 
                = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U];
        } else {
            __Vdly__my_FE_stage__DOT__PC_FE_latch = vlSelfRef.__PVT__my_FE_stage__DOT__pcplus_FE;
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[0U] 
                = (((IData)((((QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__pcplus_FE)) 
                              << 0x00000020U) | (QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__inst_count_FE)))) 
                    << 0x0000000aU) | (((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__pht_index_FE) 
                                        << 2U) | vlSelfRef.__PVT__my_FE_stage__DOT__PHT
                                       [vlSelfRef.__PVT__my_FE_stage__DOT__pht_index_FE]));
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[1U] 
                = (((IData)((((QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__pcplus_FE)) 
                              << 0x00000020U) | (QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__inst_count_FE)))) 
                    >> 0x00000016U) | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__pcplus_FE)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__inst_count_FE))) 
                                                >> 0x00000020U)) 
                                       << 0x0000000aU));
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[2U] 
                = (((IData)((((QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__inst_FE)) 
                              << 0x00000020U) | (QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                    << 0x0000000aU) | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__pcplus_FE)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__inst_count_FE))) 
                                                >> 0x00000020U)) 
                                       >> 0x00000016U));
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[3U] 
                = (((IData)((((QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__inst_FE)) 
                              << 0x00000020U) | (QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                    >> 0x00000016U) | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__inst_FE)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                >> 0x00000020U)) 
                                       << 0x0000000aU));
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[4U] 
                = (((IData)(((((QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__inst_FE)) 
                               << 0x00000020U) | (QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                             >> 0x00000020U)) >> 0x00000016U) 
                   | (((~ ((IData)(vlSymsp->TOP.reset) 
                           | ((IData)(vlSelfRef.__PVT__from_AGEX_to_DE) 
                              | (IData)(vlSelfRef.__PVT__from_DE_to_FE)))) 
                       & (0U != vlSelfRef.__PVT__my_FE_stage__DOT__inst_FE)) 
                      << 0x0000000aU));
        }
        if (vlSelfRef.__PVT__my_FE_stage__DOT__update_predictor_AGEX) {
            __Vdly__my_FE_stage__DOT__BHR = ((0x000000feU 
                                              & ((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__BHR) 
                                                 << 1U)) 
                                             | ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                 >> 0x0000001aU) 
                                                & (IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__VdfgRegularize_h3f620fe0_0_0)));
        }
        if ((0x00000020U & vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[0U])) {
            vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs 
                = ((~ ((IData)(1U) << (0x0000001fU 
                                       & vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[0U]))) 
                   & vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs);
        }
        if ((((~ (IData)(vlSelfRef.__PVT__from_DE_to_FE)) 
              & (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__wr_reg_DE)) 
             & (~ (IData)(vlSelfRef.__PVT__from_AGEX_to_DE)))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs 
                = (vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs 
                   | (0x00000000ffffffffULL & ((IData)(1U) 
                                               << (0x0000001fU 
                                                   & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      >> 0x00000011U)))));
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSelfRef.__PVT__my_FE_stage__DOT__update_predictor_AGEX) {
            __VdlyDim0__my_FE_stage__DOT__BTB_valid__v0 
                = (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                   >> 0x0000001cU);
            __VdlySet__my_FE_stage__DOT__BTB_valid__v0 = 1U;
            __VdlyVal__my_FE_stage__DOT__BTB_tag__v0 
                = (0x03ffffffU & vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U]);
            __VdlyDim0__my_FE_stage__DOT__BTB_tag__v0 
                = (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                   >> 0x0000001cU);
            __VdlySet__my_FE_stage__DOT__BTB_tag__v0 = 1U;
            __VdlyVal__my_FE_stage__DOT__PHT__v0 = 
                (3U & ((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__VdfgRegularize_h3f620fe0_0_0)
                        ? ((3U == (3U & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         >> 0x0000000aU)))
                            ? 3U : ((IData)(1U) + (
                                                   (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                    << 0x00000016U) 
                                                   | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                      >> 0x0000000aU))))
                        : ((0U == (3U & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         >> 0x0000000aU)))
                            ? 0U : (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      << 0x00000016U) 
                                     | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        >> 0x0000000aU)) 
                                    - (IData)(1U)))));
            __VdlyDim0__my_FE_stage__DOT__PHT__v0 = 
                (0x000000ffU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                >> 0x0000000cU));
            __VdlySet__my_FE_stage__DOT__PHT__v0 = 1U;
            __VdlyVal__my_FE_stage__DOT__BTB_target__v0 
                = ((0x00000200U & vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U])
                    ? vlSymsp->TOP__pipeline__my_AGEX_stage.__VdfgExtracted_hbcc182c0__0
                    : vlSelfRef.__PVT__my_FE_stage__DOT__br_target_AGEX);
            __VdlyDim0__my_FE_stage__DOT__BTB_target__v0 
                = (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                   >> 0x0000001cU);
            __VdlySet__my_FE_stage__DOT__BTB_target__v0 = 1U;
        }
    }
    if ((0x00000040U & vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U])) {
        vlSelfRef.__VdlyVal__my_MEM_stage__DOT__dmem__v0 
            = ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                << 0x00000018U) | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                   >> 8U));
        vlSelfRef.__VdlyDim0__my_MEM_stage__DOT__dmem__v0 
            = (0x00003fffU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                              >> 0x0000000aU));
        vlSelfRef.__VdlySet__my_MEM_stage__DOT__dmem__v0 = 1U;
    }
    vlSelfRef.__PVT__my_FE_stage__DOT__inst_count_FE 
        = __Vdly__my_FE_stage__DOT__inst_count_FE;
    vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
        = __Vdly__my_FE_stage__DOT__PC_FE_latch;
    if (__VdlySet__my_FE_stage__DOT__BTB_valid__v0) {
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_valid[__VdlyDim0__my_FE_stage__DOT__BTB_valid__v0] = 1U;
    }
    vlSelfRef.__PVT__my_FE_stage__DOT__BHR = __Vdly__my_FE_stage__DOT__BHR;
    if (__VdlySet__my_FE_stage__DOT__BTB_tag__v0) {
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_tag[__VdlyDim0__my_FE_stage__DOT__BTB_tag__v0] 
            = __VdlyVal__my_FE_stage__DOT__BTB_tag__v0;
    }
    if (__VdlySet__my_FE_stage__DOT__PHT__v0) {
        vlSelfRef.__PVT__my_FE_stage__DOT__PHT[__VdlyDim0__my_FE_stage__DOT__PHT__v0] 
            = __VdlyVal__my_FE_stage__DOT__PHT__v0;
    }
    if (__VdlySet__my_FE_stage__DOT__BTB_target__v0) {
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_target[__VdlyDim0__my_FE_stage__DOT__BTB_target__v0] 
            = __VdlyVal__my_FE_stage__DOT__BTB_target__v0;
    }
    vlSelfRef.__PVT__my_FE_stage__DOT__inst_FE = vlSelfRef.__PVT__my_FE_stage__DOT__imem
        [(0x00003fffU & (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                         >> 2U))];
    vlSelfRef.__PVT__my_FE_stage__DOT__pht_index_FE 
        = (0x000000ffU & ((vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                           >> 2U) ^ (IData)(vlSelfRef.__PVT__my_FE_stage__DOT__BHR)));
    vlSelfRef.__PVT__my_FE_stage__DOT__pcplus_FE = 
        (((vlSelfRef.__PVT__my_FE_stage__DOT__BTB_valid
           [(0x0000000fU & (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                            >> 2U))] & (vlSelfRef.__PVT__my_FE_stage__DOT__BTB_tag
                                        [(0x0000000fU 
                                          & (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                             >> 2U))] 
                                        == (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                            >> 6U))) 
          & (vlSelfRef.__PVT__my_FE_stage__DOT__PHT
             [vlSelfRef.__PVT__my_FE_stage__DOT__pht_index_FE] 
             >> 1U)) ? vlSelfRef.__PVT__my_FE_stage__DOT__BTB_target
         [(0x0000000fU & (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                          >> 2U))] : ((IData)(4U) + vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch));
}

void Vpipeline_pipeline___nba_sequent__TOP__pipeline__1(Vpipeline_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__1\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[0U] = 0U;
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[1U] = 0U;
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[2U] = 0U;
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[3U] = 0U;
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[4U] = 0U;
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[5U] = 0U;
    } else {
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
            = (((IData)((((QData)((IData)(vlSelfRef.__PVT__my_MEM_stage__DOT__dmem
                                          [(0x00003fffU 
                                            & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                               >> 0x0000000aU))])) 
                          << 0x00000020U) | (QData)((IData)(
                                                            ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                              << 0x00000018U) 
                                                             | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                                >> 8U)))))) 
                << 6U) | (0x0000003fU & vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U]));
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
            = (((IData)((((QData)((IData)(vlSelfRef.__PVT__my_MEM_stage__DOT__dmem
                                          [(0x00003fffU 
                                            & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                               >> 0x0000000aU))])) 
                          << 0x00000020U) | (QData)((IData)(
                                                            ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                              << 0x00000018U) 
                                                             | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                                >> 8U)))))) 
                >> 0x0000001aU) | ((IData)(((((QData)((IData)(
                                                              vlSelfRef.__PVT__my_MEM_stage__DOT__dmem
                                                              [
                                                              (0x00003fffU 
                                                               & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                                  >> 0x0000000aU))])) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(
                                                               ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                                 << 0x00000018U) 
                                                                | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                                   >> 8U))))) 
                                            >> 0x00000020U)) 
                                   << 6U));
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
            = (((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                 << 0x0000001eU) | (0x3fffffc0U & (
                                                   vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                                   >> 2U))) 
               | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__my_MEM_stage__DOT__dmem
                                             [(0x00003fffU 
                                               & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                  >> 0x0000000aU))])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                                 << 0x00000018U) 
                                                                | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                                   >> 8U))))) 
                           >> 0x00000020U)) >> 0x0000001aU));
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
            = ((0x0000003fU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                               >> 2U)) | ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                           << 0x0000001eU) 
                                          | (0x3fffffc0U 
                                             & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                                >> 2U))));
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
            = ((0x0000003fU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                               >> 2U)) | ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                           << 0x0000001eU) 
                                          | (0x3fffffc0U 
                                             & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                                >> 2U))));
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
            = ((0x0000003fU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                               >> 2U)) | (0x00001fc0U 
                                          & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                             >> 2U)));
    }
    if (vlSelfRef.__VdlySet__my_MEM_stage__DOT__dmem__v0) {
        vlSelfRef.__PVT__my_MEM_stage__DOT__dmem[vlSelfRef.__VdlyDim0__my_MEM_stage__DOT__dmem__v0] 
            = vlSelfRef.__VdlyVal__my_MEM_stage__DOT__dmem__v0;
    }
    vlSelfRef.__PVT__my_DE_stage__DOT__regval_WB = 
        ((0x17U == (0x0000003fU & (vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                   >> 6U))) ? ((vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                << 0x0000001aU) 
                                               | (vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                  >> 6U))
          : ((vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
              << 0x0000001aU) | (vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                 >> 6U)));
}

extern const VlWide<8>/*255:0*/ Vpipeline__ConstPool__CONST_hb5c5367a_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_h29143c0b_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_h5064a2f5_0;

void Vpipeline_pipeline___nba_sequent__TOP__pipeline__2(Vpipeline_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__2\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_4;
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_4 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_13;
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_13 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_16;
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_16 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_20;
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_20 = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    __Vtemp_6[0U] = (((IData)((((QData)((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__regs
                                                [(0x0000001fU 
                                                  & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      << 2U) 
                                                     | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                        >> 0x0000001eU)))])) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  ((1U 
                                                                    == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                    ? vlSelfRef.my_DE_stage__DOT____VdfgExtracted_h54a4af44__0
                                                                    : 
                                                                   ((1U 
                                                                     == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                     ? vlSelfRef.my_DE_stage__DOT____VdfgExtracted_h54a4af44__0
                                                                     : 
                                                                    ((4U 
                                                                      == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                      ? 
                                                                     (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 9U)))) 
                                                                       << 0x0000000bU) 
                                                                      | ((0x000007e0U 
                                                                          & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             << 2U)) 
                                                                         | (0x0000001fU 
                                                                            & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                               >> 0x00000011U))))
                                                                      : 
                                                                     ((5U 
                                                                       == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                       ? 
                                                                      (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 9U)))) 
                                                                        << 0x0000000cU) 
                                                                       | ((0x00000800U 
                                                                           & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                              >> 6U)) 
                                                                          | ((0x000007e0U 
                                                                              & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 2U)) 
                                                                             | (0x0000001eU 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x00000011U)))))
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                        ? 
                                                                       (0xfffff000U 
                                                                        & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            << 0x00000016U) 
                                                                           | (0x003ff000U 
                                                                              & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000000aU))))
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                         ? 
                                                                        (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 9U)))) 
                                                                          << 0x00000014U) 
                                                                         | ((((0x000001feU 
                                                                               & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x00000015U)) 
                                                                              | (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000001eU))) 
                                                                             << 0x0000000bU) 
                                                                            | (0x000007feU 
                                                                               & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 2U) 
                                                                                | (2U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000001eU))))))
                                                                         : 0U)))))))))) 
                      << 0x0000000aU) | (((((0x1cU 
                                             == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                            | ((0x1dU 
                                                == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                               | ((0x1eU 
                                                   == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                  | ((0x1fU 
                                                      == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                     | ((0x20U 
                                                         == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                        | (0x21U 
                                                           == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))))))) 
                                           << 9U) | 
                                          ((((0x19U 
                                              == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                             | ((0x1aU 
                                                 == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                | (0x1bU 
                                                   == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                            << 8U) 
                                           | ((0x17U 
                                               == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                              << 7U))) 
                                         | (((0x18U 
                                              == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                             << 6U) 
                                            | (((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__wr_reg_DE) 
                                                << 5U) 
                                               | (0x0000001fU 
                                                  & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 0x00000011U))))));
    __Vtemp_6[1U] = (((IData)((((QData)((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__regs
                                                [(0x0000001fU 
                                                  & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      << 2U) 
                                                     | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                        >> 0x0000001eU)))])) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  ((1U 
                                                                    == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                    ? vlSelfRef.my_DE_stage__DOT____VdfgExtracted_h54a4af44__0
                                                                    : 
                                                                   ((1U 
                                                                     == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                     ? vlSelfRef.my_DE_stage__DOT____VdfgExtracted_h54a4af44__0
                                                                     : 
                                                                    ((4U 
                                                                      == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                      ? 
                                                                     (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 9U)))) 
                                                                       << 0x0000000bU) 
                                                                      | ((0x000007e0U 
                                                                          & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             << 2U)) 
                                                                         | (0x0000001fU 
                                                                            & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                               >> 0x00000011U))))
                                                                      : 
                                                                     ((5U 
                                                                       == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                       ? 
                                                                      (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 9U)))) 
                                                                        << 0x0000000cU) 
                                                                       | ((0x00000800U 
                                                                           & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                              >> 6U)) 
                                                                          | ((0x000007e0U 
                                                                              & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 2U)) 
                                                                             | (0x0000001eU 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x00000011U)))))
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                        ? 
                                                                       (0xfffff000U 
                                                                        & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            << 0x00000016U) 
                                                                           | (0x003ff000U 
                                                                              & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000000aU))))
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                         ? 
                                                                        (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 9U)))) 
                                                                          << 0x00000014U) 
                                                                         | ((((0x000001feU 
                                                                               & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x00000015U)) 
                                                                              | (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000001eU))) 
                                                                             << 0x0000000bU) 
                                                                            | (0x000007feU 
                                                                               & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 2U) 
                                                                                | (2U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000001eU))))))
                                                                         : 0U)))))))))) 
                      >> 0x00000016U) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__PVT__my_DE_stage__DOT__regs
                                                                    [
                                                                    (0x0000001fU 
                                                                     & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                         << 2U) 
                                                                        | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 0x0000001eU)))])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     ((1U 
                                                                       == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                       ? vlSelfRef.my_DE_stage__DOT____VdfgExtracted_h54a4af44__0
                                                                       : 
                                                                      ((1U 
                                                                        == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                        ? vlSelfRef.my_DE_stage__DOT____VdfgExtracted_h54a4af44__0
                                                                        : 
                                                                       ((4U 
                                                                         == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                         ? 
                                                                        (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 9U)))) 
                                                                          << 0x0000000bU) 
                                                                         | ((0x000007e0U 
                                                                             & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 2U)) 
                                                                            | (0x0000001fU 
                                                                               & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x00000011U))))
                                                                         : 
                                                                        ((5U 
                                                                          == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                          ? 
                                                                         (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 9U)))) 
                                                                           << 0x0000000cU) 
                                                                          | ((0x00000800U 
                                                                              & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 6U)) 
                                                                             | ((0x000007e0U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 2U)) 
                                                                                | (0x0000001eU 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x00000011U)))))
                                                                          : 
                                                                         ((3U 
                                                                           == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                           ? 
                                                                          (0xfffff000U 
                                                                           & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                               << 0x00000016U) 
                                                                              | (0x003ff000U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000000aU))))
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                            ? 
                                                                           (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 9U)))) 
                                                                             << 0x00000014U) 
                                                                            | ((((0x000001feU 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x00000015U)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000001eU))) 
                                                                                << 0x0000000bU) 
                                                                               | (0x000007feU 
                                                                                & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 2U) 
                                                                                | (2U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000001eU))))))
                                                                            : 0U))))))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000aU));
    __Vtemp_6[2U] = ((IData)(((((QData)((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__regs
                                                [(0x0000001fU 
                                                  & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      << 2U) 
                                                     | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                        >> 0x0000001eU)))])) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  ((1U 
                                                                    == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                    ? vlSelfRef.my_DE_stage__DOT____VdfgExtracted_h54a4af44__0
                                                                    : 
                                                                   ((1U 
                                                                     == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                     ? vlSelfRef.my_DE_stage__DOT____VdfgExtracted_h54a4af44__0
                                                                     : 
                                                                    ((4U 
                                                                      == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                      ? 
                                                                     (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 9U)))) 
                                                                       << 0x0000000bU) 
                                                                      | ((0x000007e0U 
                                                                          & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             << 2U)) 
                                                                         | (0x0000001fU 
                                                                            & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                               >> 0x00000011U))))
                                                                      : 
                                                                     ((5U 
                                                                       == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                       ? 
                                                                      (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 9U)))) 
                                                                        << 0x0000000cU) 
                                                                       | ((0x00000800U 
                                                                           & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                              >> 6U)) 
                                                                          | ((0x000007e0U 
                                                                              & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 2U)) 
                                                                             | (0x0000001eU 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x00000011U)))))
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                        ? 
                                                                       (0xfffff000U 
                                                                        & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            << 0x00000016U) 
                                                                           | (0x003ff000U 
                                                                              & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000000aU))))
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                         ? 
                                                                        (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 9U)))) 
                                                                          << 0x00000014U) 
                                                                         | ((((0x000001feU 
                                                                               & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x00000015U)) 
                                                                              | (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000001eU))) 
                                                                             << 0x0000000bU) 
                                                                            | (0x000007feU 
                                                                               & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 2U) 
                                                                                | (2U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000001eU))))))
                                                                         : 0U))))))))) 
                              >> 0x00000020U)) >> 0x00000016U);
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
            = Vpipeline__ConstPool__CONST_hb5c5367a_0[0U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
            = Vpipeline__ConstPool__CONST_hb5c5367a_0[1U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
            = Vpipeline__ConstPool__CONST_hb5c5367a_0[2U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
            = Vpipeline__ConstPool__CONST_hb5c5367a_0[3U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
            = Vpipeline__ConstPool__CONST_hb5c5367a_0[4U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
            = Vpipeline__ConstPool__CONST_hb5c5367a_0[5U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
            = Vpipeline__ConstPool__CONST_hb5c5367a_0[6U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[7U] 
            = Vpipeline__ConstPool__CONST_hb5c5367a_0[7U];
    } else if (((IData)(vlSelfRef.__PVT__from_AGEX_to_DE) 
                | (IData)(vlSelfRef.__PVT__from_DE_to_FE))) {
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
            = Vpipeline__ConstPool__CONST_hb5c5367a_0[0U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
            = Vpipeline__ConstPool__CONST_hb5c5367a_0[1U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
            = Vpipeline__ConstPool__CONST_hb5c5367a_0[2U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
            = Vpipeline__ConstPool__CONST_hb5c5367a_0[3U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
            = Vpipeline__ConstPool__CONST_hb5c5367a_0[4U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
            = Vpipeline__ConstPool__CONST_hb5c5367a_0[5U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
            = Vpipeline__ConstPool__CONST_hb5c5367a_0[6U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[7U] 
            = Vpipeline__ConstPool__CONST_hb5c5367a_0[7U];
    } else {
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
            = __Vtemp_6[0U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
            = __Vtemp_6[1U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
            = ((vlSelfRef.__PVT__my_DE_stage__DOT__regs
                [(0x0000001fU & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                 >> 0x00000019U))] 
                << 0x0000000aU) | __Vtemp_6[2U]);
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
            = ((vlSelfRef.__PVT__my_DE_stage__DOT__regs
                [(0x0000001fU & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                 >> 0x00000019U))] 
                >> 0x00000016U) | ((IData)((0x000003ffffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(
                                                                 vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[0U]))))) 
                                   << 0x0000000aU));
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
            = (((((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                   << 0x0000001cU) | (0x0fffffc0U & 
                                      (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                       >> 4U))) | (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                << 0x00000014U) | (((IData)((0x000003ffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[0U]))))) 
                                    >> 0x00000016U) 
                                   | ((IData)(((0x000003ffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[0U])))) 
                                               >> 0x00000020U)) 
                                      << 0x0000000aU)));
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
            = (((((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                   << 0x0000001cU) | (0x0fffffc0U & 
                                      (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                       >> 4U))) | (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                >> 0x0000000cU) | (((0x0000003fU & 
                                     (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                      >> 4U)) | ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  << 0x0000001cU) 
                                                 | (0x0fffffc0U 
                                                    & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                       >> 4U)))) 
                                   << 0x00000014U));
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
            = ((((0x0000003fU & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                 >> 4U)) | ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             << 0x0000001cU) 
                                            | (0x0fffffc0U 
                                               & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                  >> 4U)))) 
                >> 0x0000000cU) | (((0x0000003fU & 
                                     (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                      >> 4U)) | ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                  << 0x0000001cU) 
                                                 | (0x0fffffc0U 
                                                    & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                       >> 4U)))) 
                                   << 0x00000014U));
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[7U] 
            = ((((0x0000003fU & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                 >> 4U)) | ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                             << 0x0000001cU) 
                                            | (0x0fffffc0U 
                                               & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 4U)))) 
                >> 0x0000000cU) | (((0x0000003fU & 
                                     (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                      >> 4U)) | (0x00000040U 
                                                 & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    >> 4U))) 
                                   << 0x00000014U));
    }
    vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[0U] 
        = vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[0U];
    vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[1U] 
        = vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[1U];
    vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[2U] 
        = vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[2U];
    vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
        = vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[3U];
    vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
        = vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[4U];
    vlSelfRef.__PVT__my_FE_stage__DOT__update_predictor_AGEX 
        = (IData)(((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                    >> 0x0000001aU) & (0U != (0x00000300U 
                                              & vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U]))));
    vlSelfRef.my_DE_stage__DOT____VdfgExtracted_h54a4af44__0 
        = (((- (IData)((1U & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                              >> 9U)))) << 0x0000000bU) 
           | (0x000007ffU & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                              << 2U) | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        >> 0x0000001eU))));
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_4 
        = (IData)((0x0000cc00U == (0x01c1fc00U & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])));
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_13 
        = (IData)((0x0140cc00U == (0x01c1fc00U & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])));
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_20 
        = (IData)(((0x00400000U == (0x01c00000U & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                   & (0U == (0x03f8U & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U]))));
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_16 
        = (IData)((0x01404c00U == (0x01c1fc00U & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])));
    vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE = (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_4) 
                                                   & (0U 
                                                      == 
                                                      (0x03f8U 
                                                       & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                   ? 1U
                                                   : 
                                                  (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_4) 
                                                    & (0x0100U 
                                                       == 
                                                       (0x03f8U 
                                                        & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                    ? 2U
                                                    : 
                                                   ((IData)(
                                                            ((0x01c0cc00U 
                                                              == 
                                                              (0x01c1fc00U 
                                                               & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                             & (0U 
                                                                == 
                                                                (0x03f8U 
                                                                 & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                     ? 3U
                                                     : 
                                                    ((IData)(
                                                             ((0x0180cc00U 
                                                               == 
                                                               (0x01c1fc00U 
                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                              & (0U 
                                                                 == 
                                                                 (0x03f8U 
                                                                  & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                      ? 4U
                                                      : 
                                                     ((IData)(
                                                              ((0x0100cc00U 
                                                                == 
                                                                (0x01c1fc00U 
                                                                 & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                               & (0U 
                                                                  == 
                                                                  (0x03f8U 
                                                                   & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                       ? 5U
                                                       : 
                                                      ((IData)(
                                                               ((0x0080cc00U 
                                                                 == 
                                                                 (0x01c1fc00U 
                                                                  & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                & (0U 
                                                                   == 
                                                                   (0x03f8U 
                                                                    & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                        ? 6U
                                                        : 
                                                       ((IData)(
                                                                ((0x00c0cc00U 
                                                                  == 
                                                                  (0x01c1fc00U 
                                                                   & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                 & (0U 
                                                                    == 
                                                                    (0x03f8U 
                                                                     & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                         ? 7U
                                                         : 
                                                        (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_13) 
                                                          & (0x0100U 
                                                             == 
                                                             (0x03f8U 
                                                              & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                          ? 8U
                                                          : 
                                                         (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_13) 
                                                           & (0U 
                                                              == 
                                                              (0x03f8U 
                                                               & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                           ? 9U
                                                           : 
                                                          ((IData)(
                                                                   ((0x0000cc00U 
                                                                     == 
                                                                     (0x0001fc00U 
                                                                      & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                    & (IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_20)))
                                                            ? 0x0aU
                                                            : 
                                                           (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_4) 
                                                             & (8U 
                                                                == 
                                                                (0x03f8U 
                                                                 & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                             ? 0x0bU
                                                             : 
                                                            ((IData)(
                                                                     (0x00004c00U 
                                                                      == 
                                                                      (0x01c1fc00U 
                                                                       & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                              ? 0x0cU
                                                              : 
                                                             ((IData)(
                                                                      (0x01c04c00U 
                                                                       == 
                                                                       (0x01c1fc00U 
                                                                        & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                               ? 0x0dU
                                                               : 
                                                              ((IData)(
                                                                       (0x01804c00U 
                                                                        == 
                                                                        (0x01c1fc00U 
                                                                         & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                ? 0x0eU
                                                                : 
                                                               ((IData)(
                                                                        (0x01004c00U 
                                                                         == 
                                                                         (0x01c1fc00U 
                                                                          & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                 ? 0x0fU
                                                                 : 
                                                                ((IData)(
                                                                         (0x00804c00U 
                                                                          == 
                                                                          (0x01c1fc00U 
                                                                           & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                  ? 0x10U
                                                                  : 
                                                                 ((IData)(
                                                                          (0x00c04c00U 
                                                                           == 
                                                                           (0x01c1fc00U 
                                                                            & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                   ? 0x11U
                                                                   : 
                                                                  (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_16) 
                                                                    & (0x0100U 
                                                                       == 
                                                                       (0x03f8U 
                                                                        & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                    ? 0x12U
                                                                    : 
                                                                   (((IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_16) 
                                                                     & (0U 
                                                                        == 
                                                                        (0x03f8U 
                                                                         & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                     ? 0x13U
                                                                     : 
                                                                    ((IData)(
                                                                             ((0x00004c00U 
                                                                               == 
                                                                               (0x0001fc00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                              & (IData)(my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_20)))
                                                                      ? 0x14U
                                                                      : 
                                                                     ((0x37U 
                                                                       == 
                                                                       (0x0000007fU 
                                                                        & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 0x0000000aU)))
                                                                       ? 0x15U
                                                                       : 
                                                                      ((0x17U 
                                                                        == 
                                                                        (0x0000007fU 
                                                                         & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                            >> 0x0000000aU)))
                                                                        ? 0x16U
                                                                        : 
                                                                       ((IData)(
                                                                                (0x00800c00U 
                                                                                == 
                                                                                (0x01c1fc00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                         ? 0x17U
                                                                         : 
                                                                        ((IData)(
                                                                                (0x00808c00U 
                                                                                == 
                                                                                (0x01c1fc00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                          ? 0x18U
                                                                          : 
                                                                         ((0x6fU 
                                                                           == 
                                                                           (0x0000007fU 
                                                                            & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                               >> 0x0000000aU)))
                                                                           ? 0x19U
                                                                           : 
                                                                          ((IData)(
                                                                                (0x00019c00U 
                                                                                == 
                                                                                (0x01c1fc00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                            ? 0x1bU
                                                                            : 
                                                                           ((IData)(
                                                                                (0x00018c00U 
                                                                                == 
                                                                                (0x01c1fc00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                             ? 0x1cU
                                                                             : 
                                                                            ((IData)(
                                                                                (0x00418c00U 
                                                                                == 
                                                                                (0x01c1fc00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                              ? 0x1dU
                                                                              : 
                                                                             ((IData)(
                                                                                (0x01018c00U 
                                                                                == 
                                                                                (0x01c1fc00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                               ? 0x1eU
                                                                               : 
                                                                              ((IData)(
                                                                                (0x01418c00U 
                                                                                == 
                                                                                (0x01c1fc00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                ? 0x1fU
                                                                                : 
                                                                               ((IData)(
                                                                                (0x01818c00U 
                                                                                == 
                                                                                (0x01c1fc00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x01c18c00U 
                                                                                == 
                                                                                (0x01c1fc00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x0081cc00U 
                                                                                == 
                                                                                (0x01c1fc00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x0041cc00U 
                                                                                == 
                                                                                (0x01c1fc00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x23U
                                                                                 : 0x25U))))))))))))))))))))))))))))))))));
    vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE 
        = vlSelfRef.my_DE_stage__DOT____Vxrand___1;
    if ((1U & (~ (((((((((((1U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                           | (2U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                          | (3U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                         | (4U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                        | (5U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                       | (6U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                      | (7U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (8U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (9U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0x0aU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0x0bU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))))) {
        if ((((((((((((0x22U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                      | (0x23U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (0x0cU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0x0dU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0x0eU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0x0fU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (0x10U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x11U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
               | (0x17U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
              | (0x1aU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
             | (0x1bU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE = 1U;
        } else if ((((0x12U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                     | (0x13U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0x14U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE = 1U;
        } else if (((0x15U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                    | (0x16U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE = 3U;
        } else if ((0x18U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE = 4U;
        } else if ((0x19U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE = 2U;
        } else if (((((((0x1cU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                        | (0x1dU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                       | (0x1eU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                      | (0x1fU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (0x20U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0x21U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE = 5U;
        }
    }
    vlSelfRef.__PVT__my_DE_stage__DOT__wr_reg_DE = 
        ((0U != (0x0000001fU & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                >> 0x00000011U))) & 
         ((0x22U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
          | ((1U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
             | ((2U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                | ((3U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                   | ((4U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                      | ((5U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                         | ((6U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                            | ((7U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((8U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | ((9U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                     | ((0x0aU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                        | ((0x0bU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                           | ((0x0cU 
                                               == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                              | ((0x0dU 
                                                  == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                 | ((0x0eU 
                                                     == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                    | ((0x0fU 
                                                        == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                       | ((0x10U 
                                                           == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                          | ((0x11U 
                                                              == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                             | ((0x12U 
                                                                 == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                | ((0x13U 
                                                                    == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                   | ((0x14U 
                                                                       == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                      | ((0x15U 
                                                                          == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                         | ((0x16U 
                                                                             == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                            | ((0x17U 
                                                                                == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                               | ((0x19U 
                                                                                == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | (0x1bU 
                                                                                == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))))))))))))))))))))))))))));
    vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = vlSelfRef.my_DE_stage__DOT____Vxrand___0;
    if ((((((((((((1U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                  | (2U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (3U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (4U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
               | (5U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
              | (6U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
             | (7U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
            | (8U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
           | (9U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
          | (0x0aU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
         | (0x0bU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = 1U;
    } else if ((((((((((((0x22U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                         | (0x23U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                        | (0x0cU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                       | (0x0dU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                      | (0x0eU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                     | (0x0fU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                    | (0x10U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0x11U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0x17U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (0x1aU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x1bU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = 2U;
    } else if ((((0x12U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                 | (0x13U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x14U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = 2U;
    } else if (((0x15U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                | (0x16U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = 2U;
    } else if ((0x18U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) {
        vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = 3U;
    } else if ((0x19U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) {
        vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = 4U;
    } else if (((((((0x1cU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                    | (0x1dU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                   | (0x1eU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                  | (0x1fU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                 | (0x20U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))) 
                | (0x21U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) {
        vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = 3U;
    }
    __Vtableidx1 = vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE;
    vlSelfRef.__PVT__my_DE_stage__DOT__use_rs1_DE = 
        Vpipeline__ConstPool__TABLE_h29143c0b_0[__Vtableidx1];
    vlSelfRef.__PVT__my_DE_stage__DOT__use_rs2_DE = 
        Vpipeline__ConstPool__TABLE_h5064a2f5_0[__Vtableidx1];
    vlSelfRef.__PVT__from_DE_to_FE = (((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__use_rs1_DE) 
                                       & (vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs 
                                          >> (0x0000001fU 
                                              & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                 >> 0x00000019U)))) 
                                      | ((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                         & (vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs 
                                            >> (0x0000001fU 
                                                & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    << 2U) 
                                                   | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      >> 0x0000001eU))))));
}

void Vpipeline_pipeline___nba_sequent__TOP__pipeline__3(Vpipeline_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__3\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__my_FE_stage__DOT__br_target_AGEX 
        = ((0x19U == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                     >> 0x00000014U)))
            ? vlSymsp->TOP__pipeline__my_AGEX_stage.__VdfgExtracted_hbcc182c0__0
            : ((0x1aU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         >> 0x00000014U)))
                ? ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                    << 0x00000016U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       >> 0x0000000aU))
                : ((0x1bU == (0x0000003fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x00000014U)))
                    ? (0xfffffffeU & vlSymsp->TOP__pipeline__my_AGEX_stage.__VdfgExtracted_h32f0a660__0)
                    : ((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__VdfgRegularize_h3f620fe0_0_1)
                        ? vlSymsp->TOP__pipeline__my_AGEX_stage.__VdfgExtracted_hbcc182c0__0
                        : ((IData)(4U) + ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                           << 6U) | 
                                          (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x0000001aU)))))));
    vlSelfRef.__PVT__from_AGEX_to_DE = ((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__update_predictor_AGEX) 
                                        & (vlSelfRef.__PVT__my_FE_stage__DOT__br_target_AGEX 
                                           != ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                << 6U) 
                                               | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x0000001aU))));
}

void Vpipeline_pipeline___nba_sequent__TOP__pipeline__4(Vpipeline_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__4\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlySet__my_DE_stage__DOT__regs__v0;
    __VdlySet__my_DE_stage__DOT__regs__v0 = 0;
    IData/*31:0*/ __VdlyVal__my_DE_stage__DOT__regs__v32;
    __VdlyVal__my_DE_stage__DOT__regs__v32 = 0;
    CData/*4:0*/ __VdlyDim0__my_DE_stage__DOT__regs__v32;
    __VdlyDim0__my_DE_stage__DOT__regs__v32 = 0;
    CData/*0:0*/ __VdlySet__my_DE_stage__DOT__regs__v32;
    __VdlySet__my_DE_stage__DOT__regs__v32 = 0;
    // Body
    __VdlySet__my_DE_stage__DOT__regs__v0 = 0U;
    __VdlySet__my_DE_stage__DOT__regs__v32 = 0U;
    if (vlSymsp->TOP.reset) {
        __VdlySet__my_DE_stage__DOT__regs__v0 = 1U;
    } else if ((0x00000020U & vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[0U])) {
        __VdlyVal__my_DE_stage__DOT__regs__v32 = vlSelfRef.__PVT__my_DE_stage__DOT__regval_WB;
        __VdlyDim0__my_DE_stage__DOT__regs__v32 = (0x0000001fU 
                                                   & vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[0U]);
        __VdlySet__my_DE_stage__DOT__regs__v32 = 1U;
    }
    if (__VdlySet__my_DE_stage__DOT__regs__v0) {
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[1U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[2U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[3U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[4U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[5U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[6U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[7U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[8U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[9U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x0aU] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x0bU] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x0cU] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x0dU] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x0eU] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x0fU] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x10U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x11U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x12U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x13U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x14U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x15U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x16U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x17U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x18U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x19U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x1aU] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x1bU] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x1cU] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x1dU] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x1eU] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[0x1fU] = 0U;
    }
    if (__VdlySet__my_DE_stage__DOT__regs__v32) {
        vlSelfRef.__PVT__my_DE_stage__DOT__regs[__VdlyDim0__my_DE_stage__DOT__regs__v32] 
            = __VdlyVal__my_DE_stage__DOT__regs__v32;
    }
}
