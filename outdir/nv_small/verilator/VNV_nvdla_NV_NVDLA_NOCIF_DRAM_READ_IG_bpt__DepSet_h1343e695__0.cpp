// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "VNV_nvdla__pch.h"
#include "VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt2__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt2__0\n"); );
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
        = (1U & (((IData)(vlSelfRef.__PVT__req_rdy) 
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
