// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vquadra_top.h for the primary calling header

#include "Vquadra_top__pch.h"

void Vquadra_top___024unit___ctor_var_reset(Vquadra_top___024unit* vlSelf);

Vquadra_top___024unit::Vquadra_top___024unit() = default;
Vquadra_top___024unit::~Vquadra_top___024unit() = default;

void Vquadra_top___024unit::ctor(Vquadra_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vquadra_top___024unit___ctor_var_reset(this);
}

void Vquadra_top___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vquadra_top___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
