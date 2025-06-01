// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "VNV_nvdla__pch.h"
#include "VNV_nvdla__Syms.h"
#include "VNV_nvdla___024root.h"

void VNV_nvdla___024root___ctor_var_reset(VNV_nvdla___024root* vlSelf);

VNV_nvdla___024root::VNV_nvdla___024root(VNV_nvdla__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VNV_nvdla___024root___ctor_var_reset(this);
}

void VNV_nvdla___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VNV_nvdla___024root::~VNV_nvdla___024root() {
}
