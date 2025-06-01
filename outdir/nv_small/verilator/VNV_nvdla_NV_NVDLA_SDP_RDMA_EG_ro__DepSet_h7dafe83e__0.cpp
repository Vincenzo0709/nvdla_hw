// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "VNV_nvdla__pch.h"
#include "VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__5(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__5\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_roc__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_popping)) 
                 | ((((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_busy_int) 
                      != (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_busy_next)) 
                     | ((IData)(vlSelfRef.__PVT__roc_rd_pvld) 
                        & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_prdy_d))) 
                    | ((~ (IData)(vlSelfRef.u_roc__DOT____VdfgRegularize_h20b7620a_0_1)) 
                       & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_int_o)))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__1(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__out_data_1bpe = ((2U & (IData)(vlSelfRef.__PVT__beat_cnt))
                                       ? ((1U & (IData)(vlSelfRef.__PVT__beat_cnt))
                                           ? vlSelfRef.__PVT__u_rod3__DOT__pipe_skid_rod_wr_pd
                                           : vlSelfRef.__PVT__u_rod2__DOT__pipe_skid_rod_wr_pd)
                                       : ((1U & (IData)(vlSelfRef.__PVT__beat_cnt))
                                           ? vlSelfRef.__PVT__u_rod1__DOT__pipe_skid_rod_wr_pd
                                           : vlSelfRef.__PVT__u_rod0__DOT__pipe_skid_rod_wr_pd));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__8(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__8\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__skid_out_rdy) 
         & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__skid_out_vld))) {
        if (vlSelfRef.__PVT__pipe_p1__DOT__skid_flop_out_rdy) {
            vlSelfRef.__PVT__pipe_p1__DOT__pipe_skid_out_pd[0U] 
                = vlSelfRef.__PVT__out_pd[0U];
            vlSelfRef.__PVT__pipe_p1__DOT__pipe_skid_out_pd[1U] 
                = vlSelfRef.__PVT__out_pd[1U];
            vlSelfRef.__PVT__pipe_p1__DOT__pipe_skid_out_pd[2U] 
                = vlSelfRef.__PVT__out_pd[2U];
            vlSelfRef.__PVT__pipe_p1__DOT__pipe_skid_out_pd[3U] 
                = vlSelfRef.__PVT__out_pd[3U];
            vlSelfRef.__PVT__pipe_p1__DOT__pipe_skid_out_pd[4U] 
                = vlSelfRef.__PVT__out_pd[4U];
        } else {
            vlSelfRef.__PVT__pipe_p1__DOT__pipe_skid_out_pd[0U] 
                = vlSelfRef.__PVT__pipe_p1__DOT__skid_flop_out_pd[0U];
            vlSelfRef.__PVT__pipe_p1__DOT__pipe_skid_out_pd[1U] 
                = vlSelfRef.__PVT__pipe_p1__DOT__skid_flop_out_pd[1U];
            vlSelfRef.__PVT__pipe_p1__DOT__pipe_skid_out_pd[2U] 
                = vlSelfRef.__PVT__pipe_p1__DOT__skid_flop_out_pd[2U];
            vlSelfRef.__PVT__pipe_p1__DOT__pipe_skid_out_pd[3U] 
                = vlSelfRef.__PVT__pipe_p1__DOT__skid_flop_out_pd[3U];
            vlSelfRef.__PVT__pipe_p1__DOT__pipe_skid_out_pd[4U] 
                = vlSelfRef.__PVT__pipe_p1__DOT__skid_flop_out_pd[4U];
        }
    }
    if (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__skid_flop_out_rdy) 
         & (IData)(vlSelfRef.__PVT__out_vld))) {
        vlSelfRef.__PVT__pipe_p1__DOT__skid_flop_out_pd[0U] 
            = vlSelfRef.__PVT__out_pd[0U];
        vlSelfRef.__PVT__pipe_p1__DOT__skid_flop_out_pd[1U] 
            = vlSelfRef.__PVT__out_pd[1U];
        vlSelfRef.__PVT__pipe_p1__DOT__skid_flop_out_pd[2U] 
            = vlSelfRef.__PVT__out_pd[2U];
        vlSelfRef.__PVT__pipe_p1__DOT__skid_flop_out_pd[3U] 
            = vlSelfRef.__PVT__out_pd[3U];
        vlSelfRef.__PVT__pipe_p1__DOT__skid_flop_out_pd[4U] 
            = vlSelfRef.__PVT__out_pd[4U];
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__5(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__5\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_roc__DOT____VdfgRegularize_h20b7620a_0_1 
        = ((~ (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_prdy_d)) 
           & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_d));
    vlSelfRef.u_roc__DOT____VdfgRegularize_h20b7620a_0_3 
        = ((IData)(vlSelfRef.u_roc__DOT____VdfgRegularize_h20b7620a_0_1) 
           & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_int_o));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__8(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__8\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p1__DOT__skid_out_vld = ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__skid_flop_out_rdy)
                                                    ? (IData)(vlSelfRef.__PVT__out_vld)
                                                    : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__skid_flop_out_vld));
}
