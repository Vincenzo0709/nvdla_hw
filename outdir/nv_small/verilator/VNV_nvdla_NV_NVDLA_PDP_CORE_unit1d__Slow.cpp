// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "VNV_nvdla__pch.h"
#include "VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d.h"
#include "VNV_nvdla__Syms.h"

void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___ctor_var_reset(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf);

VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d::VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d(VNV_nvdla__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___ctor_var_reset(this);
}

void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d::~VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d() {
}
