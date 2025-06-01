// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "VNV_nvdla__pch.h"
#include "VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h0fb462f0_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__VdfgRegularize_h0fb462f0_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
}
