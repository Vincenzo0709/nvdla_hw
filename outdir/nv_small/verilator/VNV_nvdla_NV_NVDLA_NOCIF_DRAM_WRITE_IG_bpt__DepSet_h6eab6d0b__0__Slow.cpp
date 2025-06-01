// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "VNV_nvdla__pch.h"
#include "VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt.h"

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___ctor_var_reset(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt___ctor_var_reset\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->nvdla_core_clk = VL_RAND_RESET_I(1);
    vlSelf->nvdla_core_rstn = VL_RAND_RESET_I(1);
    vlSelf->pwrbus_ram_pd = VL_RAND_RESET_I(32);
    vlSelf->dma2bpt_req_valid = VL_RAND_RESET_I(1);
    vlSelf->dma2bpt_req_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(66, vlSelf->dma2bpt_req_pd);
    vlSelf->bpt2arb_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->bpt2arb_cmd_ready = VL_RAND_RESET_I(1);
    vlSelf->bpt2arb_cmd_pd = VL_RAND_RESET_Q(45);
    vlSelf->bpt2arb_dat_valid = VL_RAND_RESET_I(1);
    vlSelf->bpt2arb_dat_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->bpt2arb_dat_pd);
    vlSelf->axid = VL_RAND_RESET_I(4);
    vlSelf->__PVT__cmd_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dat_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ipipe_rdy_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ipipe_cmd_vld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ipipe_cmd_rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__in_cmd_vld_pd = VL_RAND_RESET_Q(46);
    vlSelf->__PVT__dfifo_wr_pvld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dfifo_rd_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__dfifo_rd_prdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__out_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__req_count = VL_RAND_RESET_I(13);
    vlSelf->__PVT__beat_count = VL_RAND_RESET_I(3);
    vlSelf->__PVT__is_last_beat = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bpt2arb_cmd_accept = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bpt2arb_dat_accept = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stt_offset = VL_RAND_RESET_I(3);
    vlSelf->__PVT__size_offset = VL_RAND_RESET_I(3);
    vlSelf->__PVT__end_offset = VL_RAND_RESET_I(3);
    vlSelf->__PVT__ftran_size = VL_RAND_RESET_I(3);
    vlSelf->__PVT__ltran_size = VL_RAND_RESET_I(3);
    vlSelf->__PVT__mtran_num = VL_RAND_RESET_I(13);
    vlSelf->__PVT__in_size_is_even = VL_RAND_RESET_I(1);
    vlSelf->__PVT__in_size_is_odd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_ltran = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_single_tran = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_swizzle = VL_RAND_RESET_I(1);
    vlSelf->__PVT__large_req_grow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mon_end_offset_c = VL_RAND_RESET_I(1);
    vlSelf->__PVT__out_cmd_inc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__out_cmd_odd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__out_cmd_swizzle = VL_RAND_RESET_I(1);
    vlSelf->__PVT__out_cmd_user_size = VL_RAND_RESET_I(3);
    vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(66, vlSelf->__PVT__pipe_p1__DOT__pipe_dma2bpt_req_pd);
    vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_vld_p = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(66, vlSelf->__PVT__pipe_p2__DOT__pipe_ipipe_pd_p);
    vlSelf->__PVT__pipe_p3__DOT__pipe_ipipe_cmd_vld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p3__DOT__pipe_ipipe_cmd_pd = VL_RAND_RESET_Q(46);
    vlSelf->__PVT__u_dfifo__DOT__nvdla_core_clk_mgated = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dfifo__DOT__wr_reserving = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_pvld_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dfifo__DOT__wr_busy_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dfifo__DOT__wr_busy_in_int = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_busy_int = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dfifo__DOT__wr_popping = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dfifo__DOT__dfifo_wr_count = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dfifo__DOT__wr_count_next_no_wr_popping = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dfifo__DOT__wr_count_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dfifo__DOT__wr_count_next_is_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dfifo__DOT__ram_iwe = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pd_p = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_prdy_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_count_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dfifo__DOT__rd_count_p_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pd_o = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__u_dfifo__DOT__rd_req_next_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dfifo__DOT__dfifo_rd_pvld_int_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dfifo__DOT__rd_req_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dfifo__DOT__prand_inst0__Vstatic__diff = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__u_dfifo__DOT__prand_inst1__Vstatic__diff = VL_RAND_RESET_Q(33);
    vlSelf->u_dfifo__DOT____VdfgRegularize_h452249d7_0_3 = VL_RAND_RESET_I(1);
    vlSelf->u_dfifo__DOT____VdfgRegularize_h452249d7_0_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dfifo__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_dfifo__DOT__ram__DOT__di_d = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__u_dfifo__DOT__ram__DOT__ram_ff0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__u_dfifo__DOT__dfifo_rd_pvld_int = VL_RAND_RESET_I(1);
}
