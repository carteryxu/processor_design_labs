// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline__pch.h"

VL_ATTR_COLD void Vpipeline_pipeline___eval_initial__TOP__pipeline(Vpipeline_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___eval_initial__TOP__pipeline\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(true, 32, 16384, 0, "/Users/carterxu/Desktop/CS3220/cs3220-labs-sp2026/lab2/test/towers/towers.mem"s
                 ,  &(vlSelfRef.__PVT__my_FE_stage__DOT__imem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 16384, 0, "/Users/carterxu/Desktop/CS3220/cs3220-labs-sp2026/lab2/test/towers/towers.mem"s
                 ,  &(vlSelfRef.__PVT__my_MEM_stage__DOT__dmem)
                 , 0, ~0ULL);
}

extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_h29143c0b_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_h5064a2f5_0;

VL_ATTR_COLD void Vpipeline_pipeline___stl_sequent__TOP__pipeline__0(Vpipeline_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___stl_sequent__TOP__pipeline__0\n"); );
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
    // Body
    vlSelfRef.my_DE_stage__DOT____VdfgExtracted_h54a4af44__0 
        = (((- (IData)((1U & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                              >> 9U)))) << 0x0000000bU) 
           | (0x000007ffU & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                              << 2U) | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        >> 0x0000001eU))));
    vlSelfRef.__PVT__my_DE_stage__DOT__regval_WB = 
        ((0x17U == (0x0000003fU & (vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                   >> 6U))) ? ((vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                << 0x0000001aU) 
                                               | (vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                  >> 6U))
          : ((vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
              << 0x0000001aU) | (vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                 >> 6U)));
    vlSelfRef.__PVT__my_FE_stage__DOT__inst_FE = vlSelfRef.__PVT__my_FE_stage__DOT__imem
        [(0x00003fffU & (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                         >> 2U))];
    vlSelfRef.__PVT__my_FE_stage__DOT__update_predictor_AGEX 
        = (IData)(((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                    >> 0x0000001aU) & (0U != (0x00000300U 
                                              & vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U]))));
    vlSelfRef.__PVT__my_FE_stage__DOT__pht_index_FE 
        = (0x000000ffU & ((vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                           >> 2U) ^ (IData)(vlSelfRef.__PVT__my_FE_stage__DOT__BHR)));
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_4 
        = (IData)((0x0000cc00U == (0x01c1fc00U & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])));
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_13 
        = (IData)((0x0140cc00U == (0x01c1fc00U & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])));
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_20 
        = (IData)(((0x00400000U == (0x01c00000U & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                   & (0U == (0x03f8U & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U]))));
    my_DE_stage__DOT____VdfgRegularize_h7155bcbd_0_16 
        = (IData)((0x01404c00U == (0x01c1fc00U & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])));
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

VL_ATTR_COLD void Vpipeline_pipeline___ctor_var_reset(Vpipeline_pipeline* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___ctor_var_reset\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__cycle_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 812857792956672393ull);
    vlSelf->__PVT__from_DE_to_FE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1414734384858919506ull);
    vlSelf->__PVT__from_AGEX_to_DE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2519706715303777601ull);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__imem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2590999655931444546ull);
    }
    vlSelf->__PVT__my_FE_stage__DOT__BHR = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7762396466406797407ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__PHT[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15617420004451046826ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__BTB_target[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5017358564135366813ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__BTB_tag[__Vi0] = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 170219732617448255ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__BTB_valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5173295637052624714ull);
    }
    vlSelf->__PVT__my_FE_stage__DOT__pht_index_FE = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14064115523883953833ull);
    VL_SCOPED_RAND_RESET_W(139, vlSelf->__PVT__my_FE_stage__DOT__FE_latch, __VscopeHash, 16724734215674187246ull);
    vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14704622217992474899ull);
    vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5511383234017988405ull);
    vlSelf->__PVT__my_FE_stage__DOT__inst_count_AGEX = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3794472240251782279ull);
    vlSelf->__PVT__my_FE_stage__DOT__inst_FE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2614456735871709498ull);
    vlSelf->__PVT__my_FE_stage__DOT__pcplus_FE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3959281638996983103ull);
    vlSelf->__PVT__my_FE_stage__DOT__br_target_AGEX = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10962988922985332400ull);
    vlSelf->__PVT__my_FE_stage__DOT__update_predictor_AGEX = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6224832950601673011ull);
    vlSelf->__PVT__my_FE_stage__DOT__unnamedblk1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5776656098319616114ull);
    vlSelf->__PVT__my_FE_stage__DOT__unnamedblk2__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6185495815363716569ull);
    vlSelf->my_DE_stage__DOT____Vxrand___1 = VL_SCOPED_RAND_RESET_ASSIGN_I(3, __VscopeHash, 12061010148572372012ull);
    vlSelf->my_DE_stage__DOT____Vxrand___0 = VL_SCOPED_RAND_RESET_ASSIGN_I(4, __VscopeHash, 7324809328672732923ull);
    VL_SCOPED_RAND_RESET_W(251, vlSelf->__PVT__my_DE_stage__DOT__DE_latch, __VscopeHash, 12720121764206633172ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__my_DE_stage__DOT__regs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2211754412344529817ull);
    }
    vlSelf->__PVT__my_DE_stage__DOT__op_I_DE = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18007936897921350699ull);
    vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11218727599284980111ull);
    vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 783089451810364172ull);
    vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1249650228049212677ull);
    vlSelf->__PVT__my_DE_stage__DOT__regval_WB = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5070650556380662180ull);
    vlSelf->__PVT__my_DE_stage__DOT__use_rs1_DE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3587661886766856571ull);
    vlSelf->__PVT__my_DE_stage__DOT__use_rs2_DE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12338438627132944225ull);
    vlSelf->__PVT__my_DE_stage__DOT__in_use_regs = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14209109425183318264ull);
    vlSelf->my_DE_stage__DOT____VdfgExtracted_h54a4af44__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->__PVT__my_MEM_stage__DOT__dmem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5716915382548216729ull);
    }
    VL_SCOPED_RAND_RESET_W(173, vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch, __VscopeHash, 13271297185850210100ull);
    VL_ZERO_RESET_W(139, vlSelf->__Vdly__my_FE_stage__DOT__FE_latch);
    vlSelf->__VdlyVal__my_MEM_stage__DOT__dmem__v0 = 0;
    vlSelf->__VdlyDim0__my_MEM_stage__DOT__dmem__v0 = 0;
    vlSelf->__VdlySet__my_MEM_stage__DOT__dmem__v0 = 0;
}
