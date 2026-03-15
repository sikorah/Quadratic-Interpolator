// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vquadra_top.h for the primary calling header

#include "Vquadra_top__pch.h"

void Vquadra_top___024root___ctor_var_reset(Vquadra_top___024root* vlSelf);

Vquadra_top___024root::Vquadra_top___024root(Vquadra_top__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vquadra_top___024root___ctor_var_reset(this);
}

void Vquadra_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vquadra_top___024root::~Vquadra_top___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
