// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "VNV_nvdla__pch.h"
#include "VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro.h"
#include "VNV_nvdla__Syms.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___ico_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__0(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___ico_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_roc__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__nvdla_gated_clk) 
           & (IData)(vlSelfRef.__PVT__u_roc__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__0(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_hd39949f1_0_1 = (1U 
                                                & ((0U 
                                                    != (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_proc_precision)) 
                                                   | (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_brdma_data_size))));
    vlSelfRef.__PVT__size_of_surf = (0x7ffU & ((0U 
                                                == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_proc_precision))
                                                ? (0x3ffU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_channel) 
                                                      >> 3U))
                                                : ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_channel) 
                                                   >> 2U)));
}

extern const VlUnpacked<CData/*1:0*/, 256> VNV_nvdla__ConstPool__TABLE_h56bc840b_0;
extern const VlUnpacked<CData/*0:0*/, 256> VNV_nvdla__ConstPool__TABLE_h1cd985d3_0;
extern const VlUnpacked<CData/*1:0*/, 256> VNV_nvdla__ConstPool__TABLE_h800e0715_0;

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__1(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*12:0*/ __Vdly__count_h;
    __Vdly__count_h = 0;
    SData/*10:0*/ __Vdly__count_c;
    __Vdly__count_c = 0;
    // Body
    __Vdly__count_c = vlSelfRef.__PVT__count_c;
    __Vdly__count_h = vlSelfRef.__PVT__count_h;
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn) {
        if (vlSelfRef.__PVT__out_accept) {
            if (vlSelfRef.__PVT__is_cube_end) {
                __Vdly__count_c = 0U;
            } else if (vlSelfRef.__PVT__is_surf_end) {
                __Vdly__count_c = (0x7ffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__count_c)));
            }
            vlSelfRef.__PVT__count_w = ((IData)(vlSelfRef.__PVT__is_last_w)
                                         ? 0U : (0x1fffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__count_w))));
            if (vlSelfRef.__PVT__is_surf_end) {
                __Vdly__count_h = 0U;
            } else if (vlSelfRef.__PVT__is_last_w) {
                __Vdly__count_h = (0x1fffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__count_h)));
            }
        }
        if (vlSelfRef.__PVT__u_rod0__DOT__skid_rod_wr_prdy) {
            vlSelfRef.__PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld 
                = vlSelfRef.__PVT__u_rod0__DOT__skid_rod_wr_pvld;
        }
        if (vlSelfRef.__PVT__u_rod1__DOT__skid_rod_wr_prdy) {
            vlSelfRef.__PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld 
                = vlSelfRef.__PVT__u_rod1__DOT__skid_rod_wr_pvld;
        }
        if (vlSelfRef.__PVT__u_rod2__DOT__skid_rod_wr_prdy) {
            vlSelfRef.__PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld 
                = vlSelfRef.__PVT__u_rod2__DOT__skid_rod_wr_pvld;
        }
        if (vlSelfRef.__PVT__u_rod3__DOT__skid_rod_wr_prdy) {
            vlSelfRef.__PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld 
                = vlSelfRef.__PVT__u_rod3__DOT__skid_rod_wr_pvld;
        }
        if (vlSelfRef.__PVT__pipe_p1__DOT__skid_flop_out_rdy) {
            vlSelfRef.__PVT__pipe_p1__DOT__skid_flop_out_vld 
                = vlSelfRef.__PVT__out_vld;
        }
        if (vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_prdy) {
            vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_pvld 
                = vlSelfRef.__PVT__rod3_wr_pvld;
        }
        if (vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_prdy) {
            vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_pvld 
                = vlSelfRef.__PVT__rod0_wr_pvld;
        }
        if (vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_prdy) {
            vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_pvld 
                = vlSelfRef.__PVT__rod1_wr_pvld;
        }
        if (vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy) {
            vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_pvld 
                = vlSelfRef.__PVT__rod2_wr_pvld;
        }
        if (vlSelfRef.__PVT__pipe_p1__DOT__skid_out_rdy) {
            vlSelfRef.__PVT__pipe_p1__DOT__pipe_skid_out_vld 
                = vlSelfRef.__PVT__pipe_p1__DOT__skid_out_vld;
        }
    } else {
        __Vdly__count_c = 0U;
        vlSelfRef.__PVT__count_w = 0U;
        __Vdly__count_h = 0U;
        vlSelfRef.__PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld = 0U;
        vlSelfRef.__PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld = 0U;
        vlSelfRef.__PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld = 0U;
        vlSelfRef.__PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld = 0U;
        vlSelfRef.__PVT__pipe_p1__DOT__skid_flop_out_vld = 0U;
        vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_pvld = 0U;
        vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_pvld = 0U;
        vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_pvld = 0U;
        vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_pvld = 0U;
        vlSelfRef.__PVT__pipe_p1__DOT__pipe_skid_out_vld = 0U;
    }
    vlSelfRef.__PVT__out_rdy = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn))) 
                                || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__skid_out_rdy));
    __Vtableidx1 = ((((IData)(vlSelfRef.__PVT__is_surf_end) 
                      << 7U) | ((IData)(vlSelfRef.__PVT__beat_cnt_nxt) 
                                << 4U)) | ((((IData)(vlSelfRef.__PVT__is_last_beat) 
                                             << 3U) 
                                            | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_brdma_data_mode) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.__PVT__out_accept) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn))));
    if ((1U & VNV_nvdla__ConstPool__TABLE_h56bc840b_0
         [__Vtableidx1])) {
        vlSelfRef.__PVT__mon_beat_cnt = VNV_nvdla__ConstPool__TABLE_h1cd985d3_0
            [__Vtableidx1];
    }
    if ((2U & VNV_nvdla__ConstPool__TABLE_h56bc840b_0
         [__Vtableidx1])) {
        vlSelfRef.__PVT__beat_cnt = VNV_nvdla__ConstPool__TABLE_h800e0715_0
            [__Vtableidx1];
    }
    vlSelfRef.__PVT__count_c = __Vdly__count_c;
    vlSelfRef.__PVT__count_h = __Vdly__count_h;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__2(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__u_roc__DOT__roc_wr_adr = vlSelfRef.__PVT__u_roc__DOT__roc_wr_adr;
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn) {
        if (vlSelfRef.__PVT__u_roc__DOT__wr_reserving) {
            vlSelfRef.__Vdly__u_roc__DOT__roc_wr_adr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_adr)));
        }
        if (vlSelfRef.__PVT__u_roc__DOT__wr_popping) {
            vlSelfRef.__PVT__u_roc__DOT__roc_rd_adr 
                = vlSelfRef.__PVT__u_roc__DOT__rd_adr_next_popping;
        } else if (vlSelfRef.__PVT__u_roc__DOT__wr_popping) {
            vlSelfRef.__PVT__u_roc__DOT__roc_rd_adr = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving) 
             | (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p 
                = vlSelfRef.__PVT__u_roc__DOT__rd_count_p_next;
        } else if (((IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p = 0U;
        }
    } else {
        vlSelfRef.__Vdly__u_roc__DOT__roc_wr_adr = 0U;
        vlSelfRef.__PVT__u_roc__DOT__roc_rd_adr = 0U;
        vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p = 0U;
    }
    vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_d = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn) 
                                                  && (IData)(vlSelfRef.__PVT__roc_rd_pvld));
    vlSelfRef.__PVT__u_roc__DOT__rd_adr_next_popping 
        = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_adr)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__3(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__3\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__u_rod0__DOT__skid_rod_wr_prdy) 
         & (IData)(vlSelfRef.__PVT__u_rod0__DOT__skid_rod_wr_pvld))) {
        vlSelfRef.__PVT__u_rod0__DOT__pipe_skid_rod_wr_pd 
            = ((IData)(vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_prdy)
                ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd
                : vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_pd);
    }
    if (((IData)(vlSelfRef.__PVT__u_rod1__DOT__skid_rod_wr_prdy) 
         & (IData)(vlSelfRef.__PVT__u_rod1__DOT__skid_rod_wr_pvld))) {
        vlSelfRef.__PVT__u_rod1__DOT__pipe_skid_rod_wr_pd 
            = ((IData)(vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_prdy)
                ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd
                : vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_pd);
    }
    if (((IData)(vlSelfRef.__PVT__u_rod3__DOT__skid_rod_wr_prdy) 
         & (IData)(vlSelfRef.__PVT__u_rod3__DOT__skid_rod_wr_pvld))) {
        vlSelfRef.__PVT__u_rod3__DOT__pipe_skid_rod_wr_pd 
            = ((IData)(vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_prdy)
                ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_rdma_unpack__DOT__pack_seq3
                : vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_pd);
    }
    if (((IData)(vlSelfRef.__PVT__u_rod2__DOT__skid_rod_wr_prdy) 
         & (IData)(vlSelfRef.__PVT__u_rod2__DOT__skid_rod_wr_pvld))) {
        vlSelfRef.__PVT__u_rod2__DOT__pipe_skid_rod_wr_pd 
            = ((IData)(vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy)
                ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_rdma_unpack__DOT__pack_seq2
                : vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_pd);
    }
    if (((IData)(vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_prdy) 
         & (IData)(vlSelfRef.__PVT__rod0_wr_pvld))) {
        vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_pd 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod0_pd;
    }
    if (((IData)(vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_prdy) 
         & (IData)(vlSelfRef.__PVT__rod1_wr_pvld))) {
        vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_pd 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod1_pd;
    }
    if (((IData)(vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_prdy) 
         & (IData)(vlSelfRef.__PVT__rod3_wr_pvld))) {
        vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_pd 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_rdma_unpack__DOT__pack_seq3;
    }
    if (((IData)(vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy) 
         & (IData)(vlSelfRef.__PVT__rod2_wr_pvld))) {
        vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_pd 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_rdma_unpack__DOT__pack_seq2;
    }
}

