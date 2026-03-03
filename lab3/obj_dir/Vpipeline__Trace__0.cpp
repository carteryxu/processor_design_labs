// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vpipeline__Syms.h"


void Vpipeline___024root__trace_chg_0_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vpipeline___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_chg_0\n"); );
    // Body
    Vpipeline___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline___024root*>(voidSelf);
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vpipeline___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vpipeline___024root__trace_chg_0_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_chg_0_sub_0\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<5>/*159:0*/ __Vtemp_8;
    VlWide<5>/*159:0*/ __Vtemp_11;
    VlWide<5>/*159:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<4>/*127:0*/ __Vtemp_22;
    VlWide<8>/*255:0*/ __Vtemp_23;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+2,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+3,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
        bufp->chgWData(oldp+4,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch),137);
        bufp->chgWData(oldp+9,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),249);
        bufp->chgWData(oldp+17,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch),143);
        bufp->chgWData(oldp+22,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),141);
        bufp->chgBit(oldp+27,(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE));
        __Vtemp_2[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__is_brjmp_AGEX)) 
                                  << 0x00000029U) | 
                                 (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__do_brjmp_AGEX)) 
                                   << 0x00000028U) 
                                  | (((QData)((IData)(
                                                      (0x000000ffU 
                                                       & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                         << 8U) 
                                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                           >> 0x00000018U))))))));
        __Vtemp_2[1U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX 
                          << 0x0000000aU) | (IData)(
                                                    ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__is_brjmp_AGEX)) 
                                                       << 0x00000029U) 
                                                      | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__do_brjmp_AGEX)) 
                                                          << 0x00000028U) 
                                                         | (((QData)((IData)(
                                                                             (0x000000ffU 
                                                                              & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(
                                                                              ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                                << 8U) 
                                                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                                                >> 0x00000018U))))))) 
                                                     >> 0x00000020U)));
        __Vtemp_2[2U] = (((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE) 
                          << 0x0000000aU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX 
                                             >> 0x00000016U));
        bufp->chgWData(oldp+28,(__Vtemp_2),75);
        bufp->chgBit(oldp+31,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE));
        bufp->chgQData(oldp+32,((((QData)((IData)((0x0000003fU 
                                                   & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U]))) 
                                  << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regval_WB)))),38);
        __Vtemp_8[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                          << 8U) | (0x000000ffU & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                   >> 8U)));
        __Vtemp_8[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                          >> 0x00000018U) | ((IData)(
                                                     ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                                      >> 0x00000020U)) 
                                             << 8U));
        __Vtemp_8[2U] = (((((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                             << 0x0000000eU) | (0x00003fc0U 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x00000012U))) 
                           | (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U))) 
                          << 8U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                             >> 0x00000020U)) 
                                    >> 0x00000018U));
        __Vtemp_8[3U] = (((((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                             << 0x0000000eU) | (0x00003fc0U 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0x00000012U))) 
                           | (0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U))) 
                          >> 0x00000018U) | (((0x0000003fU 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                  >> 0x00000012U)) 
                                              | ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                  << 0x0000000eU) 
                                                 | (0x00003fc0U 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                       >> 0x00000012U)))) 
                                             << 8U));
        __Vtemp_8[4U] = ((((0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                           >> 0x00000012U)) 
                           | ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                               << 0x0000000eU) | (0x00003fc0U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                     >> 0x00000012U)))) 
                          >> 0x00000018U) | (((0x0000003fU 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                  >> 0x00000012U)) 
                                              | (0x00000040U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                    >> 0x00000012U))) 
                                             << 8U));
        bufp->chgWData(oldp+34,(__Vtemp_8),143);
        bufp->chgBit(oldp+39,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                     >> 0x00000018U))));
        bufp->chgIData(oldp+40,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                  << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                            >> 0x00000018U))),32);
        bufp->chgIData(oldp+41,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                  << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x00000018U))),32);
        bufp->chgIData(oldp+42,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                  << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0x00000018U))),32);
        bufp->chgIData(oldp+43,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                  << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x00000018U))),32);
        bufp->chgCData(oldp+44,((0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x00000012U))),6);
        bufp->chgBit(oldp+45,(((0x1cU == (0x0000003fU 
                                          & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x00000012U)))
                                ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                     << 0x0000000eU) 
                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       >> 0x00000012U)) 
                                   == ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        << 0x0000000eU) 
                                       | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                          >> 0x00000012U)))
                                : ((0x1dU == (0x0000003fU 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x00000012U)))
                                    ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         << 0x0000000eU) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           >> 0x00000012U)) 
                                       != ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                            << 0x0000000eU) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                              >> 0x00000012U)))
                                    : ((0x1eU == (0x0000003fU 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     >> 0x00000012U)))
                                        ? (IData)(vlSymsp->TOP__pipeline.my_AGEX_stage__DOT____VdfgExtracted_h6ac6cdbe__0)
                                        : ((0x1fU == 
                                            (0x0000003fU 
                                             & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x00000012U)))
                                            ? VL_GTES_III(32, 
                                                          ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                            << 0x0000000eU) 
                                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                              >> 0x00000012U)), 
                                                          ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                            << 0x0000000eU) 
                                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                              >> 0x00000012U)))
                                            : ((0x20U 
                                                == 
                                                (0x0000003fU 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                    >> 0x00000012U)))
                                                ? (IData)(vlSymsp->TOP__pipeline.my_AGEX_stage__DOT____VdfgExtracted_h690ea6c9__0)
                                                : (IData)(
                                                          ((0x00840000U 
                                                            == 
                                                            (0x00fc0000U 
                                                             & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                                           & (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                << 0x0000000eU) 
                                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                  >> 0x00000012U)) 
                                                              >= 
                                                              ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                << 0x0000000eU) 
                                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                  >> 0x00000012U))))))))))));
        bufp->chgBit(oldp+46,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                     >> 0x00000011U))));
        bufp->chgBit(oldp+47,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                     >> 0x00000010U))));
        bufp->chgBit(oldp+48,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                     >> 0x0000000fU))));
        bufp->chgBit(oldp+49,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                     >> 0x0000000eU))));
        bufp->chgBit(oldp+50,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                     >> 0x0000000dU))));
        bufp->chgCData(oldp+51,((0x0000001fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                >> 8U))),5);
        bufp->chgIData(oldp+52,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                  << 0x0000000eU) | 
                                 (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                  >> 0x00000012U))),32);
        bufp->chgIData(oldp+53,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                  << 0x0000000eU) | 
                                 (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                  >> 0x00000012U))),32);
        bufp->chgIData(oldp+54,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                  << 0x0000000eU) | 
                                 (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                  >> 0x00000012U))),32);
        bufp->chgIData(oldp+55,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX),32);
        bufp->chgIData(oldp+56,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX),32);
        bufp->chgIData(oldp+57,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX),32);
        bufp->chgBit(oldp+58,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__is_brjmp_AGEX));
        bufp->chgBit(oldp+59,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__do_brjmp_AGEX));
        bufp->chgCData(oldp+60,((0x000000ffU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])),8);
        bufp->chgBit(oldp+61,((1U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                     >> 8U))));
        bufp->chgIData(oldp+62,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                  << 0x00000018U) | 
                                 (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                  >> 8U))),32);
        bufp->chgIData(oldp+63,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                  << 0x00000018U) | 
                                 (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                  >> 8U))),32);
        bufp->chgIData(oldp+64,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                  << 0x00000018U) | 
                                 (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                  >> 8U))),32);
        bufp->chgIData(oldp+65,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                  << 0x00000018U) | 
                                 (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                  >> 8U))),32);
        bufp->chgCData(oldp+66,((0x000000ffU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])),8);
        bufp->chgCData(oldp+67,((7U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 0x00000014U))),3);
        bufp->chgCData(oldp+68,((0x0000007fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                >> 1U))),7);
        bufp->chgCData(oldp+69,((0x0000007fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 8U))),7);
        bufp->chgCData(oldp+70,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
        bufp->chgCData(oldp+71,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
        bufp->chgCData(oldp+72,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
        bufp->chgIData(oldp+73,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                  ? (((- (IData)((1U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     >> 7U)))) 
                                      << 0x0000000bU) 
                                     | (0x000007ffU 
                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            << 4U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                              >> 0x0000001cU))))
                                  : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                      ? (((- (IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                         >> 7U)))) 
                                          << 0x0000000bU) 
                                         | ((0x000007e0U 
                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                << 4U)) 
                                            | (0x0000001fU 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x0000000fU))))
                                      : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             >> 7U)))) 
                                              << 0x0000000cU) 
                                             | ((0x00000800U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                    >> 4U)) 
                                                | ((0x000007e0U 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       << 4U)) 
                                                   | (0x0000001eU 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 0x0000000fU)))))
                                          : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                              ? (0xfffff000U 
                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     << 0x00000018U) 
                                                    | (0x00fff000U 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          >> 8U))))
                                              : ((2U 
                                                  == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                  >> 7U)))) 
                                                   << 0x00000014U) 
                                                  | ((((0x000001feU 
                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                           >> 0x00000013U)) 
                                                       | (1U 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                             >> 0x0000001cU))) 
                                                      << 0x0000000bU) 
                                                     | (0x000007feU 
                                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            << 4U) 
                                                           | (0x0000000eU 
                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                 >> 0x0000001cU))))))
                                                  : 0U)))))),32);
        bufp->chgBit(oldp+74,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                     >> 5U))));
        bufp->chgCData(oldp+75,((0x0000001fU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),5);
        bufp->chgIData(oldp+76,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regval_WB),32);
        bufp->chgCData(oldp+77,((0x0000001fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0x00000017U))),5);
        bufp->chgCData(oldp+78,((0x0000001fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                 << 4U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x0000001cU)))),5);
        bufp->chgCData(oldp+79,((0x0000001fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0x0000000fU))),5);
        bufp->chgBit(oldp+80,(((0x1cU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((0x1dU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | ((0x1eU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                     | ((0x1fU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                        | ((0x20U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                           | (0x21U 
                                              == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))))));
        bufp->chgBit(oldp+81,(((0x19U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((0x1aU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | (0x1bU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))));
        bufp->chgBit(oldp+82,((0x17U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
        bufp->chgBit(oldp+83,((0x18U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
        bufp->chgBit(oldp+84,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE));
        bufp->chgBit(oldp+85,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE));
        bufp->chgBit(oldp+86,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE));
        bufp->chgIData(oldp+87,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs),32);
        bufp->chgBit(oldp+88,((((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE) 
                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                   >> (0x0000001fU 
                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          >> 0x00000017U)))) 
                               | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                  & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                     >> (0x0000001fU 
                                         & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                             << 4U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               >> 0x0000001cU))))))));
        bufp->chgCData(oldp+89,((((IData)(vlSymsp->TOP__pipeline.__VdfgRegularize_hebeb780c_0_0) 
                                  << 2U) | (((IData)(vlSymsp->TOP__pipeline.__VdfgRegularize_hebeb780c_0_1) 
                                             << 1U) 
                                            | (IData)(vlSymsp->TOP__pipeline.__VdfgRegularize_hebeb780c_0_2)))),3);
        bufp->chgBit(oldp+90,((0U != vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)));
        bufp->chgIData(oldp+91,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
        bufp->chgIData(oldp+92,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE),32);
        bufp->chgIData(oldp+93,(((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
        bufp->chgIData(oldp+94,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcnext_FE),32);
        __Vtemp_11[0U] = (((IData)((((QData)((IData)(
                                                     ((IData)(4U) 
                                                      + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcnext_FE)))) 
                           << 8U) | (IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE));
        __Vtemp_11[1U] = (((IData)((((QData)((IData)(
                                                     ((IData)(4U) 
                                                      + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcnext_FE)))) 
                           >> 0x00000018U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((IData)(4U) 
                                                                          + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcnext_FE))) 
                                                       >> 0x00000020U)) 
                                              << 8U));
        __Vtemp_11[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                           << 8U) | ((IData)(((((QData)((IData)(
                                                                ((IData)(4U) 
                                                                 + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcnext_FE))) 
                                              >> 0x00000020U)) 
                                     >> 0x00000018U));
        __Vtemp_11[3U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                           >> 0x00000018U) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                       >> 0x00000020U)) 
                                              << 8U));
        __Vtemp_11[4U] = (((IData)(((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                    >> 0x00000020U)) 
                           >> 0x00000018U) | ((0U != vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE) 
                                              << 8U));
        bufp->chgWData(oldp+95,(__Vtemp_11),137);
        bufp->chgCData(oldp+100,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BHR),8);
        bufp->chgIData(oldp+101,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[0]),26);
        bufp->chgIData(oldp+102,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[1]),26);
        bufp->chgIData(oldp+103,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[2]),26);
        bufp->chgIData(oldp+104,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[3]),26);
        bufp->chgIData(oldp+105,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[4]),26);
        bufp->chgIData(oldp+106,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[5]),26);
        bufp->chgIData(oldp+107,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[6]),26);
        bufp->chgIData(oldp+108,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[7]),26);
        bufp->chgIData(oldp+109,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[8]),26);
        bufp->chgIData(oldp+110,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[9]),26);
        bufp->chgIData(oldp+111,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[10]),26);
        bufp->chgIData(oldp+112,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[11]),26);
        bufp->chgIData(oldp+113,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[12]),26);
        bufp->chgIData(oldp+114,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[13]),26);
        bufp->chgIData(oldp+115,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[14]),26);
        bufp->chgIData(oldp+116,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[15]),26);
        bufp->chgBit(oldp+117,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[0]));
        bufp->chgBit(oldp+118,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[1]));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[2]));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[3]));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[4]));
        bufp->chgBit(oldp+122,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[5]));
        bufp->chgBit(oldp+123,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[6]));
        bufp->chgBit(oldp+124,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[7]));
        bufp->chgBit(oldp+125,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[8]));
        bufp->chgBit(oldp+126,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[9]));
        bufp->chgBit(oldp+127,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[10]));
        bufp->chgBit(oldp+128,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[11]));
        bufp->chgBit(oldp+129,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[12]));
        bufp->chgBit(oldp+130,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[13]));
        bufp->chgBit(oldp+131,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[14]));
        bufp->chgBit(oldp+132,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[15]));
        bufp->chgIData(oldp+133,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[0]),32);
        bufp->chgIData(oldp+134,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[1]),32);
        bufp->chgIData(oldp+135,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[2]),32);
        bufp->chgIData(oldp+136,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[3]),32);
        bufp->chgIData(oldp+137,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[4]),32);
        bufp->chgIData(oldp+138,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[5]),32);
        bufp->chgIData(oldp+139,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[6]),32);
        bufp->chgIData(oldp+140,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[7]),32);
        bufp->chgIData(oldp+141,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[8]),32);
        bufp->chgIData(oldp+142,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[9]),32);
        bufp->chgIData(oldp+143,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[10]),32);
        bufp->chgIData(oldp+144,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[11]),32);
        bufp->chgIData(oldp+145,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[12]),32);
        bufp->chgIData(oldp+146,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[13]),32);
        bufp->chgIData(oldp+147,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[14]),32);
        bufp->chgIData(oldp+148,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[15]),32);
        bufp->chgCData(oldp+149,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE),8);
        bufp->chgBit(oldp+150,((1U < vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT
                                [vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE])));
        bufp->chgIData(oldp+151,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG
                                 [(0x0000000fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                  >> 2U))]),26);
        bufp->chgBit(oldp+152,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID
                               [(0x0000000fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                >> 2U))]));
        bufp->chgIData(oldp+153,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET
                                 [(0x0000000fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                  >> 2U))]),32);
        bufp->chgIData(oldp+154,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__num_brjmp),32);
        bufp->chgIData(oldp+155,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__mis_pred),32);
        bufp->chgIData(oldp+156,((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__num_brjmp 
                                  - vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__mis_pred)),32);
        bufp->chgBit(oldp+157,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_input_a_ack));
        bufp->chgBit(oldp+158,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_input_b_ack));
        bufp->chgBit(oldp+159,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_input_a_ack));
        bufp->chgBit(oldp+160,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_input_b_ack));
        bufp->chgBit(oldp+161,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_output_z_stb));
        bufp->chgBit(oldp+162,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_output_z_stb));
        bufp->chgIData(oldp+163,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_output_z),32);
        bufp->chgIData(oldp+164,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_output_z),32);
        bufp->chgCData(oldp+165,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__state),4);
        bufp->chgIData(oldp+166,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a),32);
        bufp->chgIData(oldp+167,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b),32);
        bufp->chgIData(oldp+168,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z),32);
        bufp->chgIData(oldp+169,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_m),24);
        bufp->chgIData(oldp+170,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_m),24);
        bufp->chgIData(oldp+171,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_m),24);
        bufp->chgSData(oldp+172,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_e),10);
        bufp->chgSData(oldp+173,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_e),10);
        bufp->chgSData(oldp+174,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_e),10);
        bufp->chgBit(oldp+175,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__a_s));
        bufp->chgBit(oldp+176,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__b_s));
        bufp->chgBit(oldp+177,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__z_s));
        bufp->chgBit(oldp+178,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__guard));
        bufp->chgBit(oldp+179,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__round_bit));
        bufp->chgBit(oldp+180,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__sticky));
        bufp->chgQData(oldp+181,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__quotient),51);
        bufp->chgQData(oldp+183,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__divisor),51);
        bufp->chgQData(oldp+185,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__dividend),51);
        bufp->chgQData(oldp+187,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__remainder),51);
        bufp->chgCData(oldp+189,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__count),6);
        bufp->chgCData(oldp+190,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__state),4);
        bufp->chgIData(oldp+191,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a),32);
        bufp->chgIData(oldp+192,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b),32);
        bufp->chgIData(oldp+193,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z),32);
        bufp->chgIData(oldp+194,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_m),24);
        bufp->chgIData(oldp+195,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_m),24);
        bufp->chgIData(oldp+196,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_m),24);
        bufp->chgSData(oldp+197,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_e),10);
        bufp->chgSData(oldp+198,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_e),10);
        bufp->chgSData(oldp+199,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_e),10);
        bufp->chgBit(oldp+200,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__a_s));
        bufp->chgBit(oldp+201,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__b_s));
        bufp->chgBit(oldp+202,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__z_s));
        bufp->chgBit(oldp+203,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__guard));
        bufp->chgBit(oldp+204,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__round_bit));
        bufp->chgBit(oldp+205,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__sticky));
        bufp->chgQData(oldp+206,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__product),48);
        bufp->chgBit(oldp+208,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                      >> 0x0000000eU))));
        __Vtemp_16[0U] = (((IData)((((QData)((IData)(
                                                     vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                     [
                                                     (0x00003fffU 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                         >> 0x0000000aU))])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                        << 0x00000018U) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                          >> 8U)))))) 
                           << 6U) | (0x0000003fU & 
                                     vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U]));
        __Vtemp_16[1U] = (((IData)((((QData)((IData)(
                                                     vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                     [
                                                     (0x00003fffU 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                         >> 0x0000000aU))])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                        << 0x00000018U) 
                                                       | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                          >> 8U)))))) 
                           >> 0x0000001aU) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                                         [
                                                                         (0x00003fffU 
                                                                          & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                             >> 0x0000000aU))])) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                            << 0x00000018U) 
                                                                           | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                              >> 8U))))) 
                                                       >> 0x00000020U)) 
                                              << 6U));
        __Vtemp_16[2U] = (((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                            << 0x0000001eU) | (0x3fffffc0U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                  >> 2U))) 
                          | ((IData)(((((QData)((IData)(
                                                        vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                        [
                                                        (0x00003fffU 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                            >> 0x0000000aU))])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                           << 0x00000018U) 
                                                          | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                             >> 8U))))) 
                                      >> 0x00000020U)) 
                             >> 0x0000001aU));
        __Vtemp_16[3U] = ((0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                          >> 2U)) | 
                          ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                            << 0x0000001eU) | (0x3fffffc0U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                  >> 2U))));
        __Vtemp_16[4U] = ((0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                          >> 2U)) | 
                          (0x00001fc0U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                          >> 2U)));
        bufp->chgWData(oldp+209,(__Vtemp_16),141);
        bufp->chgCData(oldp+214,((0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                 >> 8U))),6);
        bufp->chgIData(oldp+215,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                   << 0x00000012U) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                     >> 0x0000000eU))),32);
        bufp->chgIData(oldp+216,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                   << 0x00000012U) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                     >> 0x0000000eU))),32);
        bufp->chgIData(oldp+217,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                   << 0x00000018U) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                     >> 8U))),32);
        bufp->chgIData(oldp+218,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                 [(0x00003fffU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                  >> 0x0000000aU))]),32);
        bufp->chgIData(oldp+219,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                   << 0x00000018U) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                     >> 8U))),32);
        bufp->chgBit(oldp+220,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                      >> 6U))));
        bufp->chgBit(oldp+221,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                      >> 7U))));
        bufp->chgCData(oldp+222,((0x0000001fU & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])),5);
        bufp->chgBit(oldp+223,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                      >> 5U))));
        bufp->chgBit(oldp+224,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                      >> 0x0000000cU))));
        bufp->chgIData(oldp+225,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                   << 0x00000014U) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                     >> 0x0000000cU))),32);
        bufp->chgIData(oldp+226,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                   << 0x00000014U) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                     >> 0x0000000cU))),32);
        bufp->chgCData(oldp+227,((0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                 >> 6U))),6);
        bufp->chgIData(oldp+228,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                   << 0x0000001aU) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                     >> 6U))),32);
        bufp->chgIData(oldp+229,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                   << 0x0000001aU) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                     >> 6U))),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        __Vtemp_17[0U] = (((IData)((((QData)((IData)(
                                                     vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                     [0x1eU])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                      [0x1fU])))) 
                           << 7U) | ((0x00000078U & 
                                      (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                       [0x1dU] << 3U)) 
                                     | (((IData)(vlSymsp->TOP__pipeline.__VdfgRegularize_hebeb780c_0_0) 
                                         << 2U) | (
                                                   ((IData)(vlSymsp->TOP__pipeline.__VdfgRegularize_hebeb780c_0_1) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__pipeline.__VdfgRegularize_hebeb780c_0_2)))));
        __Vtemp_17[1U] = (((IData)((((QData)((IData)(
                                                     vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                     [0x1eU])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                      [0x1fU])))) 
                           >> 0x00000019U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                                         [0x1eU])) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                                          [0x1fU]))) 
                                                       >> 0x00000020U)) 
                                              << 7U));
        __Vtemp_17[2U] = ((IData)(((((QData)((IData)(
                                                     vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                     [0x1eU])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                      [0x1fU]))) 
                                   >> 0x00000020U)) 
                          >> 0x00000019U);
        bufp->chgWData(oldp+230,(__Vtemp_17),71);
        bufp->chgBit(oldp+233,(((1U == (0x0000000fU 
                                        & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                        [0x1dU])) & (IData)(vlSymsp->TOP__pipeline.__VdfgRegularize_hebeb780c_0_2))));
        bufp->chgBit(oldp+234,(((2U == (0x0000000fU 
                                        & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                        [0x1dU])) & (IData)(vlSymsp->TOP__pipeline.__VdfgRegularize_hebeb780c_0_2))));
        bufp->chgBit(oldp+235,(((1U == (0x0000000fU 
                                        & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                        [0x1dU])) & (IData)(vlSymsp->TOP__pipeline.__VdfgRegularize_hebeb780c_0_1))));
        bufp->chgBit(oldp+236,(((1U == (0x0000000fU 
                                        & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                        [0x1dU])) & (IData)(vlSymsp->TOP__pipeline.__VdfgRegularize_hebeb780c_0_0))));
        bufp->chgBit(oldp+237,(((2U == (0x0000000fU 
                                        & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                        [0x1dU])) & (IData)(vlSymsp->TOP__pipeline.__VdfgRegularize_hebeb780c_0_1))));
        bufp->chgBit(oldp+238,(((2U == (0x0000000fU 
                                        & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                        [0x1dU])) & (IData)(vlSymsp->TOP__pipeline.__VdfgRegularize_hebeb780c_0_0))));
        bufp->chgBit(oldp+239,(((1U == (0x0000000fU 
                                        & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                        [0x1dU])) ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_input_a_ack)
                                 : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_input_a_ack))));
        bufp->chgBit(oldp+240,(((1U == (0x0000000fU 
                                        & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                        [0x1dU])) ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_input_b_ack)
                                 : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_input_b_ack))));
        bufp->chgBit(oldp+241,(((1U == (0x0000000fU 
                                        & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                        [0x1dU])) ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__div0__DOT__s_output_z_stb)
                                 : (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__u_external_alu__DOT__mult0__DOT__s_output_z_stb))));
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [1U] | vlSelfRef.__Vm_traceActivity
                       [2U]) | vlSelfRef.__Vm_traceActivity
                      [3U])))) {
        __Vtemp_21[0U] = (((IData)((((QData)((IData)(
                                                     ((0x1bU 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            << 4U) 
                                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                              >> 0x0000001cU))))
                                                       ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__OP3_FU
                                                       : 
                                                      ((0x1aU 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             << 4U) 
                                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                               >> 0x0000001cU))))
                                                        ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_OUT)
                                                        : 
                                                       vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                       [
                                                       (0x0000001fU 
                                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            << 4U) 
                                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                              >> 0x0000001cU)))])))) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      ((1U 
                                                        == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                        ? 
                                                       (((- (IData)(
                                                                    (1U 
                                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                        >> 7U)))) 
                                                         << 0x0000000bU) 
                                                        | (0x000007ffU 
                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               << 4U) 
                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                 >> 0x0000001cU))))
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                         ? 
                                                        (((- (IData)(
                                                                     (1U 
                                                                      & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                         >> 7U)))) 
                                                          << 0x0000000bU) 
                                                         | ((0x000007e0U 
                                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                << 4U)) 
                                                            | (0x0000001fU 
                                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 0x0000000fU))))
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                          ? 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                          >> 7U)))) 
                                                           << 0x0000000cU) 
                                                          | ((0x00000800U 
                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                 >> 4U)) 
                                                             | ((0x000007e0U 
                                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                    << 4U)) 
                                                                | (0x0000001eU 
                                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                      >> 0x0000000fU)))))
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                           ? 
                                                          (0xfffff000U 
                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               << 0x00000018U) 
                                                              | (0x00fff000U 
                                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                    >> 8U))))
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                            ? 
                                                           (((- (IData)(
                                                                        (1U 
                                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            >> 7U)))) 
                                                             << 0x00000014U) 
                                                            | ((((0x000001feU 
                                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                     >> 0x00000013U)) 
                                                                 | (1U 
                                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                       >> 0x0000001cU))) 
                                                                << 0x0000000bU) 
                                                               | (0x000007feU 
                                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                      << 4U) 
                                                                     | (0x0000000eU 
                                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 0x0000001cU))))))
                                                            : 0U))))))))) 
                           << 0x00000012U) | ((((((
                                                   (0x1cU 
                                                    == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                   | ((0x1dU 
                                                       == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                      | ((0x1eU 
                                                          == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                         | ((0x1fU 
                                                             == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                            | ((0x20U 
                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                               | (0x21U 
                                                                  == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))))) 
                                                  << 4U) 
                                                 | ((((0x19U 
                                                       == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                      | ((0x1aU 
                                                          == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                         | (0x1bU 
                                                            == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                     << 3U) 
                                                    | ((0x17U 
                                                        == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                       << 2U))) 
                                                | (((0x18U 
                                                     == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE))) 
                                               << 0x0000000dU) 
                                              | ((0x00001f00U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 7U)) 
                                                 | (0x000000ffU 
                                                    & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U]))));
        __Vtemp_21[1U] = (((IData)((((QData)((IData)(
                                                     ((0x1bU 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            << 4U) 
                                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                              >> 0x0000001cU))))
                                                       ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__OP3_FU
                                                       : 
                                                      ((0x1aU 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             << 4U) 
                                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                               >> 0x0000001cU))))
                                                        ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_OUT)
                                                        : 
                                                       vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                       [
                                                       (0x0000001fU 
                                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            << 4U) 
                                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                              >> 0x0000001cU)))])))) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      ((1U 
                                                        == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                        ? 
                                                       (((- (IData)(
                                                                    (1U 
                                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                        >> 7U)))) 
                                                         << 0x0000000bU) 
                                                        | (0x000007ffU 
                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               << 4U) 
                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                 >> 0x0000001cU))))
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                         ? 
                                                        (((- (IData)(
                                                                     (1U 
                                                                      & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                         >> 7U)))) 
                                                          << 0x0000000bU) 
                                                         | ((0x000007e0U 
                                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                << 4U)) 
                                                            | (0x0000001fU 
                                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 0x0000000fU))))
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                          ? 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                          >> 7U)))) 
                                                           << 0x0000000cU) 
                                                          | ((0x00000800U 
                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                 >> 4U)) 
                                                             | ((0x000007e0U 
                                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                    << 4U)) 
                                                                | (0x0000001eU 
                                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                      >> 0x0000000fU)))))
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                           ? 
                                                          (0xfffff000U 
                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               << 0x00000018U) 
                                                              | (0x00fff000U 
                                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                    >> 8U))))
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                            ? 
                                                           (((- (IData)(
                                                                        (1U 
                                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            >> 7U)))) 
                                                             << 0x00000014U) 
                                                            | ((((0x000001feU 
                                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                     >> 0x00000013U)) 
                                                                 | (1U 
                                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                       >> 0x0000001cU))) 
                                                                << 0x0000000bU) 
                                                               | (0x000007feU 
                                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                      << 4U) 
                                                                     | (0x0000000eU 
                                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 0x0000001cU))))))
                                                            : 0U))))))))) 
                           >> 0x0000000eU) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((0x1bU 
                                                                           == 
                                                                           (0x0000001fU 
                                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 4U) 
                                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000001cU))))
                                                                           ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__OP3_FU
                                                                           : 
                                                                          ((0x1aU 
                                                                            == 
                                                                            (0x0000001fU 
                                                                             & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 4U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000001cU))))
                                                                            ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_OUT)
                                                                            : 
                                                                           vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                                           [
                                                                           (0x0000001fU 
                                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 4U) 
                                                                               | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000001cU)))])))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((1U 
                                                                            == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                            ? 
                                                                           (((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                             << 0x0000000bU) 
                                                                            | (0x000007ffU 
                                                                               & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 4U) 
                                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000001cU))))
                                                                            : 
                                                                           ((4U 
                                                                             == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                             ? 
                                                                            (((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                              << 0x0000000bU) 
                                                                             | ((0x000007e0U 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 4U)) 
                                                                                | (0x0000001fU 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000000fU))))
                                                                             : 
                                                                            ((5U 
                                                                              == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                              ? 
                                                                             (((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                               << 0x0000000cU) 
                                                                              | ((0x00000800U 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 4U)) 
                                                                                | ((0x000007e0U 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 4U)) 
                                                                                | (0x0000001eU 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000000fU)))))
                                                                              : 
                                                                             ((3U 
                                                                               == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                               ? 
                                                                              (0xfffff000U 
                                                                               & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x00000018U) 
                                                                                | (0x00fff000U 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 8U))))
                                                                               : 
                                                                              ((2U 
                                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                                ? 
                                                                               (((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                                << 0x00000014U) 
                                                                                | ((((0x000001feU 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x00000013U)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000001cU))) 
                                                                                << 0x0000000bU) 
                                                                                | (0x000007feU 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 4U) 
                                                                                | (0x0000000eU 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000001cU))))))
                                                                                : 0U)))))))) 
                                                       >> 0x00000020U)) 
                                              << 0x00000012U));
        __Vtemp_21[2U] = ((IData)(((((QData)((IData)(
                                                     ((0x1bU 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            << 4U) 
                                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                              >> 0x0000001cU))))
                                                       ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__OP3_FU
                                                       : 
                                                      ((0x1aU 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             << 4U) 
                                                            | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                               >> 0x0000001cU))))
                                                        ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_OUT)
                                                        : 
                                                       vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                       [
                                                       (0x0000001fU 
                                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            << 4U) 
                                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                              >> 0x0000001cU)))])))) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      ((1U 
                                                        == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                        ? 
                                                       (((- (IData)(
                                                                    (1U 
                                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                        >> 7U)))) 
                                                         << 0x0000000bU) 
                                                        | (0x000007ffU 
                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               << 4U) 
                                                              | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                 >> 0x0000001cU))))
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                         ? 
                                                        (((- (IData)(
                                                                     (1U 
                                                                      & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                         >> 7U)))) 
                                                          << 0x0000000bU) 
                                                         | ((0x000007e0U 
                                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                << 4U)) 
                                                            | (0x0000001fU 
                                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 0x0000000fU))))
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                          ? 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                          >> 7U)))) 
                                                           << 0x0000000cU) 
                                                          | ((0x00000800U 
                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                 >> 4U)) 
                                                             | ((0x000007e0U 
                                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                    << 4U)) 
                                                                | (0x0000001eU 
                                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                      >> 0x0000000fU)))))
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                           ? 
                                                          (0xfffff000U 
                                                           & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               << 0x00000018U) 
                                                              | (0x00fff000U 
                                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                    >> 8U))))
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                            ? 
                                                           (((- (IData)(
                                                                        (1U 
                                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            >> 7U)))) 
                                                             << 0x00000014U) 
                                                            | ((((0x000001feU 
                                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                     >> 0x00000013U)) 
                                                                 | (1U 
                                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                       >> 0x0000001cU))) 
                                                                << 0x0000000bU) 
                                                               | (0x000007feU 
                                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                      << 4U) 
                                                                     | (0x0000000eU 
                                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 0x0000001cU))))))
                                                            : 0U)))))))) 
                                   >> 0x00000020U)) 
                          >> 0x0000000eU);
        __Vtemp_22[3U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      ((0x1bU 
                                                        == 
                                                        (0x0000001fU 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                            >> 0x00000017U)))
                                                        ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__OP3_FU
                                                        : 
                                                       ((0x1aU 
                                                         == 
                                                         (0x0000001fU 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                             >> 0x00000017U)))
                                                         ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_OUT)
                                                         : 
                                                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                        [
                                                        (0x0000001fU 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                            >> 0x00000017U))])))))) 
                           >> 0x0000000eU) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((0x1bU 
                                                                            == 
                                                                            (0x0000001fU 
                                                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x00000017U)))
                                                                            ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__OP3_FU
                                                                            : 
                                                                           ((0x1aU 
                                                                             == 
                                                                             (0x0000001fU 
                                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x00000017U)))
                                                                             ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_OUT)
                                                                             : 
                                                                            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                                            [
                                                                            (0x0000001fU 
                                                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x00000017U))]))))) 
                                                       >> 0x00000020U)) 
                                              << 0x00000012U));
        __Vtemp_23[0U] = __Vtemp_21[0U];
        __Vtemp_23[1U] = __Vtemp_21[1U];
        __Vtemp_23[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      ((0x1bU 
                                                        == 
                                                        (0x0000001fU 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                            >> 0x00000017U)))
                                                        ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__OP3_FU
                                                        : 
                                                       ((0x1aU 
                                                         == 
                                                         (0x0000001fU 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                             >> 0x00000017U)))
                                                         ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_OUT)
                                                         : 
                                                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                        [
                                                        (0x0000001fU 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                            >> 0x00000017U))])))))) 
                           << 0x00000012U) | __Vtemp_21[2U]);
        __Vtemp_23[3U] = ((0xff000000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                          << 0x00000010U)) 
                          | __Vtemp_22[3U]);
        __Vtemp_23[4U] = (((0x00ff0000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                           << 0x00000010U)) 
                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                              >> 0x00000010U)) | (0xff000000U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                     << 0x00000010U)));
        __Vtemp_23[5U] = (((0x00ff0000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                           << 0x00000010U)) 
                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                              >> 0x00000010U)) | (0xff000000U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                     << 0x00000010U)));
        __Vtemp_23[6U] = (((0x00ff0000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           << 0x00000010U)) 
                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                              >> 0x00000010U)) | (0xff000000U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     << 0x00000010U)));
        __Vtemp_23[7U] = (((0x00ff0000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           << 0x00000010U)) 
                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                              >> 0x00000010U)) | (0x01000000U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     << 0x00000010U)));
        bufp->chgWData(oldp+242,(__Vtemp_23),249);
        bufp->chgIData(oldp+250,(((0x1bU == (0x0000001fU 
                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0x00000017U)))
                                   ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__OP3_FU
                                   : ((0x1aU == (0x0000001fU 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                    >> 0x00000017U)))
                                       ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_OUT)
                                       : vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                      [(0x0000001fU 
                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           >> 0x00000017U))]))),32);
        bufp->chgIData(oldp+251,(((0x1bU == (0x0000001fU 
                                             & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                 << 4U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x0000001cU))))
                                   ? vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__OP3_FU
                                   : ((0x1aU == (0x0000001fU 
                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     << 4U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                       >> 0x0000001cU))))
                                       ? (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_OUT)
                                       : vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                      [(0x0000001fU 
                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            << 4U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                              >> 0x0000001cU)))]))),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+252,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[0]),32);
        bufp->chgIData(oldp+253,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[1]),32);
        bufp->chgIData(oldp+254,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[2]),32);
        bufp->chgIData(oldp+255,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[3]),32);
        bufp->chgIData(oldp+256,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[4]),32);
        bufp->chgIData(oldp+257,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[5]),32);
        bufp->chgIData(oldp+258,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[6]),32);
        bufp->chgIData(oldp+259,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[7]),32);
        bufp->chgIData(oldp+260,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[8]),32);
        bufp->chgIData(oldp+261,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[9]),32);
        bufp->chgIData(oldp+262,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[10]),32);
        bufp->chgIData(oldp+263,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[11]),32);
        bufp->chgIData(oldp+264,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[12]),32);
        bufp->chgIData(oldp+265,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[13]),32);
        bufp->chgIData(oldp+266,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[14]),32);
        bufp->chgIData(oldp+267,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[15]),32);
        bufp->chgIData(oldp+268,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[16]),32);
        bufp->chgIData(oldp+269,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[17]),32);
        bufp->chgIData(oldp+270,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[18]),32);
        bufp->chgIData(oldp+271,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[19]),32);
        bufp->chgIData(oldp+272,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[20]),32);
        bufp->chgIData(oldp+273,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[21]),32);
        bufp->chgIData(oldp+274,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[22]),32);
        bufp->chgIData(oldp+275,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[23]),32);
        bufp->chgIData(oldp+276,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[24]),32);
        bufp->chgIData(oldp+277,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[25]),32);
        bufp->chgIData(oldp+278,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[26]),32);
        bufp->chgIData(oldp+279,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[27]),32);
        bufp->chgIData(oldp+280,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[28]),32);
        bufp->chgIData(oldp+281,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[29]),32);
        bufp->chgIData(oldp+282,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[30]),32);
        bufp->chgIData(oldp+283,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[31]),32);
        bufp->chgIData(oldp+284,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                 [0x1eU]),32);
        bufp->chgIData(oldp+285,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                 [0x1fU]),32);
        bufp->chgCData(oldp+286,((0x0000000fU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                  [0x1dU])),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgQData(oldp+287,((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__OP3_FU)) 
                                   << 3U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_OUT)))),35);
        bufp->chgIData(oldp+289,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__OP3_FU),32);
        bufp->chgCData(oldp+290,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_OUT),3);
    }
    bufp->chgBit(oldp+291,(vlSelfRef.clk));
    bufp->chgBit(oldp+292,(vlSelfRef.reset));
    bufp->chgIData(oldp+293,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0U]),32);
    bufp->chgIData(oldp+294,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1U]),32);
    bufp->chgIData(oldp+295,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2U]),32);
    bufp->chgIData(oldp+296,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3U]),32);
    bufp->chgIData(oldp+297,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4U]),32);
    bufp->chgIData(oldp+298,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5U]),32);
    bufp->chgIData(oldp+299,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6U]),32);
    bufp->chgIData(oldp+300,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7U]),32);
    bufp->chgIData(oldp+301,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8U]),32);
    bufp->chgIData(oldp+302,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9U]),32);
    bufp->chgIData(oldp+303,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000000aU]),32);
    bufp->chgIData(oldp+304,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000000bU]),32);
    bufp->chgIData(oldp+305,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000000cU]),32);
    bufp->chgIData(oldp+306,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000000dU]),32);
    bufp->chgIData(oldp+307,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000000eU]),32);
    bufp->chgIData(oldp+308,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000000fU]),32);
    bufp->chgIData(oldp+309,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000010U]),32);
    bufp->chgIData(oldp+310,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000011U]),32);
    bufp->chgIData(oldp+311,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000012U]),32);
    bufp->chgIData(oldp+312,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000013U]),32);
    bufp->chgIData(oldp+313,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000014U]),32);
    bufp->chgIData(oldp+314,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000015U]),32);
    bufp->chgIData(oldp+315,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000016U]),32);
    bufp->chgIData(oldp+316,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000017U]),32);
    bufp->chgIData(oldp+317,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000018U]),32);
    bufp->chgIData(oldp+318,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000019U]),32);
    bufp->chgIData(oldp+319,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000001aU]),32);
    bufp->chgIData(oldp+320,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000001bU]),32);
    bufp->chgIData(oldp+321,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000001cU]),32);
    bufp->chgIData(oldp+322,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000001dU]),32);
    bufp->chgIData(oldp+323,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000001eU]),32);
    bufp->chgIData(oldp+324,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000001fU]),32);
    bufp->chgIData(oldp+325,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0U]),32);
    bufp->chgIData(oldp+326,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1U]),32);
    bufp->chgIData(oldp+327,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2U]),32);
    bufp->chgIData(oldp+328,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3U]),32);
    bufp->chgIData(oldp+329,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4U]),32);
    bufp->chgIData(oldp+330,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5U]),32);
    bufp->chgIData(oldp+331,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6U]),32);
    bufp->chgIData(oldp+332,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7U]),32);
}

void Vpipeline___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_cleanup\n"); );
    // Body
    Vpipeline___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline___024root*>(voidSelf);
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
