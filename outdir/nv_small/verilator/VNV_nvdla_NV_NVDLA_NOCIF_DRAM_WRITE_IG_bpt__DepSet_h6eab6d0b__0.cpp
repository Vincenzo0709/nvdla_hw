// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "VNV_nvdla__pch.h"
#include "VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__bpt2arb_cmd_accept) {
        vlSelfRef.__PVT__out_addr = ((0U == (IData)(vlSelfRef.__PVT__req_count))
                                      ? ((IData)(8U) 
                                         + (IData)(vlSelfRef.__PVT__in_cmd_vld_pd))
                                      : ((IData)(8U) 
                                         + vlSelfRef.__PVT__out_addr));
    }
    if (((IData)(vlSelfRef.__PVT__u_dfifo__DOT__rd_req_next) 
         & ((~ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int)) 
            | (IData)(vlSelfRef.__PVT__dfifo_rd_prdy)))) {
        vlSelfRef.__PVT__dfifo_rd_data = ((IData)(vlSelfRef.u_dfifo__DOT____VdfgRegularize_h452249d7_0_3)
                                           ? ((IData)(vlSelfRef.u_dfifo__DOT____VdfgRegularize_h452249d7_0_3)
                                               ? vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pd_o
                                               : 0ULL)
                                           : vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pd_p);
    } else if (((IData)(vlSelfRef.__PVT__u_dfifo__DOT__rd_req_next) 
                & ((~ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int)) 
                   | (IData)(vlSelfRef.__PVT__dfifo_rd_prdy)))) {
        vlSelfRef.__PVT__dfifo_rd_data = 0ULL;
    }
    if (((IData)(vlSelfRef.__PVT__ipipe_cmd_rdy) & (IData)(vlSelfRef.__PVT__ipipe_cmd_vld))) {
        vlSelfRef.__PVT__pipe_p3__DOT__pipe_ipipe_cmd_pd 
            = (0x3fffffffffffULL & (((QData)((IData)(
                                                     vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[0U]))));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__4(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__4\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_reserving) 
         & ((~ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_popping)) 
            | (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_count)))) {
        vlSelfRef.__PVT__u_dfifo__DOT__ram__DOT__ram_ff0 
            = vlSelfRef.__PVT__u_dfifo__DOT__ram__DOT__di_d;
    }
    if ((((IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int) 
          & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__rd_req_next_o)) 
         & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_popping))) {
        vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pd_o 
            = vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pd_p;
    } else if ((((IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int) 
                 & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__rd_req_next_o)) 
                & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_popping))) {
        vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pd_o = 0ULL;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_cmd_vld_pd = ((- (QData)((IData)(vlSelfRef.__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld))) 
                                      & vlSelfRef.__PVT__pipe_p3__DOT__pipe_ipipe_cmd_pd);
    vlSelfRef.__PVT__ipipe_cmd_vld = ((~ (vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[2U] 
                                          >> 1U)) & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_vld_p));
    vlSelfRef.__PVT__dfifo_wr_pvld = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_vld_p) 
                                      & (vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[2U] 
                                         >> 1U));
    vlSelfRef.__PVT__is_ltran = ((IData)(vlSelfRef.__PVT__req_count) 
                                 == (0x1fffU & (IData)(
                                                       (vlSelfRef.__PVT__in_cmd_vld_pd 
                                                        >> 0x20U))));
    vlSelfRef.__PVT__u_dfifo__DOT__ram_iwe = ((~ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_busy_in)) 
                                              & (IData)(vlSelfRef.__PVT__dfifo_wr_pvld));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__1(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_dfifo__DOT__wr_busy_in_int = 
        ((IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_busy_int) 
         & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_pvld_in));
    vlSelfRef.u_dfifo__DOT____VdfgRegularize_h452249d7_0_3 
        = ((IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o) 
           & ((~ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_prdy_d)) 
              & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_d)));
    vlSelfRef.u_dfifo__DOT____VdfgRegularize_h452249d7_0_4 
        = ((IData)(vlSelfRef.u_dfifo__DOT____VdfgRegularize_h452249d7_0_3) 
           & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__3(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__3\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bpt2arb_dat_pd[0U] = (IData)(vlSelfRef.__PVT__dfifo_rd_data);
    vlSelfRef.bpt2arb_dat_pd[1U] = (IData)((vlSelfRef.__PVT__dfifo_rd_data 
                                            >> 0x20U));
    vlSelfRef.bpt2arb_dat_pd[2U] = vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__4(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__4\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_dfifo__DOT__wr_reserving = (
                                                   (~ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_busy_int)) 
                                                   & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_pvld_in));
    vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pd_p = 
        ((IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_count)
          ? vlSelfRef.__PVT__u_dfifo__DOT__ram__DOT__ram_ff0
          : ((IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_count)
              ? 0ULL : vlSelfRef.__PVT__u_dfifo__DOT__ram__DOT__di_d));
    vlSelfRef.__PVT__u_dfifo__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_count))
                  : (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_count)));
    vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_p 
        = ((IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_count_p) 
           | (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_reserving));
    vlSelfRef.__PVT__u_dfifo__DOT__rd_req_next_o = 
        ((IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_p) 
         | (IData)(vlSelfRef.u_dfifo__DOT____VdfgRegularize_h452249d7_0_4));
    vlSelfRef.__PVT__u_dfifo__DOT__rd_req_next = ((IData)(vlSelfRef.u_dfifo__DOT____VdfgRegularize_h452249d7_0_3)
                                                   ? (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o)
                                                   : (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_p));
    vlSelfRef.__PVT__u_dfifo__DOT__wr_popping = ((~ (IData)(vlSelfRef.u_dfifo__DOT____VdfgRegularize_h452249d7_0_4)) 
                                                 & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_p));
    vlSelfRef.__PVT__u_dfifo__DOT__wr_count_next_is_1 
        = ((~ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_popping)) 
           & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_count_next_no_wr_popping));
    if (vlSelfRef.__PVT__u_dfifo__DOT__wr_popping) {
        if (vlSelfRef.__PVT__u_dfifo__DOT__wr_reserving) {
            vlSelfRef.__PVT__u_dfifo__DOT__rd_count_p_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_count_p));
            vlSelfRef.__PVT__u_dfifo__DOT__wr_count_next 
                = (1U & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_count));
        } else {
            vlSelfRef.__PVT__u_dfifo__DOT__rd_count_p_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_count_p)));
            vlSelfRef.__PVT__u_dfifo__DOT__wr_count_next 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_count)));
        }
    } else {
        vlSelfRef.__PVT__u_dfifo__DOT__rd_count_p_next 
            = (1U & ((IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_reserving)
                      ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_count_p))
                      : (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_count_p)));
        vlSelfRef.__PVT__u_dfifo__DOT__wr_count_next 
            = (1U & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_count_next_no_wr_popping));
    }
}
