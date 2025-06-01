// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "VNV_nvdla__pch.h"
#include "VNV_nvdla_NV_NVDLA_CDMA_CVT_cell.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_0__0(VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_0__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data = ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch)
                                                    ? vlSelfRef.__PVT__sub_dout
                                                    : vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data);
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch)
                                                    ? vlSelfRef.__PVT__mul_dout
                                                    : vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data);
    vlSelfRef.__PVT__pipe_p3__DOT__p3_skid_data = ((IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_skid_catch)
                                                    ? (IData)(vlSelfRef.__PVT__chn_dout)
                                                    : (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_skid_data));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data = (
                                                   ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc) 
                                                    & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_pipe_valid))
                                                    ? vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_pipe_data
                                                    : vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data);
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data = ((IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_skid_pipe_valid)
                                                    ? (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_skid_pipe_data)
                                                    : (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_data));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data = (
                                                   ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc) 
                                                    & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))
                                                    ? vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_data
                                                    : vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data);
}
