// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "VNV_nvdla__pch.h"
#include "VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt.h"
#include "VNV_nvdla__Syms.h"

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_last_beat = (0U == (IData)(vlSelfRef.__PVT__beat_count));
    vlSelfRef.__PVT__u_dfifo__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.bpt2arb_dat_pd[0U] = (IData)(vlSelfRef.__PVT__dfifo_rd_data);
    vlSelfRef.bpt2arb_dat_pd[1U] = (IData)((vlSelfRef.__PVT__dfifo_rd_data 
                                            >> 0x20U));
    vlSelfRef.bpt2arb_dat_pd[2U] = vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int;
    vlSelfRef.__PVT__dfifo_rd_prdy = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0__DOT__dfifo_wr_busy_int)) 
                                      & (IData)(vlSelfRef.__PVT__dat_en));
    vlSelfRef.__PVT__u_dfifo__DOT__wr_busy_in_int = 
        ((IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_busy_int) 
         & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_pvld_in));
    vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pd_p = 
        ((IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_count)
          ? vlSelfRef.__PVT__u_dfifo__DOT__ram__DOT__ram_ff0
          : ((IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_count)
              ? 0ULL : vlSelfRef.__PVT__u_dfifo__DOT__ram__DOT__di_d));
    vlSelfRef.bpt2arb_cmd_valid = ((IData)(vlSelfRef.__PVT__cmd_en) 
                                   & (IData)(vlSelfRef.__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld));
    vlSelfRef.__PVT__ipipe_cmd_vld = ((~ (vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[2U] 
                                          >> 1U)) & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_vld_p));
    vlSelfRef.__PVT__dfifo_wr_pvld = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_vld_p) 
                                      & (vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[2U] 
                                         >> 1U));
    vlSelfRef.__PVT__in_cmd_vld_pd = ((- (QData)((IData)(vlSelfRef.__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld))) 
                                      & vlSelfRef.__PVT__pipe_p3__DOT__pipe_ipipe_cmd_pd);
    vlSelfRef.u_dfifo__DOT____VdfgRegularize_h452249d7_0_3 
        = ((IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o) 
           & ((~ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_prdy_d)) 
              & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_d)));
    vlSelfRef.__PVT__u_dfifo__DOT__wr_reserving = (
                                                   (~ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_busy_int)) 
                                                   & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_pvld_in));
    vlSelfRef.bpt2arb_dat_valid = ((IData)(vlSelfRef.__PVT__dat_en) 
                                   & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int));
    vlSelfRef.__PVT__bpt2arb_cmd_accept = ((IData)(vlSelfRef.bpt2arb_cmd_valid) 
                                           & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_0__DOT__p1_pipe_ready_bc));
    vlSelfRef.__PVT__u_dfifo__DOT__ram_iwe = ((~ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_busy_in)) 
                                              & (IData)(vlSelfRef.__PVT__dfifo_wr_pvld));
    vlSelfRef.__PVT__is_ltran = ((IData)(vlSelfRef.__PVT__req_count) 
                                 == (0x1fffU & (IData)(
                                                       (vlSelfRef.__PVT__in_cmd_vld_pd 
                                                        >> 0x20U))));
    vlSelfRef.u_dfifo__DOT____VdfgRegularize_h452249d7_0_4 
        = ((IData)(vlSelfRef.u_dfifo__DOT____VdfgRegularize_h452249d7_0_3) 
           & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o));
    vlSelfRef.__PVT__u_dfifo__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_count))
                  : (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_count)));
    vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_p 
        = ((IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_count_p) 
           | (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_reserving));
    vlSelfRef.__PVT__bpt2arb_dat_accept = ((IData)(vlSelfRef.bpt2arb_dat_valid) 
                                           & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo0__DOT__dfifo_wr_busy_int)));
    vlSelfRef.__PVT__u_dfifo__DOT__rd_req_next_o = 
        ((IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_p) 
         | (IData)(vlSelfRef.u_dfifo__DOT____VdfgRegularize_h452249d7_0_4));
    vlSelfRef.__PVT__u_dfifo__DOT__rd_req_next = ((IData)(vlSelfRef.u_dfifo__DOT____VdfgRegularize_h452249d7_0_3)
                                                   ? (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o)
                                                   : (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_p));
    vlSelfRef.__PVT__u_dfifo__DOT__wr_popping = ((~ (IData)(vlSelfRef.u_dfifo__DOT____VdfgRegularize_h452249d7_0_4)) 
                                                 & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_p));
    vlSelfRef.__PVT__ipipe_cmd_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld)) 
                                            | ((IData)(vlSelfRef.__PVT__is_ltran) 
                                               & ((0U 
                                                   == (IData)(vlSelfRef.__PVT__beat_count)) 
                                                  & (IData)(vlSelfRef.__PVT__bpt2arb_dat_accept)))));
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
    vlSelfRef.__PVT__ipipe_rdy_p = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_vld_p)) 
                                          | (((IData)(vlSelfRef.__PVT__ipipe_cmd_vld) 
                                              & (IData)(vlSelfRef.__PVT__ipipe_cmd_rdy)) 
                                             | (IData)(vlSelfRef.__PVT__u_dfifo__DOT__ram_iwe))));
    vlSelfRef.dma2bpt_req_ready = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid)) 
                                         | (IData)(vlSelfRef.__PVT__ipipe_rdy_p)));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt1__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt1__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_last_beat = (0U == (IData)(vlSelfRef.__PVT__beat_count));
    vlSelfRef.__PVT__u_dfifo__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.bpt2arb_dat_pd[0U] = (IData)(vlSelfRef.__PVT__dfifo_rd_data);
    vlSelfRef.bpt2arb_dat_pd[1U] = (IData)((vlSelfRef.__PVT__dfifo_rd_data 
                                            >> 0x20U));
    vlSelfRef.bpt2arb_dat_pd[2U] = vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int;
    vlSelfRef.__PVT__dfifo_rd_prdy = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo1__DOT__dfifo_wr_busy_int)) 
                                      & (IData)(vlSelfRef.__PVT__dat_en));
    vlSelfRef.__PVT__u_dfifo__DOT__wr_busy_in_int = 
        ((IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_busy_int) 
         & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_pvld_in));
    vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pd_p = 
        ((IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_count)
          ? vlSelfRef.__PVT__u_dfifo__DOT__ram__DOT__ram_ff0
          : ((IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_count)
              ? 0ULL : vlSelfRef.__PVT__u_dfifo__DOT__ram__DOT__di_d));
    vlSelfRef.bpt2arb_cmd_valid = ((IData)(vlSelfRef.__PVT__cmd_en) 
                                   & (IData)(vlSelfRef.__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld));
    vlSelfRef.__PVT__ipipe_cmd_vld = ((~ (vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[2U] 
                                          >> 1U)) & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_vld_p));
    vlSelfRef.__PVT__dfifo_wr_pvld = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_vld_p) 
                                      & (vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[2U] 
                                         >> 1U));
    vlSelfRef.__PVT__in_cmd_vld_pd = ((- (QData)((IData)(vlSelfRef.__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld))) 
                                      & vlSelfRef.__PVT__pipe_p3__DOT__pipe_ipipe_cmd_pd);
    vlSelfRef.u_dfifo__DOT____VdfgRegularize_h452249d7_0_3 
        = ((IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o) 
           & ((~ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_prdy_d)) 
              & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_d)));
    vlSelfRef.__PVT__u_dfifo__DOT__wr_reserving = (
                                                   (~ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_busy_int)) 
                                                   & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_pvld_in));
    vlSelfRef.bpt2arb_dat_valid = ((IData)(vlSelfRef.__PVT__dat_en) 
                                   & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int));
    vlSelfRef.__PVT__bpt2arb_cmd_accept = ((IData)(vlSelfRef.bpt2arb_cmd_valid) 
                                           & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_1__DOT__p1_pipe_ready_bc));
    vlSelfRef.__PVT__u_dfifo__DOT__ram_iwe = ((~ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_busy_in)) 
                                              & (IData)(vlSelfRef.__PVT__dfifo_wr_pvld));
    vlSelfRef.__PVT__is_ltran = ((IData)(vlSelfRef.__PVT__req_count) 
                                 == (0x1fffU & (IData)(
                                                       (vlSelfRef.__PVT__in_cmd_vld_pd 
                                                        >> 0x20U))));
    vlSelfRef.u_dfifo__DOT____VdfgRegularize_h452249d7_0_4 
        = ((IData)(vlSelfRef.u_dfifo__DOT____VdfgRegularize_h452249d7_0_3) 
           & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o));
    vlSelfRef.__PVT__u_dfifo__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_count))
                  : (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_count)));
    vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_p 
        = ((IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_count_p) 
           | (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_reserving));
    vlSelfRef.__PVT__bpt2arb_dat_accept = ((IData)(vlSelfRef.bpt2arb_dat_valid) 
                                           & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo1__DOT__dfifo_wr_busy_int)));
    vlSelfRef.__PVT__u_dfifo__DOT__rd_req_next_o = 
        ((IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_p) 
         | (IData)(vlSelfRef.u_dfifo__DOT____VdfgRegularize_h452249d7_0_4));
    vlSelfRef.__PVT__u_dfifo__DOT__rd_req_next = ((IData)(vlSelfRef.u_dfifo__DOT____VdfgRegularize_h452249d7_0_3)
                                                   ? (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o)
                                                   : (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_p));
    vlSelfRef.__PVT__u_dfifo__DOT__wr_popping = ((~ (IData)(vlSelfRef.u_dfifo__DOT____VdfgRegularize_h452249d7_0_4)) 
                                                 & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_p));
    vlSelfRef.__PVT__ipipe_cmd_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld)) 
                                            | ((IData)(vlSelfRef.__PVT__is_ltran) 
                                               & ((0U 
                                                   == (IData)(vlSelfRef.__PVT__beat_count)) 
                                                  & (IData)(vlSelfRef.__PVT__bpt2arb_dat_accept)))));
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
    vlSelfRef.__PVT__ipipe_rdy_p = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_vld_p)) 
                                          | (((IData)(vlSelfRef.__PVT__ipipe_cmd_vld) 
                                              & (IData)(vlSelfRef.__PVT__ipipe_cmd_rdy)) 
                                             | (IData)(vlSelfRef.__PVT__u_dfifo__DOT__ram_iwe))));
    vlSelfRef.dma2bpt_req_ready = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid)) 
                                         | (IData)(vlSelfRef.__PVT__ipipe_rdy_p)));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt2__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt2__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__is_last_beat = (0U == (IData)(vlSelfRef.__PVT__beat_count));
    vlSelfRef.__PVT__u_dfifo__DOT__nvdla_core_clk_mgated 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
    vlSelfRef.bpt2arb_dat_pd[0U] = (IData)(vlSelfRef.__PVT__dfifo_rd_data);
    vlSelfRef.bpt2arb_dat_pd[1U] = (IData)((vlSelfRef.__PVT__dfifo_rd_data 
                                            >> 0x20U));
    vlSelfRef.bpt2arb_dat_pd[2U] = vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int;
    vlSelfRef.__PVT__dfifo_rd_prdy = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo2__DOT__dfifo_wr_busy_int)) 
                                      & (IData)(vlSelfRef.__PVT__dat_en));
    vlSelfRef.__PVT__u_dfifo__DOT__wr_busy_in_int = 
        ((IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_busy_int) 
         & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_pvld_in));
    vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pd_p = 
        ((IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_count)
          ? vlSelfRef.__PVT__u_dfifo__DOT__ram__DOT__ram_ff0
          : ((IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_count)
              ? 0ULL : vlSelfRef.__PVT__u_dfifo__DOT__ram__DOT__di_d));
    vlSelfRef.bpt2arb_cmd_valid = ((IData)(vlSelfRef.__PVT__cmd_en) 
                                   & (IData)(vlSelfRef.__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld));
    vlSelfRef.__PVT__ipipe_cmd_vld = ((~ (vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[2U] 
                                          >> 1U)) & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_vld_p));
    vlSelfRef.__PVT__dfifo_wr_pvld = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_vld_p) 
                                      & (vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_pd_p[2U] 
                                         >> 1U));
    vlSelfRef.__PVT__in_cmd_vld_pd = ((- (QData)((IData)(vlSelfRef.__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld))) 
                                      & vlSelfRef.__PVT__pipe_p3__DOT__pipe_ipipe_cmd_pd);
    vlSelfRef.u_dfifo__DOT____VdfgRegularize_h452249d7_0_3 
        = ((IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o) 
           & ((~ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_prdy_d)) 
              & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_d)));
    vlSelfRef.__PVT__u_dfifo__DOT__wr_reserving = (
                                                   (~ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_busy_int)) 
                                                   & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_pvld_in));
    vlSelfRef.bpt2arb_dat_valid = ((IData)(vlSelfRef.__PVT__dat_en) 
                                   & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int));
    vlSelfRef.__PVT__bpt2arb_cmd_accept = ((IData)(vlSelfRef.bpt2arb_cmd_valid) 
                                           & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_2__DOT__p1_pipe_ready_bc));
    vlSelfRef.__PVT__u_dfifo__DOT__ram_iwe = ((~ (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_busy_in)) 
                                              & (IData)(vlSelfRef.__PVT__dfifo_wr_pvld));
    vlSelfRef.__PVT__is_ltran = ((IData)(vlSelfRef.__PVT__req_count) 
                                 == (0x1fffU & (IData)(
                                                       (vlSelfRef.__PVT__in_cmd_vld_pd 
                                                        >> 0x20U))));
    vlSelfRef.u_dfifo__DOT____VdfgRegularize_h452249d7_0_4 
        = ((IData)(vlSelfRef.u_dfifo__DOT____VdfgRegularize_h452249d7_0_3) 
           & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o));
    vlSelfRef.__PVT__u_dfifo__DOT__wr_count_next_no_wr_popping 
        = (1U & ((IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_reserving)
                  ? ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_count))
                  : (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_wr_count)));
    vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_p 
        = ((IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_count_p) 
           | (IData)(vlSelfRef.__PVT__u_dfifo__DOT__wr_reserving));
    vlSelfRef.__PVT__bpt2arb_dat_accept = ((IData)(vlSelfRef.bpt2arb_dat_valid) 
                                           & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_arb__DOT__u_dfifo2__DOT__dfifo_wr_busy_int)));
    vlSelfRef.__PVT__u_dfifo__DOT__rd_req_next_o = 
        ((IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_p) 
         | (IData)(vlSelfRef.u_dfifo__DOT____VdfgRegularize_h452249d7_0_4));
    vlSelfRef.__PVT__u_dfifo__DOT__rd_req_next = ((IData)(vlSelfRef.u_dfifo__DOT____VdfgRegularize_h452249d7_0_3)
                                                   ? (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o)
                                                   : (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_p));
    vlSelfRef.__PVT__u_dfifo__DOT__wr_popping = ((~ (IData)(vlSelfRef.u_dfifo__DOT____VdfgRegularize_h452249d7_0_4)) 
                                                 & (IData)(vlSelfRef.__PVT__u_dfifo__DOT__dfifo_rd_pvld_p));
    vlSelfRef.__PVT__ipipe_cmd_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld)) 
                                            | ((IData)(vlSelfRef.__PVT__is_ltran) 
                                               & ((0U 
                                                   == (IData)(vlSelfRef.__PVT__beat_count)) 
                                                  & (IData)(vlSelfRef.__PVT__bpt2arb_dat_accept)))));
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
    vlSelfRef.__PVT__ipipe_rdy_p = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__pipe_ipipe_vld_p)) 
                                          | (((IData)(vlSelfRef.__PVT__ipipe_cmd_vld) 
                                              & (IData)(vlSelfRef.__PVT__ipipe_cmd_rdy)) 
                                             | (IData)(vlSelfRef.__PVT__u_dfifo__DOT__ram_iwe))));
    vlSelfRef.dma2bpt_req_ready = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid)) 
                                         | (IData)(vlSelfRef.__PVT__ipipe_rdy_p)));
}
