// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "VNV_nvdla__pch.h"
#include "VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt.h"
#include "VNV_nvdla__Syms.h"

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt0__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt0__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc 
        = (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready) 
                 | (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__lat_cnt_ext = vlSelfRef.__PVT__lat_cnt_cur;
    vlSelfRef.__PVT__lat_cnt_mod = (0x3ffU & ((IData)(vlSelfRef.__PVT__lat_cnt_cur) 
                                              - (IData)(vlSelfRef.__PVT__lat_count_dec)));
    vlSelfRef.__PVT__lat_cnt_new = ((IData)(vlSelfRef.__PVT__lat_count_dec)
                                     ? (IData)(vlSelfRef.__PVT__lat_cnt_mod)
                                     : (IData)(vlSelfRef.__PVT__lat_cnt_ext));
    vlSelfRef.__PVT__lat_cnt_nxt = vlSelfRef.__PVT__lat_cnt_new;
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop) {
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_data 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data;
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid;
    } else {
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_data 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data;
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid;
    }
    vlSelfRef.__PVT__in_vld_pd = ((- (QData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                  & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelfRef.__PVT__bpt2arb_accept = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid) 
                                       & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_0__DOT__p1_pipe_ready_bc));
    if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop) {
        vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_data 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_data;
        vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid;
    } else {
        vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_data 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data;
        vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid;
    }
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

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt1__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt1__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__lat_cnt_ext = vlSelfRef.__PVT__lat_cnt_cur;
    vlSelfRef.__PVT__lat_cnt_mod = (0x3ffU & ((IData)(vlSelfRef.__PVT__lat_cnt_cur) 
                                              - (IData)(vlSelfRef.__PVT__lat_count_dec)));
    vlSelfRef.__PVT__lat_cnt_new = ((IData)(vlSelfRef.__PVT__lat_count_dec)
                                     ? (IData)(vlSelfRef.__PVT__lat_cnt_mod)
                                     : (IData)(vlSelfRef.__PVT__lat_cnt_ext));
    vlSelfRef.__PVT__lat_cnt_nxt = vlSelfRef.__PVT__lat_cnt_new;
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop) {
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_data 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data;
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid;
    } else {
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_data 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data;
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc 
        = (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop) 
                 | (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelfRef.__PVT__in_vld_pd = ((- (QData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                  & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelfRef.__PVT__bpt2arb_accept = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid) 
                                       & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_1__DOT__p1_pipe_ready_bc));
    if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop) {
        vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_data 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_data;
        vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid;
    } else {
        vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_data 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data;
        vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid;
    }
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

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt2__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt2__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc 
        = (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop) 
                 | (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop) {
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_data 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data;
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid;
    } else {
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_data 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data;
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid;
    }
    vlSelfRef.bpt2arb_req_valid = ((1U <= (0xffU & 
                                           ((IData)(0x3dU) 
                                            - (IData)(vlSelfRef.__PVT__lat_cnt_cur)))) 
                                   & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid));
    vlSelfRef.__PVT__in_vld_pd = ((- (QData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                  & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelfRef.__PVT__req_rdy = ((1U <= (0xffU & ((IData)(0x3dU) 
                                                 - (IData)(vlSelfRef.__PVT__lat_cnt_cur)))) 
                                & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_2__DOT__p1_pipe_ready_bc));
    if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop) {
        vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_data 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_data;
        vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid;
    } else {
        vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_data 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data;
        vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid;
    }
    vlSelfRef.__PVT__is_ltran = ((IData)(vlSelfRef.__PVT__count_req) 
                                 == ((0xffffU & ((IData)(1U) 
                                                 + 
                                                 (0x7fffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_vld_pd 
                                                             >> 0x20U))))) 
                                     - (IData)(1U)));
    vlSelfRef.__PVT__bpt2arb_accept = ((IData)(vlSelfRef.bpt2arb_req_valid) 
                                       & (IData)(vlSelfRef.__PVT__req_rdy));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc 
        = (1U & (((IData)(vlSelfRef.__PVT__req_rdy) 
                  & (IData)(vlSelfRef.__PVT__is_ltran)) 
                 | (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))));
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
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt3__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt3__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc 
        = (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop) 
                 | (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop) {
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_data 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data;
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid;
    } else {
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_data 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data;
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid;
    }
    vlSelfRef.bpt2arb_req_valid = ((1U <= (0xffU & 
                                           ((IData)(0x3dU) 
                                            - (IData)(vlSelfRef.__PVT__lat_cnt_cur)))) 
                                   & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid));
    vlSelfRef.__PVT__in_vld_pd = ((- (QData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                  & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelfRef.__PVT__req_rdy = ((1U <= (0xffU & ((IData)(0x3dU) 
                                                 - (IData)(vlSelfRef.__PVT__lat_cnt_cur)))) 
                                & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_3__DOT__p1_pipe_ready_bc));
    if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop) {
        vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_data 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_data;
        vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid;
    } else {
        vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_data 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data;
        vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid;
    }
    vlSelfRef.__PVT__is_ltran = ((IData)(vlSelfRef.__PVT__count_req) 
                                 == ((0xffffU & ((IData)(1U) 
                                                 + 
                                                 (0x7fffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_vld_pd 
                                                             >> 0x20U))))) 
                                     - (IData)(1U)));
    vlSelfRef.__PVT__bpt2arb_accept = ((IData)(vlSelfRef.bpt2arb_req_valid) 
                                       & (IData)(vlSelfRef.__PVT__req_rdy));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc 
        = (1U & (((IData)(vlSelfRef.__PVT__req_rdy) 
                  & (IData)(vlSelfRef.__PVT__is_ltran)) 
                 | (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))));
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
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt4__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt4__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc 
        = (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop) 
                 | (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop) {
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_data 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data;
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid;
    } else {
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_data 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data;
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid;
    }
    vlSelfRef.bpt2arb_req_valid = ((1U <= (0xffU & 
                                           ((IData)(0x50U) 
                                            - (IData)(vlSelfRef.__PVT__lat_cnt_cur)))) 
                                   & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid));
    vlSelfRef.__PVT__in_vld_pd = ((- (QData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                  & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelfRef.__PVT__req_rdy = ((1U <= (0xffU & ((IData)(0x50U) 
                                                 - (IData)(vlSelfRef.__PVT__lat_cnt_cur)))) 
                                & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_4__DOT__p1_pipe_ready_bc));
    if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop) {
        vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_data 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_data;
        vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid;
    } else {
        vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_data 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data;
        vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid;
    }
    vlSelfRef.__PVT__is_ltran = ((IData)(vlSelfRef.__PVT__count_req) 
                                 == ((0xffffU & ((IData)(1U) 
                                                 + 
                                                 (0x7fffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_vld_pd 
                                                             >> 0x20U))))) 
                                     - (IData)(1U)));
    vlSelfRef.__PVT__bpt2arb_accept = ((IData)(vlSelfRef.bpt2arb_req_valid) 
                                       & (IData)(vlSelfRef.__PVT__req_rdy));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc 
        = (1U & (((IData)(vlSelfRef.__PVT__req_rdy) 
                  & (IData)(vlSelfRef.__PVT__is_ltran)) 
                 | (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))));
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
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt5__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt5__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc 
        = (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready) 
                 | (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop) {
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_data 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data;
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid;
    } else {
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_data 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data;
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid;
    }
    vlSelfRef.bpt2arb_req_valid = ((1U <= (0xffU & 
                                           ((IData)(0xa0U) 
                                            - (IData)(vlSelfRef.__PVT__lat_cnt_cur)))) 
                                   & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid));
    vlSelfRef.__PVT__in_vld_pd = ((- (QData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                  & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelfRef.__PVT__req_rdy = ((1U <= (0xffU & ((IData)(0xa0U) 
                                                 - (IData)(vlSelfRef.__PVT__lat_cnt_cur)))) 
                                & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_5__DOT__p1_pipe_ready_bc));
    if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop) {
        vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_data 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_data;
        vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid;
    } else {
        vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_data 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data;
        vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid;
    }
    vlSelfRef.__PVT__is_ltran = ((IData)(vlSelfRef.__PVT__count_req) 
                                 == ((0xffffU & ((IData)(1U) 
                                                 + 
                                                 (0x7fffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_vld_pd 
                                                             >> 0x20U))))) 
                                     - (IData)(1U)));
    vlSelfRef.__PVT__bpt2arb_accept = ((IData)(vlSelfRef.bpt2arb_req_valid) 
                                       & (IData)(vlSelfRef.__PVT__req_rdy));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc 
        = (1U & (((IData)(vlSelfRef.__PVT__req_rdy) 
                  & (IData)(vlSelfRef.__PVT__is_ltran)) 
                 | (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))));
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
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt6__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt6__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc 
        = (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready) 
                 | (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_rand_ready)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop) {
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_data 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data;
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid;
    } else {
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_data 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data;
        vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid;
    }
    vlSelfRef.bpt2arb_req_valid = ((1U <= (0xffU & 
                                           ((IData)(0xa0U) 
                                            - (IData)(vlSelfRef.__PVT__lat_cnt_cur)))) 
                                   & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid));
    vlSelfRef.__PVT__in_vld_pd = ((- (QData)((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                  & vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelfRef.__PVT__req_rdy = ((1U <= (0xffU & ((IData)(0xa0U) 
                                                 - (IData)(vlSelfRef.__PVT__lat_cnt_cur)))) 
                                & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_6__DOT__p1_pipe_ready_bc));
    if (vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop) {
        vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_data 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_data;
        vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid;
    } else {
        vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_data 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data;
        vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
            = vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid;
    }
    vlSelfRef.__PVT__is_ltran = ((IData)(vlSelfRef.__PVT__count_req) 
                                 == ((0xffffU & ((IData)(1U) 
                                                 + 
                                                 (0x7fffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__in_vld_pd 
                                                             >> 0x20U))))) 
                                     - (IData)(1U)));
    vlSelfRef.__PVT__bpt2arb_accept = ((IData)(vlSelfRef.bpt2arb_req_valid) 
                                       & (IData)(vlSelfRef.__PVT__req_rdy));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc 
        = (1U & (((IData)(vlSelfRef.__PVT__req_rdy) 
                  & (IData)(vlSelfRef.__PVT__is_ltran)) 
                 | (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))));
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
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_skid_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
}
