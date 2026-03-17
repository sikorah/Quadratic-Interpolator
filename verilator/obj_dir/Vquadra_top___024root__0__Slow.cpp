// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vquadra_top.h for the primary calling header

#include "Vquadra_top__pch.h"

VL_ATTR_COLD void Vquadra_top___024root___eval_static(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_static\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vquadra_top___024root___eval_initial(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_initial\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vquadra_top___024root___eval_final(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_final\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vquadra_top___024root___eval_phase__stl(Vquadra_top___024root* vlSelf);

VL_ATTR_COLD void Vquadra_top___024root___eval_settle(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_settle\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vquadra_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/home/sikorah/Workspace/rtl-model/quadra_top.vs", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vquadra_top___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vquadra_top___024root___eval_triggers_vec__stl(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_triggers_vec__stl\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vquadra_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vquadra_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vquadra_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<IData/*24:0*/, 128> Vquadra_top__ConstPool__TABLE_hadbf9c5f_0;
extern const VlUnpacked<IData/*18:0*/, 128> Vquadra_top__ConstPool__TABLE_hf28cae03_0;
extern const VlUnpacked<SData/*12:0*/, 128> Vquadra_top__ConstPool__TABLE_hd77967ae_0;

VL_ATTR_COLD void Vquadra_top___024root___stl_sequent__TOP__0(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___stl_sequent__TOP__0\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelfRef.y_dv = vlSelfRef.quadra_top__DOT__dv_p2;
    __Vtableidx1 = (0x0000007fU & (vlSelfRef.x >> 0x00000011U));
    vlSelfRef.quadra_top__DOT__a = Vquadra_top__ConstPool__TABLE_hadbf9c5f_0
        [__Vtableidx1];
    __Vtableidx2 = (0x0000007fU & (vlSelfRef.x >> 0x00000011U));
    vlSelfRef.quadra_top__DOT__b = Vquadra_top__ConstPool__TABLE_hf28cae03_0
        [__Vtableidx2];
    __Vtableidx3 = (0x0000007fU & (vlSelfRef.x >> 0x00000011U));
    vlSelfRef.quadra_top__DOT__c = Vquadra_top__ConstPool__TABLE_hd77967ae_0
        [__Vtableidx3];
    vlSelfRef.y = (0x01ffffffU & VL_SHIFTRS_III(29,29,32, 
                                                (0x1fffffffU 
                                                 & ((IData)(8U) 
                                                    + 
                                                    (VL_SHIFTL_III(29,29,32, 
                                                                   VL_EXTENDS_II(29,25, vlSelfRef.quadra_top__DOT__a), 4U) 
                                                     + 
                                                     ((IData)(
                                                              (0x0000000fffffffffULL 
                                                               & VL_SHIFTRS_QQI(36,36,32, 
                                                                                (0x0000000fffffffffULL 
                                                                                & VL_MULS_QQQ(36, 
                                                                                (0x0000000fffffffffULL 
                                                                                & VL_EXTENDS_QI(36,19, vlSelfRef.quadra_top__DOT__b)), 
                                                                                (0x0000000fffffffffULL 
                                                                                & VL_EXTENDS_QI(36,18, 
                                                                                (0x0001ffffU 
                                                                                & vlSelfRef.x))))), 0x0000000cU))) 
                                                      + (IData)(
                                                                (0x00007fffffffffffULL 
                                                                 & VL_SHIFTRS_QQI(47,47,32, 
                                                                                (0x00007fffffffffffULL 
                                                                                & VL_MULS_QQQ(47, 
                                                                                (0x00007fffffffffffULL 
                                                                                & VL_EXTENDS_QI(47,13, (IData)(vlSelfRef.quadra_top__DOT__c))), 
                                                                                (0x00007fffffffffffULL 
                                                                                & VL_EXTENDS_QQ(47,35, 
                                                                                (0x00000003ffffffffULL 
                                                                                & ((QData)((IData)(
                                                                                (0x0001ffffU 
                                                                                & vlSelfRef.x))) 
                                                                                * (QData)((IData)(
                                                                                (0x0001ffffU 
                                                                                & vlSelfRef.x))))))))), 0x0000001eU))))))), 4U));
}

VL_ATTR_COLD void Vquadra_top___024root____Vm_traceActivitySetAll(Vquadra_top___024root* vlSelf);

VL_ATTR_COLD void Vquadra_top___024root___eval_stl(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_stl\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vquadra_top___024root___stl_sequent__TOP__0(vlSelf);
        Vquadra_top___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vquadra_top___024root___eval_phase__stl(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___eval_phase__stl\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vquadra_top___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vquadra_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vquadra_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vquadra_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vquadra_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vquadra_top___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vquadra_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vquadra_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vquadra_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vquadra_top___024root____Vm_traceActivitySetAll(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root____Vm_traceActivitySetAll\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vquadra_top___024root___ctor_var_reset(Vquadra_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root___ctor_var_reset\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10091972653836523217ull);
    vlSelf->x = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9409450202036847209ull);
    vlSelf->x_dv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14872696912213263142ull);
    vlSelf->y = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 11123243248953317070ull);
    vlSelf->y_dv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8366897747037074999ull);
    vlSelf->quadra_top__DOT__dv_p0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14013508239310017797ull);
    vlSelf->quadra_top__DOT__dv_p1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2463099279522344007ull);
    vlSelf->quadra_top__DOT__dv_p2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16437965412510916100ull);
    vlSelf->quadra_top__DOT__a = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 1400132405883092656ull);
    vlSelf->quadra_top__DOT__b = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 9828453562698441935ull);
    vlSelf->quadra_top__DOT__c = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 8292862798293297936ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
