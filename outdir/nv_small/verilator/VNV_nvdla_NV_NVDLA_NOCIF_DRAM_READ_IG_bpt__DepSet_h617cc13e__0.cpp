// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "VNV_nvdla__pch.h"
#include "VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt.h"
#include "VNV_nvdla__Syms.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt0__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt0__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch)
                                                    ? vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_data
                                                    : vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data);
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data = ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch)
                                                    ? vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data
                                                    : vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data);
    if (vlSelfRef.__PVT__bpt2arb_accept) {
        vlSelfRef.__PVT__out_addr = ((0U == (IData)(vlSelfRef.__PVT__count_req))
                                      ? ((IData)(8U) 
                                         + (IData)(vlSelfRef.__PVT__in_vld_pd))
                                      : ((IData)(8U) 
                                         + vlSelfRef.__PVT__out_addr));
    }
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data = (
                                                   ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc) 
                                                    & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))
                                                    ? vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_data
                                                    : vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data = (
                                                   ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc) 
                                                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dma_mux__DOT__pipe_skid_req_mc_in_pvld))
                                                    ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dma_mux__DOT__pipe_skid_req_mc_in_pd
                                                    : vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data);
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt0__1(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt0__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc))
                    : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelfRef.__PVT__bpt2arb_accept) {
            vlSelfRef.__PVT__count_req = ((IData)(vlSelfRef.__PVT__is_ltran)
                                           ? 0U : (0xffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_req))));
        }
        vlSelfRef.__PVT__lat_cnt_cur = (0xffU & (IData)(vlSelfRef.__PVT__lat_cnt_nxt));
    } else {
        vlSelfRef.__PVT__count_req = 0U;
        vlSelfRef.__PVT__lat_cnt_cur = 0U;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready))
                    : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__lat_count_dec = 0U;
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready = 
        ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn))) 
         || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn))) 
           || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dma_mux__DOT__pipe_skid_req_mc_in_pvld))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready 
        = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.__PVT__lat_cnt_ext = vlSelfRef.__PVT__lat_cnt_cur;
    vlSelfRef.__PVT__lat_cnt_mod = (0x3ffU & ((IData)(vlSelfRef.__PVT__lat_cnt_cur) 
                                              - (IData)(vlSelfRef.__PVT__lat_count_dec)));
    vlSelfRef.__PVT__lat_cnt_new = ((IData)(vlSelfRef.__PVT__lat_count_dec)
                                     ? (IData)(vlSelfRef.__PVT__lat_cnt_mod)
                                     : (IData)(vlSelfRef.__PVT__lat_cnt_ext));
    vlSelfRef.__PVT__lat_cnt_nxt = vlSelfRef.__PVT__lat_cnt_new;
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc 
        = (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready) 
                 | (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)
            : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelfRef.__PVT__bpt2arb_accept = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid) 
                                       & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_0__DOT__p1_pipe_ready_bc));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid)
            : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt0__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt0__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_data 
        = ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)
            ? vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data
            : vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data);
    vlSelfRef.__PVT__in_vld_pd = ((- (QData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                  & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_data 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_data
            : vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data);
    vlSelfRef.__PVT__is_ltran = ((IData)(vlSelfRef.__PVT__count_req) 
                                 == ((0xffffU & ((IData)(1U) 
                                                 + 
                                                 (0x7fffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_vld_pd 
                                                             >> 0x20U))))) 
                                     - (IData)(1U)));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc 
        = (1U & (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_0__DOT__p1_pipe_ready_bc) 
                  & (IData)(vlSelfRef.__PVT__is_ltran)) 
                 | (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt1__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt1__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch)
                                                    ? vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_data
                                                    : vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data);
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data = ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch)
                                                    ? vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data
                                                    : vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data);
    if (vlSelfRef.__PVT__bpt2arb_accept) {
        vlSelfRef.__PVT__out_addr = ((0U == (IData)(vlSelfRef.__PVT__count_req))
                                      ? ((IData)(8U) 
                                         + (IData)(vlSelfRef.__PVT__in_vld_pd))
                                      : ((IData)(8U) 
                                         + vlSelfRef.__PVT__out_addr));
    }
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data = (
                                                   ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc) 
                                                    & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))
                                                    ? vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_data
                                                    : vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data = (
                                                   ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc) 
                                                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__NV_NVDLA_PDP_RDMA_rdreq__DOT__pipe_skid_mc_dma_rd_req_vld))
                                                    ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__NV_NVDLA_PDP_RDMA_rdreq__DOT__pipe_skid_dmaif_rd_req_pd
                                                    : vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data);
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt1__1(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt1__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc))
                    : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelfRef.__PVT__bpt2arb_accept) {
            vlSelfRef.__PVT__count_req = ((IData)(vlSelfRef.__PVT__is_ltran)
                                           ? 0U : (0xffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_req))));
        }
        vlSelfRef.__PVT__lat_cnt_cur = (0xffU & (IData)(vlSelfRef.__PVT__lat_cnt_nxt));
    } else {
        vlSelfRef.__PVT__count_req = 0U;
        vlSelfRef.__PVT__lat_cnt_cur = 0U;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready))
                    : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__lat_count_dec = 0U;
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn))) 
           || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__NV_NVDLA_PDP_RDMA_rdreq__DOT__pipe_skid_mc_dma_rd_req_vld))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready 
        = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.__PVT__lat_cnt_ext = vlSelfRef.__PVT__lat_cnt_cur;
    vlSelfRef.__PVT__lat_cnt_mod = (0x3ffU & ((IData)(vlSelfRef.__PVT__lat_cnt_cur) 
                                              - (IData)(vlSelfRef.__PVT__lat_count_dec)));
    vlSelfRef.__PVT__lat_cnt_new = ((IData)(vlSelfRef.__PVT__lat_count_dec)
                                     ? (IData)(vlSelfRef.__PVT__lat_cnt_mod)
                                     : (IData)(vlSelfRef.__PVT__lat_cnt_ext));
    vlSelfRef.__PVT__lat_cnt_nxt = vlSelfRef.__PVT__lat_cnt_new;
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc 
        = (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop) 
                 | (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)
            : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelfRef.__PVT__bpt2arb_accept = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid) 
                                       & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_1__DOT__p1_pipe_ready_bc));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid)
            : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt1__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt1__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_data 
        = ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)
            ? vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data
            : vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data);
    vlSelfRef.__PVT__in_vld_pd = ((- (QData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                  & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_data 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_data
            : vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data);
    vlSelfRef.__PVT__is_ltran = ((IData)(vlSelfRef.__PVT__count_req) 
                                 == ((0xffffU & ((IData)(1U) 
                                                 + 
                                                 (0x7fffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_vld_pd 
                                                             >> 0x20U))))) 
                                     - (IData)(1U)));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc 
        = (1U & (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_1__DOT__p1_pipe_ready_bc) 
                  & (IData)(vlSelfRef.__PVT__is_ltran)) 
                 | (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt2__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt2__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch)
                                                    ? vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_data
                                                    : vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data);
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data = ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch)
                                                    ? vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data
                                                    : vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data);
    if (vlSelfRef.__PVT__bpt2arb_accept) {
        vlSelfRef.__PVT__out_addr = ((0U == (IData)(vlSelfRef.__PVT__count_req))
                                      ? ((IData)(8U) 
                                         + (IData)(vlSelfRef.__PVT__in_vld_pd))
                                      : ((IData)(8U) 
                                         + vlSelfRef.__PVT__out_addr));
    }
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data = (
                                                   ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc) 
                                                    & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))
                                                    ? vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_data
                                                    : vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data = (
                                                   ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc) 
                                                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__NV_NVDLA_PDP_RDMA_rdreq__DOT__pipe_skid_mc_dma_rd_req_vld))
                                                    ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__NV_NVDLA_PDP_RDMA_rdreq__DOT__pipe_skid_dmaif_rd_req_pd
                                                    : vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data);
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt2__1(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt2__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc))
                    : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelfRef.__PVT__bpt2arb_accept) {
            vlSelfRef.__PVT__count_req = ((IData)(vlSelfRef.__PVT__is_ltran)
                                           ? 0U : (0xffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_req))));
        }
        vlSelfRef.__PVT__lat_cnt_cur = (0xffU & (IData)(vlSelfRef.__PVT__lat_cnt_nxt));
    } else {
        vlSelfRef.__PVT__count_req = 0U;
        vlSelfRef.__PVT__lat_cnt_cur = 0U;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop))
                    : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn))) 
           || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_ig__DOT__NV_NVDLA_PDP_RDMA_rdreq__DOT__pipe_skid_mc_dma_rd_req_vld))));
    vlSelfRef.__PVT__lat_count_dec = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
                                      && (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__cdp2mcif_rd_cdt_lat_fifo_pop));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.bpt2arb_req_valid = ((1U <= (0xffU & 
                                           ((IData)(0x3dU) 
                                            - (IData)(vlSelfRef.__PVT__lat_cnt_cur)))) 
                                   & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid));
    vlSelfRef.__PVT__req_rdy = ((1U <= (0xffU & ((IData)(0x3dU) 
                                                 - (IData)(vlSelfRef.__PVT__lat_cnt_cur)))) 
                                & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_2__DOT__p1_pipe_ready_bc));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc 
        = (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop) 
                 | (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)
            : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelfRef.__PVT__bpt2arb_accept = ((IData)(vlSelfRef.bpt2arb_req_valid) 
                                       & (IData)(vlSelfRef.__PVT__req_rdy));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid)
            : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__lat_cnt_ext = vlSelfRef.__PVT__lat_cnt_cur;
    vlSelfRef.__PVT__lat_cnt_mod = (0x3ffU & (((IData)(vlSelfRef.__PVT__lat_cnt_cur) 
                                               + ((IData)(vlSelfRef.__PVT__bpt2arb_accept)
                                                   ? 1U
                                                   : 0U)) 
                                              - (IData)(vlSelfRef.__PVT__lat_count_dec)));
    vlSelfRef.__PVT__lat_cnt_new = ((((IData)(vlSelfRef.__PVT__bpt2arb_accept)
                                       ? 1U : 0U) != (IData)(vlSelfRef.__PVT__lat_count_dec))
                                     ? (IData)(vlSelfRef.__PVT__lat_cnt_mod)
                                     : (IData)(vlSelfRef.__PVT__lat_cnt_ext));
    vlSelfRef.__PVT__lat_cnt_nxt = vlSelfRef.__PVT__lat_cnt_new;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt3__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt3__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch)
                                                    ? vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_data
                                                    : vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data);
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data = ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch)
                                                    ? vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data
                                                    : vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data);
    if (vlSelfRef.__PVT__bpt2arb_accept) {
        vlSelfRef.__PVT__out_addr = ((0U == (IData)(vlSelfRef.__PVT__count_req))
                                      ? ((IData)(8U) 
                                         + (IData)(vlSelfRef.__PVT__in_vld_pd))
                                      : ((IData)(8U) 
                                         + vlSelfRef.__PVT__out_addr));
    }
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data = (
                                                   ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc) 
                                                    & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))
                                                    ? vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_data
                                                    : vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data = (
                                                   ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc) 
                                                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__NV_NVDLA_PDP_RDMA_rdreq__DOT__pipe_skid_mc_dma_rd_req_vld))
                                                    ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__NV_NVDLA_PDP_RDMA_rdreq__DOT__pipe_skid_dmaif_rd_req_pd
                                                    : vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data);
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt3__1(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt3__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc))
                    : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelfRef.__PVT__bpt2arb_accept) {
            vlSelfRef.__PVT__count_req = ((IData)(vlSelfRef.__PVT__is_ltran)
                                           ? 0U : (0xffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_req))));
        }
        vlSelfRef.__PVT__lat_cnt_cur = (0xffU & (IData)(vlSelfRef.__PVT__lat_cnt_nxt));
    } else {
        vlSelfRef.__PVT__count_req = 0U;
        vlSelfRef.__PVT__lat_cnt_cur = 0U;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop))
                    : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn))) 
           || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))));
    vlSelfRef.__PVT__lat_count_dec = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
                                      && (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__pdp2mcif_rd_cdt_lat_fifo_pop));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_ig__DOT__NV_NVDLA_PDP_RDMA_rdreq__DOT__pipe_skid_mc_dma_rd_req_vld))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.bpt2arb_req_valid = ((1U <= (0xffU & 
                                           ((IData)(0x3dU) 
                                            - (IData)(vlSelfRef.__PVT__lat_cnt_cur)))) 
                                   & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid));
    vlSelfRef.__PVT__req_rdy = ((1U <= (0xffU & ((IData)(0x3dU) 
                                                 - (IData)(vlSelfRef.__PVT__lat_cnt_cur)))) 
                                & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_3__DOT__p1_pipe_ready_bc));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc 
        = (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop) 
                 | (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)
            : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelfRef.__PVT__bpt2arb_accept = ((IData)(vlSelfRef.bpt2arb_req_valid) 
                                       & (IData)(vlSelfRef.__PVT__req_rdy));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid)
            : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__lat_cnt_ext = vlSelfRef.__PVT__lat_cnt_cur;
    vlSelfRef.__PVT__lat_cnt_mod = (0x3ffU & (((IData)(vlSelfRef.__PVT__lat_cnt_cur) 
                                               + ((IData)(vlSelfRef.__PVT__bpt2arb_accept)
                                                   ? 1U
                                                   : 0U)) 
                                              - (IData)(vlSelfRef.__PVT__lat_count_dec)));
    vlSelfRef.__PVT__lat_cnt_new = ((((IData)(vlSelfRef.__PVT__bpt2arb_accept)
                                       ? 1U : 0U) != (IData)(vlSelfRef.__PVT__lat_count_dec))
                                     ? (IData)(vlSelfRef.__PVT__lat_cnt_mod)
                                     : (IData)(vlSelfRef.__PVT__lat_cnt_ext));
    vlSelfRef.__PVT__lat_cnt_nxt = vlSelfRef.__PVT__lat_cnt_new;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt4__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt4__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch)
                                                    ? vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_data
                                                    : vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data);
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data = ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch)
                                                    ? vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data
                                                    : vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data);
    if (vlSelfRef.__PVT__bpt2arb_accept) {
        vlSelfRef.__PVT__out_addr = ((0U == (IData)(vlSelfRef.__PVT__count_req))
                                      ? ((IData)(8U) 
                                         + (IData)(vlSelfRef.__PVT__in_vld_pd))
                                      : ((IData)(8U) 
                                         + vlSelfRef.__PVT__out_addr));
    }
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data = (
                                                   ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc) 
                                                    & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))
                                                    ? vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_data
                                                    : vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data = (
                                                   ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc) 
                                                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_NV_NVDLA_SDP_RDMA_dmaif__DOT__NV_NVDLA_SDP_RDMA_rdreq__DOT__pipe_skid_mc_dma_rd_req_vld))
                                                    ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_NV_NVDLA_SDP_RDMA_dmaif__DOT__NV_NVDLA_SDP_RDMA_rdreq__DOT__pipe_skid_dmaif_rd_req_pd
                                                    : vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data);
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt4__1(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt4__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc))
                    : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelfRef.__PVT__bpt2arb_accept) {
            vlSelfRef.__PVT__count_req = ((IData)(vlSelfRef.__PVT__is_ltran)
                                           ? 0U : (0xffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_req))));
        }
        vlSelfRef.__PVT__lat_cnt_cur = (0xffU & (IData)(vlSelfRef.__PVT__lat_cnt_nxt));
    } else {
        vlSelfRef.__PVT__count_req = 0U;
        vlSelfRef.__PVT__lat_cnt_cur = 0U;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop))
                    : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn))) 
           || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_NV_NVDLA_SDP_RDMA_dmaif__DOT__NV_NVDLA_SDP_RDMA_rdreq__DOT__pipe_skid_mc_dma_rd_req_vld))));
    vlSelfRef.__PVT__lat_count_dec = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
                                      && (IData)(vlSymsp->TOP.NV_nvdla__DOT__sdp2mcif_rd_cdt_lat_fifo_pop));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.bpt2arb_req_valid = ((1U <= (0xffU & 
                                           ((IData)(0x50U) 
                                            - (IData)(vlSelfRef.__PVT__lat_cnt_cur)))) 
                                   & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid));
    vlSelfRef.__PVT__req_rdy = ((1U <= (0xffU & ((IData)(0x50U) 
                                                 - (IData)(vlSelfRef.__PVT__lat_cnt_cur)))) 
                                & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_4__DOT__p1_pipe_ready_bc));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc 
        = (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop) 
                 | (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)
            : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelfRef.__PVT__bpt2arb_accept = ((IData)(vlSelfRef.bpt2arb_req_valid) 
                                       & (IData)(vlSelfRef.__PVT__req_rdy));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid)
            : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__lat_cnt_ext = vlSelfRef.__PVT__lat_cnt_cur;
    vlSelfRef.__PVT__lat_cnt_mod = (0x3ffU & (((IData)(vlSelfRef.__PVT__lat_cnt_cur) 
                                               + ((IData)(vlSelfRef.__PVT__bpt2arb_accept)
                                                   ? 1U
                                                   : 0U)) 
                                              - (IData)(vlSelfRef.__PVT__lat_count_dec)));
    vlSelfRef.__PVT__lat_cnt_new = ((((IData)(vlSelfRef.__PVT__bpt2arb_accept)
                                       ? 1U : 0U) != (IData)(vlSelfRef.__PVT__lat_count_dec))
                                     ? (IData)(vlSelfRef.__PVT__lat_cnt_mod)
                                     : (IData)(vlSelfRef.__PVT__lat_cnt_ext));
    vlSelfRef.__PVT__lat_cnt_nxt = vlSelfRef.__PVT__lat_cnt_new;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt5__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt5__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch)
                                                    ? vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_data
                                                    : vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data);
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data = ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch)
                                                    ? vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data
                                                    : vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data);
    if (vlSelfRef.__PVT__bpt2arb_accept) {
        vlSelfRef.__PVT__out_addr = ((0U == (IData)(vlSelfRef.__PVT__count_req))
                                      ? ((IData)(8U) 
                                         + (IData)(vlSelfRef.__PVT__in_vld_pd))
                                      : ((IData)(8U) 
                                         + vlSelfRef.__PVT__out_addr));
    }
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data = (
                                                   ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc) 
                                                    & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))
                                                    ? vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_data
                                                    : vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data = (
                                                   ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc) 
                                                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_NV_NVDLA_SDP_RDMA_dmaif__DOT__NV_NVDLA_SDP_RDMA_rdreq__DOT__pipe_skid_mc_dma_rd_req_vld))
                                                    ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_NV_NVDLA_SDP_RDMA_dmaif__DOT__NV_NVDLA_SDP_RDMA_rdreq__DOT__pipe_skid_dmaif_rd_req_pd
                                                    : vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data);
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt5__1(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt5__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc))
                    : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelfRef.__PVT__bpt2arb_accept) {
            vlSelfRef.__PVT__count_req = ((IData)(vlSelfRef.__PVT__is_ltran)
                                           ? 0U : (0xffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_req))));
        }
        vlSelfRef.__PVT__lat_cnt_cur = (0xffU & (IData)(vlSelfRef.__PVT__lat_cnt_nxt));
    } else {
        vlSelfRef.__PVT__count_req = 0U;
        vlSelfRef.__PVT__lat_cnt_cur = 0U;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready))
                    : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready = 
        ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn))) 
         || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn))) 
           || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))));
    vlSelfRef.__PVT__lat_count_dec = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
                                      && (IData)(vlSymsp->TOP.NV_nvdla__DOT__sdp_b2mcif_rd_cdt_lat_fifo_pop));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_NV_NVDLA_SDP_RDMA_dmaif__DOT__NV_NVDLA_SDP_RDMA_rdreq__DOT__pipe_skid_mc_dma_rd_req_vld))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready 
        = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.bpt2arb_req_valid = ((1U <= (0xffU & 
                                           ((IData)(0xa0U) 
                                            - (IData)(vlSelfRef.__PVT__lat_cnt_cur)))) 
                                   & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid));
    vlSelfRef.__PVT__req_rdy = ((1U <= (0xffU & ((IData)(0xa0U) 
                                                 - (IData)(vlSelfRef.__PVT__lat_cnt_cur)))) 
                                & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_5__DOT__p1_pipe_ready_bc));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc 
        = (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready) 
                 | (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)
            : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelfRef.__PVT__bpt2arb_accept = ((IData)(vlSelfRef.bpt2arb_req_valid) 
                                       & (IData)(vlSelfRef.__PVT__req_rdy));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid)
            : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__lat_cnt_ext = vlSelfRef.__PVT__lat_cnt_cur;
    vlSelfRef.__PVT__lat_cnt_mod = (0x3ffU & (((IData)(vlSelfRef.__PVT__lat_cnt_cur) 
                                               + ((IData)(vlSelfRef.__PVT__bpt2arb_accept)
                                                   ? 1U
                                                   : 0U)) 
                                              - (IData)(vlSelfRef.__PVT__lat_count_dec)));
    vlSelfRef.__PVT__lat_cnt_new = ((((IData)(vlSelfRef.__PVT__bpt2arb_accept)
                                       ? 1U : 0U) != (IData)(vlSelfRef.__PVT__lat_count_dec))
                                     ? (IData)(vlSelfRef.__PVT__lat_cnt_mod)
                                     : (IData)(vlSelfRef.__PVT__lat_cnt_ext));
    vlSelfRef.__PVT__lat_cnt_nxt = vlSelfRef.__PVT__lat_cnt_new;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt6__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt6__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch)
                                                    ? vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_data
                                                    : vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data);
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data = ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch)
                                                    ? vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data
                                                    : vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data);
    if (vlSelfRef.__PVT__bpt2arb_accept) {
        vlSelfRef.__PVT__out_addr = ((0U == (IData)(vlSelfRef.__PVT__count_req))
                                      ? ((IData)(8U) 
                                         + (IData)(vlSelfRef.__PVT__in_vld_pd))
                                      : ((IData)(8U) 
                                         + vlSelfRef.__PVT__out_addr));
    }
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data = (
                                                   ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc) 
                                                    & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))
                                                    ? vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_data
                                                    : vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data = (
                                                   ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc) 
                                                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_NV_NVDLA_SDP_RDMA_dmaif__DOT__NV_NVDLA_SDP_RDMA_rdreq__DOT__pipe_skid_mc_dma_rd_req_vld))
                                                    ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_NV_NVDLA_SDP_RDMA_dmaif__DOT__NV_NVDLA_SDP_RDMA_rdreq__DOT__pipe_skid_dmaif_rd_req_pd
                                                    : vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data);
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt6__1(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt6__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc))
                    : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelfRef.__PVT__bpt2arb_accept) {
            vlSelfRef.__PVT__count_req = ((IData)(vlSelfRef.__PVT__is_ltran)
                                           ? 0U : (0xffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_req))));
        }
        vlSelfRef.__PVT__lat_cnt_cur = (0xffU & (IData)(vlSelfRef.__PVT__lat_cnt_nxt));
    } else {
        vlSelfRef.__PVT__count_req = 0U;
        vlSelfRef.__PVT__lat_cnt_cur = 0U;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready))
                    : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready = 
        ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn))) 
         || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn))) 
           || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))));
    vlSelfRef.__PVT__lat_count_dec = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
                                      && (IData)(vlSymsp->TOP.NV_nvdla__DOT__sdp_n2mcif_rd_cdt_lat_fifo_pop));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc)) 
                   | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_NV_NVDLA_SDP_RDMA_dmaif__DOT__NV_NVDLA_SDP_RDMA_rdreq__DOT__pipe_skid_mc_dma_rd_req_vld))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready 
        = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.bpt2arb_req_valid = ((1U <= (0xffU & 
                                           ((IData)(0xa0U) 
                                            - (IData)(vlSelfRef.__PVT__lat_cnt_cur)))) 
                                   & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid));
    vlSelfRef.__PVT__req_rdy = ((1U <= (0xffU & ((IData)(0xa0U) 
                                                 - (IData)(vlSelfRef.__PVT__lat_cnt_cur)))) 
                                & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_6__DOT__p1_pipe_ready_bc));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc 
        = (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready) 
                 | (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)
            : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelfRef.__PVT__bpt2arb_accept = ((IData)(vlSelfRef.bpt2arb_req_valid) 
                                       & (IData)(vlSelfRef.__PVT__req_rdy));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid)
            : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__lat_cnt_ext = vlSelfRef.__PVT__lat_cnt_cur;
    vlSelfRef.__PVT__lat_cnt_mod = (0x3ffU & (((IData)(vlSelfRef.__PVT__lat_cnt_cur) 
                                               + ((IData)(vlSelfRef.__PVT__bpt2arb_accept)
                                                   ? 1U
                                                   : 0U)) 
                                              - (IData)(vlSelfRef.__PVT__lat_count_dec)));
    vlSelfRef.__PVT__lat_cnt_new = ((((IData)(vlSelfRef.__PVT__bpt2arb_accept)
                                       ? 1U : 0U) != (IData)(vlSelfRef.__PVT__lat_count_dec))
                                     ? (IData)(vlSelfRef.__PVT__lat_cnt_mod)
                                     : (IData)(vlSelfRef.__PVT__lat_cnt_ext));
    vlSelfRef.__PVT__lat_cnt_nxt = vlSelfRef.__PVT__lat_cnt_new;
}
