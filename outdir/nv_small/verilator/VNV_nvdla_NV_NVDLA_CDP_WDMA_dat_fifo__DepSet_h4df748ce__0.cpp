// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "VNV_nvdla__pch.h"
#include "VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo.h"
#include "VNV_nvdla__Syms.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___ico_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__0(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___ico_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__nvdla_op_gated_clk_wdma) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__0(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__dat_fifo_wr_adr = vlSelfRef.__PVT__dat_fifo_wr_adr;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__Vdly__dat_fifo_wr_adr = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__dat_fifo_wr_adr)));
        }
        if (vlSelfRef.__PVT__wr_popping) {
            vlSelfRef.__PVT__dat_fifo_rd_adr = vlSelfRef.__PVT__rd_adr_next_popping;
        } else if (vlSelfRef.__PVT__wr_popping) {
            vlSelfRef.__PVT__dat_fifo_rd_adr = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__wr_reserving) 
             ^ (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__dat_fifo_wr_count = vlSelfRef.__PVT__wr_count_next;
        } else if (((IData)(vlSelfRef.__PVT__wr_reserving) 
                    ^ (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__dat_fifo_wr_count = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__wr_reserving) 
             | (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__dat_fifo_rd_count_p = vlSelfRef.__PVT__rd_count_p_next;
        } else if (((IData)(vlSelfRef.__PVT__wr_reserving) 
                    | (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__dat_fifo_rd_count_p = 0U;
        }
    } else {
        vlSelfRef.__Vdly__dat_fifo_wr_adr = 0U;
        vlSelfRef.__PVT__dat_fifo_rd_adr = 0U;
        vlSelfRef.__PVT__dat_fifo_wr_count = 0U;
        vlSelfRef.__PVT__dat_fifo_rd_count_p = 0U;
    }
    vlSelfRef.__PVT__rd_adr_next_popping = (7U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__1(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_8)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo0_rd_prdy) 
                       & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int)))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__2(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__wr_popping) {
        vlSelfRef.dat_fifo_rd_pd = (0xffU & ((8U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                              ? ((4U 
                                                  & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                  ? 0U
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? 0U
                                                    : vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd)))
                                              : ((4U 
                                                  & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff7)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff6))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff5)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff4)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff3)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff1)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff0))))));
    } else if (vlSelfRef.__PVT__wr_popping) {
        vlSelfRef.dat_fifo_rd_pd = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (7U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff7 = (0xffU 
                                              & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (6U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff6 = (0xffU 
                                              & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (5U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff5 = (0xffU 
                                              & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (4U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff4 = (0xffU 
                                              & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (3U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff3 = (0xffU 
                                              & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (2U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff2 = (0xffU 
                                              & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (1U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff1 = (0xffU 
                                              & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (0U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff0 = (0xffU 
                                              & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd);
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__3(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__3\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__ram__ra = ((0U == (IData)(vlSelfRef.__PVT__dat_fifo_wr_count))
                                      ? 8U : (IData)(vlSelfRef.__PVT__dat_fifo_rd_adr));
    vlSelfRef.__PVT__dat_fifo_wr_adr = vlSelfRef.__Vdly__dat_fifo_wr_adr;
    vlSelfRef.__PVT__dat_fifo_wr_busy_int = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
                                             && (IData)(vlSelfRef.__PVT__wr_count_next_is_8));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_int = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
                                             && ((IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_p) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_hfb9d5854_0_2)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__1(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h61142b7b_4_0) 
                                        & (0U == (0x70000U 
                                                  & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (0xfU & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
                 + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__2(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_hfb9d5854_0_2 = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo0_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo1__1(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo1__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_8)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo1_rd_prdy) 
                       & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int)))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo1__1(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo1__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h61142b7b_4_0) 
                                        & (0x10000U 
                                           == (0x70000U 
                                               & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (0xfU & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
                 + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo1__2(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo1__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_hfb9d5854_0_2 = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo1_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo2__1(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo2__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_8)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo2_rd_prdy) 
                       & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int)))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo2__1(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo2__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h61142b7b_4_0) 
                                        & (0x20000U 
                                           == (0x70000U 
                                               & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (0xfU & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
                 + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo2__2(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo2__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_hfb9d5854_0_2 = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo2_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo3__1(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo3__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_8)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo3_rd_prdy) 
                       & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int)))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo3__1(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo3__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h61142b7b_4_0) 
                                        & (0x30000U 
                                           == (0x70000U 
                                               & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (0xfU & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
                 + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo3__2(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo3__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_hfb9d5854_0_2 = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo3_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo4__1(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo4__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_8)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo4_rd_prdy) 
                       & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int)))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo4__1(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo4__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h61142b7b_4_0) 
                                        & (0x40000U 
                                           == (0x70000U 
                                               & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (0xfU & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
                 + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo4__2(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo4__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_hfb9d5854_0_2 = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo4_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo5__1(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo5__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_8)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo5_rd_prdy) 
                       & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int)))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo5__1(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo5__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h61142b7b_4_0) 
                                        & (0x50000U 
                                           == (0x70000U 
                                               & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (0xfU & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
                 + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo5__2(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo5__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_hfb9d5854_0_2 = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo5_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo6__1(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo6__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_8)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo6_rd_prdy) 
                       & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int)))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo6__1(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo6__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h61142b7b_4_0) 
                                        & (0x60000U 
                                           == (0x70000U 
                                               & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (0xfU & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
                 + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo6__2(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo6__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_hfb9d5854_0_2 = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo6_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo7__1(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo7__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_8)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo7_rd_prdy) 
                       & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int)))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo7__1(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo7__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__dat_fifo_wr_busy_int)) 
                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT____VdfgRegularize_h61142b7b_4_0) 
                                        & (0x70000U 
                                           == (0x70000U 
                                               & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__pipe_skid_cdp_dp2wdma_pd))));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (0xfU & ((IData)(vlSelfRef.__PVT__dat_fifo_wr_count) 
                 + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__dat_fifo_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__dat_fifo_rd_count_p)) 
                                           | (IData)(vlSelfRef.__PVT__wr_reserving));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo7__2(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo7__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_hfb9d5854_0_2 = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__dat0_fifo7_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__dat_fifo_rd_pvld_int));
}
