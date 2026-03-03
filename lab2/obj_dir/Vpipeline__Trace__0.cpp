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
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<6>/*191:0*/ __Vtemp_8;
    VlWide<6>/*191:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<8>/*255:0*/ __Vtemp_22;
    VlWide<5>/*159:0*/ __Vtemp_25;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
        bufp->chgWData(oldp+1,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch),139);
        bufp->chgWData(oldp+6,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),251);
        bufp->chgWData(oldp+14,(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch),175);
        bufp->chgWData(oldp+20,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),173);
        bufp->chgBit(oldp+26,(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE));
        __Vtemp_1[1U] = ((((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__VdfgRegularize_h3f620fe0_0_0)
                            ? ((3U == (3U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x0000000aU)))
                                ? 3U : ((IData)(1U) 
                                        + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            << 0x00000016U) 
                                           | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x0000000aU))))
                            : ((0U == (3U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x0000000aU)))
                                ? 0U : (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          << 0x00000016U) 
                                         | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x0000000aU)) 
                                        - (IData)(1U)))) 
                          << 0x0000001fU) | (IData)(
                                                    ((((QData)((IData)(
                                                                       ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                                         >> 0x0000001aU) 
                                                                        & (IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__VdfgRegularize_h3f620fe0_0_0)))) 
                                                       << 0x0000003eU) 
                                                      | (((QData)((IData)(
                                                                          (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                                           >> 0x0000001cU))) 
                                                          << 0x0000003aU) 
                                                         | (((QData)((IData)(
                                                                             (0x03ffffffU 
                                                                              & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U]))) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(
                                                                              ((0x00000200U 
                                                                                & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])
                                                                                ? vlSymsp->TOP__pipeline__my_AGEX_stage.__VdfgExtracted_hbcc182c0__0
                                                                                : vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX)))))) 
                                                     >> 0x00000020U)));
        __Vtemp_3[0U] = (IData)((((QData)((IData)((
                                                   (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                    >> 0x0000001aU) 
                                                   & (IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__VdfgRegularize_h3f620fe0_0_0)))) 
                                  << 0x0000003eU) | 
                                 (((QData)((IData)(
                                                   (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                    >> 0x0000001cU))) 
                                   << 0x0000003aU) 
                                  | (((QData)((IData)(
                                                      (0x03ffffffU 
                                                       & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U]))) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       ((0x00000200U 
                                                         & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])
                                                         ? vlSymsp->TOP__pipeline__my_AGEX_stage.__VdfgExtracted_hbcc182c0__0
                                                         : vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX)))))));
        __Vtemp_3[1U] = __Vtemp_1[1U];
        __Vtemp_3[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE)) 
                                    << 0x00000021U) 
                                   | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX)) 
                                       << 1U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__update_predictor_AGEX))))) 
                          << 9U) | ((0x000001feU & 
                                     (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      >> 0x0000000bU)) 
                                    | (1U & (((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__VdfgRegularize_h3f620fe0_0_0)
                                               ? ((3U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                       >> 0x0000000aU)))
                                                   ? 3U
                                                   : 
                                                  ((IData)(1U) 
                                                   + 
                                                   ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     << 0x00000016U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                       >> 0x0000000aU))))
                                               : ((0U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                       >> 0x0000000aU)))
                                                   ? 0U
                                                   : 
                                                  (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     << 0x00000016U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                       >> 0x0000000aU)) 
                                                   - (IData)(1U)))) 
                                             >> 1U))));
        __Vtemp_3[3U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE)) 
                                    << 0x00000021U) 
                                   | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX)) 
                                       << 1U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__update_predictor_AGEX))))) 
                          >> 0x00000017U) | ((IData)(
                                                     ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE)) 
                                                        << 0x00000021U) 
                                                       | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX)) 
                                                           << 1U) 
                                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__update_predictor_AGEX)))) 
                                                      >> 0x00000020U)) 
                                             << 9U));
        bufp->chgWData(oldp+27,(__Vtemp_3),107);
        bufp->chgBit(oldp+31,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE));
        bufp->chgQData(oldp+32,((((QData)((IData)((0x0000003fU 
                                                   & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U]))) 
                                  << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regval_WB)))),38);
        bufp->chgBit(oldp+34,((1U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                     >> 0x0000000aU))));
        bufp->chgIData(oldp+35,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                  << 0x00000016U) | 
                                 (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                  >> 0x0000000aU))),32);
        bufp->chgIData(oldp+36,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                  << 0x00000016U) | 
                                 (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                  >> 0x0000000aU))),32);
        bufp->chgIData(oldp+37,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                  << 0x00000016U) | 
                                 (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                  >> 0x0000000aU))),32);
        bufp->chgIData(oldp+38,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                  << 0x00000016U) | 
                                 (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                  >> 0x0000000aU))),32);
        bufp->chgCData(oldp+39,((0x000000ffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                >> 2U))),8);
        bufp->chgCData(oldp+40,((3U & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])),2);
        bufp->chgCData(oldp+41,((7U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 0x00000016U))),3);
        bufp->chgCData(oldp+42,((0x0000007fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                >> 3U))),7);
        bufp->chgCData(oldp+43,((0x0000007fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0x0000000aU))),7);
        bufp->chgCData(oldp+44,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
        bufp->chgCData(oldp+45,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
        bufp->chgCData(oldp+46,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
        bufp->chgIData(oldp+47,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                  ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_h54a4af44__0
                                  : ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                      ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_h54a4af44__0
                                      : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             >> 9U)))) 
                                              << 0x0000000bU) 
                                             | ((0x000007e0U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    << 2U)) 
                                                | (0x0000001fU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      >> 0x00000011U))))
                                          : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                              ? (((- (IData)(
                                                             (1U 
                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 >> 9U)))) 
                                                  << 0x0000000cU) 
                                                 | ((0x00000800U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                        >> 6U)) 
                                                    | ((0x000007e0U 
                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           << 2U)) 
                                                       | (0x0000001eU 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                             >> 0x00000011U)))))
                                              : ((3U 
                                                  == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                  ? 
                                                 (0xfffff000U 
                                                  & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      << 0x00000016U) 
                                                     | (0x003ff000U 
                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                           >> 0x0000000aU))))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                   >> 9U)))) 
                                                    << 0x00000014U) 
                                                   | ((((0x000001feU 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                            >> 0x00000015U)) 
                                                        | (1U 
                                                           & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                              >> 0x0000001eU))) 
                                                       << 0x0000000bU) 
                                                      | (0x000007feU 
                                                         & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             << 2U) 
                                                            | (2U 
                                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 0x0000001eU))))))
                                                   : 0U))))))),32);
        bufp->chgCData(oldp+48,((0x0000001fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0x00000019U))),5);
        bufp->chgCData(oldp+49,((0x0000001fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x0000001eU)))),5);
        bufp->chgCData(oldp+50,((0x0000001fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0x00000011U))),5);
        bufp->chgBit(oldp+51,(((0x1cU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((0x1dU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | ((0x1eU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                     | ((0x1fU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                        | ((0x20U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                           | (0x21U 
                                              == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))))));
        bufp->chgBit(oldp+52,(((0x19U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((0x1aU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | (0x1bU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))));
        bufp->chgBit(oldp+53,((0x17U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
        bufp->chgBit(oldp+54,((0x18U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
        bufp->chgBit(oldp+55,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE));
        bufp->chgBit(oldp+56,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                     >> 5U))));
        bufp->chgCData(oldp+57,((0x0000001fU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),5);
        bufp->chgIData(oldp+58,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regval_WB),32);
        bufp->chgBit(oldp+59,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE));
        bufp->chgBit(oldp+60,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE));
        bufp->chgIData(oldp+61,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs),32);
        bufp->chgCData(oldp+62,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BHR),8);
        bufp->chgIData(oldp+63,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_target[0]),32);
        bufp->chgIData(oldp+64,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_target[1]),32);
        bufp->chgIData(oldp+65,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_target[2]),32);
        bufp->chgIData(oldp+66,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_target[3]),32);
        bufp->chgIData(oldp+67,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_target[4]),32);
        bufp->chgIData(oldp+68,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_target[5]),32);
        bufp->chgIData(oldp+69,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_target[6]),32);
        bufp->chgIData(oldp+70,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_target[7]),32);
        bufp->chgIData(oldp+71,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_target[8]),32);
        bufp->chgIData(oldp+72,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_target[9]),32);
        bufp->chgIData(oldp+73,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_target[10]),32);
        bufp->chgIData(oldp+74,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_target[11]),32);
        bufp->chgIData(oldp+75,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_target[12]),32);
        bufp->chgIData(oldp+76,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_target[13]),32);
        bufp->chgIData(oldp+77,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_target[14]),32);
        bufp->chgIData(oldp+78,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_target[15]),32);
        bufp->chgIData(oldp+79,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_tag[0]),26);
        bufp->chgIData(oldp+80,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_tag[1]),26);
        bufp->chgIData(oldp+81,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_tag[2]),26);
        bufp->chgIData(oldp+82,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_tag[3]),26);
        bufp->chgIData(oldp+83,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_tag[4]),26);
        bufp->chgIData(oldp+84,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_tag[5]),26);
        bufp->chgIData(oldp+85,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_tag[6]),26);
        bufp->chgIData(oldp+86,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_tag[7]),26);
        bufp->chgIData(oldp+87,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_tag[8]),26);
        bufp->chgIData(oldp+88,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_tag[9]),26);
        bufp->chgIData(oldp+89,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_tag[10]),26);
        bufp->chgIData(oldp+90,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_tag[11]),26);
        bufp->chgIData(oldp+91,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_tag[12]),26);
        bufp->chgIData(oldp+92,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_tag[13]),26);
        bufp->chgIData(oldp+93,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_tag[14]),26);
        bufp->chgIData(oldp+94,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_tag[15]),26);
        bufp->chgBit(oldp+95,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_valid[0]));
        bufp->chgBit(oldp+96,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_valid[1]));
        bufp->chgBit(oldp+97,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_valid[2]));
        bufp->chgBit(oldp+98,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_valid[3]));
        bufp->chgBit(oldp+99,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_valid[4]));
        bufp->chgBit(oldp+100,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_valid[5]));
        bufp->chgBit(oldp+101,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_valid[6]));
        bufp->chgBit(oldp+102,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_valid[7]));
        bufp->chgBit(oldp+103,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_valid[8]));
        bufp->chgBit(oldp+104,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_valid[9]));
        bufp->chgBit(oldp+105,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_valid[10]));
        bufp->chgBit(oldp+106,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_valid[11]));
        bufp->chgBit(oldp+107,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_valid[12]));
        bufp->chgBit(oldp+108,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_valid[13]));
        bufp->chgBit(oldp+109,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_valid[14]));
        bufp->chgBit(oldp+110,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_valid[15]));
        bufp->chgCData(oldp+111,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht_index_FE),8);
        bufp->chgCData(oldp+112,((0x0000000fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                 >> 2U))),4);
        bufp->chgBit(oldp+113,((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_valid
                                [(0x0000000fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                 >> 2U))] 
                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_tag
                                   [(0x0000000fU & 
                                     (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                      >> 2U))] == (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                   >> 6U)))));
        bufp->chgBit(oldp+114,((1U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT
                                      [vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht_index_FE] 
                                      >> 1U))));
        bufp->chgIData(oldp+115,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_target
                                 [(0x0000000fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                  >> 2U))]),32);
        bufp->chgIData(oldp+116,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
        bufp->chgIData(oldp+117,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE),32);
        bufp->chgIData(oldp+118,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE),32);
        bufp->chgIData(oldp+119,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcplus_FE),32);
        bufp->chgIData(oldp+120,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX),32);
        bufp->chgBit(oldp+121,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__update_predictor_AGEX));
        bufp->chgCData(oldp+122,((0x000000ffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x0000000cU))),8);
        bufp->chgCData(oldp+123,((3U & ((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__VdfgRegularize_h3f620fe0_0_0)
                                         ? ((3U == 
                                             (3U & 
                                              (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0x0000000aU)))
                                             ? 3U : 
                                            ((IData)(1U) 
                                             + ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 << 0x00000016U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0x0000000aU))))
                                         : ((0U == 
                                             (3U & 
                                              (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0x0000000aU)))
                                             ? 0U : 
                                            (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               << 0x00000016U) 
                                              | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x0000000aU)) 
                                             - (IData)(1U)))))),2);
        bufp->chgBit(oldp+124,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                 >> 0x0000001aU) & (IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__VdfgRegularize_h3f620fe0_0_0))));
        bufp->chgCData(oldp+125,((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                  >> 0x0000001cU)),4);
        bufp->chgIData(oldp+126,((0x03ffffffU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U])),26);
        bufp->chgIData(oldp+127,(((0x00000200U & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])
                                   ? vlSymsp->TOP__pipeline__my_AGEX_stage.__VdfgExtracted_hbcc182c0__0
                                   : vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX)),32);
        bufp->chgIData(oldp+128,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+129,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+130,((1U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                      >> 0x0000000eU))));
        __Vtemp_8[0U] = (((IData)((((QData)((IData)(
                                                    vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                    [
                                                    (0x00003fffU 
                                                     & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                        >> 0x0000000aU))])) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                       << 0x00000018U) 
                                                      | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                         >> 8U)))))) 
                          << 6U) | (0x0000003fU & vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U]));
        __Vtemp_8[1U] = (((IData)((((QData)((IData)(
                                                    vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                    [
                                                    (0x00003fffU 
                                                     & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                        >> 0x0000000aU))])) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                       << 0x00000018U) 
                                                      | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                         >> 8U)))))) 
                          >> 0x0000001aU) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
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
        __Vtemp_8[2U] = (((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                           << 0x0000001eU) | (0x3fffffc0U 
                                              & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                                 >> 2U))) 
                         | ((IData)(((((QData)((IData)(
                                                       vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
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
                            >> 0x0000001aU));
        __Vtemp_8[3U] = ((0x0000003fU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                         >> 2U)) | 
                         ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                           << 0x0000001eU) | (0x3fffffc0U 
                                              & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                                 >> 2U))));
        __Vtemp_8[4U] = ((0x0000003fU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                         >> 2U)) | 
                         ((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                           << 0x0000001eU) | (0x3fffffc0U 
                                              & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                                 >> 2U))));
        __Vtemp_8[5U] = ((0x0000003fU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                         >> 2U)) | 
                         (0x00001fc0U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                         >> 2U)));
        bufp->chgWData(oldp+131,(__Vtemp_8),173);
        bufp->chgCData(oldp+137,((0x0000003fU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                                 >> 8U))),6);
        bufp->chgIData(oldp+138,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                   << 0x00000018U) 
                                  | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                     >> 8U))),32);
        bufp->chgIData(oldp+139,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                   << 0x00000012U) 
                                  | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                     >> 0x0000000eU))),32);
        bufp->chgIData(oldp+140,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                   << 0x00000012U) 
                                  | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                     >> 0x0000000eU))),32);
        bufp->chgBit(oldp+141,((1U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                      >> 7U))));
        bufp->chgIData(oldp+142,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                   << 0x00000018U) 
                                  | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                     >> 8U))),32);
        bufp->chgCData(oldp+143,((0x0000001fU & vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U])),5);
        bufp->chgBit(oldp+144,((1U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                      >> 5U))));
        bufp->chgIData(oldp+145,(((vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                   << 0x00000018U) 
                                  | (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                     >> 8U))),32);
        bufp->chgIData(oldp+146,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                 [(0x00003fffU & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                  >> 0x0000000aU))]),32);
        bufp->chgBit(oldp+147,((1U & (vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                      >> 6U))));
        bufp->chgBit(oldp+148,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                      >> 0x0000000cU))));
        bufp->chgCData(oldp+149,((0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                                 >> 6U))),6);
        bufp->chgIData(oldp+150,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                   << 0x00000014U) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                     >> 0x0000000cU))),32);
        bufp->chgIData(oldp+151,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                   << 0x00000014U) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                     >> 0x0000000cU))),32);
        bufp->chgIData(oldp+152,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                   << 0x0000001aU) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                     >> 6U))),32);
        bufp->chgIData(oldp+153,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                   << 0x0000001aU) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                     >> 6U))),32);
        bufp->chgIData(oldp+154,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                   << 0x0000001aU) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                     >> 6U))),32);
        __Vtemp_14[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__aluout_AGEX)))) 
                           << 8U) | (0x000000ffU & 
                                     vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]));
        __Vtemp_14[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__aluout_AGEX)))) 
                           >> 0x00000018U) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__aluout_AGEX))) 
                                                       >> 0x00000020U)) 
                                              << 8U));
        __Vtemp_14[2U] = (((IData)((0x0000003fffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                        << 0x0000000cU) 
                                       | ((QData)((IData)(
                                                          vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                          >> 0x00000014U)))) 
                           << 8U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__aluout_AGEX))) 
                                              >> 0x00000020U)) 
                                     >> 0x00000018U));
        __Vtemp_14[3U] = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                            << 0x00000014U) | (0x000fc000U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0x0000000cU))) 
                          | (((IData)((0x0000003fffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                           << 0x0000000cU) 
                                          | ((QData)((IData)(
                                                             vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                             >> 0x00000014U)))) 
                              >> 0x00000018U) | ((IData)(
                                                         ((0x0000003fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                               << 0x0000000cU) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                                                 >> 0x00000014U))) 
                                                          >> 0x00000020U)) 
                                                 << 8U)));
        __Vtemp_14[4U] = ((0x00003fffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                          >> 0x0000000cU)) 
                          | ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                              << 0x00000014U) | (0x000fc000U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                    >> 0x0000000cU))));
        __Vtemp_14[5U] = ((0x00003fffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                          >> 0x0000000cU)) 
                          | (0x00004000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                            >> 0x0000000cU)));
        bufp->chgWData(oldp+155,(__Vtemp_14),175);
        bufp->chgBit(oldp+161,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                      >> 0x0000001aU))));
        bufp->chgIData(oldp+162,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                   << 6U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             >> 0x0000001aU))),32);
        bufp->chgIData(oldp+163,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                   << 6U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x0000001aU))),32);
        bufp->chgIData(oldp+164,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                   << 0x0000000cU) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                     >> 0x00000014U))),32);
        bufp->chgIData(oldp+165,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   << 6U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x0000001aU))),32);
        bufp->chgCData(oldp+166,((0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0x00000014U))),6);
        bufp->chgBit(oldp+167,(((0x1cU == (0x0000003fU 
                                           & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              >> 0x00000014U)))
                                 ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      << 0x00000016U) 
                                     | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        >> 0x0000000aU)) 
                                    == ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                         << 0x00000016U) 
                                        | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 0x0000000aU)))
                                 : ((0x1dU == (0x0000003fU 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0x00000014U)))
                                     ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          << 0x00000016U) 
                                         | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                            >> 0x0000000aU)) 
                                        != ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                             << 0x00000016U) 
                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               >> 0x0000000aU)))
                                     : ((0x1eU == (0x0000003fU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 0x00000014U)))
                                         ? (IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__VdfgExtracted_h6ac6cdbe__0)
                                         : ((0x1fU 
                                             == (0x0000003fU 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 0x00000014U)))
                                             ? VL_GTES_III(32, 
                                                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                             << 0x00000016U) 
                                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                               >> 0x0000000aU)), 
                                                           ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                             << 0x00000016U) 
                                                            | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                               >> 0x0000000aU)))
                                             : ((0x20U 
                                                 == 
                                                 (0x0000003fU 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                     >> 0x00000014U)))
                                                 ? (IData)(vlSymsp->TOP__pipeline__my_AGEX_stage.__VdfgExtracted_h690ea6c9__0)
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
                                                                   >> 0x0000000aU))))))))))));
        bufp->chgCData(oldp+168,((3U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        >> 0x0000000aU))),2);
        bufp->chgBit(oldp+169,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                      >> 9U))));
        bufp->chgBit(oldp+170,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                      >> 8U))));
        bufp->chgBit(oldp+171,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                      >> 7U))));
        bufp->chgBit(oldp+172,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                      >> 6U))));
        bufp->chgBit(oldp+173,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                      >> 5U))));
        bufp->chgCData(oldp+174,((0x0000001fU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])),5);
        bufp->chgIData(oldp+175,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                   << 0x00000016U) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                     >> 0x0000000aU))),32);
        bufp->chgIData(oldp+176,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                   << 0x00000016U) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                     >> 0x0000000aU))),32);
        bufp->chgIData(oldp+177,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   << 0x00000016U) 
                                  | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                     >> 0x0000000aU))),32);
        bufp->chgIData(oldp+178,(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__aluout_AGEX),32);
        bufp->chgIData(oldp+179,(vlSymsp->TOP__pipeline__my_AGEX_stage.__PVT__memaddr_AGEX),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        __Vtemp_20[0U] = (((IData)((((QData)((IData)(
                                                     vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                     [
                                                     (0x0000001fU 
                                                      & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                          << 2U) 
                                                         | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                            >> 0x0000001eU)))])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      ((1U 
                                                        == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                        ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_h54a4af44__0
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                         ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_h54a4af44__0
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                          ? 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                          >> 9U)))) 
                                                           << 0x0000000bU) 
                                                          | ((0x000007e0U 
                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 << 2U)) 
                                                             | (0x0000001fU 
                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                   >> 0x00000011U))))
                                                          : 
                                                         ((5U 
                                                           == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                           ? 
                                                          (((- (IData)(
                                                                       (1U 
                                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                           >> 9U)))) 
                                                            << 0x0000000cU) 
                                                           | ((0x00000800U 
                                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 6U)) 
                                                              | ((0x000007e0U 
                                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                     << 2U)) 
                                                                 | (0x0000001eU 
                                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                       >> 0x00000011U)))))
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                            ? 
                                                           (0xfffff000U 
                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                << 0x00000016U) 
                                                               | (0x003ff000U 
                                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                     >> 0x0000000aU))))
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                             ? 
                                                            (((- (IData)(
                                                                         (1U 
                                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             >> 9U)))) 
                                                              << 0x00000014U) 
                                                             | ((((0x000001feU 
                                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                      >> 0x00000015U)) 
                                                                  | (1U 
                                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                        >> 0x0000001eU))) 
                                                                 << 0x0000000bU) 
                                                                | (0x000007feU 
                                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                       << 2U) 
                                                                      | (2U 
                                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                            >> 0x0000001eU))))))
                                                             : 0U)))))))))) 
                           << 0x0000000aU) | (((((0x1cU 
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
                                                << 9U) 
                                               | ((((0x19U 
                                                     == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                    | ((0x1aU 
                                                        == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                       | (0x1bU 
                                                          == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                   << 8U) 
                                                  | ((0x17U 
                                                      == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                     << 7U))) 
                                              | (((0x18U 
                                                   == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                  << 6U) 
                                                 | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE) 
                                                     << 5U) 
                                                    | (0x0000001fU 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          >> 0x00000011U))))));
        __Vtemp_20[1U] = (((IData)((((QData)((IData)(
                                                     vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                     [
                                                     (0x0000001fU 
                                                      & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                          << 2U) 
                                                         | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                            >> 0x0000001eU)))])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      ((1U 
                                                        == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                        ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_h54a4af44__0
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                         ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_h54a4af44__0
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                          ? 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                          >> 9U)))) 
                                                           << 0x0000000bU) 
                                                          | ((0x000007e0U 
                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 << 2U)) 
                                                             | (0x0000001fU 
                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                   >> 0x00000011U))))
                                                          : 
                                                         ((5U 
                                                           == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                           ? 
                                                          (((- (IData)(
                                                                       (1U 
                                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                           >> 9U)))) 
                                                            << 0x0000000cU) 
                                                           | ((0x00000800U 
                                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 6U)) 
                                                              | ((0x000007e0U 
                                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                     << 2U)) 
                                                                 | (0x0000001eU 
                                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                       >> 0x00000011U)))))
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                            ? 
                                                           (0xfffff000U 
                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                << 0x00000016U) 
                                                               | (0x003ff000U 
                                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                     >> 0x0000000aU))))
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                             ? 
                                                            (((- (IData)(
                                                                         (1U 
                                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             >> 9U)))) 
                                                              << 0x00000014U) 
                                                             | ((((0x000001feU 
                                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                      >> 0x00000015U)) 
                                                                  | (1U 
                                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                        >> 0x0000001eU))) 
                                                                 << 0x0000000bU) 
                                                                | (0x000007feU 
                                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                       << 2U) 
                                                                      | (2U 
                                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                            >> 0x0000001eU))))))
                                                             : 0U)))))))))) 
                           >> 0x00000016U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                                         [
                                                                         (0x0000001fU 
                                                                          & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                              << 2U) 
                                                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000001eU)))])) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          ((1U 
                                                                            == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                            ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_h54a4af44__0
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                             ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_h54a4af44__0
                                                                             : 
                                                                            ((4U 
                                                                              == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                              ? 
                                                                             (((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 9U)))) 
                                                                               << 0x0000000bU) 
                                                                              | ((0x000007e0U 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 2U)) 
                                                                                | (0x0000001fU 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x00000011U))))
                                                                              : 
                                                                             ((5U 
                                                                               == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                               ? 
                                                                              (((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 9U)))) 
                                                                                << 0x0000000cU) 
                                                                               | ((0x00000800U 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 6U)) 
                                                                                | ((0x000007e0U 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 2U)) 
                                                                                | (0x0000001eU 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x00000011U)))))
                                                                               : 
                                                                              ((3U 
                                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                                ? 
                                                                               (0xfffff000U 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 0x00000016U) 
                                                                                | (0x003ff000U 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000000aU))))
                                                                                : 
                                                                               ((2U 
                                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                                 ? 
                                                                                (((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 9U)))) 
                                                                                << 0x00000014U) 
                                                                                | ((((0x000001feU 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x00000015U)) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000001eU))) 
                                                                                << 0x0000000bU) 
                                                                                | (0x000007feU 
                                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                << 2U) 
                                                                                | (2U 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x0000001eU))))))
                                                                                 : 0U))))))))) 
                                                       >> 0x00000020U)) 
                                              << 0x0000000aU));
        __Vtemp_20[2U] = ((IData)(((((QData)((IData)(
                                                     vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                                     [
                                                     (0x0000001fU 
                                                      & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                          << 2U) 
                                                         | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                            >> 0x0000001eU)))])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      ((1U 
                                                        == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                        ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_h54a4af44__0
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                         ? vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgExtracted_h54a4af44__0
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                          ? 
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                          >> 9U)))) 
                                                           << 0x0000000bU) 
                                                          | ((0x000007e0U 
                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 << 2U)) 
                                                             | (0x0000001fU 
                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                   >> 0x00000011U))))
                                                          : 
                                                         ((5U 
                                                           == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                           ? 
                                                          (((- (IData)(
                                                                       (1U 
                                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                           >> 9U)))) 
                                                            << 0x0000000cU) 
                                                           | ((0x00000800U 
                                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 6U)) 
                                                              | ((0x000007e0U 
                                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                     << 2U)) 
                                                                 | (0x0000001eU 
                                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                       >> 0x00000011U)))))
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                            ? 
                                                           (0xfffff000U 
                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                << 0x00000016U) 
                                                               | (0x003ff000U 
                                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                     >> 0x0000000aU))))
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                             ? 
                                                            (((- (IData)(
                                                                         (1U 
                                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             >> 9U)))) 
                                                              << 0x00000014U) 
                                                             | ((((0x000001feU 
                                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                      >> 0x00000015U)) 
                                                                  | (1U 
                                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                        >> 0x0000001eU))) 
                                                                 << 0x0000000bU) 
                                                                | (0x000007feU 
                                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                       << 2U) 
                                                                      | (2U 
                                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                            >> 0x0000001eU))))))
                                                             : 0U))))))))) 
                                   >> 0x00000020U)) 
                          >> 0x00000016U);
        __Vtemp_22[0U] = __Vtemp_20[0U];
        __Vtemp_22[1U] = __Vtemp_20[1U];
        __Vtemp_22[2U] = ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                           [(0x0000001fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 0x00000019U))] 
                           << 0x0000000aU) | __Vtemp_20[2U]);
        __Vtemp_22[3U] = ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                           [(0x0000001fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 0x00000019U))] 
                           >> 0x00000016U) | ((IData)(
                                                      (0x000003ffffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(
                                                                            vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U]))))) 
                                              << 0x0000000aU));
        __Vtemp_22[4U] = (((((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                              << 0x0000001cU) | (0x0fffffc0U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                    >> 4U))) 
                            | (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                           << 0x00000014U) | (((IData)(
                                                       (0x000003ffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(
                                                                             vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U]))))) 
                                               >> 0x00000016U) 
                                              | ((IData)(
                                                         ((0x000003ffffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                                               << 0x00000020U) 
                                                              | (QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])))) 
                                                          >> 0x00000020U)) 
                                                 << 0x0000000aU)));
        __Vtemp_22[5U] = (((((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                              << 0x0000001cU) | (0x0fffffc0U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                    >> 4U))) 
                            | (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                           >> 0x0000000cU) | (((0x0000003fU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                   >> 4U)) 
                                               | ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   << 0x0000001cU) 
                                                  | (0x0fffffc0U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                        >> 4U)))) 
                                              << 0x00000014U));
        __Vtemp_22[6U] = ((((0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                            >> 4U)) 
                            | ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                << 0x0000001cU) | (0x0fffffc0U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                      >> 4U)))) 
                           >> 0x0000000cU) | (((0x0000003fU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 4U)) 
                                               | ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   << 0x0000001cU) 
                                                  | (0x0fffffc0U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                        >> 4U)))) 
                                              << 0x00000014U));
        __Vtemp_22[7U] = ((((0x0000003fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 4U)) 
                            | ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                << 0x0000001cU) | (0x0fffffc0U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      >> 4U)))) 
                           >> 0x0000000cU) | (((0x0000003fU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   >> 4U)) 
                                               | (0x00000040U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     >> 4U))) 
                                              << 0x00000014U));
        bufp->chgWData(oldp+180,(__Vtemp_22),251);
        bufp->chgIData(oldp+188,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                 [(0x0000001fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x00000019U))]),32);
        bufp->chgIData(oldp+189,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs
                                 [(0x0000001fU & ((
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   << 2U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 0x0000001eU)))]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+190,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[0]),32);
        bufp->chgIData(oldp+191,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[1]),32);
        bufp->chgIData(oldp+192,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[2]),32);
        bufp->chgIData(oldp+193,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[3]),32);
        bufp->chgIData(oldp+194,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[4]),32);
        bufp->chgIData(oldp+195,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[5]),32);
        bufp->chgIData(oldp+196,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[6]),32);
        bufp->chgIData(oldp+197,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[7]),32);
        bufp->chgIData(oldp+198,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[8]),32);
        bufp->chgIData(oldp+199,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[9]),32);
        bufp->chgIData(oldp+200,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[10]),32);
        bufp->chgIData(oldp+201,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[11]),32);
        bufp->chgIData(oldp+202,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[12]),32);
        bufp->chgIData(oldp+203,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[13]),32);
        bufp->chgIData(oldp+204,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[14]),32);
        bufp->chgIData(oldp+205,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[15]),32);
        bufp->chgIData(oldp+206,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[16]),32);
        bufp->chgIData(oldp+207,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[17]),32);
        bufp->chgIData(oldp+208,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[18]),32);
        bufp->chgIData(oldp+209,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[19]),32);
        bufp->chgIData(oldp+210,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[20]),32);
        bufp->chgIData(oldp+211,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[21]),32);
        bufp->chgIData(oldp+212,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[22]),32);
        bufp->chgIData(oldp+213,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[23]),32);
        bufp->chgIData(oldp+214,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[24]),32);
        bufp->chgIData(oldp+215,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[25]),32);
        bufp->chgIData(oldp+216,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[26]),32);
        bufp->chgIData(oldp+217,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[27]),32);
        bufp->chgIData(oldp+218,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[28]),32);
        bufp->chgIData(oldp+219,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[29]),32);
        bufp->chgIData(oldp+220,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[30]),32);
        bufp->chgIData(oldp+221,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__regs[31]),32);
        bufp->chgIData(oldp+222,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+223,(vlSelfRef.clk));
    bufp->chgBit(oldp+224,(vlSelfRef.reset));
    bufp->chgBit(oldp+225,(((~ ((IData)(vlSelfRef.reset) 
                                | ((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE) 
                                   | (IData)(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE)))) 
                            & (0U != vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE))));
    __Vtemp_25[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcplus_FE)) 
                                 << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE)))) 
                       << 0x0000000aU) | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht_index_FE) 
                                           << 2U) | 
                                          vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT
                                          [vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pht_index_FE]));
    __Vtemp_25[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcplus_FE)) 
                                 << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE)))) 
                       >> 0x00000016U) | ((IData)((
                                                   (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcplus_FE)) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE))) 
                                                   >> 0x00000020U)) 
                                          << 0x0000000aU));
    __Vtemp_25[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                                 << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                       << 0x0000000aU) | ((IData)((
                                                   (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcplus_FE)) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_count_FE))) 
                                                   >> 0x00000020U)) 
                                          >> 0x00000016U));
    __Vtemp_25[3U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                                 << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                       >> 0x00000016U) | ((IData)((
                                                   (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                   >> 0x00000020U)) 
                                          << 0x0000000aU));
    __Vtemp_25[4U] = (((IData)(((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                                  << 0x00000020U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                >> 0x00000020U)) >> 0x00000016U) 
                      | (((~ ((IData)(vlSelfRef.reset) 
                              | ((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE) 
                                 | (IData)(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE)))) 
                          & (0U != vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                         << 0x0000000aU));
    bufp->chgWData(oldp+226,(__Vtemp_25),139);
    bufp->chgIData(oldp+231,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0U]),32);
    bufp->chgIData(oldp+232,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1U]),32);
    bufp->chgIData(oldp+233,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2U]),32);
    bufp->chgIData(oldp+234,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3U]),32);
    bufp->chgIData(oldp+235,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4U]),32);
    bufp->chgIData(oldp+236,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5U]),32);
    bufp->chgIData(oldp+237,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6U]),32);
    bufp->chgIData(oldp+238,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7U]),32);
    bufp->chgIData(oldp+239,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8U]),32);
    bufp->chgIData(oldp+240,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9U]),32);
    bufp->chgIData(oldp+241,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000000aU]),32);
    bufp->chgIData(oldp+242,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000000bU]),32);
    bufp->chgIData(oldp+243,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000000cU]),32);
    bufp->chgIData(oldp+244,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000000dU]),32);
    bufp->chgIData(oldp+245,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000000eU]),32);
    bufp->chgIData(oldp+246,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000000fU]),32);
    bufp->chgIData(oldp+247,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000010U]),32);
    bufp->chgIData(oldp+248,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000011U]),32);
    bufp->chgIData(oldp+249,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000012U]),32);
    bufp->chgIData(oldp+250,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000013U]),32);
    bufp->chgIData(oldp+251,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000014U]),32);
    bufp->chgIData(oldp+252,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000015U]),32);
    bufp->chgIData(oldp+253,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000016U]),32);
    bufp->chgIData(oldp+254,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000017U]),32);
    bufp->chgIData(oldp+255,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000018U]),32);
    bufp->chgIData(oldp+256,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x00000019U]),32);
    bufp->chgIData(oldp+257,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000001aU]),32);
    bufp->chgIData(oldp+258,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000001bU]),32);
    bufp->chgIData(oldp+259,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000001cU]),32);
    bufp->chgIData(oldp+260,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000001dU]),32);
    bufp->chgIData(oldp+261,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000001eU]),32);
    bufp->chgIData(oldp+262,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x0000001fU]),32);
    bufp->chgIData(oldp+263,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0U]),32);
    bufp->chgIData(oldp+264,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1U]),32);
    bufp->chgIData(oldp+265,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2U]),32);
    bufp->chgIData(oldp+266,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3U]),32);
    bufp->chgIData(oldp+267,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4U]),32);
    bufp->chgIData(oldp+268,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5U]),32);
    bufp->chgIData(oldp+269,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6U]),32);
    bufp->chgIData(oldp+270,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7U]),32);
    bufp->chgIData(oldp+271,(vlSymsp->TOP__pipeline__my_AGEX_stage.total_branches),32);
    bufp->chgIData(oldp+272,(vlSymsp->TOP__pipeline__my_AGEX_stage.correct_predictions),32);
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
}
