// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "VNV_nvdla__pch.h"
#include "VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo.h"
#include "VNV_nvdla__Syms.h"

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__Vcellinp__ram__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h0fb462f0_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_wen0_swizzled) 
                                           & (~ (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1.__PVT__ro_wr_busy_int)))));
    vlSelfRef.__PVT__ro_rd_pd_p = ((4U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                    ? ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                   ? 0ULL
                                                   : vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_wr0_pd))
                                    : ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? vlSelfRef.__PVT__ram__DOT__ram_ff3
                                            : vlSelfRef.__PVT__ram__DOT__ram_ff2)
                                        : ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? vlSelfRef.__PVT__ram__DOT__ram_ff1
                                            : vlSelfRef.__PVT__ram__DOT__ram_ff0)));
    vlSelfRef.__VdfgRegularize_h0fb462f0_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__Vcellinp__ram__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h0fb462f0_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_wen1_swizzled) 
                                           & (~ (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0.__PVT__ro_wr_busy_int)))));
    vlSelfRef.__PVT__ro_rd_pd_p = ((4U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                    ? ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                   ? 0ULL
                                                   : (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled))))
                                    : ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? vlSelfRef.__PVT__ram__DOT__ram_ff3
                                            : vlSelfRef.__PVT__ram__DOT__ram_ff2)
                                        : ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? vlSelfRef.__PVT__ram__DOT__ram_ff1
                                            : vlSelfRef.__PVT__ram__DOT__ram_ff0)));
    vlSelfRef.__VdfgRegularize_h0fb462f0_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo0__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo0__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__Vcellinp__ram__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h0fb462f0_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 1U) & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_wen0_swizzled) 
                                                   & (~ (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo1.__PVT__ro_wr_busy_int)))));
    vlSelfRef.__PVT__ro_rd_pd_p = ((4U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                    ? ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                   ? 0ULL
                                                   : vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_wr0_pd))
                                    : ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? vlSelfRef.__PVT__ram__DOT__ram_ff3
                                            : vlSelfRef.__PVT__ram__DOT__ram_ff2)
                                        : ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? vlSelfRef.__PVT__ram__DOT__ram_ff1
                                            : vlSelfRef.__PVT__ram__DOT__ram_ff0)));
    vlSelfRef.__VdfgRegularize_h0fb462f0_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo1__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo1__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__Vcellinp__ram__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h0fb462f0_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 1U) & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_wen1_swizzled) 
                                                   & (~ (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo0.__PVT__ro_wr_busy_int)))));
    vlSelfRef.__PVT__ro_rd_pd_p = ((4U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                    ? ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                   ? 0ULL
                                                   : (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled))))
                                    : ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? vlSelfRef.__PVT__ram__DOT__ram_ff3
                                            : vlSelfRef.__PVT__ram__DOT__ram_ff2)
                                        : ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? vlSelfRef.__PVT__ram__DOT__ram_ff1
                                            : vlSelfRef.__PVT__ram__DOT__ram_ff0)));
    vlSelfRef.__VdfgRegularize_h0fb462f0_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo0__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo0__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__Vcellinp__ram__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h0fb462f0_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 2U) & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_wen0_swizzled) 
                                                   & (~ (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo1.__PVT__ro_wr_busy_int)))));
    vlSelfRef.__PVT__ro_rd_pd_p = ((4U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                    ? ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                   ? 0ULL
                                                   : vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_wr0_pd))
                                    : ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? vlSelfRef.__PVT__ram__DOT__ram_ff3
                                            : vlSelfRef.__PVT__ram__DOT__ram_ff2)
                                        : ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? vlSelfRef.__PVT__ram__DOT__ram_ff1
                                            : vlSelfRef.__PVT__ram__DOT__ram_ff0)));
    vlSelfRef.__VdfgRegularize_h0fb462f0_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo1__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo1__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__Vcellinp__ram__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h0fb462f0_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 2U) & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_wen1_swizzled) 
                                                   & (~ (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo0.__PVT__ro_wr_busy_int)))));
    vlSelfRef.__PVT__ro_rd_pd_p = ((4U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                    ? ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                   ? 0ULL
                                                   : (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled))))
                                    : ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? vlSelfRef.__PVT__ram__DOT__ram_ff3
                                            : vlSelfRef.__PVT__ram__DOT__ram_ff2)
                                        : ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? vlSelfRef.__PVT__ram__DOT__ram_ff1
                                            : vlSelfRef.__PVT__ram__DOT__ram_ff0)));
    vlSelfRef.__VdfgRegularize_h0fb462f0_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo0__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo0__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__Vcellinp__ram__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h0fb462f0_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 3U) & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_wen0_swizzled) 
                                                   & (~ (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo1.__PVT__ro_wr_busy_int)))));
    vlSelfRef.__PVT__ro_rd_pd_p = ((4U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                    ? ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                   ? 0ULL
                                                   : vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_wr0_pd))
                                    : ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? vlSelfRef.__PVT__ram__DOT__ram_ff3
                                            : vlSelfRef.__PVT__ram__DOT__ram_ff2)
                                        : ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? vlSelfRef.__PVT__ram__DOT__ram_ff1
                                            : vlSelfRef.__PVT__ram__DOT__ram_ff0)));
    vlSelfRef.__VdfgRegularize_h0fb462f0_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo1__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo1__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__Vcellinp__ram__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h0fb462f0_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 3U) & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_wen1_swizzled) 
                                                   & (~ (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo0.__PVT__ro_wr_busy_int)))));
    vlSelfRef.__PVT__ro_rd_pd_p = ((4U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                    ? ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                   ? 0ULL
                                                   : (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled))))
                                    : ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? vlSelfRef.__PVT__ram__DOT__ram_ff3
                                            : vlSelfRef.__PVT__ram__DOT__ram_ff2)
                                        : ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? vlSelfRef.__PVT__ram__DOT__ram_ff1
                                            : vlSelfRef.__PVT__ram__DOT__ram_ff0)));
    vlSelfRef.__VdfgRegularize_h0fb462f0_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo0__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo0__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__Vcellinp__ram__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h0fb462f0_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 4U) & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_wen0_swizzled) 
                                                   & (~ (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo1.__PVT__ro_wr_busy_int)))));
    vlSelfRef.__PVT__ro_rd_pd_p = ((4U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                    ? ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                   ? 0ULL
                                                   : vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_wr0_pd))
                                    : ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? vlSelfRef.__PVT__ram__DOT__ram_ff3
                                            : vlSelfRef.__PVT__ram__DOT__ram_ff2)
                                        : ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? vlSelfRef.__PVT__ram__DOT__ram_ff1
                                            : vlSelfRef.__PVT__ram__DOT__ram_ff0)));
    vlSelfRef.__VdfgRegularize_h0fb462f0_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo1__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo1__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__Vcellinp__ram__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h0fb462f0_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 4U) & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_wen1_swizzled) 
                                                   & (~ (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo0.__PVT__ro_wr_busy_int)))));
    vlSelfRef.__PVT__ro_rd_pd_p = ((4U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                    ? ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                   ? 0ULL
                                                   : (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled))))
                                    : ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? vlSelfRef.__PVT__ram__DOT__ram_ff3
                                            : vlSelfRef.__PVT__ram__DOT__ram_ff2)
                                        : ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? vlSelfRef.__PVT__ram__DOT__ram_ff1
                                            : vlSelfRef.__PVT__ram__DOT__ram_ff0)));
    vlSelfRef.__VdfgRegularize_h0fb462f0_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo0__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo0__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__Vcellinp__ram__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h0fb462f0_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 5U) & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_wen0_swizzled) 
                                                   & (~ (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo1.__PVT__ro_wr_busy_int)))));
    vlSelfRef.__PVT__ro_rd_pd_p = ((4U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                    ? ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                   ? 0ULL
                                                   : vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_wr0_pd))
                                    : ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? vlSelfRef.__PVT__ram__DOT__ram_ff3
                                            : vlSelfRef.__PVT__ram__DOT__ram_ff2)
                                        : ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? vlSelfRef.__PVT__ram__DOT__ram_ff1
                                            : vlSelfRef.__PVT__ram__DOT__ram_ff0)));
    vlSelfRef.__VdfgRegularize_h0fb462f0_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo1__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo1__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__Vcellinp__ram__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h0fb462f0_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 5U) & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_wen1_swizzled) 
                                                   & (~ (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo0.__PVT__ro_wr_busy_int)))));
    vlSelfRef.__PVT__ro_rd_pd_p = ((4U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                    ? ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                   ? 0ULL
                                                   : (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled))))
                                    : ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? vlSelfRef.__PVT__ram__DOT__ram_ff3
                                            : vlSelfRef.__PVT__ram__DOT__ram_ff2)
                                        : ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? vlSelfRef.__PVT__ram__DOT__ram_ff1
                                            : vlSelfRef.__PVT__ram__DOT__ram_ff0)));
    vlSelfRef.__VdfgRegularize_h0fb462f0_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo0__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo0__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__Vcellinp__ram__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h0fb462f0_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 6U) & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_wen0_swizzled) 
                                                   & (~ (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo1.__PVT__ro_wr_busy_int)))));
    vlSelfRef.__PVT__ro_rd_pd_p = ((4U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                    ? ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                   ? 0ULL
                                                   : vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_wr0_pd))
                                    : ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? vlSelfRef.__PVT__ram__DOT__ram_ff3
                                            : vlSelfRef.__PVT__ram__DOT__ram_ff2)
                                        : ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? vlSelfRef.__PVT__ram__DOT__ram_ff1
                                            : vlSelfRef.__PVT__ram__DOT__ram_ff0)));
    vlSelfRef.__VdfgRegularize_h0fb462f0_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo1__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo1__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__Vcellinp__ram__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 4U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__VdfgRegularize_h0fb462f0_0_1 = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o) 
                                                & ((~ (IData)(vlSelfRef.__PVT__ro_rd_prdy_d)) 
                                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_d)));
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                         >> 6U) & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_wen1_swizzled) 
                                                   & (~ (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo0.__PVT__ro_wr_busy_int)))));
    vlSelfRef.__PVT__ro_rd_pd_p = ((4U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                    ? ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? 0ULL : ((1U 
                                                   & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                   ? 0ULL
                                                   : (QData)((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__arb_data1_swizzled))))
                                    : ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? vlSelfRef.__PVT__ram__DOT__ram_ff3
                                            : vlSelfRef.__PVT__ram__DOT__ram_ff2)
                                        : ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? vlSelfRef.__PVT__ram__DOT__ram_ff1
                                            : vlSelfRef.__PVT__ram__DOT__ram_ff0)));
    vlSelfRef.__VdfgRegularize_h0fb462f0_0_3 = ((IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_1) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__rd_req_next_o = ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_3));
    vlSelfRef.__PVT__rd_req_next = ((IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_1)
                                     ? (IData)(vlSelfRef.__PVT__ro_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_h0fb462f0_0_3)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (7U 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (7U & 
                                              ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                               - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (7U & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                  + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (7U & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
}