extern const VlUnpacked<CData/*3:0*/, 32> VNV_nvdla__ConstPool__TABLE_h2ddc24bb_0;
extern const VlUnpacked<CData/*1:0*/, 32> VNV_nvdla__ConstPool__TABLE_h49873950_0;
extern const VlUnpacked<CData/*1:0*/, 32> VNV_nvdla__ConstPool__TABLE_haebb1ad7_0;
extern const VlUnpacked<CData/*1:0*/, 32> VNV_nvdla__ConstPool__TABLE_h1f8cbabb_0;
extern const VlUnpacked<CData/*1:0*/, 32> VNV_nvdla__ConstPool__TABLE_h9d367f52_0;

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__4(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__4\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    if (vlSelfRef.__PVT__u_roc__DOT__wr_popping) {
        vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_o = vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_p;
    } else if (vlSelfRef.__PVT__u_roc__DOT__wr_popping) {
        vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_o = 0U;
    }
    __Vtableidx2 = ((0x18U & (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_roc_size) 
                               - (IData)(1U)) << 3U)) 
                    | (((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_adr) 
                        << 1U) | ((IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving) 
                                  & ((~ (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_popping)) 
                                     | (0U < (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count))))));
    if ((1U & VNV_nvdla__ConstPool__TABLE_h2ddc24bb_0
         [__Vtableidx2])) {
        vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff0 
            = VNV_nvdla__ConstPool__TABLE_h49873950_0
            [__Vtableidx2];
    }
    if ((2U & VNV_nvdla__ConstPool__TABLE_h2ddc24bb_0
         [__Vtableidx2])) {
        vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff1 
            = VNV_nvdla__ConstPool__TABLE_haebb1ad7_0
            [__Vtableidx2];
    }
    if ((4U & VNV_nvdla__ConstPool__TABLE_h2ddc24bb_0
         [__Vtableidx2])) {
        vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff2 
            = VNV_nvdla__ConstPool__TABLE_h1f8cbabb_0
            [__Vtableidx2];
    }
    if ((8U & VNV_nvdla__ConstPool__TABLE_h2ddc24bb_0
         [__Vtableidx2])) {
        vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff3 
            = VNV_nvdla__ConstPool__TABLE_h9d367f52_0
            [__Vtableidx2];
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__0(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_last_w = ((IData)(vlSelfRef.__PVT__count_w) 
                                  == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_width));
    vlSelfRef.__PVT__is_last_h = ((IData)(vlSelfRef.__PVT__count_h) 
                                  == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_height));
    vlSelfRef.__PVT__beat_cnt_nxt = (7U & ((IData)(vlSelfRef.__PVT__beat_cnt) 
                                           + ((IData)(vlSelfRef.__VdfgRegularize_hd39949f1_0_1)
                                               ? 1U
                                               : 2U)));
    if (vlSelfRef.__VdfgRegularize_hd39949f1_0_1) {
        vlSelfRef.__PVT__rod1_sel = (1U == (IData)(vlSelfRef.__PVT__beat_cnt));
        vlSelfRef.__PVT__rod3_sel = (3U == (IData)(vlSelfRef.__PVT__beat_cnt));
    } else {
        vlSelfRef.__PVT__rod1_sel = (0U == (IData)(vlSelfRef.__PVT__beat_cnt));
        vlSelfRef.__PVT__rod3_sel = (2U == (IData)(vlSelfRef.__PVT__beat_cnt));
    }
    vlSelfRef.__PVT__is_surf_end = ((IData)(vlSelfRef.__PVT__is_last_w) 
                                    & (IData)(vlSelfRef.__PVT__is_last_h));
    vlSelfRef.__PVT__rodx_rd_en = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_brdma_data_mode) 
                                   || ((IData)(vlSelfRef.__PVT__is_last_h) 
                                       & (IData)(vlSelfRef.__PVT__is_last_w)));
    vlSelfRef.__PVT__is_cube_end = ((IData)(vlSelfRef.__PVT__is_surf_end) 
                                    & ((IData)(vlSelfRef.__PVT__count_c) 
                                       == (IData)(vlSelfRef.__PVT__size_of_surf)));
    vlSelfRef.__VdfgRegularize_hd39949f1_0_0 = ((IData)(vlSelfRef.__PVT__out_rdy) 
                                                & (IData)(vlSelfRef.__PVT__rodx_rd_en));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__6(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__6\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_prdy 
        = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn))) 
           || (IData)(vlSelfRef.__PVT__u_rod0__DOT__skid_rod_wr_prdy));
    vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_prdy 
        = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn))) 
           || (IData)(vlSelfRef.__PVT__u_rod1__DOT__skid_rod_wr_prdy));
    vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_prdy 
        = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn))) 
           || (IData)(vlSelfRef.__PVT__u_rod3__DOT__skid_rod_wr_prdy));
    vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy 
        = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn))) 
           || (IData)(vlSelfRef.__PVT__u_rod2__DOT__skid_rod_wr_prdy));
    vlSelfRef.__PVT__u_roc__DOT__roc_rd_prdy_d = ((1U 
                                                   & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn))) 
                                                  || ((IData)(vlSelfRef.__PVT__roc_rd_en) 
                                                      & (IData)(vlSelfRef.__PVT__out_accept)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__7(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__7\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_roc__DOT__roc_wr_adr = vlSelfRef.__Vdly__u_roc__DOT__roc_wr_adr;
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_roc__DOT__roc_wr_count 
                = vlSelfRef.__PVT__u_roc__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_popping))) {
            vlSelfRef.__PVT__u_roc__DOT__roc_wr_count = 0U;
        }
    } else {
        vlSelfRef.__PVT__u_roc__DOT__roc_wr_count = 0U;
    }
    vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_int_o 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn) 
           && ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_p) 
               | (IData)(vlSelfRef.u_roc__DOT____VdfgRegularize_h20b7620a_0_3)));
    vlSelfRef.__PVT__u_roc__DOT__roc_wr_busy_int = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn) 
         && (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_busy_next));
    vlSelfRef.u_roc__DOT____Vcellinp__ram__ra = ((0U 
                                                  == (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count))
                                                  ? 4U
                                                  : (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_adr));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__3(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__3\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdfgRegularize_hd39949f1_1_8;
    __VdfgRegularize_hd39949f1_1_8 = 0;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_13;
    // Body
    vlSelfRef.__PVT__u_rod0__DOT__skid_rod_wr_prdy 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld)) 
                 | ((IData)(vlSelfRef.__VdfgRegularize_hd39949f1_0_0) 
                    & ((~ ((~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld)) 
                           & (IData)(vlSelfRef.__PVT__rod1_sel))) 
                       & (0U == (IData)(vlSelfRef.__PVT__beat_cnt))))));
    vlSelfRef.__PVT__u_rod1__DOT__skid_rod_wr_prdy 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld)) 
                 | ((IData)(vlSelfRef.__VdfgRegularize_hd39949f1_0_0) 
                    & ((~ ((~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld)) 
                           & (0U == (IData)(vlSelfRef.__PVT__beat_cnt)))) 
                       & (IData)(vlSelfRef.__PVT__rod1_sel)))));
    vlSelfRef.__PVT__u_rod3__DOT__skid_rod_wr_prdy 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld)) 
                 | ((IData)(vlSelfRef.__VdfgRegularize_hd39949f1_0_0) 
                    & ((~ ((~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld)) 
                           & (2U == (IData)(vlSelfRef.__PVT__beat_cnt)))) 
                       & (IData)(vlSelfRef.__PVT__rod3_sel)))));
    vlSelfRef.__PVT__u_rod2__DOT__skid_rod_wr_prdy 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld)) 
                 | ((IData)(vlSelfRef.__VdfgRegularize_hd39949f1_0_0) 
                    & ((~ ((~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld)) 
                           & (IData)(vlSelfRef.__PVT__rod3_sel))) 
                       & (2U == (IData)(vlSelfRef.__PVT__beat_cnt))))));
    vlSelfRef.__VdfgRegularize_hd39949f1_1_10 = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_prdy)) 
                                                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask)));
    vlSelfRef.__VdfgRegularize_hd39949f1_1_9 = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_prdy)) 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                      >> 1U)));
    vlSelfRef.__VdfgRegularize_hd39949f1_1_7 = ((~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_prdy)) 
                                                & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                   >> 3U));
    __VdfgRegularize_hd39949f1_1_8 = (1U & ((~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy)) 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                               >> 2U)));
    __Vtemp_8[1U] = (IData)((((QData)((IData)(((((- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.__PVT__out_data_1bpe 
                                                                        >> 0x3fU))))) 
                                                 << 0x18U) 
                                                | (0xff0000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__out_data_1bpe 
                                                               >> 0x38U)) 
                                                      << 0x10U))) 
                                               | ((0xff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelfRef.__PVT__out_data_1bpe 
                                                                             >> 0x37U))))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__out_data_1bpe 
                                                                >> 0x30U))))))) 
                              << 0x20U) | (QData)((IData)(
                                                          ((((- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelfRef.__PVT__out_data_1bpe 
                                                                                >> 0x2fU))))) 
                                                             << 0x18U) 
                                                            | (0xff0000U 
                                                               & ((IData)(
                                                                          (vlSelfRef.__PVT__out_data_1bpe 
                                                                           >> 0x28U)) 
                                                                  << 0x10U))) 
                                                           | ((0xff00U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelfRef.__PVT__out_data_1bpe 
                                                                                >> 0x27U))))) 
                                                                  << 8U)) 
                                                              | (0xffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__out_data_1bpe 
                                                                            >> 0x20U)))))))));
    __Vtemp_8[2U] = (IData)(((((QData)((IData)(((((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__out_data_1bpe 
                                                                         >> 0x3fU))))) 
                                                  << 0x18U) 
                                                 | (0xff0000U 
                                                    & ((IData)(
                                                               (vlSelfRef.__PVT__out_data_1bpe 
                                                                >> 0x38U)) 
                                                       << 0x10U))) 
                                                | ((0xff00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.__PVT__out_data_1bpe 
                                                                              >> 0x37U))))) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__out_data_1bpe 
                                                                 >> 0x30U))))))) 
                               << 0x20U) | (QData)((IData)(
                                                           ((((- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelfRef.__PVT__out_data_1bpe 
                                                                                >> 0x2fU))))) 
                                                              << 0x18U) 
                                                             | (0xff0000U 
                                                                & ((IData)(
                                                                           (vlSelfRef.__PVT__out_data_1bpe 
                                                                            >> 0x28U)) 
                                                                   << 0x10U))) 
                                                            | ((0xff00U 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelfRef.__PVT__out_data_1bpe 
                                                                                >> 0x27U))))) 
                                                                   << 8U)) 
                                                               | (0xffU 
                                                                  & (IData)(
                                                                            (vlSelfRef.__PVT__out_data_1bpe 
                                                                             >> 0x20U)))))))) 
                             >> 0x20U));
    if ((0U == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_proc_precision))) {
        if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_brdma_data_size) {
            if ((0U == (IData)(vlSelfRef.__PVT__beat_cnt))) {
                __Vtemp_13[1U] = (IData)((vlSelfRef.__PVT__u_rod0__DOT__pipe_skid_rod_wr_pd 
                                          >> 0x20U));
                vlSelfRef.__PVT__out_pd[0U] = (IData)(vlSelfRef.__PVT__u_rod0__DOT__pipe_skid_rod_wr_pd);
                vlSelfRef.__PVT__out_pd[1U] = __Vtemp_13[1U];
                vlSelfRef.__PVT__out_pd[2U] = (IData)(vlSelfRef.__PVT__u_rod1__DOT__pipe_skid_rod_wr_pd);
                vlSelfRef.__PVT__out_pd[3U] = (IData)(
                                                      (vlSelfRef.__PVT__u_rod1__DOT__pipe_skid_rod_wr_pd 
                                                       >> 0x20U));
            } else if ((2U == (IData)(vlSelfRef.__PVT__beat_cnt))) {
                __Vtemp_13[1U] = (IData)((vlSelfRef.__PVT__u_rod2__DOT__pipe_skid_rod_wr_pd 
                                          >> 0x20U));
                vlSelfRef.__PVT__out_pd[0U] = (IData)(vlSelfRef.__PVT__u_rod2__DOT__pipe_skid_rod_wr_pd);
                vlSelfRef.__PVT__out_pd[1U] = __Vtemp_13[1U];
                vlSelfRef.__PVT__out_pd[2U] = (IData)(vlSelfRef.__PVT__u_rod3__DOT__pipe_skid_rod_wr_pd);
                vlSelfRef.__PVT__out_pd[3U] = (IData)(
                                                      (vlSelfRef.__PVT__u_rod3__DOT__pipe_skid_rod_wr_pd 
                                                       >> 0x20U));
            } else {
                __Vtemp_13[1U] = 0U;
                vlSelfRef.__PVT__out_pd[0U] = 0U;
                vlSelfRef.__PVT__out_pd[1U] = __Vtemp_13[1U];
                vlSelfRef.__PVT__out_pd[2U] = 0U;
                vlSelfRef.__PVT__out_pd[3U] = 0U;
            }
        } else {
            __Vtemp_13[1U] = ((((- (IData)((1U & (IData)(
                                                         (vlSelfRef.__PVT__out_data_1bpe 
                                                          >> 0x1fU))))) 
                                << 0x18U) | (0xff0000U 
                                             & ((IData)(
                                                        (vlSelfRef.__PVT__out_data_1bpe 
                                                         >> 0x18U)) 
                                                << 0x10U))) 
                              | ((0xff00U & ((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__out_data_1bpe 
                                                                    >> 0x17U))))) 
                                             << 8U)) 
                                 | (0xffU & (IData)(
                                                    (vlSelfRef.__PVT__out_data_1bpe 
                                                     >> 0x10U)))));
            vlSelfRef.__PVT__out_pd[0U] = ((((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__out_data_1bpe 
                                                                    >> 0xfU))))) 
                                             << 0x18U) 
                                            | (0xff0000U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__out_data_1bpe 
                                                           >> 8U)) 
                                                  << 0x10U))) 
                                           | ((0xff00U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__out_data_1bpe 
                                                                         >> 7U))))) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & (IData)(vlSelfRef.__PVT__out_data_1bpe))));
            vlSelfRef.__PVT__out_pd[1U] = __Vtemp_13[1U];
            vlSelfRef.__PVT__out_pd[2U] = __Vtemp_8[1U];
            vlSelfRef.__PVT__out_pd[3U] = __Vtemp_8[2U];
        }
    } else {
        __Vtemp_13[1U] = (IData)((vlSelfRef.__PVT__out_data_1bpe 
                                  >> 0x20U));
        vlSelfRef.__PVT__out_pd[0U] = (IData)(vlSelfRef.__PVT__out_data_1bpe);
        vlSelfRef.__PVT__out_pd[1U] = __Vtemp_13[1U];
        vlSelfRef.__PVT__out_pd[2U] = 0U;
        vlSelfRef.__PVT__out_pd[3U] = 0U;
    }
    vlSelfRef.__PVT__out_pd[4U] = (1U & (IData)(vlSelfRef.__PVT__is_cube_end));
    vlSelfRef.__PVT__out_vld = ((IData)(vlSelfRef.__VdfgRegularize_hd39949f1_0_1)
                                 ? ((2U & (IData)(vlSelfRef.__PVT__beat_cnt))
                                     ? ((1U & (IData)(vlSelfRef.__PVT__beat_cnt))
                                         ? (IData)(vlSelfRef.__PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld)
                                         : (IData)(vlSelfRef.__PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld))
                                     : ((1U & (IData)(vlSelfRef.__PVT__beat_cnt))
                                         ? (IData)(vlSelfRef.__PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld)
                                         : (IData)(vlSelfRef.__PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld)))
                                 : ((0U == (IData)(vlSelfRef.__PVT__beat_cnt))
                                     ? ((IData)(vlSelfRef.__PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld) 
                                        & (IData)(vlSelfRef.__PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld))
                                     : ((2U == (IData)(vlSelfRef.__PVT__beat_cnt)) 
                                        && ((IData)(vlSelfRef.__PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld) 
                                            & (IData)(vlSelfRef.__PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld)))));
    vlSelfRef.__VdfgRegularize_hd39949f1_1_2 = ((IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_10) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_9));
    vlSelfRef.__VdfgRegularize_hd39949f1_1_6 = ((IData)(__VdfgRegularize_hd39949f1_1_8) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_7));
    vlSelfRef.__PVT__out_accept = ((IData)(vlSelfRef.__PVT__out_vld) 
                                   & (IData)(vlSelfRef.__PVT__out_rdy));
    vlSelfRef.__VdfgRegularize_hd39949f1_1_4 = ((IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_2) 
                                                | (IData)(__VdfgRegularize_hd39949f1_1_8));
    vlSelfRef.rod_wr_rdy = (1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_4) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_7))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__4(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__4\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rod3_wr_pvld = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_vld) 
                                     & ((~ (IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_4)) 
                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                           >> 3U)));
    vlSelfRef.__PVT__rod0_wr_pvld = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_vld) 
                                     & ((~ ((IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_9) 
                                            | (IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_6))) 
                                        & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask)));
    vlSelfRef.__PVT__rod1_wr_pvld = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_vld) 
                                     & ((~ ((IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_10) 
                                            | (IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_6))) 
                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                           >> 1U)));
    vlSelfRef.__PVT__rod2_wr_pvld = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_vld) 
                                     & ((~ ((IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_2) 
                                            | (IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_7))) 
                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                           >> 2U)));
    vlSelfRef.__PVT__u_rod3__DOT__skid_rod_wr_pvld 
        = ((IData)(vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_prdy)
            ? (IData)(vlSelfRef.__PVT__rod3_wr_pvld)
            : (IData)(vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_pvld));
    vlSelfRef.__PVT__u_rod0__DOT__skid_rod_wr_pvld 
        = ((IData)(vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_prdy)
            ? (IData)(vlSelfRef.__PVT__rod0_wr_pvld)
            : (IData)(vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_pvld));
    vlSelfRef.__PVT__u_rod1__DOT__skid_rod_wr_pvld 
        = ((IData)(vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_prdy)
            ? (IData)(vlSelfRef.__PVT__rod1_wr_pvld)
            : (IData)(vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_pvld));
    vlSelfRef.__PVT__u_rod2__DOT__skid_rod_wr_pvld 
        = ((IData)(vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy)
            ? (IData)(vlSelfRef.__PVT__rod2_wr_pvld)
            : (IData)(vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_pvld));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__6(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__6\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_p = (3U 
                                                & ((4U 
                                                    & (IData)(vlSelfRef.u_roc__DOT____Vcellinp__ram__ra))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.u_roc__DOT____Vcellinp__ram__ra))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.u_roc__DOT____Vcellinp__ram__ra))
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_roc_size) 
                                                      - (IData)(1U))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.u_roc__DOT____Vcellinp__ram__ra))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.u_roc__DOT____Vcellinp__ram__ra))
                                                      ? (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff3)
                                                      : (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff2))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.u_roc__DOT____Vcellinp__ram__ra))
                                                      ? (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff1)
                                                      : (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff0)))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__9(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__9\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p1__DOT__skid_flop_out_rdy 
        = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn))) 
           || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__skid_out_rdy));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__7(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__7\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __PVT__u_roc__DOT__wr_count_next_no_wr_popping;
    __PVT__u_roc__DOT__wr_count_next_no_wr_popping = 0;
    // Body
    vlSelfRef.__PVT__u_roc__DOT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_busy_int)) 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT____VdfgRegularize_h450dda84_3_3) 
                                                    & ((2U 
                                                        == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_brdma_data_use))
                                                        ? 
                                                       ((~ (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_mul.__PVT__u_roc__DOT__roc_wr_busy_int)) 
                                                        & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT____VdfgRegularize_h450dda84_3_0))
                                                        : (IData)(vlSelfRef.rod_wr_rdy))));
    __PVT__u_roc__DOT__wr_count_next_no_wr_popping 
        = (7U & ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count) 
                 + (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving)));
    vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_p = ((0U 
                                                   != (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p)) 
                                                  | (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving));
    vlSelfRef.__PVT__roc_rd_pvld = ((IData)(vlSelfRef.u_roc__DOT____VdfgRegularize_h20b7620a_0_1)
                                     ? (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_p));
    vlSelfRef.__PVT__u_roc__DOT__wr_popping = ((~ (IData)(vlSelfRef.u_roc__DOT____VdfgRegularize_h20b7620a_0_3)) 
                                               & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_p));
    vlSelfRef.__PVT__is_last_beat = ((IData)(vlSelfRef.__PVT__beat_cnt_nxt) 
                                     == ((IData)(vlSelfRef.__PVT__roc_rd_pvld)
                                          ? (7U & ((IData)(1U) 
                                                   + 
                                                   ((IData)(vlSelfRef.u_roc__DOT____VdfgRegularize_h20b7620a_0_1)
                                                     ? (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_o)
                                                     : (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_p))))
                                          : 0U));
    vlSelfRef.__PVT__u_roc__DOT__roc_wr_busy_next = 
        ((~ (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_popping)) 
         & (4U == (IData)(__PVT__u_roc__DOT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.__PVT__u_roc__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_roc__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_roc__DOT__rd_count_p_next 
                = (7U & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p));
            vlSelfRef.__PVT__u_roc__DOT__wr_count_next 
                = (7U & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count));
        } else {
            vlSelfRef.__PVT__u_roc__DOT__rd_count_p_next 
                = (7U & ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p) 
                         - (IData)(1U)));
            vlSelfRef.__PVT__u_roc__DOT__wr_count_next 
                = (7U & ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count) 
                         - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__u_roc__DOT__rd_count_p_next 
            = (7U & ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p) 
                     + (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving)));
        vlSelfRef.__PVT__u_roc__DOT__wr_count_next 
            = (7U & (IData)(__PVT__u_roc__DOT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__roc_rd_en = ((IData)(vlSelfRef.__PVT__is_last_beat) 
                                  & ((IData)(vlSelfRef.__PVT__is_surf_end) 
                                     | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_brdma_data_mode)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__9(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu__9\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p1__DOT__skid_out_rdy = (1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__pipe_skid_out_vld)) 
                                                      | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__sdp_brdma2dp_alu_ready)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_mul__1(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_mul__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    SData/*12:0*/ __Vdly__count_h;
    __Vdly__count_h = 0;
    SData/*10:0*/ __Vdly__count_c;
    __Vdly__count_c = 0;
    // Body
    __Vdly__count_c = vlSelfRef.__PVT__count_c;
    __Vdly__count_h = vlSelfRef.__PVT__count_h;
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn) {
        if (vlSelfRef.__PVT__out_accept) {
            if (vlSelfRef.__PVT__is_cube_end) {
                __Vdly__count_c = 0U;
            } else if (vlSelfRef.__PVT__is_surf_end) {
                __Vdly__count_c = (0x7ffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__count_c)));
            }
            vlSelfRef.__PVT__count_w = ((IData)(vlSelfRef.__PVT__is_last_w)
                                         ? 0U : (0x1fffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__count_w))));
            if (vlSelfRef.__PVT__is_surf_end) {
                __Vdly__count_h = 0U;
            } else if (vlSelfRef.__PVT__is_last_w) {
                __Vdly__count_h = (0x1fffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__count_h)));
            }
        }
        if (vlSelfRef.__PVT__u_rod0__DOT__skid_rod_wr_prdy) {
            vlSelfRef.__PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld 
                = vlSelfRef.__PVT__u_rod0__DOT__skid_rod_wr_pvld;
        }
        if (vlSelfRef.__PVT__u_rod1__DOT__skid_rod_wr_prdy) {
            vlSelfRef.__PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld 
                = vlSelfRef.__PVT__u_rod1__DOT__skid_rod_wr_pvld;
        }
        if (vlSelfRef.__PVT__u_rod2__DOT__skid_rod_wr_prdy) {
            vlSelfRef.__PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld 
                = vlSelfRef.__PVT__u_rod2__DOT__skid_rod_wr_pvld;
        }
        if (vlSelfRef.__PVT__u_rod3__DOT__skid_rod_wr_prdy) {
            vlSelfRef.__PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld 
                = vlSelfRef.__PVT__u_rod3__DOT__skid_rod_wr_pvld;
        }
        if (vlSelfRef.__PVT__pipe_p1__DOT__skid_flop_out_rdy) {
            vlSelfRef.__PVT__pipe_p1__DOT__skid_flop_out_vld 
                = vlSelfRef.__PVT__out_vld;
        }
        if (vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_prdy) {
            vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_pvld 
                = vlSelfRef.__PVT__rod3_wr_pvld;
        }
        if (vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_prdy) {
            vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_pvld 
                = vlSelfRef.__PVT__rod0_wr_pvld;
        }
        if (vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_prdy) {
            vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_pvld 
                = vlSelfRef.__PVT__rod1_wr_pvld;
        }
        if (vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy) {
            vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_pvld 
                = vlSelfRef.__PVT__rod2_wr_pvld;
        }
        if (vlSelfRef.__PVT__pipe_p1__DOT__skid_out_rdy) {
            vlSelfRef.__PVT__pipe_p1__DOT__pipe_skid_out_vld 
                = vlSelfRef.__PVT__pipe_p1__DOT__skid_out_vld;
        }
    } else {
        __Vdly__count_c = 0U;
        vlSelfRef.__PVT__count_w = 0U;
        __Vdly__count_h = 0U;
        vlSelfRef.__PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld = 0U;
        vlSelfRef.__PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld = 0U;
        vlSelfRef.__PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld = 0U;
        vlSelfRef.__PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld = 0U;
        vlSelfRef.__PVT__pipe_p1__DOT__skid_flop_out_vld = 0U;
        vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_pvld = 0U;
        vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_pvld = 0U;
        vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_pvld = 0U;
        vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_pvld = 0U;
        vlSelfRef.__PVT__pipe_p1__DOT__pipe_skid_out_vld = 0U;
    }
    vlSelfRef.__PVT__out_rdy = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn))) 
                                || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__skid_out_rdy));
    __Vtableidx3 = ((((IData)(vlSelfRef.__PVT__is_surf_end) 
                      << 7U) | ((IData)(vlSelfRef.__PVT__beat_cnt_nxt) 
                                << 4U)) | ((((IData)(vlSelfRef.__PVT__is_last_beat) 
                                             << 3U) 
                                            | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_brdma_data_mode) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.__PVT__out_accept) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn))));
    if ((1U & VNV_nvdla__ConstPool__TABLE_h56bc840b_0
         [__Vtableidx3])) {
        vlSelfRef.__PVT__mon_beat_cnt = VNV_nvdla__ConstPool__TABLE_h1cd985d3_0
            [__Vtableidx3];
    }
    if ((2U & VNV_nvdla__ConstPool__TABLE_h56bc840b_0
         [__Vtableidx3])) {
        vlSelfRef.__PVT__beat_cnt = VNV_nvdla__ConstPool__TABLE_h800e0715_0
            [__Vtableidx3];
    }
    vlSelfRef.__PVT__count_c = __Vdly__count_c;
    vlSelfRef.__PVT__count_h = __Vdly__count_h;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_mul__3(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_mul__3\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__u_rod0__DOT__skid_rod_wr_prdy) 
         & (IData)(vlSelfRef.__PVT__u_rod0__DOT__skid_rod_wr_pvld))) {
        vlSelfRef.__PVT__u_rod0__DOT__pipe_skid_rod_wr_pd 
            = ((IData)(vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_prdy)
                ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd
                : vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_pd);
    }
    if (((IData)(vlSelfRef.__PVT__u_rod1__DOT__skid_rod_wr_prdy) 
         & (IData)(vlSelfRef.__PVT__u_rod1__DOT__skid_rod_wr_pvld))) {
        vlSelfRef.__PVT__u_rod1__DOT__pipe_skid_rod_wr_pd 
            = ((IData)(vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_prdy)
                ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd
                : vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_pd);
    }
    if (((IData)(vlSelfRef.__PVT__u_rod3__DOT__skid_rod_wr_prdy) 
         & (IData)(vlSelfRef.__PVT__u_rod3__DOT__skid_rod_wr_pvld))) {
        vlSelfRef.__PVT__u_rod3__DOT__pipe_skid_rod_wr_pd 
            = ((IData)(vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_prdy)
                ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_rdma_unpack__DOT__pack_seq3
                : vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_pd);
    }
    if (((IData)(vlSelfRef.__PVT__u_rod2__DOT__skid_rod_wr_prdy) 
         & (IData)(vlSelfRef.__PVT__u_rod2__DOT__skid_rod_wr_pvld))) {
        vlSelfRef.__PVT__u_rod2__DOT__pipe_skid_rod_wr_pd 
            = ((IData)(vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy)
                ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_rdma_unpack__DOT__pack_seq2
                : vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_pd);
    }
    if (((IData)(vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_prdy) 
         & (IData)(vlSelfRef.__PVT__rod0_wr_pvld))) {
        vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_pd 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod0_pd;
    }
    if (((IData)(vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_prdy) 
         & (IData)(vlSelfRef.__PVT__rod1_wr_pvld))) {
        vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_pd 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod1_pd;
    }
    if (((IData)(vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_prdy) 
         & (IData)(vlSelfRef.__PVT__rod3_wr_pvld))) {
        vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_pd 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_rdma_unpack__DOT__pack_seq3;
    }
    if (((IData)(vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy) 
         & (IData)(vlSelfRef.__PVT__rod2_wr_pvld))) {
        vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_pd 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_rdma_unpack__DOT__pack_seq2;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_mul__4(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_mul__4\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    if (vlSelfRef.__PVT__u_roc__DOT__wr_popping) {
        vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_o = vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_p;
    } else if (vlSelfRef.__PVT__u_roc__DOT__wr_popping) {
        vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_o = 0U;
    }
    __Vtableidx4 = ((0x18U & (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_roc_size) 
                               - (IData)(1U)) << 3U)) 
                    | (((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_adr) 
                        << 1U) | ((IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving) 
                                  & ((~ (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_popping)) 
                                     | (0U < (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count))))));
    if ((1U & VNV_nvdla__ConstPool__TABLE_h2ddc24bb_0
         [__Vtableidx4])) {
        vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff0 
            = VNV_nvdla__ConstPool__TABLE_h49873950_0
            [__Vtableidx4];
    }
    if ((2U & VNV_nvdla__ConstPool__TABLE_h2ddc24bb_0
         [__Vtableidx4])) {
        vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff1 
            = VNV_nvdla__ConstPool__TABLE_haebb1ad7_0
            [__Vtableidx4];
    }
    if ((4U & VNV_nvdla__ConstPool__TABLE_h2ddc24bb_0
         [__Vtableidx4])) {
        vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff2 
            = VNV_nvdla__ConstPool__TABLE_h1f8cbabb_0
            [__Vtableidx4];
    }
    if ((8U & VNV_nvdla__ConstPool__TABLE_h2ddc24bb_0
         [__Vtableidx4])) {
        vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff3 
            = VNV_nvdla__ConstPool__TABLE_h9d367f52_0
            [__Vtableidx4];
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_mul__4(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_mul__4\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rod3_wr_pvld = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod_vld) 
                                     & ((~ (IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_4)) 
                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                           >> 3U)));
    vlSelfRef.__PVT__rod0_wr_pvld = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod_vld) 
                                     & ((~ ((IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_9) 
                                            | (IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_6))) 
                                        & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask)));
    vlSelfRef.__PVT__rod1_wr_pvld = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod_vld) 
                                     & ((~ ((IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_10) 
                                            | (IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_6))) 
                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                           >> 1U)));
    vlSelfRef.__PVT__rod2_wr_pvld = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__mul_rod_vld) 
                                     & ((~ ((IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_2) 
                                            | (IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_7))) 
                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__alu_rod_mask) 
                                           >> 2U)));
    vlSelfRef.__PVT__u_rod3__DOT__skid_rod_wr_pvld 
        = ((IData)(vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_prdy)
            ? (IData)(vlSelfRef.__PVT__rod3_wr_pvld)
            : (IData)(vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_pvld));
    vlSelfRef.__PVT__u_rod0__DOT__skid_rod_wr_pvld 
        = ((IData)(vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_prdy)
            ? (IData)(vlSelfRef.__PVT__rod0_wr_pvld)
            : (IData)(vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_pvld));
    vlSelfRef.__PVT__u_rod1__DOT__skid_rod_wr_pvld 
        = ((IData)(vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_prdy)
            ? (IData)(vlSelfRef.__PVT__rod1_wr_pvld)
            : (IData)(vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_pvld));
    vlSelfRef.__PVT__u_rod2__DOT__skid_rod_wr_pvld 
        = ((IData)(vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy)
            ? (IData)(vlSelfRef.__PVT__rod2_wr_pvld)
            : (IData)(vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_pvld));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_mul__7(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_mul__7\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __PVT__u_roc__DOT__wr_count_next_no_wr_popping;
    __PVT__u_roc__DOT__wr_count_next_no_wr_popping = 0;
    // Body
    vlSelfRef.__PVT__u_roc__DOT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_busy_int)) 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT____VdfgRegularize_h450dda84_3_5) 
                                                    & ((2U 
                                                        == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_brdma_data_use))
                                                        ? 
                                                       ((~ (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu.__PVT__u_roc__DOT__roc_wr_busy_int)) 
                                                        & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT____VdfgRegularize_h450dda84_3_0))
                                                        : (IData)(vlSelfRef.rod_wr_rdy))));
    __PVT__u_roc__DOT__wr_count_next_no_wr_popping 
        = (7U & ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count) 
                 + (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving)));
    vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_p = ((0U 
                                                   != (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p)) 
                                                  | (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving));
    vlSelfRef.__PVT__roc_rd_pvld = ((IData)(vlSelfRef.u_roc__DOT____VdfgRegularize_h20b7620a_0_1)
                                     ? (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_p));
    vlSelfRef.__PVT__u_roc__DOT__wr_popping = ((~ (IData)(vlSelfRef.u_roc__DOT____VdfgRegularize_h20b7620a_0_3)) 
                                               & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_p));
    vlSelfRef.__PVT__is_last_beat = ((IData)(vlSelfRef.__PVT__beat_cnt_nxt) 
                                     == ((IData)(vlSelfRef.__PVT__roc_rd_pvld)
                                          ? (7U & ((IData)(1U) 
                                                   + 
                                                   ((IData)(vlSelfRef.u_roc__DOT____VdfgRegularize_h20b7620a_0_1)
                                                     ? (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_o)
                                                     : (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_p))))
                                          : 0U));
    vlSelfRef.__PVT__u_roc__DOT__roc_wr_busy_next = 
        ((~ (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_popping)) 
         & (4U == (IData)(__PVT__u_roc__DOT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.__PVT__u_roc__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_roc__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_roc__DOT__rd_count_p_next 
                = (7U & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p));
            vlSelfRef.__PVT__u_roc__DOT__wr_count_next 
                = (7U & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count));
        } else {
            vlSelfRef.__PVT__u_roc__DOT__rd_count_p_next 
                = (7U & ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p) 
                         - (IData)(1U)));
            vlSelfRef.__PVT__u_roc__DOT__wr_count_next 
                = (7U & ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count) 
                         - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__u_roc__DOT__rd_count_p_next 
            = (7U & ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p) 
                     + (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving)));
        vlSelfRef.__PVT__u_roc__DOT__wr_count_next 
            = (7U & (IData)(__PVT__u_roc__DOT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__roc_rd_en = ((IData)(vlSelfRef.__PVT__is_last_beat) 
                                  & ((IData)(vlSelfRef.__PVT__is_surf_end) 
                                     | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_brdma_data_mode)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_mul__9(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_mul__9\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p1__DOT__skid_out_rdy = (1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__pipe_skid_out_vld)) 
                                                      | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__sdp_brdma2dp_mul_ready)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___ico_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__0(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___ico_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_roc__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__nvdla_gated_clk) 
           & (IData)(vlSelfRef.__PVT__u_roc__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__0(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_hd39949f1_0_1 = (1U 
                                                & ((0U 
                                                    != (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_proc_precision)) 
                                                   | (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_nrdma_data_size))));
    vlSelfRef.__PVT__size_of_surf = (0x7ffU & ((0U 
                                                == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_proc_precision))
                                                ? (0x3ffU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_channel) 
                                                      >> 3U))
                                                : ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_channel) 
                                                   >> 2U)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__1(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    SData/*12:0*/ __Vdly__count_h;
    __Vdly__count_h = 0;
    SData/*10:0*/ __Vdly__count_c;
    __Vdly__count_c = 0;
    // Body
    __Vdly__count_c = vlSelfRef.__PVT__count_c;
    __Vdly__count_h = vlSelfRef.__PVT__count_h;
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn) {
        if (vlSelfRef.__PVT__out_accept) {
            if (vlSelfRef.__PVT__is_cube_end) {
                __Vdly__count_c = 0U;
            } else if (vlSelfRef.__PVT__is_surf_end) {
                __Vdly__count_c = (0x7ffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__count_c)));
            }
            vlSelfRef.__PVT__count_w = ((IData)(vlSelfRef.__PVT__is_last_w)
                                         ? 0U : (0x1fffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__count_w))));
            if (vlSelfRef.__PVT__is_surf_end) {
                __Vdly__count_h = 0U;
            } else if (vlSelfRef.__PVT__is_last_w) {
                __Vdly__count_h = (0x1fffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__count_h)));
            }
        }
        if (vlSelfRef.__PVT__u_rod0__DOT__skid_rod_wr_prdy) {
            vlSelfRef.__PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld 
                = vlSelfRef.__PVT__u_rod0__DOT__skid_rod_wr_pvld;
        }
        if (vlSelfRef.__PVT__u_rod1__DOT__skid_rod_wr_prdy) {
            vlSelfRef.__PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld 
                = vlSelfRef.__PVT__u_rod1__DOT__skid_rod_wr_pvld;
        }
        if (vlSelfRef.__PVT__u_rod2__DOT__skid_rod_wr_prdy) {
            vlSelfRef.__PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld 
                = vlSelfRef.__PVT__u_rod2__DOT__skid_rod_wr_pvld;
        }
        if (vlSelfRef.__PVT__u_rod3__DOT__skid_rod_wr_prdy) {
            vlSelfRef.__PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld 
                = vlSelfRef.__PVT__u_rod3__DOT__skid_rod_wr_pvld;
        }
        if (vlSelfRef.__PVT__pipe_p1__DOT__skid_flop_out_rdy) {
            vlSelfRef.__PVT__pipe_p1__DOT__skid_flop_out_vld 
                = vlSelfRef.__PVT__out_vld;
        }
        if (vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_prdy) {
            vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_pvld 
                = vlSelfRef.__PVT__rod3_wr_pvld;
        }
        if (vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_prdy) {
            vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_pvld 
                = vlSelfRef.__PVT__rod0_wr_pvld;
        }
        if (vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_prdy) {
            vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_pvld 
                = vlSelfRef.__PVT__rod1_wr_pvld;
        }
        if (vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy) {
            vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_pvld 
                = vlSelfRef.__PVT__rod2_wr_pvld;
        }
        if (vlSelfRef.__PVT__pipe_p1__DOT__skid_out_rdy) {
            vlSelfRef.__PVT__pipe_p1__DOT__pipe_skid_out_vld 
                = vlSelfRef.__PVT__pipe_p1__DOT__skid_out_vld;
        }
    } else {
        __Vdly__count_c = 0U;
        vlSelfRef.__PVT__count_w = 0U;
        __Vdly__count_h = 0U;
        vlSelfRef.__PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld = 0U;
        vlSelfRef.__PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld = 0U;
        vlSelfRef.__PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld = 0U;
        vlSelfRef.__PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld = 0U;
        vlSelfRef.__PVT__pipe_p1__DOT__skid_flop_out_vld = 0U;
        vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_pvld = 0U;
        vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_pvld = 0U;
        vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_pvld = 0U;
        vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_pvld = 0U;
        vlSelfRef.__PVT__pipe_p1__DOT__pipe_skid_out_vld = 0U;
    }
    vlSelfRef.__PVT__out_rdy = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn))) 
                                || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__skid_out_rdy));
    __Vtableidx5 = ((((IData)(vlSelfRef.__PVT__is_surf_end) 
                      << 7U) | ((IData)(vlSelfRef.__PVT__beat_cnt_nxt) 
                                << 4U)) | ((((IData)(vlSelfRef.__PVT__is_last_beat) 
                                             << 3U) 
                                            | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_nrdma_data_mode) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.__PVT__out_accept) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn))));
    if ((1U & VNV_nvdla__ConstPool__TABLE_h56bc840b_0
         [__Vtableidx5])) {
        vlSelfRef.__PVT__mon_beat_cnt = VNV_nvdla__ConstPool__TABLE_h1cd985d3_0
            [__Vtableidx5];
    }
    if ((2U & VNV_nvdla__ConstPool__TABLE_h56bc840b_0
         [__Vtableidx5])) {
        vlSelfRef.__PVT__beat_cnt = VNV_nvdla__ConstPool__TABLE_h800e0715_0
            [__Vtableidx5];
    }
    vlSelfRef.__PVT__count_c = __Vdly__count_c;
    vlSelfRef.__PVT__count_h = __Vdly__count_h;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__3(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__3\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__u_rod0__DOT__skid_rod_wr_prdy) 
         & (IData)(vlSelfRef.__PVT__u_rod0__DOT__skid_rod_wr_pvld))) {
        vlSelfRef.__PVT__u_rod0__DOT__pipe_skid_rod_wr_pd 
            = ((IData)(vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_prdy)
                ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd
                : vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_pd);
    }
    if (((IData)(vlSelfRef.__PVT__u_rod1__DOT__skid_rod_wr_prdy) 
         & (IData)(vlSelfRef.__PVT__u_rod1__DOT__skid_rod_wr_pvld))) {
        vlSelfRef.__PVT__u_rod1__DOT__pipe_skid_rod_wr_pd 
            = ((IData)(vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_prdy)
                ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd
                : vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_pd);
    }
    if (((IData)(vlSelfRef.__PVT__u_rod3__DOT__skid_rod_wr_prdy) 
         & (IData)(vlSelfRef.__PVT__u_rod3__DOT__skid_rod_wr_pvld))) {
        vlSelfRef.__PVT__u_rod3__DOT__pipe_skid_rod_wr_pd 
            = ((IData)(vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_prdy)
                ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_rdma_unpack__DOT__pack_seq3
                : vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_pd);
    }
    if (((IData)(vlSelfRef.__PVT__u_rod2__DOT__skid_rod_wr_prdy) 
         & (IData)(vlSelfRef.__PVT__u_rod2__DOT__skid_rod_wr_pvld))) {
        vlSelfRef.__PVT__u_rod2__DOT__pipe_skid_rod_wr_pd 
            = ((IData)(vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy)
                ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_rdma_unpack__DOT__pack_seq2
                : vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_pd);
    }
    if (((IData)(vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_prdy) 
         & (IData)(vlSelfRef.__PVT__rod0_wr_pvld))) {
        vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_pd 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod0_pd;
    }
    if (((IData)(vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_prdy) 
         & (IData)(vlSelfRef.__PVT__rod1_wr_pvld))) {
        vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_pd 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod1_pd;
    }
    if (((IData)(vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_prdy) 
         & (IData)(vlSelfRef.__PVT__rod3_wr_pvld))) {
        vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_pd 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_rdma_unpack__DOT__pack_seq3;
    }
    if (((IData)(vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy) 
         & (IData)(vlSelfRef.__PVT__rod2_wr_pvld))) {
        vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_pd 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_rdma_unpack__DOT__pack_seq2;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__4(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__4\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    if (vlSelfRef.__PVT__u_roc__DOT__wr_popping) {
        vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_o = vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_p;
    } else if (vlSelfRef.__PVT__u_roc__DOT__wr_popping) {
        vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_o = 0U;
    }
    __Vtableidx6 = ((0x18U & (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_roc_size) 
                               - (IData)(1U)) << 3U)) 
                    | (((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_adr) 
                        << 1U) | ((IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving) 
                                  & ((~ (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_popping)) 
                                     | (0U < (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count))))));
    if ((1U & VNV_nvdla__ConstPool__TABLE_h2ddc24bb_0
         [__Vtableidx6])) {
        vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff0 
            = VNV_nvdla__ConstPool__TABLE_h49873950_0
            [__Vtableidx6];
    }
    if ((2U & VNV_nvdla__ConstPool__TABLE_h2ddc24bb_0
         [__Vtableidx6])) {
        vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff1 
            = VNV_nvdla__ConstPool__TABLE_haebb1ad7_0
            [__Vtableidx6];
    }
    if ((4U & VNV_nvdla__ConstPool__TABLE_h2ddc24bb_0
         [__Vtableidx6])) {
        vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff2 
            = VNV_nvdla__ConstPool__TABLE_h1f8cbabb_0
            [__Vtableidx6];
    }
    if ((8U & VNV_nvdla__ConstPool__TABLE_h2ddc24bb_0
         [__Vtableidx6])) {
        vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff3 
            = VNV_nvdla__ConstPool__TABLE_h9d367f52_0
            [__Vtableidx6];
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__0(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_last_w = ((IData)(vlSelfRef.__PVT__count_w) 
                                  == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_width));
    vlSelfRef.__PVT__is_last_h = ((IData)(vlSelfRef.__PVT__count_h) 
                                  == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_height));
    vlSelfRef.__PVT__beat_cnt_nxt = (7U & ((IData)(vlSelfRef.__PVT__beat_cnt) 
                                           + ((IData)(vlSelfRef.__VdfgRegularize_hd39949f1_0_1)
                                               ? 1U
                                               : 2U)));
    if (vlSelfRef.__VdfgRegularize_hd39949f1_0_1) {
        vlSelfRef.__PVT__rod1_sel = (1U == (IData)(vlSelfRef.__PVT__beat_cnt));
        vlSelfRef.__PVT__rod3_sel = (3U == (IData)(vlSelfRef.__PVT__beat_cnt));
    } else {
        vlSelfRef.__PVT__rod1_sel = (0U == (IData)(vlSelfRef.__PVT__beat_cnt));
        vlSelfRef.__PVT__rod3_sel = (2U == (IData)(vlSelfRef.__PVT__beat_cnt));
    }
    vlSelfRef.__PVT__is_surf_end = ((IData)(vlSelfRef.__PVT__is_last_w) 
                                    & (IData)(vlSelfRef.__PVT__is_last_h));
    vlSelfRef.__PVT__rodx_rd_en = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_nrdma_data_mode) 
                                   || ((IData)(vlSelfRef.__PVT__is_last_h) 
                                       & (IData)(vlSelfRef.__PVT__is_last_w)));
    vlSelfRef.__PVT__is_cube_end = ((IData)(vlSelfRef.__PVT__is_surf_end) 
                                    & ((IData)(vlSelfRef.__PVT__count_c) 
                                       == (IData)(vlSelfRef.__PVT__size_of_surf)));
    vlSelfRef.__VdfgRegularize_hd39949f1_0_0 = ((IData)(vlSelfRef.__PVT__out_rdy) 
                                                & (IData)(vlSelfRef.__PVT__rodx_rd_en));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__3(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__3\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdfgRegularize_hd39949f1_1_8;
    __VdfgRegularize_hd39949f1_1_8 = 0;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_13;
    // Body
    vlSelfRef.__PVT__u_rod0__DOT__skid_rod_wr_prdy 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld)) 
                 | ((IData)(vlSelfRef.__VdfgRegularize_hd39949f1_0_0) 
                    & ((~ ((~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld)) 
                           & (IData)(vlSelfRef.__PVT__rod1_sel))) 
                       & (0U == (IData)(vlSelfRef.__PVT__beat_cnt))))));
    vlSelfRef.__PVT__u_rod1__DOT__skid_rod_wr_prdy 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld)) 
                 | ((IData)(vlSelfRef.__VdfgRegularize_hd39949f1_0_0) 
                    & ((~ ((~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld)) 
                           & (0U == (IData)(vlSelfRef.__PVT__beat_cnt)))) 
                       & (IData)(vlSelfRef.__PVT__rod1_sel)))));
    vlSelfRef.__PVT__u_rod3__DOT__skid_rod_wr_prdy 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld)) 
                 | ((IData)(vlSelfRef.__VdfgRegularize_hd39949f1_0_0) 
                    & ((~ ((~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld)) 
                           & (2U == (IData)(vlSelfRef.__PVT__beat_cnt)))) 
                       & (IData)(vlSelfRef.__PVT__rod3_sel)))));
    vlSelfRef.__PVT__u_rod2__DOT__skid_rod_wr_prdy 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld)) 
                 | ((IData)(vlSelfRef.__VdfgRegularize_hd39949f1_0_0) 
                    & ((~ ((~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld)) 
                           & (IData)(vlSelfRef.__PVT__rod3_sel))) 
                       & (2U == (IData)(vlSelfRef.__PVT__beat_cnt))))));
    vlSelfRef.__VdfgRegularize_hd39949f1_1_10 = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_prdy)) 
                                                    & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask)));
    vlSelfRef.__VdfgRegularize_hd39949f1_1_9 = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_prdy)) 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                      >> 1U)));
    vlSelfRef.__VdfgRegularize_hd39949f1_1_7 = ((~ (IData)(vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_prdy)) 
                                                & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                                   >> 3U));
    __VdfgRegularize_hd39949f1_1_8 = (1U & ((~ (IData)(vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy)) 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                               >> 2U)));
    __Vtemp_8[1U] = (IData)((((QData)((IData)(((((- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelfRef.__PVT__out_data_1bpe 
                                                                        >> 0x3fU))))) 
                                                 << 0x18U) 
                                                | (0xff0000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__out_data_1bpe 
                                                               >> 0x38U)) 
                                                      << 0x10U))) 
                                               | ((0xff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelfRef.__PVT__out_data_1bpe 
                                                                             >> 0x37U))))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__out_data_1bpe 
                                                                >> 0x30U))))))) 
                              << 0x20U) | (QData)((IData)(
                                                          ((((- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelfRef.__PVT__out_data_1bpe 
                                                                                >> 0x2fU))))) 
                                                             << 0x18U) 
                                                            | (0xff0000U 
                                                               & ((IData)(
                                                                          (vlSelfRef.__PVT__out_data_1bpe 
                                                                           >> 0x28U)) 
                                                                  << 0x10U))) 
                                                           | ((0xff00U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelfRef.__PVT__out_data_1bpe 
                                                                                >> 0x27U))))) 
                                                                  << 8U)) 
                                                              | (0xffU 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__out_data_1bpe 
                                                                            >> 0x20U)))))))));
    __Vtemp_8[2U] = (IData)(((((QData)((IData)(((((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__out_data_1bpe 
                                                                         >> 0x3fU))))) 
                                                  << 0x18U) 
                                                 | (0xff0000U 
                                                    & ((IData)(
                                                               (vlSelfRef.__PVT__out_data_1bpe 
                                                                >> 0x38U)) 
                                                       << 0x10U))) 
                                                | ((0xff00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.__PVT__out_data_1bpe 
                                                                              >> 0x37U))))) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__out_data_1bpe 
                                                                 >> 0x30U))))))) 
                               << 0x20U) | (QData)((IData)(
                                                           ((((- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelfRef.__PVT__out_data_1bpe 
                                                                                >> 0x2fU))))) 
                                                              << 0x18U) 
                                                             | (0xff0000U 
                                                                & ((IData)(
                                                                           (vlSelfRef.__PVT__out_data_1bpe 
                                                                            >> 0x28U)) 
                                                                   << 0x10U))) 
                                                            | ((0xff00U 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelfRef.__PVT__out_data_1bpe 
                                                                                >> 0x27U))))) 
                                                                   << 8U)) 
                                                               | (0xffU 
                                                                  & (IData)(
                                                                            (vlSelfRef.__PVT__out_data_1bpe 
                                                                             >> 0x20U)))))))) 
                             >> 0x20U));
    if ((0U == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_proc_precision))) {
        if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_nrdma_data_size) {
            if ((0U == (IData)(vlSelfRef.__PVT__beat_cnt))) {
                __Vtemp_13[1U] = (IData)((vlSelfRef.__PVT__u_rod0__DOT__pipe_skid_rod_wr_pd 
                                          >> 0x20U));
                vlSelfRef.__PVT__out_pd[0U] = (IData)(vlSelfRef.__PVT__u_rod0__DOT__pipe_skid_rod_wr_pd);
                vlSelfRef.__PVT__out_pd[1U] = __Vtemp_13[1U];
                vlSelfRef.__PVT__out_pd[2U] = (IData)(vlSelfRef.__PVT__u_rod1__DOT__pipe_skid_rod_wr_pd);
                vlSelfRef.__PVT__out_pd[3U] = (IData)(
                                                      (vlSelfRef.__PVT__u_rod1__DOT__pipe_skid_rod_wr_pd 
                                                       >> 0x20U));
            } else if ((2U == (IData)(vlSelfRef.__PVT__beat_cnt))) {
                __Vtemp_13[1U] = (IData)((vlSelfRef.__PVT__u_rod2__DOT__pipe_skid_rod_wr_pd 
                                          >> 0x20U));
                vlSelfRef.__PVT__out_pd[0U] = (IData)(vlSelfRef.__PVT__u_rod2__DOT__pipe_skid_rod_wr_pd);
                vlSelfRef.__PVT__out_pd[1U] = __Vtemp_13[1U];
                vlSelfRef.__PVT__out_pd[2U] = (IData)(vlSelfRef.__PVT__u_rod3__DOT__pipe_skid_rod_wr_pd);
                vlSelfRef.__PVT__out_pd[3U] = (IData)(
                                                      (vlSelfRef.__PVT__u_rod3__DOT__pipe_skid_rod_wr_pd 
                                                       >> 0x20U));
            } else {
                __Vtemp_13[1U] = 0U;
                vlSelfRef.__PVT__out_pd[0U] = 0U;
                vlSelfRef.__PVT__out_pd[1U] = __Vtemp_13[1U];
                vlSelfRef.__PVT__out_pd[2U] = 0U;
                vlSelfRef.__PVT__out_pd[3U] = 0U;
            }
        } else {
            __Vtemp_13[1U] = ((((- (IData)((1U & (IData)(
                                                         (vlSelfRef.__PVT__out_data_1bpe 
                                                          >> 0x1fU))))) 
                                << 0x18U) | (0xff0000U 
                                             & ((IData)(
                                                        (vlSelfRef.__PVT__out_data_1bpe 
                                                         >> 0x18U)) 
                                                << 0x10U))) 
                              | ((0xff00U & ((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__out_data_1bpe 
                                                                    >> 0x17U))))) 
                                             << 8U)) 
                                 | (0xffU & (IData)(
                                                    (vlSelfRef.__PVT__out_data_1bpe 
                                                     >> 0x10U)))));
            vlSelfRef.__PVT__out_pd[0U] = ((((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.__PVT__out_data_1bpe 
                                                                    >> 0xfU))))) 
                                             << 0x18U) 
                                            | (0xff0000U 
                                               & ((IData)(
                                                          (vlSelfRef.__PVT__out_data_1bpe 
                                                           >> 8U)) 
                                                  << 0x10U))) 
                                           | ((0xff00U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelfRef.__PVT__out_data_1bpe 
                                                                         >> 7U))))) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & (IData)(vlSelfRef.__PVT__out_data_1bpe))));
            vlSelfRef.__PVT__out_pd[1U] = __Vtemp_13[1U];
            vlSelfRef.__PVT__out_pd[2U] = __Vtemp_8[1U];
            vlSelfRef.__PVT__out_pd[3U] = __Vtemp_8[2U];
        }
    } else {
        __Vtemp_13[1U] = (IData)((vlSelfRef.__PVT__out_data_1bpe 
                                  >> 0x20U));
        vlSelfRef.__PVT__out_pd[0U] = (IData)(vlSelfRef.__PVT__out_data_1bpe);
        vlSelfRef.__PVT__out_pd[1U] = __Vtemp_13[1U];
        vlSelfRef.__PVT__out_pd[2U] = 0U;
        vlSelfRef.__PVT__out_pd[3U] = 0U;
    }
    vlSelfRef.__PVT__out_pd[4U] = (1U & (IData)(vlSelfRef.__PVT__is_cube_end));
    vlSelfRef.__PVT__out_vld = ((IData)(vlSelfRef.__VdfgRegularize_hd39949f1_0_1)
                                 ? ((2U & (IData)(vlSelfRef.__PVT__beat_cnt))
                                     ? ((1U & (IData)(vlSelfRef.__PVT__beat_cnt))
                                         ? (IData)(vlSelfRef.__PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld)
                                         : (IData)(vlSelfRef.__PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld))
                                     : ((1U & (IData)(vlSelfRef.__PVT__beat_cnt))
                                         ? (IData)(vlSelfRef.__PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld)
                                         : (IData)(vlSelfRef.__PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld)))
                                 : ((0U == (IData)(vlSelfRef.__PVT__beat_cnt))
                                     ? ((IData)(vlSelfRef.__PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld) 
                                        & (IData)(vlSelfRef.__PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld))
                                     : ((2U == (IData)(vlSelfRef.__PVT__beat_cnt)) 
                                        && ((IData)(vlSelfRef.__PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld) 
                                            & (IData)(vlSelfRef.__PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld)))));
    vlSelfRef.__VdfgRegularize_hd39949f1_1_2 = ((IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_10) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_9));
    vlSelfRef.__VdfgRegularize_hd39949f1_1_6 = ((IData)(__VdfgRegularize_hd39949f1_1_8) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_7));
    vlSelfRef.__PVT__out_accept = ((IData)(vlSelfRef.__PVT__out_vld) 
                                   & (IData)(vlSelfRef.__PVT__out_rdy));
    vlSelfRef.__VdfgRegularize_hd39949f1_1_4 = ((IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_2) 
                                                | (IData)(__VdfgRegularize_hd39949f1_1_8));
    vlSelfRef.rod_wr_rdy = (1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_4) 
                                     | (IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_7))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__4(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__4\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rod3_wr_pvld = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_vld) 
                                     & ((~ (IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_4)) 
                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                           >> 3U)));
    vlSelfRef.__PVT__rod0_wr_pvld = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_vld) 
                                     & ((~ ((IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_9) 
                                            | (IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_6))) 
                                        & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask)));
    vlSelfRef.__PVT__rod1_wr_pvld = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_vld) 
                                     & ((~ ((IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_10) 
                                            | (IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_6))) 
                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                           >> 1U)));
    vlSelfRef.__PVT__rod2_wr_pvld = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_vld) 
                                     & ((~ ((IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_2) 
                                            | (IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_7))) 
                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                           >> 2U)));
    vlSelfRef.__PVT__u_rod3__DOT__skid_rod_wr_pvld 
        = ((IData)(vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_prdy)
            ? (IData)(vlSelfRef.__PVT__rod3_wr_pvld)
            : (IData)(vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_pvld));
    vlSelfRef.__PVT__u_rod0__DOT__skid_rod_wr_pvld 
        = ((IData)(vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_prdy)
            ? (IData)(vlSelfRef.__PVT__rod0_wr_pvld)
            : (IData)(vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_pvld));
    vlSelfRef.__PVT__u_rod1__DOT__skid_rod_wr_pvld 
        = ((IData)(vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_prdy)
            ? (IData)(vlSelfRef.__PVT__rod1_wr_pvld)
            : (IData)(vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_pvld));
    vlSelfRef.__PVT__u_rod2__DOT__skid_rod_wr_pvld 
        = ((IData)(vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy)
            ? (IData)(vlSelfRef.__PVT__rod2_wr_pvld)
            : (IData)(vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_pvld));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__6(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__6\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_p = (3U 
                                                & ((4U 
                                                    & (IData)(vlSelfRef.u_roc__DOT____Vcellinp__ram__ra))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.u_roc__DOT____Vcellinp__ram__ra))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.u_roc__DOT____Vcellinp__ram__ra))
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_roc_size) 
                                                      - (IData)(1U))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.u_roc__DOT____Vcellinp__ram__ra))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.u_roc__DOT____Vcellinp__ram__ra))
                                                      ? (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff3)
                                                      : (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff2))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.u_roc__DOT____Vcellinp__ram__ra))
                                                      ? (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff1)
                                                      : (IData)(vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff0)))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__7(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__7\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __PVT__u_roc__DOT__wr_count_next_no_wr_popping;
    __PVT__u_roc__DOT__wr_count_next_no_wr_popping = 0;
    // Body
    vlSelfRef.__PVT__u_roc__DOT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_busy_int)) 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT____VdfgRegularize_h450dda84_3_3) 
                                                    & ((2U 
                                                        == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_nrdma_data_use))
                                                        ? 
                                                       ((~ (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul.__PVT__u_roc__DOT__roc_wr_busy_int)) 
                                                        & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT____VdfgRegularize_h450dda84_3_0))
                                                        : (IData)(vlSelfRef.rod_wr_rdy))));
    __PVT__u_roc__DOT__wr_count_next_no_wr_popping 
        = (7U & ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count) 
                 + (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving)));
    vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_p = ((0U 
                                                   != (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p)) 
                                                  | (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving));
    vlSelfRef.__PVT__roc_rd_pvld = ((IData)(vlSelfRef.u_roc__DOT____VdfgRegularize_h20b7620a_0_1)
                                     ? (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_p));
    vlSelfRef.__PVT__u_roc__DOT__wr_popping = ((~ (IData)(vlSelfRef.u_roc__DOT____VdfgRegularize_h20b7620a_0_3)) 
                                               & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_p));
    vlSelfRef.__PVT__is_last_beat = ((IData)(vlSelfRef.__PVT__beat_cnt_nxt) 
                                     == ((IData)(vlSelfRef.__PVT__roc_rd_pvld)
                                          ? (7U & ((IData)(1U) 
                                                   + 
                                                   ((IData)(vlSelfRef.u_roc__DOT____VdfgRegularize_h20b7620a_0_1)
                                                     ? (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_o)
                                                     : (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_p))))
                                          : 0U));
    vlSelfRef.__PVT__u_roc__DOT__roc_wr_busy_next = 
        ((~ (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_popping)) 
         & (4U == (IData)(__PVT__u_roc__DOT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.__PVT__u_roc__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_roc__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_roc__DOT__rd_count_p_next 
                = (7U & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p));
            vlSelfRef.__PVT__u_roc__DOT__wr_count_next 
                = (7U & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count));
        } else {
            vlSelfRef.__PVT__u_roc__DOT__rd_count_p_next 
                = (7U & ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p) 
                         - (IData)(1U)));
            vlSelfRef.__PVT__u_roc__DOT__wr_count_next 
                = (7U & ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count) 
                         - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__u_roc__DOT__rd_count_p_next 
            = (7U & ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p) 
                     + (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving)));
        vlSelfRef.__PVT__u_roc__DOT__wr_count_next 
            = (7U & (IData)(__PVT__u_roc__DOT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__roc_rd_en = ((IData)(vlSelfRef.__PVT__is_last_beat) 
                                  & ((IData)(vlSelfRef.__PVT__is_surf_end) 
                                     | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_nrdma_data_mode)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__9(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu__9\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p1__DOT__skid_out_rdy = (1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__pipe_skid_out_vld)) 
                                                      | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__sdp_nrdma2dp_alu_ready)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__1(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    SData/*12:0*/ __Vdly__count_h;
    __Vdly__count_h = 0;
    SData/*10:0*/ __Vdly__count_c;
    __Vdly__count_c = 0;
    // Body
    __Vdly__count_c = vlSelfRef.__PVT__count_c;
    __Vdly__count_h = vlSelfRef.__PVT__count_h;
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn) {
        if (vlSelfRef.__PVT__out_accept) {
            if (vlSelfRef.__PVT__is_cube_end) {
                __Vdly__count_c = 0U;
            } else if (vlSelfRef.__PVT__is_surf_end) {
                __Vdly__count_c = (0x7ffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__count_c)));
            }
            vlSelfRef.__PVT__count_w = ((IData)(vlSelfRef.__PVT__is_last_w)
                                         ? 0U : (0x1fffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__count_w))));
            if (vlSelfRef.__PVT__is_surf_end) {
                __Vdly__count_h = 0U;
            } else if (vlSelfRef.__PVT__is_last_w) {
                __Vdly__count_h = (0x1fffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__count_h)));
            }
        }
        if (vlSelfRef.__PVT__u_rod0__DOT__skid_rod_wr_prdy) {
            vlSelfRef.__PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld 
                = vlSelfRef.__PVT__u_rod0__DOT__skid_rod_wr_pvld;
        }
        if (vlSelfRef.__PVT__u_rod1__DOT__skid_rod_wr_prdy) {
            vlSelfRef.__PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld 
                = vlSelfRef.__PVT__u_rod1__DOT__skid_rod_wr_pvld;
        }
        if (vlSelfRef.__PVT__u_rod2__DOT__skid_rod_wr_prdy) {
            vlSelfRef.__PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld 
                = vlSelfRef.__PVT__u_rod2__DOT__skid_rod_wr_pvld;
        }
        if (vlSelfRef.__PVT__u_rod3__DOT__skid_rod_wr_prdy) {
            vlSelfRef.__PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld 
                = vlSelfRef.__PVT__u_rod3__DOT__skid_rod_wr_pvld;
        }
        if (vlSelfRef.__PVT__pipe_p1__DOT__skid_flop_out_rdy) {
            vlSelfRef.__PVT__pipe_p1__DOT__skid_flop_out_vld 
                = vlSelfRef.__PVT__out_vld;
        }
        if (vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_prdy) {
            vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_pvld 
                = vlSelfRef.__PVT__rod3_wr_pvld;
        }
        if (vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_prdy) {
            vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_pvld 
                = vlSelfRef.__PVT__rod0_wr_pvld;
        }
        if (vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_prdy) {
            vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_pvld 
                = vlSelfRef.__PVT__rod1_wr_pvld;
        }
        if (vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy) {
            vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_pvld 
                = vlSelfRef.__PVT__rod2_wr_pvld;
        }
        if (vlSelfRef.__PVT__pipe_p1__DOT__skid_out_rdy) {
            vlSelfRef.__PVT__pipe_p1__DOT__pipe_skid_out_vld 
                = vlSelfRef.__PVT__pipe_p1__DOT__skid_out_vld;
        }
    } else {
        __Vdly__count_c = 0U;
        vlSelfRef.__PVT__count_w = 0U;
        __Vdly__count_h = 0U;
        vlSelfRef.__PVT__u_rod0__DOT__pipe_skid_rod_wr_pvld = 0U;
        vlSelfRef.__PVT__u_rod1__DOT__pipe_skid_rod_wr_pvld = 0U;
        vlSelfRef.__PVT__u_rod2__DOT__pipe_skid_rod_wr_pvld = 0U;
        vlSelfRef.__PVT__u_rod3__DOT__pipe_skid_rod_wr_pvld = 0U;
        vlSelfRef.__PVT__pipe_p1__DOT__skid_flop_out_vld = 0U;
        vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_pvld = 0U;
        vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_pvld = 0U;
        vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_pvld = 0U;
        vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_pvld = 0U;
        vlSelfRef.__PVT__pipe_p1__DOT__pipe_skid_out_vld = 0U;
    }
    vlSelfRef.__PVT__out_rdy = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn))) 
                                || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__skid_out_rdy));
    __Vtableidx7 = ((((IData)(vlSelfRef.__PVT__is_surf_end) 
                      << 7U) | ((IData)(vlSelfRef.__PVT__beat_cnt_nxt) 
                                << 4U)) | ((((IData)(vlSelfRef.__PVT__is_last_beat) 
                                             << 3U) 
                                            | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_nrdma_data_mode) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.__PVT__out_accept) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn))));
    if ((1U & VNV_nvdla__ConstPool__TABLE_h56bc840b_0
         [__Vtableidx7])) {
        vlSelfRef.__PVT__mon_beat_cnt = VNV_nvdla__ConstPool__TABLE_h1cd985d3_0
            [__Vtableidx7];
    }
    if ((2U & VNV_nvdla__ConstPool__TABLE_h56bc840b_0
         [__Vtableidx7])) {
        vlSelfRef.__PVT__beat_cnt = VNV_nvdla__ConstPool__TABLE_h800e0715_0
            [__Vtableidx7];
    }
    vlSelfRef.__PVT__count_c = __Vdly__count_c;
    vlSelfRef.__PVT__count_h = __Vdly__count_h;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__3(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__3\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__u_rod0__DOT__skid_rod_wr_prdy) 
         & (IData)(vlSelfRef.__PVT__u_rod0__DOT__skid_rod_wr_pvld))) {
        vlSelfRef.__PVT__u_rod0__DOT__pipe_skid_rod_wr_pd 
            = ((IData)(vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_prdy)
                ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd
                : vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_pd);
    }
    if (((IData)(vlSelfRef.__PVT__u_rod1__DOT__skid_rod_wr_prdy) 
         & (IData)(vlSelfRef.__PVT__u_rod1__DOT__skid_rod_wr_pvld))) {
        vlSelfRef.__PVT__u_rod1__DOT__pipe_skid_rod_wr_pd 
            = ((IData)(vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_prdy)
                ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd
                : vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_pd);
    }
    if (((IData)(vlSelfRef.__PVT__u_rod3__DOT__skid_rod_wr_prdy) 
         & (IData)(vlSelfRef.__PVT__u_rod3__DOT__skid_rod_wr_pvld))) {
        vlSelfRef.__PVT__u_rod3__DOT__pipe_skid_rod_wr_pd 
            = ((IData)(vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_prdy)
                ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_rdma_unpack__DOT__pack_seq3
                : vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_pd);
    }
    if (((IData)(vlSelfRef.__PVT__u_rod2__DOT__skid_rod_wr_prdy) 
         & (IData)(vlSelfRef.__PVT__u_rod2__DOT__skid_rod_wr_pvld))) {
        vlSelfRef.__PVT__u_rod2__DOT__pipe_skid_rod_wr_pd 
            = ((IData)(vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy)
                ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_rdma_unpack__DOT__pack_seq2
                : vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_pd);
    }
    if (((IData)(vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_prdy) 
         & (IData)(vlSelfRef.__PVT__rod0_wr_pvld))) {
        vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_pd 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod0_pd;
    }
    if (((IData)(vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_prdy) 
         & (IData)(vlSelfRef.__PVT__rod1_wr_pvld))) {
        vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_pd 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod1_pd;
    }
    if (((IData)(vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_prdy) 
         & (IData)(vlSelfRef.__PVT__rod3_wr_pvld))) {
        vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_pd 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_rdma_unpack__DOT__pack_seq3;
    }
    if (((IData)(vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy) 
         & (IData)(vlSelfRef.__PVT__rod2_wr_pvld))) {
        vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_pd 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_rdma_unpack__DOT__pack_seq2;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__4(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__4\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    if (vlSelfRef.__PVT__u_roc__DOT__wr_popping) {
        vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_o = vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_p;
    } else if (vlSelfRef.__PVT__u_roc__DOT__wr_popping) {
        vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_o = 0U;
    }
    __Vtableidx8 = ((0x18U & (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_roc_size) 
                               - (IData)(1U)) << 3U)) 
                    | (((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_adr) 
                        << 1U) | ((IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving) 
                                  & ((~ (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_popping)) 
                                     | (0U < (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count))))));
    if ((1U & VNV_nvdla__ConstPool__TABLE_h2ddc24bb_0
         [__Vtableidx8])) {
        vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff0 
            = VNV_nvdla__ConstPool__TABLE_h49873950_0
            [__Vtableidx8];
    }
    if ((2U & VNV_nvdla__ConstPool__TABLE_h2ddc24bb_0
         [__Vtableidx8])) {
        vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff1 
            = VNV_nvdla__ConstPool__TABLE_haebb1ad7_0
            [__Vtableidx8];
    }
    if ((4U & VNV_nvdla__ConstPool__TABLE_h2ddc24bb_0
         [__Vtableidx8])) {
        vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff2 
            = VNV_nvdla__ConstPool__TABLE_h1f8cbabb_0
            [__Vtableidx8];
    }
    if ((8U & VNV_nvdla__ConstPool__TABLE_h2ddc24bb_0
         [__Vtableidx8])) {
        vlSelfRef.__PVT__u_roc__DOT__ram__DOT__ram_ff3 
            = VNV_nvdla__ConstPool__TABLE_h9d367f52_0
            [__Vtableidx8];
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__4(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__4\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rod3_wr_pvld = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod_vld) 
                                     & ((~ (IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_4)) 
                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                           >> 3U)));
    vlSelfRef.__PVT__rod0_wr_pvld = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod_vld) 
                                     & ((~ ((IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_9) 
                                            | (IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_6))) 
                                        & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask)));
    vlSelfRef.__PVT__rod1_wr_pvld = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod_vld) 
                                     & ((~ ((IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_10) 
                                            | (IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_6))) 
                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                           >> 1U)));
    vlSelfRef.__PVT__rod2_wr_pvld = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__mul_rod_vld) 
                                     & ((~ ((IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_2) 
                                            | (IData)(vlSelfRef.__VdfgRegularize_hd39949f1_1_7))) 
                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__alu_rod_mask) 
                                           >> 2U)));
    vlSelfRef.__PVT__u_rod3__DOT__skid_rod_wr_pvld 
        = ((IData)(vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_prdy)
            ? (IData)(vlSelfRef.__PVT__rod3_wr_pvld)
            : (IData)(vlSelfRef.__PVT__u_rod3__DOT__skid_flop_rod_wr_pvld));
    vlSelfRef.__PVT__u_rod0__DOT__skid_rod_wr_pvld 
        = ((IData)(vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_prdy)
            ? (IData)(vlSelfRef.__PVT__rod0_wr_pvld)
            : (IData)(vlSelfRef.__PVT__u_rod0__DOT__skid_flop_rod_wr_pvld));
    vlSelfRef.__PVT__u_rod1__DOT__skid_rod_wr_pvld 
        = ((IData)(vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_prdy)
            ? (IData)(vlSelfRef.__PVT__rod1_wr_pvld)
            : (IData)(vlSelfRef.__PVT__u_rod1__DOT__skid_flop_rod_wr_pvld));
    vlSelfRef.__PVT__u_rod2__DOT__skid_rod_wr_pvld 
        = ((IData)(vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_prdy)
            ? (IData)(vlSelfRef.__PVT__rod2_wr_pvld)
            : (IData)(vlSelfRef.__PVT__u_rod2__DOT__skid_flop_rod_wr_pvld));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__7(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__7\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __PVT__u_roc__DOT__wr_count_next_no_wr_popping;
    __PVT__u_roc__DOT__wr_count_next_no_wr_popping = 0;
    // Body
    vlSelfRef.__PVT__u_roc__DOT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_busy_int)) 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT____VdfgRegularize_h450dda84_3_5) 
                                                    & ((2U 
                                                        == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_nrdma_data_use))
                                                        ? 
                                                       ((~ (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu.__PVT__u_roc__DOT__roc_wr_busy_int)) 
                                                        & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT____VdfgRegularize_h450dda84_3_0))
                                                        : (IData)(vlSelfRef.rod_wr_rdy))));
    __PVT__u_roc__DOT__wr_count_next_no_wr_popping 
        = (7U & ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count) 
                 + (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving)));
    vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_p = ((0U 
                                                   != (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p)) 
                                                  | (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving));
    vlSelfRef.__PVT__roc_rd_pvld = ((IData)(vlSelfRef.u_roc__DOT____VdfgRegularize_h20b7620a_0_1)
                                     ? (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_int_o)
                                     : (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_p));
    vlSelfRef.__PVT__u_roc__DOT__wr_popping = ((~ (IData)(vlSelfRef.u_roc__DOT____VdfgRegularize_h20b7620a_0_3)) 
                                               & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pvld_p));
    vlSelfRef.__PVT__is_last_beat = ((IData)(vlSelfRef.__PVT__beat_cnt_nxt) 
                                     == ((IData)(vlSelfRef.__PVT__roc_rd_pvld)
                                          ? (7U & ((IData)(1U) 
                                                   + 
                                                   ((IData)(vlSelfRef.u_roc__DOT____VdfgRegularize_h20b7620a_0_1)
                                                     ? (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_o)
                                                     : (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_pd_p))))
                                          : 0U));
    vlSelfRef.__PVT__u_roc__DOT__roc_wr_busy_next = 
        ((~ (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_popping)) 
         & (4U == (IData)(__PVT__u_roc__DOT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.__PVT__u_roc__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_roc__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_roc__DOT__rd_count_p_next 
                = (7U & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p));
            vlSelfRef.__PVT__u_roc__DOT__wr_count_next 
                = (7U & (IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count));
        } else {
            vlSelfRef.__PVT__u_roc__DOT__rd_count_p_next 
                = (7U & ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p) 
                         - (IData)(1U)));
            vlSelfRef.__PVT__u_roc__DOT__wr_count_next 
                = (7U & ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_wr_count) 
                         - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__u_roc__DOT__rd_count_p_next 
            = (7U & ((IData)(vlSelfRef.__PVT__u_roc__DOT__roc_rd_count_p) 
                     + (IData)(vlSelfRef.__PVT__u_roc__DOT__wr_reserving)));
        vlSelfRef.__PVT__u_roc__DOT__wr_count_next 
            = (7U & (IData)(__PVT__u_roc__DOT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__roc_rd_en = ((IData)(vlSelfRef.__PVT__is_last_beat) 
                                  & ((IData)(vlSelfRef.__PVT__is_surf_end) 
                                     | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__reg2dp_nrdma_data_mode)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__9(VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro___nba_comb__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul__9\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p1__DOT__skid_out_rdy = (1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__pipe_skid_out_vld)) 
                                                      | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__sdp_nrdma2dp_mul_ready)));
}
