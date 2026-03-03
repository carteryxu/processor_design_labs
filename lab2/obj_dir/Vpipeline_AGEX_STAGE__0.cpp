// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline__pch.h"

void Vpipeline_AGEX_STAGE___nba_sequent__TOP__pipeline__my_AGEX_stage__0(Vpipeline_AGEX_STAGE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpipeline_AGEX_STAGE___nba_sequent__TOP__pipeline__my_AGEX_stage__0\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__total_branches;
    __Vdly__total_branches = 0;
    IData/*31:0*/ __Vdly__correct_predictions;
    __Vdly__correct_predictions = 0;
    // Body
    __Vdly__total_branches = vlSelfRef.total_branches;
    __Vdly__correct_predictions = vlSelfRef.correct_predictions;
    if (vlSymsp->TOP.reset) {
        __Vdly__total_branches = 0U;
        __Vdly__correct_predictions = 0U;
    } else if ((IData)(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                         >> 0x0000001aU) & (0U != (0x00000300U 
                                                   & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))))) {
        __Vdly__total_branches = ((IData)(1U) + vlSelfRef.total_branches);
        if ((1U & (~ (IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE)))) {
            __Vdly__correct_predictions = ((IData)(1U) 
                                           + vlSelfRef.correct_predictions);
        }
    }
    vlSelfRef.total_branches = __Vdly__total_branches;
    vlSelfRef.correct_predictions = __Vdly__correct_predictions;
}

void Vpipeline_AGEX_STAGE___nba_sequent__TOP__pipeline__my_AGEX_stage__1(Vpipeline_AGEX_STAGE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpipeline_AGEX_STAGE___nba_sequent__TOP__pipeline__my_AGEX_stage__1\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__AGEX_latch[0U] = 0U;
        vlSelfRef.__PVT__AGEX_latch[1U] = 0U;
        vlSelfRef.__PVT__AGEX_latch[2U] = 0U;
        vlSelfRef.__PVT__AGEX_latch[3U] = 0U;
        vlSelfRef.__PVT__AGEX_latch[4U] = 0U;
        vlSelfRef.__PVT__AGEX_latch[5U] = 0U;
    } else {
        vlSelfRef.__PVT__AGEX_latch[0U] = (((IData)(
                                                    (((QData)((IData)(vlSelfRef.__PVT__memaddr_AGEX)) 
                                                      << 0x00000020U) 
                                                     | (QData)((IData)(vlSelfRef.__PVT__aluout_AGEX)))) 
                                            << 8U) 
                                           | (0x000000ffU 
                                              & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]));
        vlSelfRef.__PVT__AGEX_latch[1U] = (((IData)(
                                                    (((QData)((IData)(vlSelfRef.__PVT__memaddr_AGEX)) 
                                                      << 0x00000020U) 
                                                     | (QData)((IData)(vlSelfRef.__PVT__aluout_AGEX)))) 
                                            >> 0x00000018U) 
                                           | ((IData)(
                                                      ((((QData)((IData)(vlSelfRef.__PVT__memaddr_AGEX)) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(vlSelfRef.__PVT__aluout_AGEX))) 
                                                       >> 0x00000020U)) 
                                              << 8U));
        vlSelfRef.__PVT__AGEX_latch[2U] = (((IData)(
                                                    (0x0000003fffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                         << 0x0000000cU) 
                                                        | ((QData)((IData)(
                                                                           vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                                           >> 0x00000014U)))) 
                                            << 8U) 
                                           | ((IData)(
                                                      ((((QData)((IData)(vlSelfRef.__PVT__memaddr_AGEX)) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(vlSelfRef.__PVT__aluout_AGEX))) 
                                                       >> 0x00000020U)) 
                                              >> 0x00000018U));
        vlSelfRef.__PVT__AGEX_latch[3U] = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             << 0x00000014U) 
                                            | (0x000fc000U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x0000000cU))) 
                                           | (((IData)(
                                                       (0x0000003fffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                            << 0x0000000cU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                                              >> 0x00000014U)))) 
                                               >> 0x00000018U) 
                                              | ((IData)(
                                                         ((0x0000003fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                               << 0x0000000cU) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                                                 >> 0x00000014U))) 
                                                          >> 0x00000020U)) 
                                                 << 8U)));
        vlSelfRef.__PVT__AGEX_latch[4U] = ((0x00003fffU 
                                            & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                               >> 0x0000000cU)) 
                                           | ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                               << 0x00000014U) 
                                              | (0x000fc000U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                    >> 0x0000000cU))));
        vlSelfRef.__PVT__AGEX_latch[5U] = ((0x00003fffU 
                                            & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                               >> 0x0000000cU)) 
                                           | (0x00004000U 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                 >> 0x0000000cU)));
    }
}

