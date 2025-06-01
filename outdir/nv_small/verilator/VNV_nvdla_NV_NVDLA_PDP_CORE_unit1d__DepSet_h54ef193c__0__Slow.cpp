// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "VNV_nvdla__pch.h"
#include "VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d.h"
#include "VNV_nvdla__Syms.h"

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__0(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pooling_result = (0x7ffU & ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__pipe_dp_4 
                                                             >> 0x16U)))
                                                  ? (IData)(
                                                            (vlSelfRef.__PVT__pipe_dp_4 
                                                             >> 0xbU))
                                                  : (IData)(vlSelfRef.__PVT__pipe_dp_4)));
    vlSelfRef.__PVT__add_out_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_4)) 
                                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_out_prdy__BRA__0__KET__)));
    vlSelfRef.__PVT__data_buf0 = ((0U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result0_d3));
    vlSelfRef.__PVT__data_buf1 = ((1U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result1_d3));
    vlSelfRef.__PVT__data_buf2 = ((2U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result2_d3));
    vlSelfRef.__PVT__data_buf3 = ((3U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result3_d3));
    vlSelfRef.__PVT__data_buf4 = ((4U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result4_d3));
    vlSelfRef.__PVT__data_buf5 = ((5U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result5_d3));
    vlSelfRef.__PVT__data_buf6 = ((6U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result6_d3));
    vlSelfRef.__PVT__data_buf7 = ((7U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result7_d3));
    vlSelfRef.__PVT__pipe_rdy_3 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_4)) 
                                         | (IData)(vlSelfRef.__PVT__add_out_rdy)));
    vlSelfRef.pooling_out = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_0__last_out_en)
                              ? ((0x10U & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                  ? 0U : ((8U & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                           ? 0U : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? (IData)(vlSelfRef.__PVT__flush_out7)
                                                      : (IData)(vlSelfRef.__PVT__flush_out6))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? (IData)(vlSelfRef.__PVT__flush_out5)
                                                      : (IData)(vlSelfRef.__PVT__flush_out4)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? (IData)(vlSelfRef.__PVT__flush_out3)
                                                      : (IData)(vlSelfRef.__PVT__flush_out2))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? (IData)(vlSelfRef.__PVT__flush_out1)
                                                      : (IData)(vlSelfRef.__PVT__flush_out0))))))
                              : ((0x10U & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                  ? 0U : ((8U & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                           ? 0U : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf7)))
                                                      : 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf6))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf5)))
                                                      : 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf4)))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf3)))
                                                      : 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf2))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf1)))
                                                      : 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf0)))))))));
    vlSelfRef.__PVT__pipe_rdy_2 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_3)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_3)));
    vlSelfRef.__PVT__pipe_rdy_1 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_2)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_2)));
    vlSelfRef.__PVT__pipe_rdy_0 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_1)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_1)));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__0(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pooling_result = (0x7ffU & ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__pipe_dp_4 
                                                             >> 0x16U)))
                                                  ? (IData)(
                                                            (vlSelfRef.__PVT__pipe_dp_4 
                                                             >> 0xbU))
                                                  : (IData)(vlSelfRef.__PVT__pipe_dp_4)));
    vlSelfRef.__PVT__add_out_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_4)) 
                                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_1__pooling_out_prdy)));
    vlSelfRef.__PVT__data_buf0 = ((0U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result0_d3));
    vlSelfRef.__PVT__data_buf1 = ((1U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result1_d3));
    vlSelfRef.__PVT__data_buf2 = ((2U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result2_d3));
    vlSelfRef.__PVT__data_buf3 = ((3U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result3_d3));
    vlSelfRef.__PVT__data_buf4 = ((4U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result4_d3));
    vlSelfRef.__PVT__data_buf5 = ((5U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result5_d3));
    vlSelfRef.__PVT__data_buf6 = ((6U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result6_d3));
    vlSelfRef.__PVT__data_buf7 = ((7U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result7_d3));
    vlSelfRef.__PVT__pipe_rdy_3 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_4)) 
                                         | (IData)(vlSelfRef.__PVT__add_out_rdy)));
    vlSelfRef.pooling_out = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_0__last_out_en)
                              ? ((0x10U & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                  ? 0U : ((8U & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                           ? 0U : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? (IData)(vlSelfRef.__PVT__flush_out7)
                                                      : (IData)(vlSelfRef.__PVT__flush_out6))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? (IData)(vlSelfRef.__PVT__flush_out5)
                                                      : (IData)(vlSelfRef.__PVT__flush_out4)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? (IData)(vlSelfRef.__PVT__flush_out3)
                                                      : (IData)(vlSelfRef.__PVT__flush_out2))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? (IData)(vlSelfRef.__PVT__flush_out1)
                                                      : (IData)(vlSelfRef.__PVT__flush_out0))))))
                              : ((0x10U & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                  ? 0U : ((8U & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                           ? 0U : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf7)))
                                                      : 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf6))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf5)))
                                                      : 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf4)))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf3)))
                                                      : 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf2))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf1)))
                                                      : 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf0)))))))));
    vlSelfRef.__PVT__pipe_rdy_2 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_3)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_3)));
    vlSelfRef.__PVT__pipe_rdy_1 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_2)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_2)));
    vlSelfRef.__PVT__pipe_rdy_0 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_1)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_1)));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2__0(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pooling_result = (0x7ffU & ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__pipe_dp_4 
                                                             >> 0x16U)))
                                                  ? (IData)(
                                                            (vlSelfRef.__PVT__pipe_dp_4 
                                                             >> 0xbU))
                                                  : (IData)(vlSelfRef.__PVT__pipe_dp_4)));
    vlSelfRef.__PVT__add_out_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_4)) 
                                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_2__pooling_out_prdy)));
    vlSelfRef.__PVT__data_buf0 = ((0U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result0_d3));
    vlSelfRef.__PVT__data_buf1 = ((1U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result1_d3));
    vlSelfRef.__PVT__data_buf2 = ((2U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result2_d3));
    vlSelfRef.__PVT__data_buf3 = ((3U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result3_d3));
    vlSelfRef.__PVT__data_buf4 = ((4U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result4_d3));
    vlSelfRef.__PVT__data_buf5 = ((5U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result5_d3));
    vlSelfRef.__PVT__data_buf6 = ((6U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result6_d3));
    vlSelfRef.__PVT__data_buf7 = ((7U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result7_d3));
    vlSelfRef.__PVT__pipe_rdy_3 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_4)) 
                                         | (IData)(vlSelfRef.__PVT__add_out_rdy)));
    vlSelfRef.pooling_out = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_0__last_out_en)
                              ? ((0x10U & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                  ? 0U : ((8U & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                           ? 0U : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? (IData)(vlSelfRef.__PVT__flush_out7)
                                                      : (IData)(vlSelfRef.__PVT__flush_out6))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? (IData)(vlSelfRef.__PVT__flush_out5)
                                                      : (IData)(vlSelfRef.__PVT__flush_out4)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? (IData)(vlSelfRef.__PVT__flush_out3)
                                                      : (IData)(vlSelfRef.__PVT__flush_out2))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? (IData)(vlSelfRef.__PVT__flush_out1)
                                                      : (IData)(vlSelfRef.__PVT__flush_out0))))))
                              : ((0x10U & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                  ? 0U : ((8U & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                           ? 0U : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf7)))
                                                      : 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf6))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf5)))
                                                      : 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf4)))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf3)))
                                                      : 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf2))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf1)))
                                                      : 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf0)))))))));
    vlSelfRef.__PVT__pipe_rdy_2 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_3)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_3)));
    vlSelfRef.__PVT__pipe_rdy_1 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_2)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_2)));
    vlSelfRef.__PVT__pipe_rdy_0 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_1)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_1)));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_3__0(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_3__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pooling_result = (0x7ffU & ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__pipe_dp_4 
                                                             >> 0x16U)))
                                                  ? (IData)(
                                                            (vlSelfRef.__PVT__pipe_dp_4 
                                                             >> 0xbU))
                                                  : (IData)(vlSelfRef.__PVT__pipe_dp_4)));
    vlSelfRef.__PVT__add_out_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_4)) 
                                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_3__pooling_out_prdy)));
    vlSelfRef.__PVT__data_buf0 = ((0U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result0_d3));
    vlSelfRef.__PVT__data_buf1 = ((1U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result1_d3));
    vlSelfRef.__PVT__data_buf2 = ((2U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result2_d3));
    vlSelfRef.__PVT__data_buf3 = ((3U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result3_d3));
    vlSelfRef.__PVT__data_buf4 = ((4U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result4_d3));
    vlSelfRef.__PVT__data_buf5 = ((5U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result5_d3));
    vlSelfRef.__PVT__data_buf6 = ((6U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result6_d3));
    vlSelfRef.__PVT__data_buf7 = ((7U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result7_d3));
    vlSelfRef.__PVT__pipe_rdy_3 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_4)) 
                                         | (IData)(vlSelfRef.__PVT__add_out_rdy)));
    vlSelfRef.pooling_out = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_0__last_out_en)
                              ? ((0x10U & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                  ? 0U : ((8U & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                           ? 0U : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? (IData)(vlSelfRef.__PVT__flush_out7)
                                                      : (IData)(vlSelfRef.__PVT__flush_out6))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? (IData)(vlSelfRef.__PVT__flush_out5)
                                                      : (IData)(vlSelfRef.__PVT__flush_out4)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? (IData)(vlSelfRef.__PVT__flush_out3)
                                                      : (IData)(vlSelfRef.__PVT__flush_out2))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? (IData)(vlSelfRef.__PVT__flush_out1)
                                                      : (IData)(vlSelfRef.__PVT__flush_out0))))))
                              : ((0x10U & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                  ? 0U : ((8U & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                           ? 0U : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf7)))
                                                      : 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf6))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf5)))
                                                      : 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf4)))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf3)))
                                                      : 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf2))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf1)))
                                                      : 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf0)))))))));
    vlSelfRef.__PVT__pipe_rdy_2 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_3)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_3)));
    vlSelfRef.__PVT__pipe_rdy_1 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_2)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_2)));
    vlSelfRef.__PVT__pipe_rdy_0 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_1)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_1)));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_4__0(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_4__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pooling_result = (0x7ffU & ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__pipe_dp_4 
                                                             >> 0x16U)))
                                                  ? (IData)(
                                                            (vlSelfRef.__PVT__pipe_dp_4 
                                                             >> 0xbU))
                                                  : (IData)(vlSelfRef.__PVT__pipe_dp_4)));
    vlSelfRef.__PVT__add_out_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_4)) 
                                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_4__pooling_out_prdy)));
    vlSelfRef.__PVT__data_buf0 = ((0U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result0_d3));
    vlSelfRef.__PVT__data_buf1 = ((1U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result1_d3));
    vlSelfRef.__PVT__data_buf2 = ((2U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result2_d3));
    vlSelfRef.__PVT__data_buf3 = ((3U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result3_d3));
    vlSelfRef.__PVT__data_buf4 = ((4U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result4_d3));
    vlSelfRef.__PVT__data_buf5 = ((5U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result5_d3));
    vlSelfRef.__PVT__data_buf6 = ((6U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result6_d3));
    vlSelfRef.__PVT__data_buf7 = ((7U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result7_d3));
    vlSelfRef.__PVT__pipe_rdy_3 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_4)) 
                                         | (IData)(vlSelfRef.__PVT__add_out_rdy)));
    vlSelfRef.pooling_out = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_0__last_out_en)
                              ? ((0x10U & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                  ? 0U : ((8U & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                           ? 0U : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? (IData)(vlSelfRef.__PVT__flush_out7)
                                                      : (IData)(vlSelfRef.__PVT__flush_out6))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? (IData)(vlSelfRef.__PVT__flush_out5)
                                                      : (IData)(vlSelfRef.__PVT__flush_out4)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? (IData)(vlSelfRef.__PVT__flush_out3)
                                                      : (IData)(vlSelfRef.__PVT__flush_out2))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? (IData)(vlSelfRef.__PVT__flush_out1)
                                                      : (IData)(vlSelfRef.__PVT__flush_out0))))))
                              : ((0x10U & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                  ? 0U : ((8U & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                           ? 0U : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf7)))
                                                      : 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf6))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf5)))
                                                      : 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf4)))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf3)))
                                                      : 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf2))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf1)))
                                                      : 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf0)))))))));
    vlSelfRef.__PVT__pipe_rdy_2 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_3)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_3)));
    vlSelfRef.__PVT__pipe_rdy_1 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_2)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_2)));
    vlSelfRef.__PVT__pipe_rdy_0 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_1)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_1)));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_5__0(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_5__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pooling_result = (0x7ffU & ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__pipe_dp_4 
                                                             >> 0x16U)))
                                                  ? (IData)(
                                                            (vlSelfRef.__PVT__pipe_dp_4 
                                                             >> 0xbU))
                                                  : (IData)(vlSelfRef.__PVT__pipe_dp_4)));
    vlSelfRef.__PVT__add_out_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_4)) 
                                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_5__pooling_out_prdy)));
    vlSelfRef.__PVT__data_buf0 = ((0U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result0_d3));
    vlSelfRef.__PVT__data_buf1 = ((1U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result1_d3));
    vlSelfRef.__PVT__data_buf2 = ((2U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result2_d3));
    vlSelfRef.__PVT__data_buf3 = ((3U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result3_d3));
    vlSelfRef.__PVT__data_buf4 = ((4U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result4_d3));
    vlSelfRef.__PVT__data_buf5 = ((5U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result5_d3));
    vlSelfRef.__PVT__data_buf6 = ((6U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result6_d3));
    vlSelfRef.__PVT__data_buf7 = ((7U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result7_d3));
    vlSelfRef.__PVT__pipe_rdy_3 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_4)) 
                                         | (IData)(vlSelfRef.__PVT__add_out_rdy)));
    vlSelfRef.pooling_out = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_0__last_out_en)
                              ? ((0x10U & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                  ? 0U : ((8U & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                           ? 0U : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? (IData)(vlSelfRef.__PVT__flush_out7)
                                                      : (IData)(vlSelfRef.__PVT__flush_out6))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? (IData)(vlSelfRef.__PVT__flush_out5)
                                                      : (IData)(vlSelfRef.__PVT__flush_out4)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? (IData)(vlSelfRef.__PVT__flush_out3)
                                                      : (IData)(vlSelfRef.__PVT__flush_out2))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? (IData)(vlSelfRef.__PVT__flush_out1)
                                                      : (IData)(vlSelfRef.__PVT__flush_out0))))))
                              : ((0x10U & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                  ? 0U : ((8U & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                           ? 0U : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf7)))
                                                      : 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf6))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf5)))
                                                      : 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf4)))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf3)))
                                                      : 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf2))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf1)))
                                                      : 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf0)))))))));
    vlSelfRef.__PVT__pipe_rdy_2 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_3)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_3)));
    vlSelfRef.__PVT__pipe_rdy_1 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_2)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_2)));
    vlSelfRef.__PVT__pipe_rdy_0 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_1)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_1)));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_6__0(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_6__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pooling_result = (0x7ffU & ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__pipe_dp_4 
                                                             >> 0x16U)))
                                                  ? (IData)(
                                                            (vlSelfRef.__PVT__pipe_dp_4 
                                                             >> 0xbU))
                                                  : (IData)(vlSelfRef.__PVT__pipe_dp_4)));
    vlSelfRef.__PVT__add_out_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_4)) 
                                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_6__pooling_out_prdy)));
    vlSelfRef.__PVT__data_buf0 = ((0U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result0_d3));
    vlSelfRef.__PVT__data_buf1 = ((1U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result1_d3));
    vlSelfRef.__PVT__data_buf2 = ((2U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result2_d3));
    vlSelfRef.__PVT__data_buf3 = ((3U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result3_d3));
    vlSelfRef.__PVT__data_buf4 = ((4U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result4_d3));
    vlSelfRef.__PVT__data_buf5 = ((5U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result5_d3));
    vlSelfRef.__PVT__data_buf6 = ((6U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result6_d3));
    vlSelfRef.__PVT__data_buf7 = ((7U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result7_d3));
    vlSelfRef.__PVT__pipe_rdy_3 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_4)) 
                                         | (IData)(vlSelfRef.__PVT__add_out_rdy)));
    vlSelfRef.pooling_out = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_0__last_out_en)
                              ? ((0x10U & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                  ? 0U : ((8U & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                           ? 0U : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? (IData)(vlSelfRef.__PVT__flush_out7)
                                                      : (IData)(vlSelfRef.__PVT__flush_out6))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? (IData)(vlSelfRef.__PVT__flush_out5)
                                                      : (IData)(vlSelfRef.__PVT__flush_out4)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? (IData)(vlSelfRef.__PVT__flush_out3)
                                                      : (IData)(vlSelfRef.__PVT__flush_out2))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? (IData)(vlSelfRef.__PVT__flush_out1)
                                                      : (IData)(vlSelfRef.__PVT__flush_out0))))))
                              : ((0x10U & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                  ? 0U : ((8U & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                           ? 0U : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf7)))
                                                      : 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf6))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf5)))
                                                      : 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf4)))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf3)))
                                                      : 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf2))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf1)))
                                                      : 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf0)))))))));
    vlSelfRef.__PVT__pipe_rdy_2 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_3)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_3)));
    vlSelfRef.__PVT__pipe_rdy_1 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_2)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_2)));
    vlSelfRef.__PVT__pipe_rdy_0 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_1)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_1)));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__0(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___stl_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pooling_result = (0x7ffU & ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__pipe_dp_4 
                                                             >> 0x16U)))
                                                  ? (IData)(
                                                            (vlSelfRef.__PVT__pipe_dp_4 
                                                             >> 0xbU))
                                                  : (IData)(vlSelfRef.__PVT__pipe_dp_4)));
    vlSelfRef.__PVT__add_out_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_4)) 
                                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_7__pooling_out_prdy)));
    vlSelfRef.__PVT__data_buf0 = ((0U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result0_d3));
    vlSelfRef.__PVT__data_buf1 = ((1U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result1_d3));
    vlSelfRef.__PVT__data_buf2 = ((2U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result2_d3));
    vlSelfRef.__PVT__data_buf3 = ((3U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result3_d3));
    vlSelfRef.__PVT__data_buf4 = ((4U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result4_d3));
    vlSelfRef.__PVT__data_buf5 = ((5U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result5_d3));
    vlSelfRef.__PVT__data_buf6 = ((6U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result6_d3));
    vlSelfRef.__PVT__data_buf7 = ((7U == (0x1fU & (IData)(
                                                          (vlSelfRef.__PVT__pipe_dp_4 
                                                           >> 0x18U))))
                                   ? (IData)(vlSelfRef.__PVT__pooling_result)
                                   : (IData)(vlSelfRef.__PVT__latch_result7_d3));
    vlSelfRef.__PVT__pipe_rdy_3 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_4)) 
                                         | (IData)(vlSelfRef.__PVT__add_out_rdy)));
    vlSelfRef.pooling_out = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_0__last_out_en)
                              ? ((0x10U & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                  ? 0U : ((8U & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                           ? 0U : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? (IData)(vlSelfRef.__PVT__flush_out7)
                                                      : (IData)(vlSelfRef.__PVT__flush_out6))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? (IData)(vlSelfRef.__PVT__flush_out5)
                                                      : (IData)(vlSelfRef.__PVT__flush_out4)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? (IData)(vlSelfRef.__PVT__flush_out3)
                                                      : (IData)(vlSelfRef.__PVT__flush_out2))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? (IData)(vlSelfRef.__PVT__flush_out1)
                                                      : (IData)(vlSelfRef.__PVT__flush_out0))))))
                              : ((0x10U & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                  ? 0U : ((8U & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                           ? 0U : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf7)))
                                                      : 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf6))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf5)))
                                                      : 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf4)))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf3)))
                                                      : 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf2))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.__PVT__pooling_cnt))
                                                      ? 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf1)))
                                                      : 
                                                     ((0x4000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.__PVT__pipe_dp_4 
                                                                   >> 0x17U)) 
                                                          << 0xeU)) 
                                                      | ((0x3800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.__PVT__pipe_dp_4 
                                                                      >> 0x1eU)) 
                                                             << 0xbU)) 
                                                         | (IData)(vlSelfRef.__PVT__data_buf0)))))))));
    vlSelfRef.__PVT__pipe_rdy_2 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_3)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_3)));
    vlSelfRef.__PVT__pipe_rdy_1 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_2)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_2)));
    vlSelfRef.__PVT__pipe_rdy_0 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_1)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_1)));
}
