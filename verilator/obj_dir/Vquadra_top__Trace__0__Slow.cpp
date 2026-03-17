// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vquadra_top__Syms.h"


VL_ATTR_COLD void Vquadra_top___024root__trace_init_sub__TOP____024unit__0(Vquadra_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vquadra_top___024root__trace_init_sub__TOP__0(Vquadra_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_init_sub__TOP__0\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    VL_TRACE_DECL_BIT(tracep,c+6,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+7,0,"rst_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BIT(tracep,c+9,0,"x_dv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"y_dv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    tracep->popPrefix();
    tracep->pushPrefix("$unit", VerilatedTracePrefixType::SCOPE_MODULE);
    Vquadra_top___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("quadra_top", VerilatedTracePrefixType::SCOPE_MODULE);
    VL_TRACE_DECL_BIT(tracep,c+6,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+7,0,"rst_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 23,0);
    VL_TRACE_DECL_BIT(tracep,c+9,0,"x_dv",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"y_dv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"dv_p0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"dv_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"dv_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_BUS(tracep,c+12,0,"x1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+13,0,"x2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_QUAD(tracep,c+14,0,"sq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BUS(tracep,c+16,0,"y_quadra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    tracep->pushPrefix("u_lut", VerilatedTracePrefixType::SCOPE_MODULE);
    VL_TRACE_DECL_BUS(tracep,c+12,0,"x1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 12,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_quadra", VerilatedTracePrefixType::SCOPE_MODULE);
    VL_TRACE_DECL_BUS(tracep,c+13,0,"x2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 18,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 12,0);
    VL_TRACE_DECL_QUAD(tracep,c+14,0,"sq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    VL_TRACE_DECL_BUS(tracep,c+16,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"t0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 24,0);
    VL_TRACE_DECL_QUAD(tracep,c+17,0,"t1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_QUAD(tracep,c+19,0,"t2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 46,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"sum_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 28,0);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"sum_s_rounded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 28,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_square", VerilatedTracePrefixType::SCOPE_MODULE);
    VL_TRACE_DECL_BUS(tracep,c+13,0,"x2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 16,0);
    VL_TRACE_DECL_QUAD(tracep,c+14,0,"sq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 33,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vquadra_top___024root__trace_init_sub__TOP____024unit__0(Vquadra_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_init_sub__TOP____024unit__0\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_DECL_BUS(tracep,c+23,0,"X_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"X_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+25,0,"X_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"Y_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"Y_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+27,0,"Y_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"X1_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+28,0,"X1_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+29,0,"X1_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"X2_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"X2_J",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+32,0,"X2_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+32,0,"X2_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"SQ_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+33,0,"SQ_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+33,0,"SQ_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"A_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"A_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+27,0,"A_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"B_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"B_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+36,0,"B_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"C_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"C_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+38,0,"C_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+39,0,"R_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"S_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"S_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"S_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"T0_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"T0_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+27,0,"T0_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"T1_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"T1_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+43,0,"T1_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"T2_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+44,0,"T2_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"T2_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
}

VL_ATTR_COLD void Vquadra_top___024root__trace_init_top(Vquadra_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_init_top\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vquadra_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vquadra_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vquadra_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vquadra_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vquadra_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vquadra_top___024root__trace_register(Vquadra_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_register\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vquadra_top___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vquadra_top___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vquadra_top___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vquadra_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vquadra_top___024root__trace_const_0_sub_0(Vquadra_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vquadra_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_const_0\n"); );
    // Body
    Vquadra_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_top___024root*>(voidSelf);
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vquadra_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vquadra_top___024root__trace_const_0_sub_0(Vquadra_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_const_0_sub_0\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+23,(1U),32);
    bufp->fullIData(oldp+24,(0x00000017U),32);
    bufp->fullIData(oldp+25,(0x00000018U),32);
    bufp->fullIData(oldp+26,(2U),32);
    bufp->fullIData(oldp+27,(0x00000019U),32);
    bufp->fullIData(oldp+28,(6U),32);
    bufp->fullIData(oldp+29,(7U),32);
    bufp->fullIData(oldp+30,(0U),32);
    bufp->fullIData(oldp+31,(0xfffffffaU),32);
    bufp->fullIData(oldp+32,(0x00000011U),32);
    bufp->fullIData(oldp+33,(0x00000022U),32);
    bufp->fullIData(oldp+34,(3U),32);
    bufp->fullIData(oldp+35,(0x00000010U),32);
    bufp->fullIData(oldp+36,(0x00000013U),32);
    bufp->fullIData(oldp+37,(0x0000000bU),32);
    bufp->fullIData(oldp+38,(0x0000000dU),32);
    bufp->fullIData(oldp+39,(4U),32);
    bufp->fullIData(oldp+40,(0x0000001bU),32);
    bufp->fullIData(oldp+41,(0x0000001dU),32);
    bufp->fullIData(oldp+42,(0x00000021U),32);
    bufp->fullIData(oldp+43,(0x00000024U),32);
    bufp->fullIData(oldp+44,(0x0000002dU),32);
    bufp->fullIData(oldp+45,(0x0000002fU),32);
}

VL_ATTR_COLD void Vquadra_top___024root__trace_full_0_sub_0(Vquadra_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vquadra_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_full_0\n"); );
    // Body
    Vquadra_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vquadra_top___024root*>(voidSelf);
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vquadra_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vquadra_top___024root__trace_full_0_sub_0(Vquadra_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top___024root__trace_full_0_sub_0\n"); );
    Vquadra_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+0,(vlSelfRef.quadra_top__DOT__a),25);
    bufp->fullIData(oldp+1,(vlSelfRef.quadra_top__DOT__b),19);
    bufp->fullSData(oldp+2,(vlSelfRef.quadra_top__DOT__c),13);
    bufp->fullBit(oldp+3,(vlSelfRef.quadra_top__DOT__dv_p0));
    bufp->fullBit(oldp+4,(vlSelfRef.quadra_top__DOT__dv_p1));
    bufp->fullBit(oldp+5,(vlSelfRef.quadra_top__DOT__dv_p2));
    bufp->fullBit(oldp+6,(vlSelfRef.clk));
    bufp->fullBit(oldp+7,(vlSelfRef.rst_b));
    bufp->fullIData(oldp+8,(vlSelfRef.x),24);
    bufp->fullBit(oldp+9,(vlSelfRef.x_dv));
    bufp->fullIData(oldp+10,(vlSelfRef.y),25);
    bufp->fullBit(oldp+11,(vlSelfRef.y_dv));
    bufp->fullCData(oldp+12,((0x0000007fU & (vlSelfRef.x 
                                             >> 0x00000011U))),7);
    bufp->fullIData(oldp+13,((0x0001ffffU & vlSelfRef.x)),17);
    bufp->fullQData(oldp+14,((0x00000003ffffffffULL 
                              & ((QData)((IData)((0x0001ffffU 
                                                  & vlSelfRef.x))) 
                                 * (QData)((IData)(
                                                   (0x0001ffffU 
                                                    & vlSelfRef.x)))))),34);
    bufp->fullIData(oldp+16,((0x01ffffffU & VL_SHIFTRS_III(29,29,32, 
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
    bufp->fullQData(oldp+17,((0x0000000fffffffffULL 
                              & VL_MULS_QQQ(36, (0x0000000fffffffffULL 
                                                 & VL_EXTENDS_QI(36,19, vlSelfRef.quadra_top__DOT__b)), 
                                            (0x0000000fffffffffULL 
                                             & VL_EXTENDS_QI(36,18, 
                                                             (0x0001ffffU 
                                                              & vlSelfRef.x)))))),36);
    bufp->fullQData(oldp+19,((0x00007fffffffffffULL 
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
    bufp->fullIData(oldp+21,((0x1fffffffU & (VL_SHIFTL_III(29,29,32, 
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
    bufp->fullIData(oldp+22,((0x1fffffffU & ((IData)(8U) 
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
