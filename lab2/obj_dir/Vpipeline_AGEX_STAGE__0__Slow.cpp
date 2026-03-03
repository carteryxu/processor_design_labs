// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline__pch.h"

VL_ATTR_COLD void Vpipeline_AGEX_STAGE___ctor_var_reset(Vpipeline_AGEX_STAGE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpipeline_AGEX_STAGE___ctor_var_reset\n"); );
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->__PVT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__from_MEM_to_AGEX = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 300658451733219232ull);
    vlSelf->__PVT__from_WB_to_AGEX = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1892670095873196568ull);
    VL_SCOPED_RAND_RESET_W(251, vlSelf->__PVT__from_DE_latch, __VscopeHash, 16451910673328309176ull);
    VL_SCOPED_RAND_RESET_W(175, vlSelf->__PVT__AGEX_latch_out, __VscopeHash, 17748630544321938342ull);
    VL_SCOPED_RAND_RESET_W(107, vlSelf->__PVT__from_AGEX_to_FE, __VscopeHash, 12927555927732673396ull);
    vlSelf->__PVT__from_AGEX_to_DE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2519706715303777601ull);
    VL_SCOPED_RAND_RESET_W(175, vlSelf->__PVT__AGEX_latch, __VscopeHash, 12537698124186343221ull);
    vlSelf->__PVT__aluout_AGEX = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1607728686057004369ull);
    vlSelf->__PVT__memaddr_AGEX = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16921098344740240819ull);
    vlSelf->total_branches = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3929381064792544440ull);
    vlSelf->correct_predictions = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18304963884686623052ull);
    vlSelf->__VdfgExtracted_h6ac6cdbe__0 = 0;
    vlSelf->__VdfgExtracted_h690ea6c9__0 = 0;
    vlSelf->__VdfgExtracted_h32f0a660__0 = 0;
    vlSelf->__VdfgExtracted_hbcc182c0__0 = 0;
    vlSelf->__VdfgRegularize_h3f620fe0_0_0 = 0;
    vlSelf->__VdfgRegularize_h3f620fe0_0_1 = 0;
}
