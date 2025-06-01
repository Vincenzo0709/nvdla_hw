// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "VNV_nvdla__pch.h"
#include "VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo.h"
#include "VNV_nvdla__Syms.h"

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0__0(VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr)));
    vlSelfRef.__Vcellinp__ram__ra = ((0U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__pipe_skid_pdp_dp2wdma_valid) 
                                        & (0U == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__count_b))));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_wdma) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__VdfgRegularize_hc3d24f4e_0_2 = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dat0_fifo0_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_hc3d24f4e_0_2)) 
                                   & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__dat_fifo_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo1__0(VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo1__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr)));
    vlSelfRef.__Vcellinp__ram__ra = ((0U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__pipe_skid_pdp_dp2wdma_valid) 
                                        & (1U == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__count_b))));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_wdma) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__VdfgRegularize_hc3d24f4e_0_2 = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dat0_fifo0_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_hc3d24f4e_0_2)) 
                                   & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__dat_fifo_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo2__0(VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo2__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr)));
    vlSelfRef.__Vcellinp__ram__ra = ((0U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__pipe_skid_pdp_dp2wdma_valid) 
                                        & (2U == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__count_b))));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_wdma) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__VdfgRegularize_hc3d24f4e_0_2 = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dat0_fifo0_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_hc3d24f4e_0_2)) 
                                   & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__dat_fifo_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo3__0(VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo3__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr)));
    vlSelfRef.__Vcellinp__ram__ra = ((0U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__pipe_skid_pdp_dp2wdma_valid) 
                                        & (3U == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__count_b))));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_wdma) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__VdfgRegularize_hc3d24f4e_0_2 = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dat0_fifo0_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_hc3d24f4e_0_2)) 
                                   & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__dat_fifo_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo4__0(VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo4__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr)));
    vlSelfRef.__Vcellinp__ram__ra = ((0U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__pipe_skid_pdp_dp2wdma_valid) 
                                        & (4U == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__count_b))));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_wdma) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__VdfgRegularize_hc3d24f4e_0_2 = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dat0_fifo0_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_hc3d24f4e_0_2)) 
                                   & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__dat_fifo_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo5__0(VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo5__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr)));
    vlSelfRef.__Vcellinp__ram__ra = ((0U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__pipe_skid_pdp_dp2wdma_valid) 
                                        & (5U == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__count_b))));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_wdma) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__VdfgRegularize_hc3d24f4e_0_2 = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dat0_fifo0_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_hc3d24f4e_0_2)) 
                                   & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__dat_fifo_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo6__0(VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo6__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr)));
    vlSelfRef.__Vcellinp__ram__ra = ((0U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__pipe_skid_pdp_dp2wdma_valid) 
                                        & (6U == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__count_b))));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_wdma) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__VdfgRegularize_hc3d24f4e_0_2 = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dat0_fifo0_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_hc3d24f4e_0_2)) 
                                   & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__dat_fifo_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo7__0(VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo7__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr)));
    vlSelfRef.__Vcellinp__ram__ra = ((0U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__pipe_skid_pdp_dp2wdma_valid) 
                                        & (7U == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__count_b))));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__nvdla_op_gated_clk_wdma) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__VdfgRegularize_hc3d24f4e_0_2 = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__dat0_fifo0_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_hc3d24f4e_0_2)) 
                                   & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__dat_fifo_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))));
}
