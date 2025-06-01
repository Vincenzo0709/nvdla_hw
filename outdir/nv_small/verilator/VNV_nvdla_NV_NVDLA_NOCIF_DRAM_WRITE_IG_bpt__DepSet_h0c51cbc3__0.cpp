// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "VNV_nvdla__pch.h"
#include "VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt.h"
#include "VNV_nvdla__Syms.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___ico_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___ico_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_dfifo__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__1(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__beat_count;
    __Vdly__beat_count = 0;
    CData/*0:0*/ __Vdly__u_dfifo__DOT__dfifo_wr_pvld_in;
    __Vdly__u_dfifo__DOT__dfifo_wr_pvld_in = 0;
    // Body
    __Vdly__beat_count = vlSelfRef.__PVT__beat_count;
    vlSelfRef.__Vdly__u_dfifo__DOT__dfifo_rd_pvld_int 
        = vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int;
    __Vdly__u_dfifo__DOT__dfifo_wr_pvld_in = vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_pvld_in;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelfRef.__PVT__bpt2arb_dat_accept) {
            __Vdly__beat_count = ((IData)(vlSelfRef.__PVT__is_last_beat)
                                   ? 0U : (7U & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__beat_count))));
        }
        if (((IData)(vlSelfRef.__PVT__bpt2arb_dat_accept) 
             & (0U == (IData)(vlSelfRef.__PVT__beat_count)))) {
            vlSelfRef.__PVT__req_count = ((IData)(vlSelfRef.__PVT__is_ltran)
                                           ? 0U : (0x1fffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__req_count))));
        }
        if (vlSelfRef.__PVT__u_dfifo__DOT__wr_busy_in_int) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_busy_in_int)))) {
                __Vdly__u_dfifo__DOT__dfifo_wr_pvld_in = 0U;
            }
        } else {
            __Vdly__u_dfifo__DOT__dfifo_wr_pvld_in 
                = ((IData)(vlSelfRef.__PVT__dfifo_wr_pvld) 
                   & (~ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_busy_in)));
        }
        if (vlSelfRef.__PVT__bpt2arb_cmd_accept) {
            vlSelfRef.__PVT__cmd_en = 0U;
            vlSelfRef.__PVT__dat_en = 1U;
        } else if (((IData)(vlSelfRef.__PVT__bpt2arb_dat_accept) 
                    & (0U == (IData)(vlSelfRef.__PVT__beat_count)))) {
            vlSelfRef.__PVT__cmd_en = 1U;
            vlSelfRef.__PVT__dat_en = 0U;
        }
        if (vlSelfRef.__PVT__ipipe_cmd_rdy) {
            vlSelfRef.__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld 
                = vlSelfRef.__PVT__ipipe_cmd_vld;
        }
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__dfifo_rd_prdy)))) {
            vlSelfRef.__Vdly__u_dfifo__DOT__dfifo_rd_pvld_int 
                = vlSelfRef.__PVT__u_dfifo__DOT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int)) 
                          | (IData)(vlSelfRef.__PVT__dfifo_rd_prdy)))) {
            vlSelfRef.__Vdly__u_dfifo__DOT__dfifo_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_d 
            = vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int;
        if (vlSelfRef.__PVT__ipipe_rdy_p) {
            vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_vld_p 
                = vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid;
        }
    } else {
        __Vdly__beat_count = 0U;
        vlSelfRef.__PVT__req_count = 0U;
        __Vdly__u_dfifo__DOT__dfifo_wr_pvld_in = 0U;
        vlSelfRef.__PVT__cmd_en = 1U;
        vlSelfRef.__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld = 0U;
        vlSelfRef.__PVT__dat_en = 0U;
        vlSelfRef.__Vdly__u_dfifo__DOT__dfifo_rd_pvld_int = 0U;
        vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_d = 0U;
        vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_vld_p = 0U;
    }
    vlSelfRef.__PVT__beat_count = __Vdly__beat_count;
    vlSelfRef.__PVT__u_dfifo__DOT__wr_busy_in = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
                                                 && ((IData)(vlSelfRef.__PVT__dfifo_wr_pvld)
                                                      ? (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_count_next_is_1)
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_pvld_in) 
                                                      & ((~ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_reserving)) 
                                                         & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_count_next_is_1)))));
    vlSelfRef.bpt2arb_cmd_valid = ((IData)(vlSelfRef.__PVT__cmd_en) 
                                   & (IData)(vlSelfRef.__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld));
    vlSelfRef.__PVT__is_last_beat = (0U == (IData)(vlSelfRef.__PVT__beat_count));
    vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_pvld_in 
        = __Vdly__u_dfifo__DOT__dfifo_wr_pvld_in;
    vlSelfRef.__PVT__bpt2arb_cmd_accept = ((IData)(vlSelfRef.bpt2arb_cmd_valid) 
                                           & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_0__DOT__p1_pipe_ready_bc));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__2(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_dfifo__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_popping)) 
                 | ((((IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_busy_int) 
                      != (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_count_next_is_1)) 
                     | ((IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_prdy_d) 
                        & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int))) 
                    | ((~ (IData)(vlSelfRef.u_dfifo__DOT____VdfgRegularize_h452249d7_0_3)) 
                       & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o)))));
    vlSelfRef.__PVT__u_dfifo__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__3(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__3\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_reserving) 
             | (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_count_p 
                = vlSelfRef.__PVT__u_dfifo__DOT__rd_count_p_next;
        } else if (((IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_count_p = 0U;
        }
    } else {
        vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_count_p = 0U;
    }
    vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_busy_int 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
           && (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_count_next_is_1));
    vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
           && (IData)(vlSelfRef.__PVT__u_dfifo__DOT__rd_req_next_o));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__5(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__5\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_dfifo__DOT__ram_iwe) {
        vlSelfRef.__PVT__u_dfifo__DOT__ram__DOT__di_d 
            = (((QData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[0U])));
    }
    if (((IData)(vlSelfRef.__PVT__ipipe_rdy_p) & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid))) {
        vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[0U];
        vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[1U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[1U];
        vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[2U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[2U];
    }
    if (((IData)(vlSelfRef.dma2bpt_req_ready) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif_wr__DOT__pipe_skid_mc_dma_wr_req_vld))) {
        vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[0U] 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif_wr__DOT__pipe_skid_dmaif_wr_req_pd[0U];
        vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[1U] 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif_wr__DOT__pipe_skid_dmaif_wr_req_pd[1U];
        vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[2U] 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif_wr__DOT__pipe_skid_dmaif_wr_req_pd[2U];
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__6(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__6\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int 
        = vlSelfRef.__Vdly__u_dfifo__DOT__dfifo_rd_pvld_int;
    vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_prdy_d 
        = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn))) 
           || (IData)(vlSelfRef.__PVT__dfifo_rd_prdy));
    vlSelfRef.bpt2arb_dat_valid = ((IData)(vlSelfRef.__PVT__dat_en) 
                                   & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelfRef.dma2bpt_req_ready) {
            vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid 
                = vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dmaif_wr__DOT__pipe_skid_mc_dma_wr_req_vld;
        }
    } else {
        vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__7(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__7\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_count 
                = vlSelfRef.__PVT__u_dfifo__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_count = 0U;
        }
    } else {
        vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_count = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__2(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dfifo_rd_prdy = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0__DOT__dfifo_wr_busy_int)) 
                                      & (IData)(vlSelfRef.__PVT__dat_en));
    vlSelfRef.__PVT__bpt2arb_dat_accept = ((IData)(vlSelfRef.bpt2arb_dat_valid) 
                                           & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0__DOT__dfifo_wr_busy_int)));
    vlSelfRef.__PVT__ipipe_cmd_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld)) 
                                            | ((IData)(vlSelfRef.__PVT__is_ltran) 
                                               & ((0U 
                                                   == (IData)(vlSelfRef.__PVT__beat_count)) 
                                                  & (IData)(vlSelfRef.__PVT__bpt2arb_dat_accept)))));
    vlSelfRef.__PVT__ipipe_rdy_p = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_vld_p)) 
                                          | (((IData)(vlSelfRef.__PVT__ipipe_cmd_vld) 
                                              & (IData)(vlSelfRef.__PVT__ipipe_cmd_rdy)) 
                                             | (IData)(vlSelfRef.__PVT__u_dfifo__DOT__ram_iwe))));
    vlSelfRef.dma2bpt_req_ready = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid)) 
                                         | (IData)(vlSelfRef.__PVT__ipipe_rdy_p)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt1__1(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt1__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__beat_count;
    __Vdly__beat_count = 0;
    CData/*0:0*/ __Vdly__u_dfifo__DOT__dfifo_wr_pvld_in;
    __Vdly__u_dfifo__DOT__dfifo_wr_pvld_in = 0;
    // Body
    __Vdly__beat_count = vlSelfRef.__PVT__beat_count;
    vlSelfRef.__Vdly__u_dfifo__DOT__dfifo_rd_pvld_int 
        = vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int;
    __Vdly__u_dfifo__DOT__dfifo_wr_pvld_in = vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_pvld_in;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelfRef.__PVT__bpt2arb_dat_accept) {
            __Vdly__beat_count = ((IData)(vlSelfRef.__PVT__is_last_beat)
                                   ? 0U : (7U & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__beat_count))));
        }
        if (((IData)(vlSelfRef.__PVT__bpt2arb_dat_accept) 
             & (0U == (IData)(vlSelfRef.__PVT__beat_count)))) {
            vlSelfRef.__PVT__req_count = ((IData)(vlSelfRef.__PVT__is_ltran)
                                           ? 0U : (0x1fffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__req_count))));
        }
        if (vlSelfRef.__PVT__u_dfifo__DOT__wr_busy_in_int) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_busy_in_int)))) {
                __Vdly__u_dfifo__DOT__dfifo_wr_pvld_in = 0U;
            }
        } else {
            __Vdly__u_dfifo__DOT__dfifo_wr_pvld_in 
                = ((IData)(vlSelfRef.__PVT__dfifo_wr_pvld) 
                   & (~ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_busy_in)));
        }
        if (vlSelfRef.__PVT__bpt2arb_cmd_accept) {
            vlSelfRef.__PVT__cmd_en = 0U;
            vlSelfRef.__PVT__dat_en = 1U;
        } else if (((IData)(vlSelfRef.__PVT__bpt2arb_dat_accept) 
                    & (0U == (IData)(vlSelfRef.__PVT__beat_count)))) {
            vlSelfRef.__PVT__cmd_en = 1U;
            vlSelfRef.__PVT__dat_en = 0U;
        }
        if (vlSelfRef.__PVT__ipipe_cmd_rdy) {
            vlSelfRef.__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld 
                = vlSelfRef.__PVT__ipipe_cmd_vld;
        }
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__dfifo_rd_prdy)))) {
            vlSelfRef.__Vdly__u_dfifo__DOT__dfifo_rd_pvld_int 
                = vlSelfRef.__PVT__u_dfifo__DOT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int)) 
                          | (IData)(vlSelfRef.__PVT__dfifo_rd_prdy)))) {
            vlSelfRef.__Vdly__u_dfifo__DOT__dfifo_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_d 
            = vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int;
        if (vlSelfRef.__PVT__ipipe_rdy_p) {
            vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_vld_p 
                = vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid;
        }
    } else {
        __Vdly__beat_count = 0U;
        vlSelfRef.__PVT__req_count = 0U;
        __Vdly__u_dfifo__DOT__dfifo_wr_pvld_in = 0U;
        vlSelfRef.__PVT__cmd_en = 1U;
        vlSelfRef.__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld = 0U;
        vlSelfRef.__PVT__dat_en = 0U;
        vlSelfRef.__Vdly__u_dfifo__DOT__dfifo_rd_pvld_int = 0U;
        vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_d = 0U;
        vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_vld_p = 0U;
    }
    vlSelfRef.__PVT__beat_count = __Vdly__beat_count;
    vlSelfRef.__PVT__u_dfifo__DOT__wr_busy_in = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
                                                 && ((IData)(vlSelfRef.__PVT__dfifo_wr_pvld)
                                                      ? (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_count_next_is_1)
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_pvld_in) 
                                                      & ((~ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_reserving)) 
                                                         & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_count_next_is_1)))));
    vlSelfRef.bpt2arb_cmd_valid = ((IData)(vlSelfRef.__PVT__cmd_en) 
                                   & (IData)(vlSelfRef.__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld));
    vlSelfRef.__PVT__is_last_beat = (0U == (IData)(vlSelfRef.__PVT__beat_count));
    vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_pvld_in 
        = __Vdly__u_dfifo__DOT__dfifo_wr_pvld_in;
    vlSelfRef.__PVT__bpt2arb_cmd_accept = ((IData)(vlSelfRef.bpt2arb_cmd_valid) 
                                           & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_1__DOT__p1_pipe_ready_bc));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt1__5(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt1__5\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_dfifo__DOT__ram_iwe) {
        vlSelfRef.__PVT__u_dfifo__DOT__ram__DOT__di_d 
            = (((QData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[0U])));
    }
    if (((IData)(vlSelfRef.__PVT__ipipe_rdy_p) & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid))) {
        vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[0U];
        vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[1U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[1U];
        vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[2U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[2U];
    }
    if (((IData)(vlSelfRef.dma2bpt_req_ready) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__NV_NVDLA_PDP_WDMA_wr__DOT__pipe_skid_mc_dma_wr_req_vld))) {
        vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[0U] 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__NV_NVDLA_PDP_WDMA_wr__DOT__pipe_skid_dmaif_wr_req_pd[0U];
        vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[1U] 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__NV_NVDLA_PDP_WDMA_wr__DOT__pipe_skid_dmaif_wr_req_pd[1U];
        vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[2U] 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__NV_NVDLA_PDP_WDMA_wr__DOT__pipe_skid_dmaif_wr_req_pd[2U];
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt1__6(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt1__6\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int 
        = vlSelfRef.__Vdly__u_dfifo__DOT__dfifo_rd_pvld_int;
    vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_prdy_d 
        = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn))) 
           || (IData)(vlSelfRef.__PVT__dfifo_rd_prdy));
    vlSelfRef.bpt2arb_dat_valid = ((IData)(vlSelfRef.__PVT__dat_en) 
                                   & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelfRef.dma2bpt_req_ready) {
            vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid 
                = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__NV_NVDLA_PDP_WDMA_wr__DOT__pipe_skid_mc_dma_wr_req_vld;
        }
    } else {
        vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt1__2(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt1__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dfifo_rd_prdy = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo1__DOT__dfifo_wr_busy_int)) 
                                      & (IData)(vlSelfRef.__PVT__dat_en));
    vlSelfRef.__PVT__bpt2arb_dat_accept = ((IData)(vlSelfRef.bpt2arb_dat_valid) 
                                           & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo1__DOT__dfifo_wr_busy_int)));
    vlSelfRef.__PVT__ipipe_cmd_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld)) 
                                            | ((IData)(vlSelfRef.__PVT__is_ltran) 
                                               & ((0U 
                                                   == (IData)(vlSelfRef.__PVT__beat_count)) 
                                                  & (IData)(vlSelfRef.__PVT__bpt2arb_dat_accept)))));
    vlSelfRef.__PVT__ipipe_rdy_p = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_vld_p)) 
                                          | (((IData)(vlSelfRef.__PVT__ipipe_cmd_vld) 
                                              & (IData)(vlSelfRef.__PVT__ipipe_cmd_rdy)) 
                                             | (IData)(vlSelfRef.__PVT__u_dfifo__DOT__ram_iwe))));
    vlSelfRef.dma2bpt_req_ready = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid)) 
                                         | (IData)(vlSelfRef.__PVT__ipipe_rdy_p)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt2__1(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt2__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__beat_count;
    __Vdly__beat_count = 0;
    CData/*0:0*/ __Vdly__u_dfifo__DOT__dfifo_wr_pvld_in;
    __Vdly__u_dfifo__DOT__dfifo_wr_pvld_in = 0;
    // Body
    __Vdly__beat_count = vlSelfRef.__PVT__beat_count;
    vlSelfRef.__Vdly__u_dfifo__DOT__dfifo_rd_pvld_int 
        = vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int;
    __Vdly__u_dfifo__DOT__dfifo_wr_pvld_in = vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_pvld_in;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelfRef.__PVT__bpt2arb_dat_accept) {
            __Vdly__beat_count = ((IData)(vlSelfRef.__PVT__is_last_beat)
                                   ? 0U : (7U & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__beat_count))));
        }
        if (((IData)(vlSelfRef.__PVT__bpt2arb_dat_accept) 
             & (0U == (IData)(vlSelfRef.__PVT__beat_count)))) {
            vlSelfRef.__PVT__req_count = ((IData)(vlSelfRef.__PVT__is_ltran)
                                           ? 0U : (0x1fffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__req_count))));
        }
        if (vlSelfRef.__PVT__u_dfifo__DOT__wr_busy_in_int) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_busy_in_int)))) {
                __Vdly__u_dfifo__DOT__dfifo_wr_pvld_in = 0U;
            }
        } else {
            __Vdly__u_dfifo__DOT__dfifo_wr_pvld_in 
                = ((IData)(vlSelfRef.__PVT__dfifo_wr_pvld) 
                   & (~ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_busy_in)));
        }
        if (vlSelfRef.__PVT__bpt2arb_cmd_accept) {
            vlSelfRef.__PVT__cmd_en = 0U;
            vlSelfRef.__PVT__dat_en = 1U;
        } else if (((IData)(vlSelfRef.__PVT__bpt2arb_dat_accept) 
                    & (0U == (IData)(vlSelfRef.__PVT__beat_count)))) {
            vlSelfRef.__PVT__cmd_en = 1U;
            vlSelfRef.__PVT__dat_en = 0U;
        }
        if (vlSelfRef.__PVT__ipipe_cmd_rdy) {
            vlSelfRef.__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld 
                = vlSelfRef.__PVT__ipipe_cmd_vld;
        }
        if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__dfifo_rd_prdy)))) {
            vlSelfRef.__Vdly__u_dfifo__DOT__dfifo_rd_pvld_int 
                = vlSelfRef.__PVT__u_dfifo__DOT__rd_req_next;
        } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int)) 
                          | (IData)(vlSelfRef.__PVT__dfifo_rd_prdy)))) {
            vlSelfRef.__Vdly__u_dfifo__DOT__dfifo_rd_pvld_int = 0U;
        }
        vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_d 
            = vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int;
        if (vlSelfRef.__PVT__ipipe_rdy_p) {
            vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_vld_p 
                = vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid;
        }
    } else {
        __Vdly__beat_count = 0U;
        vlSelfRef.__PVT__req_count = 0U;
        __Vdly__u_dfifo__DOT__dfifo_wr_pvld_in = 0U;
        vlSelfRef.__PVT__cmd_en = 1U;
        vlSelfRef.__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld = 0U;
        vlSelfRef.__PVT__dat_en = 0U;
        vlSelfRef.__Vdly__u_dfifo__DOT__dfifo_rd_pvld_int = 0U;
        vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_d = 0U;
        vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_vld_p = 0U;
    }
    vlSelfRef.__PVT__beat_count = __Vdly__beat_count;
    vlSelfRef.__PVT__u_dfifo__DOT__wr_busy_in = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
                                                 && ((IData)(vlSelfRef.__PVT__dfifo_wr_pvld)
                                                      ? (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_count_next_is_1)
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_pvld_in) 
                                                      & ((~ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_reserving)) 
                                                         & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_count_next_is_1)))));
    vlSelfRef.bpt2arb_cmd_valid = ((IData)(vlSelfRef.__PVT__cmd_en) 
                                   & (IData)(vlSelfRef.__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld));
    vlSelfRef.__PVT__is_last_beat = (0U == (IData)(vlSelfRef.__PVT__beat_count));
    vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_pvld_in 
        = __Vdly__u_dfifo__DOT__dfifo_wr_pvld_in;
    vlSelfRef.__PVT__bpt2arb_cmd_accept = ((IData)(vlSelfRef.bpt2arb_cmd_valid) 
                                           & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_2__DOT__p1_pipe_ready_bc));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt2__5(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt2__5\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_dfifo__DOT__ram_iwe) {
        vlSelfRef.__PVT__u_dfifo__DOT__ram__DOT__di_d 
            = (((QData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[0U])));
    }
    if (((IData)(vlSelfRef.__PVT__ipipe_rdy_p) & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid))) {
        vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[0U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[0U];
        vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[1U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[1U];
        vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[2U] 
            = vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[2U];
    }
    if (((IData)(vlSelfRef.dma2bpt_req_ready) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__NV_NVDLA_CDP_WDMA_wr__DOT__pipe_skid_mc_dma_wr_req_vld))) {
        vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[0U] 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__NV_NVDLA_CDP_WDMA_wr__DOT__pipe_skid_dmaif_wr_req_pd[0U];
        vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[1U] 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__NV_NVDLA_CDP_WDMA_wr__DOT__pipe_skid_dmaif_wr_req_pd[1U];
        vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd[2U] 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__NV_NVDLA_CDP_WDMA_wr__DOT__pipe_skid_dmaif_wr_req_pd[2U];
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt2__6(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt2__6\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int 
        = vlSelfRef.__Vdly__u_dfifo__DOT__dfifo_rd_pvld_int;
    vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_prdy_d 
        = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn))) 
           || (IData)(vlSelfRef.__PVT__dfifo_rd_prdy));
    vlSelfRef.bpt2arb_dat_valid = ((IData)(vlSelfRef.__PVT__dat_en) 
                                   & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelfRef.dma2bpt_req_ready) {
            vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid 
                = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__NV_NVDLA_CDP_WDMA_wr__DOT__pipe_skid_mc_dma_wr_req_vld;
        }
    } else {
        vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt2__2(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt2__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dfifo_rd_prdy = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo2__DOT__dfifo_wr_busy_int)) 
                                      & (IData)(vlSelfRef.__PVT__dat_en));
    vlSelfRef.__PVT__bpt2arb_dat_accept = ((IData)(vlSelfRef.bpt2arb_dat_valid) 
                                           & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo2__DOT__dfifo_wr_busy_int)));
    vlSelfRef.__PVT__ipipe_cmd_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld)) 
                                            | ((IData)(vlSelfRef.__PVT__is_ltran) 
                                               & ((0U 
                                                   == (IData)(vlSelfRef.__PVT__beat_count)) 
                                                  & (IData)(vlSelfRef.__PVT__bpt2arb_dat_accept)))));
    vlSelfRef.__PVT__ipipe_rdy_p = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_vld_p)) 
                                          | (((IData)(vlSelfRef.__PVT__ipipe_cmd_vld) 
                                              & (IData)(vlSelfRef.__PVT__ipipe_cmd_rdy)) 
                                             | (IData)(vlSelfRef.__PVT__u_dfifo__DOT__ram_iwe))));
    vlSelfRef.dma2bpt_req_ready = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid)) 
                                         | (IData)(vlSelfRef.__PVT__ipipe_rdy_p)));
}
