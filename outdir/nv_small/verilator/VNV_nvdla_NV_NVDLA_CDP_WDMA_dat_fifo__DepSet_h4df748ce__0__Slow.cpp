// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "VNV_nvdla__pch.h"
#include "VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo.h"
#include "VNV_nvdla__Syms.h"

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__0(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (7U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr)));
    vlSelfRef.__Vcellinp__ram__ra = ((0U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))
                                      ? 8U : (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__nvdla_op_gated_clk_wdma) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h61142b7b_4_0) 
                                        & (0U == (0x70000U 
                                                  & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd))));
    vlSelfRef.__VdfgRegularize_hfb9d5854_0_2 = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo0_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (0xfU & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
                 + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
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

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo1__0(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo1__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (7U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr)));
    vlSelfRef.__Vcellinp__ram__ra = ((0U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))
                                      ? 8U : (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__nvdla_op_gated_clk_wdma) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h61142b7b_4_0) 
                                        & (0x10000U 
                                           == (0x70000U 
                                               & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd))));
    vlSelfRef.__VdfgRegularize_hfb9d5854_0_2 = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo1_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (0xfU & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
                 + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
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

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo2__0(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo2__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (7U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr)));
    vlSelfRef.__Vcellinp__ram__ra = ((0U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))
                                      ? 8U : (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__nvdla_op_gated_clk_wdma) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h61142b7b_4_0) 
                                        & (0x20000U 
                                           == (0x70000U 
                                               & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd))));
    vlSelfRef.__VdfgRegularize_hfb9d5854_0_2 = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo2_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (0xfU & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
                 + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
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

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo3__0(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo3__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (7U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr)));
    vlSelfRef.__Vcellinp__ram__ra = ((0U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))
                                      ? 8U : (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__nvdla_op_gated_clk_wdma) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h61142b7b_4_0) 
                                        & (0x30000U 
                                           == (0x70000U 
                                               & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd))));
    vlSelfRef.__VdfgRegularize_hfb9d5854_0_2 = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo3_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (0xfU & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
                 + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
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

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo4__0(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo4__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (7U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr)));
    vlSelfRef.__Vcellinp__ram__ra = ((0U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))
                                      ? 8U : (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__nvdla_op_gated_clk_wdma) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h61142b7b_4_0) 
                                        & (0x40000U 
                                           == (0x70000U 
                                               & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd))));
    vlSelfRef.__VdfgRegularize_hfb9d5854_0_2 = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo4_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (0xfU & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
                 + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
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

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo5__0(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo5__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (7U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr)));
    vlSelfRef.__Vcellinp__ram__ra = ((0U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))
                                      ? 8U : (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__nvdla_op_gated_clk_wdma) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h61142b7b_4_0) 
                                        & (0x50000U 
                                           == (0x70000U 
                                               & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd))));
    vlSelfRef.__VdfgRegularize_hfb9d5854_0_2 = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo5_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (0xfU & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
                 + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
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

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo6__0(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo6__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (7U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr)));
    vlSelfRef.__Vcellinp__ram__ra = ((0U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))
                                      ? 8U : (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__nvdla_op_gated_clk_wdma) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h61142b7b_4_0) 
                                        & (0x60000U 
                                           == (0x70000U 
                                               & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd))));
    vlSelfRef.__VdfgRegularize_hfb9d5854_0_2 = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo6_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (0xfU & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
                 + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
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

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo7__0(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo7__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (7U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr)));
    vlSelfRef.__Vcellinp__ram__ra = ((0U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))
                                      ? 8U : (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__nvdla_op_gated_clk_wdma) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h61142b7b_4_0) 
                                        & (0x70000U 
                                           == (0x70000U 
                                               & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd))));
    vlSelfRef.__VdfgRegularize_hfb9d5854_0_2 = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo7_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (0xfU & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
                 + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
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
