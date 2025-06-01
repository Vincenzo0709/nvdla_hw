// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "VNV_nvdla__pch.h"
#include "VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo.h"
#include "VNV_nvdla__Syms.h"

void VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___ctor_var_reset(VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf);

VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo::VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo(VNV_nvdla__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___ctor_var_reset(this);
}

void VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo::~VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo() {
}
