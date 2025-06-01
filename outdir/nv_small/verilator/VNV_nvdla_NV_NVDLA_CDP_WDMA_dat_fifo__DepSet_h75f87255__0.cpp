// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "VNV_nvdla__pch.h"
#include "VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__3(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__3\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_hfb9d5854_0_2)) 
                                   & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_8 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (8U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (0xfU 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (0xfU 
                                              & (IData)(vlSelfRef.__PVT__dat_fifo_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (0xfU 
                                                & ((IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (0xfU 
                                              & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
                                                 - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (0xfU & 
                                            ((IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p) 
                                             + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (0xfU & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))));
}
