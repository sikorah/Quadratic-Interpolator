// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vquadra_top__Syms.h"


void Vquadra_top___024root__trace_chg_0_sub_0(Vquadra_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vquadra_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_chg_0\n"); );
    // Body
    Vquadra_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_top___024root*>(voidSelf);
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vquadra_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vquadra_top___024root__trace_chg_0_sub_0(Vquadra_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_chg_0_sub_0\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.quadra_top__DOT__a),25);
        bufp->chgIData(oldp+1,(vlSelfRef.quadra_top__DOT__b),19);
        bufp->chgSData(oldp+2,(vlSelfRef.quadra_top__DOT__c),13);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+3,(vlSelfRef.quadra_top__DOT__dv_p0));
        bufp->chgBit(oldp+4,(vlSelfRef.quadra_top__DOT__dv_p1));
        bufp->chgBit(oldp+5,(vlSelfRef.quadra_top__DOT__dv_p2));
    }
    bufp->chgBit(oldp+6,(vlSelfRef.clk));
    bufp->chgBit(oldp+7,(vlSelfRef.rst_b));
    bufp->chgIData(oldp+8,(vlSelfRef.x),24);
    bufp->chgBit(oldp+9,(vlSelfRef.x_dv));
    bufp->chgIData(oldp+10,(vlSelfRef.y),25);
    bufp->chgBit(oldp+11,(vlSelfRef.y_dv));
    bufp->chgCData(oldp+12,((0x0000007fU & (vlSelfRef.x 
                                            >> 0x00000011U))),7);
    bufp->chgIData(oldp+13,((0x0001ffffU & vlSelfRef.x)),17);
    bufp->chgQData(oldp+14,((0x00000003ffffffffULL 
                             & ((QData)((IData)((0x0001ffffU 
                                                 & vlSelfRef.x))) 
                                * (QData)((IData)((0x0001ffffU 
                                                   & vlSelfRef.x)))))),34);
    bufp->chgIData(oldp+16,((0x01ffffffU & VL_SHIFTRS_III(29,29,32, 
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
                                                                                & vlSelfRef.x))))))))), 0x0000001eU))))))), 4U))),25);
    bufp->chgQData(oldp+17,((0x0000000fffffffffULL 
                             & VL_MULS_QQQ(36, (0x0000000fffffffffULL 
                                                & VL_EXTENDS_QI(36,19, vlSelfRef.quadra_top__DOT__b)), 
                                           (0x0000000fffffffffULL 
                                            & VL_EXTENDS_QI(36,18, 
                                                            (0x0001ffffU 
                                                             & vlSelfRef.x)))))),36);
    bufp->chgQData(oldp+19,((0x00007fffffffffffULL 
                             & VL_MULS_QQQ(47, (0x00007fffffffffffULL 
                                                & VL_EXTENDS_QI(47,13, (IData)(vlSelfRef.quadra_top__DOT__c))), 
                                           (0x00007fffffffffffULL 
                                            & VL_EXTENDS_QQ(47,35, 
                                                            (0x00000003ffffffffULL 
                                                             & ((QData)((IData)(
                                                                                (0x0001ffffU 
                                                                                & vlSelfRef.x))) 
                                                                * (QData)((IData)(
                                                                                (0x0001ffffU 
                                                                                & vlSelfRef.x)))))))))),47);
    bufp->chgIData(oldp+21,((0x1fffffffU & (VL_SHIFTL_III(29,29,32, 
                                                          VL_EXTENDS_II(29,25, vlSelfRef.quadra_top__DOT__a), 4U) 
                                            + ((IData)(
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
                                                                                & vlSelfRef.x))))))))), 0x0000001eU))))))),29);
    bufp->chgIData(oldp+22,((0x1fffffffU & ((IData)(8U) 
                                            + (VL_SHIFTL_III(29,29,32, 
                                                             VL_EXTENDS_II(29,25, vlSelfRef.quadra_top__DOT__a), 4U) 
                                               + ((IData)(
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
                                                                                & vlSelfRef.x))))))))), 0x0000001eU)))))))),29);
}

void Vquadra_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_cleanup\n"); );
    // Body
    Vquadra_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_top___024root*>(voidSelf);
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