void Vpipeline_AGEX_STAGE___nba_sequent__TOP__pipeline__my_AGEX_stage__2(Vpipeline_AGEX_STAGE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpipeline_AGEX_STAGE___nba_sequent__TOP__pipeline__my_AGEX_stage__2\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgExtracted_hbcc182c0__0 = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                << 6U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x0000001aU)) 
                                              + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  << 0x00000016U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                    >> 0x0000000aU)));
    vlSelfRef.__VdfgExtracted_h32f0a660__0 = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                << 0x00000016U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  >> 0x0000000aU)) 
                                              + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  << 0x00000016U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                    >> 0x0000000aU)));
    vlSelfRef.__VdfgExtracted_h690ea6c9__0 = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                << 0x00000016U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  >> 0x0000000aU)) 
                                              < ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                  << 0x00000016U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                    >> 0x0000000aU)));
    vlSelfRef.__VdfgExtracted_h6ac6cdbe__0 = VL_LTS_III(32, 
                                                        ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                          << 0x00000016U) 
                                                         | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                            >> 0x0000000aU)), 
                                                        ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                          << 0x00000016U) 
                                                         | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                            >> 0x0000000aU)));
    if ((1U & (~ ((((((((1U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x00000014U))) 
                        | (2U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x00000014U)))) 
                       | (3U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x00000014U)))) 
                      | (4U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x00000014U)))) 
                     | (5U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x00000014U)))) 
                    | (6U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x00000014U)))) 
                   | (7U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0x00000014U)))) 
                  | (8U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x00000014U))))))) {
        if ((1U & (~ ((((((((9U == (0x0000003fU & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x00000014U))) 
                            | (0x0aU == (0x0000003fU 
                                         & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0x00000014U)))) 
                           | (0x0bU == (0x0000003fU 
                                        & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x00000014U)))) 
                          | (0x0cU == (0x0000003fU 
                                       & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x00000014U)))) 
                         | (0x0dU == (0x0000003fU & 
                                      (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 0x00000014U)))) 
                        | (0x0eU == (0x0000003fU & 
                                     (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      >> 0x00000014U)))) 
                       | (0x0fU == (0x0000003fU & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x00000014U)))) 
                      | (0x10U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x00000014U))))))) {
            if (((((((((0x11U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x00000014U))) 
                       | (0x12U == (0x0000003fU & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x00000014U)))) 
                      | (0x13U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x00000014U)))) 
                     | (0x14U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x00000014U)))) 
                    | (0x15U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x00000014U)))) 
                   | (0x16U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x00000014U)))) 
                  | ((0x19U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x00000014U))) 
                     || (0x1bU == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x00000014U))))) 
                 | (0x17U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x00000014U))))) {
                if ((0x11U != (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x00000014U)))) {
                    if ((0x12U != (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x00000014U)))) {
                        if ((0x13U != (0x0000003fU 
                                       & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x00000014U)))) {
                            if ((0x14U != (0x0000003fU 
                                           & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x00000014U)))) {
                                if ((0x15U != (0x0000003fU 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x00000014U)))) {
                                    if ((0x16U != (0x0000003fU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 0x00000014U)))) {
                                        if ((1U & (~ 
                                                   ((0x19U 
                                                     == 
                                                     (0x0000003fU 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                         >> 0x00000014U))) 
                                                    || (0x1bU 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                            >> 0x00000014U))))))) {
                                            vlSelfRef.__PVT__memaddr_AGEX 
                                                = vlSelfRef.__VdfgExtracted_h32f0a660__0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelfRef.__PVT__memaddr_AGEX = ((0x18U 
                                                  == 
                                                  (0x0000003fU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 0x00000014U)))
                                                  ? vlSelfRef.__VdfgExtracted_h32f0a660__0
                                                  : 0U);
            }
        }
    }
    if (((((((((1U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      >> 0x00000014U))) 
               | (2U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 0x00000014U)))) 
              | (3U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                       >> 0x00000014U)))) 
             | (4U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      >> 0x00000014U)))) 
            | (5U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                     >> 0x00000014U)))) 
           | (6U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                    >> 0x00000014U)))) 
          | (7U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                   >> 0x00000014U)))) 
         | (8U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                  >> 0x00000014U))))) {
        vlSelfRef.__PVT__aluout_AGEX = ((1U == (0x0000003fU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x00000014U)))
                                         ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              << 0x00000016U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                >> 0x0000000aU)) 
                                            + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                << 0x00000016U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 0x0000000aU)))
                                         : ((2U == 
                                             (0x0000003fU 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x00000014U)))
                                             ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  << 0x00000016U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    >> 0x0000000aU)) 
                                                - (
                                                   (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    << 0x00000016U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                      >> 0x0000000aU)))
                                             : ((3U 
                                                 == 
                                                 (0x0000003fU 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 0x00000014U)))
                                                 ? 
                                                (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   << 0x00000016U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     >> 0x0000000aU)) 
                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     << 0x00000016U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                       >> 0x0000000aU)))
                                                 : 
                                                ((4U 
                                                  == 
                                                  (0x0000003fU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 0x00000014U)))
                                                  ? 
                                                 (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                    << 0x00000016U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      >> 0x0000000aU)) 
                                                  | ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      << 0x00000016U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                        >> 0x0000000aU)))
                                                  : 
                                                 ((5U 
                                                   == 
                                                   (0x0000003fU 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                       >> 0x00000014U)))
                                                   ? 
                                                  (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     << 0x00000016U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       >> 0x0000000aU)) 
                                                   ^ 
                                                   ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     << 0x00000016U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                       >> 0x0000000aU)))
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (0x0000003fU 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        >> 0x00000014U)))
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgExtracted_h6ac6cdbe__0)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   ((7U 
                                                     == 
                                                     (0x0000003fU 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                         >> 0x00000014U)))
                                                     ? 
                                                    ((IData)(vlSelfRef.__VdfgExtracted_h690ea6c9__0)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    VL_SHIFTRS_III(32,32,5, 
                                                                   ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                     << 0x00000016U) 
                                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                       >> 0x0000000aU)), 
                                                                   (0x0000001fU 
                                                                    & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                       >> 0x0000000aU))))))))));
    } else if (((((((((9U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x00000014U))) 
                      | (0x0aU == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x00000014U)))) 
                     | (0x0bU == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x00000014U)))) 
                    | (0x0cU == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x00000014U)))) 
                   | (0x0dU == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x00000014U)))) 
                  | (0x0eU == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x00000014U)))) 
                 | (0x0fU == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x00000014U)))) 
                | (0x10U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0x00000014U))))) {
        vlSelfRef.__PVT__aluout_AGEX = ((9U == (0x0000003fU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   >> 0x00000014U)))
                                         ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              << 0x00000016U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                >> 0x0000000aU)) 
                                            >> (0x0000001fU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0x0000000aU)))
                                         : ((0x0aU 
                                             == (0x0000003fU 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 0x00000014U)))
                                             ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  << 0x00000016U) 
                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    >> 0x0000000aU)) 
                                                << 
                                                (0x0000001fU 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                    >> 0x0000000aU)))
                                             : ((0x0bU 
                                                 == 
                                                 (0x0000003fU 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 0x00000014U)))
                                                 ? 
                                                VL_MULS_III(32, 
                                                            ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                              << 0x00000016U) 
                                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                >> 0x0000000aU)), 
                                                            ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                              << 0x00000016U) 
                                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                >> 0x0000000aU)))
                                                 : 
                                                ((0x0cU 
                                                  == 
                                                  (0x0000003fU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 0x00000014U)))
                                                  ? vlSelfRef.__VdfgExtracted_h32f0a660__0
                                                  : 
                                                 ((0x0dU 
                                                   == 
                                                   (0x0000003fU 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                       >> 0x00000014U)))
                                                   ? 
                                                  (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     << 0x00000016U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       >> 0x0000000aU)) 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                       << 0x00000016U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                         >> 0x0000000aU)))
                                                   : 
                                                  ((0x0eU 
                                                    == 
                                                    (0x0000003fU 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        >> 0x00000014U)))
                                                    ? 
                                                   (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                      << 0x00000016U) 
                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                        >> 0x0000000aU)) 
                                                    | ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                        << 0x00000016U) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                          >> 0x0000000aU)))
                                                    : 
                                                   ((0x0fU 
                                                     == 
                                                     (0x0000003fU 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                         >> 0x00000014U)))
                                                     ? 
                                                    (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                       << 0x00000016U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                         >> 0x0000000aU)) 
                                                     ^ 
                                                     ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                       << 0x00000016U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                         >> 0x0000000aU)))
                                                     : 
                                                    (VL_LTS_III(32, 
                                                                ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                  << 0x00000016U) 
                                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                    >> 0x0000000aU)), 
                                                                ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                  << 0x00000016U) 
                                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                                    >> 0x0000000aU)))
                                                      ? 1U
                                                      : 0U))))))));
    } else if (((((((((0x11U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x00000014U))) 
                      | (0x12U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x00000014U)))) 
                     | (0x13U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x00000014U)))) 
                    | (0x14U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x00000014U)))) 
                   | (0x15U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                               >> 0x00000014U)))) 
                  | (0x16U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x00000014U)))) 
                 | ((0x19U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x00000014U))) 
                    || (0x1bU == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x00000014U))))) 
                | (0x17U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0x00000014U))))) {
        if ((0x11U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      >> 0x00000014U)))) {
            vlSelfRef.__PVT__aluout_AGEX = ((((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               << 0x00000016U) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 >> 0x0000000aU)) 
                                             < ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 << 0x00000016U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                   >> 0x0000000aU)))
                                             ? 1U : 0U);
        } else if ((0x12U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x00000014U)))) {
            vlSelfRef.__PVT__aluout_AGEX = VL_SHIFTRS_III(32,32,5, 
                                                          ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                            << 0x00000016U) 
                                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                              >> 0x0000000aU)), 
                                                          (0x0000001fU 
                                                           & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                              >> 0x0000000aU)));
        } else if ((0x13U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x00000014U)))) {
            vlSelfRef.__PVT__aluout_AGEX = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              << 0x00000016U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                >> 0x0000000aU)) 
                                            >> (0x0000001fU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                   >> 0x0000000aU)));
        } else if ((0x14U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x00000014U)))) {
            vlSelfRef.__PVT__aluout_AGEX = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              << 0x00000016U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                >> 0x0000000aU)) 
                                            << (0x0000001fU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                   >> 0x0000000aU)));
        } else if ((0x15U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x00000014U)))) {
            vlSelfRef.__PVT__aluout_AGEX = ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             << 0x00000016U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                               >> 0x0000000aU));
        } else if ((0x16U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x00000014U)))) {
            vlSelfRef.__PVT__aluout_AGEX = vlSelfRef.__VdfgExtracted_hbcc182c0__0;
        } else if (((0x19U == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x00000014U))) 
                    || (0x1bU == (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x00000014U))))) {
            vlSelfRef.__PVT__aluout_AGEX = ((IData)(4U) 
                                            + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                << 6U) 
                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x0000001aU)));
        }
    } else {
        vlSelfRef.__PVT__aluout_AGEX = ((0x18U == (0x0000003fU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 0x00000014U)))
                                         ? ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                             << 0x00000016U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               >> 0x0000000aU))
                                         : 0U);
    }
    vlSelfRef.__VdfgRegularize_h3f620fe0_0_1 = (((0x1cU 
                                                  == 
                                                  (0x0000003fU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 0x00000014U)))
                                                  ? 
                                                 (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                    << 0x00000016U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      >> 0x0000000aU)) 
                                                  == 
                                                  ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    << 0x00000016U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                      >> 0x0000000aU)))
                                                  : 
                                                 ((0x1dU 
                                                   == 
                                                   (0x0000003fU 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                       >> 0x00000014U)))
                                                   ? 
                                                  (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     << 0x00000016U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       >> 0x0000000aU)) 
                                                   != 
                                                   ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     << 0x00000016U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                       >> 0x0000000aU)))
                                                   : 
                                                  ((0x1eU 
                                                    == 
                                                    (0x0000003fU 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                        >> 0x00000014U)))
                                                    ? (IData)(vlSelfRef.__VdfgExtracted_h6ac6cdbe__0)
                                                    : 
                                                   ((0x1fU 
                                                     == 
                                                     (0x0000003fU 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                         >> 0x00000014U)))
                                                     ? 
                                                    VL_GTES_III(32, 
                                                                ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                  << 0x00000016U) 
                                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                    >> 0x0000000aU)), 
                                                                ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                  << 0x00000016U) 
                                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                    >> 0x0000000aU)))
                                                     : 
                                                    ((0x20U 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                          >> 0x00000014U)))
                                                      ? (IData)(vlSelfRef.__VdfgExtracted_h690ea6c9__0)
                                                      : (IData)(
                                                                ((0x02100000U 
                                                                  == 
                                                                  (0x03f00000U 
                                                                   & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                                 & (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                      << 0x00000016U) 
                                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                        >> 0x0000000aU)) 
                                                                    >= 
                                                                    ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                      << 0x00000016U) 
                                                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                        >> 0x0000000aU)))))))))) 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                   >> 9U));
    vlSelfRef.__VdfgRegularize_h3f620fe0_0_0 = (1U 
                                                & ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                    >> 8U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h3f620fe0_0_1)));
}
