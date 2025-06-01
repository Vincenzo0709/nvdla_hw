// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "VNV_nvdla__pch.h"
#include "VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt.h"

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___ctor_var_reset(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___ctor_var_reset\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->nvdla_core_clk = VL_RAND_RESET_I(1);
    vlSelf->nvdla_core_rstn = VL_RAND_RESET_I(1);
    vlSelf->bpt2arb_req_ready = VL_RAND_RESET_I(1);
    vlSelf->dma2bpt_cdt_lat_fifo_pop = VL_RAND_RESET_I(1);
    vlSelf->dma2bpt_req_pd = VL_RAND_RESET_Q(47);
    vlSelf->dma2bpt_req_valid = VL_RAND_RESET_I(1);
    vlSelf->tieoff_axid = VL_RAND_RESET_I(4);
    vlSelf->tieoff_lat_fifo_depth = VL_RAND_RESET_I(8);
    vlSelf->bpt2arb_req_pd = VL_RAND_RESET_Q(43);
    vlSelf->bpt2arb_req_valid = VL_RAND_RESET_I(1);
    vlSelf->dma2bpt_req_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_req = VL_RAND_RESET_I(16);
    vlSelf->__PVT__lat_cnt_cur = VL_RAND_RESET_I(8);
    vlSelf->__PVT__lat_cnt_ext = VL_RAND_RESET_I(10);
    vlSelf->__PVT__lat_cnt_mod = VL_RAND_RESET_I(10);
    vlSelf->__PVT__lat_cnt_new = VL_RAND_RESET_I(10);
    vlSelf->__PVT__lat_cnt_nxt = VL_RAND_RESET_I(10);
    vlSelf->__PVT__lat_count_dec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__out_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__beat_size_NC = VL_RAND_RESET_I(2);
    vlSelf->__PVT__bpt2arb_accept = VL_RAND_RESET_I(1);
    vlSelf->__PVT__end_offset = VL_RAND_RESET_I(3);
    vlSelf->__PVT__ftran_num = VL_RAND_RESET_I(4);
    vlSelf->__PVT__ftran_size = VL_RAND_RESET_I(3);
    vlSelf->__PVT__in_vld_pd = VL_RAND_RESET_Q(47);
    vlSelf->__PVT__is_ltran = VL_RAND_RESET_I(1);
    vlSelf->__PVT__is_single_tran = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ltran_num = VL_RAND_RESET_I(4);
    vlSelf->__PVT__ltran_size = VL_RAND_RESET_I(3);
    vlSelf->__PVT__mon_end_offset_c = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mon_out_beats_c = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mtran_num = VL_RAND_RESET_I(15);
    vlSelf->__PVT__out_inc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__size_offset = VL_RAND_RESET_I(3);
    vlSelf->__PVT__stt_offset = VL_RAND_RESET_I(3);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data = VL_RAND_RESET_Q(47);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_skid_data = VL_RAND_RESET_Q(47);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_skid_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_data = VL_RAND_RESET_Q(47);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data = VL_RAND_RESET_Q(47);
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_rand_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_data = VL_RAND_RESET_Q(47);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_data = VL_RAND_RESET_Q(47);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid = VL_RAND_RESET_I(1);
}
