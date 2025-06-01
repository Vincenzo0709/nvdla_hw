// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "VNV_nvdla__pch.h"
#include "VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo.h"
#include "VNV_nvdla__Syms.h"

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__rq_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq0_wr_pvld));
    vlSelfRef.__PVT__wr_popping = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                   & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
    vlSelfRef.__PVT__rd_count_next_rd_popping = (7U 
                                                 & ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                     ? (IData)(vlSelfRef.__PVT__rq_rd_count)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__rq_rd_count) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT__rd_count_next_no_rd_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_rd_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next = (7U & ((IData)(vlSelfRef.__PVT__wr_popping)
                                             ? ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                 ? (IData)(vlSelfRef.__PVT__rq_wr_count)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__rq_wr_count) 
                                                 - (IData)(1U)))
                                             : (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated_enable = 
        (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                | (IData)(vlSelfRef.__PVT__wr_popping)) 
               | (((IData)(vlSelfRef.__PVT__rq_wr_busy_int) 
                   != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                  | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                     & (IData)(vlSelfRef.rq_rd_pvld)))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo1__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo1__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__rq_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq1_wr_pvld));
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 1U) & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
    vlSelfRef.__PVT__rd_count_next_rd_popping = (7U 
                                                 & ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                     ? (IData)(vlSelfRef.__PVT__rq_rd_count)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__rq_rd_count) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT__rd_count_next_no_rd_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_rd_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next = (7U & ((IData)(vlSelfRef.__PVT__wr_popping)
                                             ? ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                 ? (IData)(vlSelfRef.__PVT__rq_wr_count)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__rq_wr_count) 
                                                 - (IData)(1U)))
                                             : (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated_enable = 
        (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                | (IData)(vlSelfRef.__PVT__wr_popping)) 
               | (((IData)(vlSelfRef.__PVT__rq_wr_busy_int) 
                   != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                  | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                      >> 1U) & (IData)(vlSelfRef.rq_rd_pvld)))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo2__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo2__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__rq_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq2_wr_pvld));
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 2U) & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
    vlSelfRef.__PVT__rd_count_next_rd_popping = (7U 
                                                 & ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                     ? (IData)(vlSelfRef.__PVT__rq_rd_count)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__rq_rd_count) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT__rd_count_next_no_rd_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_rd_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next = (7U & ((IData)(vlSelfRef.__PVT__wr_popping)
                                             ? ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                 ? (IData)(vlSelfRef.__PVT__rq_wr_count)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__rq_wr_count) 
                                                 - (IData)(1U)))
                                             : (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated_enable = 
        (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                | (IData)(vlSelfRef.__PVT__wr_popping)) 
               | (((IData)(vlSelfRef.__PVT__rq_wr_busy_int) 
                   != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                  | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                      >> 2U) & (IData)(vlSelfRef.rq_rd_pvld)))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo3__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo3__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__rq_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq3_wr_pvld));
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 3U) & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
    vlSelfRef.__PVT__rd_count_next_rd_popping = (7U 
                                                 & ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                     ? (IData)(vlSelfRef.__PVT__rq_rd_count)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__rq_rd_count) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT__rd_count_next_no_rd_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_rd_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next = (7U & ((IData)(vlSelfRef.__PVT__wr_popping)
                                             ? ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                 ? (IData)(vlSelfRef.__PVT__rq_wr_count)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__rq_wr_count) 
                                                 - (IData)(1U)))
                                             : (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated_enable = 
        (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                | (IData)(vlSelfRef.__PVT__wr_popping)) 
               | (((IData)(vlSelfRef.__PVT__rq_wr_busy_int) 
                   != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                  | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                      >> 3U) & (IData)(vlSelfRef.rq_rd_pvld)))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo4__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo4__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__rq_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq4_wr_pvld));
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 4U) & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
    vlSelfRef.__PVT__rd_count_next_rd_popping = (7U 
                                                 & ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                     ? (IData)(vlSelfRef.__PVT__rq_rd_count)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__rq_rd_count) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT__rd_count_next_no_rd_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_rd_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next = (7U & ((IData)(vlSelfRef.__PVT__wr_popping)
                                             ? ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                 ? (IData)(vlSelfRef.__PVT__rq_wr_count)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__rq_wr_count) 
                                                 - (IData)(1U)))
                                             : (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated_enable = 
        (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                | (IData)(vlSelfRef.__PVT__wr_popping)) 
               | (((IData)(vlSelfRef.__PVT__rq_wr_busy_int) 
                   != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                  | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                      >> 4U) & (IData)(vlSelfRef.rq_rd_pvld)))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo5__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo5__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__rq_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq5_wr_pvld));
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 5U) & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
    vlSelfRef.__PVT__rd_count_next_rd_popping = (7U 
                                                 & ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                     ? (IData)(vlSelfRef.__PVT__rq_rd_count)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__rq_rd_count) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT__rd_count_next_no_rd_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_rd_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next = (7U & ((IData)(vlSelfRef.__PVT__wr_popping)
                                             ? ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                 ? (IData)(vlSelfRef.__PVT__rq_wr_count)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__rq_wr_count) 
                                                 - (IData)(1U)))
                                             : (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated_enable = 
        (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                | (IData)(vlSelfRef.__PVT__wr_popping)) 
               | (((IData)(vlSelfRef.__PVT__rq_wr_busy_int) 
                   != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                  | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                      >> 5U) & (IData)(vlSelfRef.rq_rd_pvld)))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo6__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo6__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__rq_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq6_wr_pvld));
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 6U) & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
    vlSelfRef.__PVT__rd_count_next_rd_popping = (7U 
                                                 & ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                     ? (IData)(vlSelfRef.__PVT__rq_rd_count)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__rq_rd_count) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT__rd_count_next_no_rd_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_rd_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next = (7U & ((IData)(vlSelfRef.__PVT__wr_popping)
                                             ? ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                 ? (IData)(vlSelfRef.__PVT__rq_wr_count)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__rq_wr_count) 
                                                 - (IData)(1U)))
                                             : (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated_enable = 
        (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                | (IData)(vlSelfRef.__PVT__wr_popping)) 
               | (((IData)(vlSelfRef.__PVT__rq_wr_busy_int) 
                   != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                  | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                      >> 6U) & (IData)(vlSelfRef.rq_rd_pvld)))));
}
