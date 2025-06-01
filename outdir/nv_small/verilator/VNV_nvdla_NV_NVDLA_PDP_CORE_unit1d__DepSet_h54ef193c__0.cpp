// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "VNV_nvdla__pch.h"
#include "VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d.h"
#include "VNV_nvdla__Syms.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__0(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__pooling_size;
    __Vdly__pooling_size = 0;
    SData/*10:0*/ __Vdly__latch_result6_d3;
    __Vdly__latch_result6_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result5_d3;
    __Vdly__latch_result5_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result4_d3;
    __Vdly__latch_result4_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result3_d3;
    __Vdly__latch_result3_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result1_d3;
    __Vdly__latch_result1_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result0_d3;
    __Vdly__latch_result0_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result7_d3;
    __Vdly__latch_result7_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result2_d3;
    __Vdly__latch_result2_d3 = 0;
    SData/*14:0*/ __Vdly__flush_out6;
    __Vdly__flush_out6 = 0;
    SData/*14:0*/ __Vdly__flush_out5;
    __Vdly__flush_out5 = 0;
    SData/*14:0*/ __Vdly__flush_out4;
    __Vdly__flush_out4 = 0;
    SData/*14:0*/ __Vdly__flush_out3;
    __Vdly__flush_out3 = 0;
    SData/*14:0*/ __Vdly__flush_out1;
    __Vdly__flush_out1 = 0;
    SData/*14:0*/ __Vdly__flush_out0;
    __Vdly__flush_out0 = 0;
    SData/*14:0*/ __Vdly__flush_out7;
    __Vdly__flush_out7 = 0;
    SData/*14:0*/ __Vdly__flush_out2;
    __Vdly__flush_out2 = 0;
    // Body
    __Vdly__pooling_size = vlSelfRef.__PVT__pooling_size;
    __Vdly__flush_out6 = vlSelfRef.__PVT__flush_out6;
    __Vdly__flush_out5 = vlSelfRef.__PVT__flush_out5;
    __Vdly__flush_out4 = vlSelfRef.__PVT__flush_out4;
    __Vdly__flush_out3 = vlSelfRef.__PVT__flush_out3;
    __Vdly__flush_out1 = vlSelfRef.__PVT__flush_out1;
    __Vdly__flush_out0 = vlSelfRef.__PVT__flush_out0;
    __Vdly__flush_out7 = vlSelfRef.__PVT__flush_out7;
    __Vdly__flush_out2 = vlSelfRef.__PVT__flush_out2;
    __Vdly__latch_result6_d3 = vlSelfRef.__PVT__latch_result6_d3;
    __Vdly__latch_result5_d3 = vlSelfRef.__PVT__latch_result5_d3;
    __Vdly__latch_result4_d3 = vlSelfRef.__PVT__latch_result4_d3;
    __Vdly__latch_result3_d3 = vlSelfRef.__PVT__latch_result3_d3;
    __Vdly__latch_result1_d3 = vlSelfRef.__PVT__latch_result1_d3;
    __Vdly__latch_result0_d3 = vlSelfRef.__PVT__latch_result0_d3;
    __Vdly__latch_result7_d3 = vlSelfRef.__PVT__latch_result7_d3;
    __Vdly__latch_result2_d3 = vlSelfRef.__PVT__latch_result2_d3;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelfRef.__PVT__load_din) & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                   >> 0x17U))) {
            __Vdly__pooling_size = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_0__pooling_din_last)
                                     ? 0U : (7U & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__pooling_size))));
        }
        if ((IData)((0x200000000ULL == (0x220000000ULL 
                                        & vlSelfRef.__PVT__pipe_dp_4)))) {
            if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                               >> 0x1cU)))) {
                __Vdly__flush_out6 = vlSelfRef.__PVT__flush_out6;
                __Vdly__flush_out5 = vlSelfRef.__PVT__flush_out5;
                __Vdly__flush_out4 = vlSelfRef.__PVT__flush_out4;
                __Vdly__flush_out3 = vlSelfRef.__PVT__flush_out3;
                __Vdly__flush_out1 = vlSelfRef.__PVT__flush_out1;
                __Vdly__flush_out0 = vlSelfRef.__PVT__flush_out0;
                __Vdly__flush_out7 = vlSelfRef.__PVT__flush_out7;
                __Vdly__flush_out2 = vlSelfRef.__PVT__flush_out2;
            } else if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                      >> 0x1bU)))) {
                __Vdly__flush_out6 = vlSelfRef.__PVT__flush_out6;
                __Vdly__flush_out5 = vlSelfRef.__PVT__flush_out5;
                __Vdly__flush_out4 = vlSelfRef.__PVT__flush_out4;
                __Vdly__flush_out3 = vlSelfRef.__PVT__flush_out3;
                __Vdly__flush_out1 = vlSelfRef.__PVT__flush_out1;
                __Vdly__flush_out0 = vlSelfRef.__PVT__flush_out0;
                __Vdly__flush_out7 = vlSelfRef.__PVT__flush_out7;
                __Vdly__flush_out2 = vlSelfRef.__PVT__flush_out2;
            } else {
                if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out6 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf6)));
                        }
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out7 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf7)));
                        }
                    }
                    if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out5 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf5)));
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out4 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf4)));
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out3 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf3)));
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out2 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf2)));
                        }
                    }
                    if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out1 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf1)));
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out0 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf0)));
                        }
                    }
                }
            }
        }
        if ((((IData)(vlSelfRef.__PVT__pipe_vld_4) 
              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_out_prdy__BRA__0__KET__)) 
             & ((IData)((0x200000000ULL == (0x220000000ULL 
                                            & vlSelfRef.__PVT__pipe_dp_4))) 
                | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_0__last_out_en)))) {
            vlSelfRef.__PVT__pooling_cnt = ((7U == (IData)(vlSelfRef.__PVT__pooling_cnt))
                                             ? 0U : 
                                            (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__pooling_cnt))));
        }
        if (((IData)(vlSelfRef.__PVT__pipe_vld_4) & (IData)(vlSelfRef.__PVT__add_out_rdy))) {
            if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                               >> 0x1cU)))) {
                __Vdly__latch_result6_d3 = vlSelfRef.__PVT__latch_result6_d3;
                __Vdly__latch_result5_d3 = vlSelfRef.__PVT__latch_result5_d3;
                __Vdly__latch_result4_d3 = vlSelfRef.__PVT__latch_result4_d3;
                __Vdly__latch_result3_d3 = vlSelfRef.__PVT__latch_result3_d3;
                __Vdly__latch_result1_d3 = vlSelfRef.__PVT__latch_result1_d3;
                __Vdly__latch_result0_d3 = vlSelfRef.__PVT__latch_result0_d3;
                __Vdly__latch_result7_d3 = vlSelfRef.__PVT__latch_result7_d3;
                __Vdly__latch_result2_d3 = vlSelfRef.__PVT__latch_result2_d3;
            } else if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                      >> 0x1bU)))) {
                __Vdly__latch_result6_d3 = vlSelfRef.__PVT__latch_result6_d3;
                __Vdly__latch_result5_d3 = vlSelfRef.__PVT__latch_result5_d3;
                __Vdly__latch_result4_d3 = vlSelfRef.__PVT__latch_result4_d3;
                __Vdly__latch_result3_d3 = vlSelfRef.__PVT__latch_result3_d3;
                __Vdly__latch_result1_d3 = vlSelfRef.__PVT__latch_result1_d3;
                __Vdly__latch_result0_d3 = vlSelfRef.__PVT__latch_result0_d3;
                __Vdly__latch_result7_d3 = vlSelfRef.__PVT__latch_result7_d3;
                __Vdly__latch_result2_d3 = vlSelfRef.__PVT__latch_result2_d3;
            } else {
                if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result6_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result7_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                    }
                    if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result5_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result4_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result3_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result2_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                    }
                    if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result1_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result0_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                    }
                }
            }
        }
        if (vlSelfRef.__PVT__pipe_vld_3) {
            vlSelfRef.__PVT__pipe_vld_4 = 1U;
        } else if (vlSelfRef.__PVT__add_out_rdy) {
            vlSelfRef.__PVT__pipe_vld_4 = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__pipe_vld_3) & (IData)(vlSelfRef.__PVT__pipe_rdy_3))) {
            vlSelfRef.__PVT__pipe_dp_4 = vlSelfRef.__PVT__pipe_dp_3;
        }
        if (vlSelfRef.__PVT__pipe_vld_2) {
            vlSelfRef.__PVT__pipe_vld_3 = 1U;
        } else if (vlSelfRef.__PVT__pipe_rdy_3) {
            vlSelfRef.__PVT__pipe_vld_3 = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__pipe_vld_2) & (IData)(vlSelfRef.__PVT__pipe_rdy_2))) {
            vlSelfRef.__PVT__pipe_dp_3 = vlSelfRef.__PVT__pipe_dp_2;
        }
        if (vlSelfRef.__PVT__pipe_vld_1) {
            vlSelfRef.__PVT__pipe_vld_2 = 1U;
        } else if (vlSelfRef.__PVT__pipe_rdy_2) {
            vlSelfRef.__PVT__pipe_vld_2 = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__pipe_vld_1) & (IData)(vlSelfRef.__PVT__pipe_rdy_1))) {
            vlSelfRef.__PVT__pipe_dp_2 = vlSelfRef.__PVT__pipe_dp_1;
        }
        if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_pvld__BRA__0__KET__) {
            vlSelfRef.__PVT__pipe_vld_1 = 1U;
        } else if (vlSelfRef.__PVT__pipe_rdy_1) {
            vlSelfRef.__PVT__pipe_vld_1 = 0U;
        }
        if (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_pvld__BRA__0__KET__) 
             & (IData)(vlSelfRef.__PVT__pipe_rdy_0))) {
            vlSelfRef.__PVT__pipe_dp_1 = (((QData)((IData)(
                                                           ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_0__pooling_din_last) 
                                                              << 0xbU) 
                                                             | (((IData)(vlSelfRef.__PVT__pooling_size) 
                                                                 << 8U) 
                                                                | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable) 
                                                                   << 7U))) 
                                                            | ((0x1cU 
                                                                & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                   >> 0xdU)) 
                                                               | ((2U 
                                                                   & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                      >> 0x16U)) 
                                                                  | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_1st_0)))))) 
                                           << 0x16U) 
                                          | (QData)((IData)(
                                                            ((0x3ff800U 
                                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                 << 0xbU)) 
                                                             | (IData)(vlSelfRef.__PVT__int_pooling)))));
        }
    } else {
        __Vdly__pooling_size = 0U;
        __Vdly__flush_out6 = 0U;
        __Vdly__flush_out5 = 0U;
        __Vdly__flush_out4 = 0U;
        __Vdly__flush_out3 = 0U;
        __Vdly__flush_out1 = 0U;
        __Vdly__flush_out0 = 0U;
        __Vdly__flush_out7 = 0U;
        __Vdly__flush_out2 = 0U;
        vlSelfRef.__PVT__pooling_cnt = 0U;
        __Vdly__latch_result6_d3 = 0U;
        __Vdly__latch_result5_d3 = 0U;
        __Vdly__latch_result4_d3 = 0U;
        __Vdly__latch_result3_d3 = 0U;
        __Vdly__latch_result1_d3 = 0U;
        __Vdly__latch_result0_d3 = 0U;
        __Vdly__latch_result7_d3 = 0U;
        __Vdly__latch_result2_d3 = 0U;
        vlSelfRef.__PVT__pipe_vld_4 = 0U;
        vlSelfRef.__PVT__pipe_dp_4 = 0ULL;
        vlSelfRef.__PVT__pipe_vld_3 = 0U;
        vlSelfRef.__PVT__pipe_dp_3 = 0ULL;
        vlSelfRef.__PVT__pipe_vld_2 = 0U;
        vlSelfRef.__PVT__pipe_dp_2 = 0ULL;
        vlSelfRef.__PVT__pipe_vld_1 = 0U;
        vlSelfRef.__PVT__pipe_dp_1 = 0ULL;
    }
    vlSelfRef.__PVT__flush_out6 = __Vdly__flush_out6;
    vlSelfRef.__PVT__flush_out5 = __Vdly__flush_out5;
    vlSelfRef.__PVT__flush_out4 = __Vdly__flush_out4;
    vlSelfRef.__PVT__flush_out3 = __Vdly__flush_out3;
    vlSelfRef.__PVT__flush_out1 = __Vdly__flush_out1;
    vlSelfRef.__PVT__flush_out0 = __Vdly__flush_out0;
    vlSelfRef.__PVT__flush_out7 = __Vdly__flush_out7;
    vlSelfRef.__PVT__flush_out2 = __Vdly__flush_out2;
    vlSelfRef.__PVT__latch_result6_d3 = __Vdly__latch_result6_d3;
    vlSelfRef.__PVT__latch_result5_d3 = __Vdly__latch_result5_d3;
    vlSelfRef.__PVT__latch_result4_d3 = __Vdly__latch_result4_d3;
    vlSelfRef.__PVT__latch_result3_d3 = __Vdly__latch_result3_d3;
    vlSelfRef.__PVT__latch_result1_d3 = __Vdly__latch_result1_d3;
    vlSelfRef.__PVT__latch_result0_d3 = __Vdly__latch_result0_d3;
    vlSelfRef.__PVT__latch_result7_d3 = __Vdly__latch_result7_d3;
    vlSelfRef.__PVT__latch_result2_d3 = __Vdly__latch_result2_d3;
    vlSelfRef.__PVT__pooling_result = (0x7ffU & ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__pipe_dp_4 
                                                             >> 0x16U)))
                                                  ? (IData)(
                                                            (vlSelfRef.__PVT__pipe_dp_4 
                                                             >> 0xbU))
                                                  : (IData)(vlSelfRef.__PVT__pipe_dp_4)));
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
    vlSelfRef.__PVT__pooling_size = __Vdly__pooling_size;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__0(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__1(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__add_out_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_4)) 
                                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_out_prdy__BRA__0__KET__)));
    vlSelfRef.__PVT__pipe_rdy_3 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_4)) 
                                         | (IData)(vlSelfRef.__PVT__add_out_rdy)));
    vlSelfRef.__PVT__pipe_rdy_2 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_3)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_3)));
    vlSelfRef.__PVT__pipe_rdy_1 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_2)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_2)));
    vlSelfRef.__PVT__pipe_rdy_0 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_1)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_1)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__2(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ __Vfunc_pooling_fun__0__Vfuncout;
    __Vfunc_pooling_fun__0__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_pooling_fun__0__data0;
    __Vfunc_pooling_fun__0__data0 = 0;
    SData/*10:0*/ __Vfunc_pooling_fun__0__data1;
    __Vfunc_pooling_fun__0__data1 = 0;
    CData/*1:0*/ __Vfunc_pooling_fun__0__pooling_type;
    __Vfunc_pooling_fun__0__pooling_type = 0;
    // Body
    vlSelfRef.__PVT__load_din = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_pvld__BRA__0__KET__) 
                                 & ((IData)(vlSelfRef.__PVT__pipe_rdy_0) 
                                    & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable)) 
                                       & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_en__BRA__0__KET__))));
    __Vfunc_pooling_fun__0__pooling_type = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__pooling_type_cfg_d;
    if (vlSelfRef.__PVT__load_din) {
        __Vfunc_pooling_fun__0__data1 = (0x7ffU & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0);
        __Vfunc_pooling_fun__0__data0 = ((0x20000U 
                                          & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                          ? ((0x10000U 
                                              & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                              ? ((0x8000U 
                                                  & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                  ? (IData)(vlSelfRef.__PVT__data_buf7)
                                                  : (IData)(vlSelfRef.__PVT__data_buf6))
                                              : ((0x8000U 
                                                  & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                  ? (IData)(vlSelfRef.__PVT__data_buf5)
                                                  : (IData)(vlSelfRef.__PVT__data_buf4)))
                                          : ((0x10000U 
                                              & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                              ? ((0x8000U 
                                                  & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                  ? (IData)(vlSelfRef.__PVT__data_buf3)
                                                  : (IData)(vlSelfRef.__PVT__data_buf2))
                                              : ((0x8000U 
                                                  & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                  ? (IData)(vlSelfRef.__PVT__data_buf1)
                                                  : (IData)(vlSelfRef.__PVT__data_buf0))));
    } else {
        __Vfunc_pooling_fun__0__data1 = 0U;
        __Vfunc_pooling_fun__0__data0 = 0U;
    }
    vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling 
        = (2U == (IData)(__Vfunc_pooling_fun__0__pooling_type));
    vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling 
        = (1U == (IData)(__Vfunc_pooling_fun__0__pooling_type));
    vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling 
        = (0U == (IData)(__Vfunc_pooling_fun__0__pooling_type));
    __Vfunc_pooling_fun__0__Vfuncout = (0x7ffU & ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling)
                                                   ? 
                                                  VL_EXTEND_II(32,11, 
                                                               ([&]() {
                        vlSelfRef.__Vfunc_pooling_SUM__1__data1 
                            = __Vfunc_pooling_fun__0__data1;
                        vlSelfRef.__Vfunc_pooling_SUM__1__data0 
                            = __Vfunc_pooling_fun__0__data0;
                        vlSelfRef.__Vfunc_pooling_SUM__1__Vfuncout 
                            = (0x7ffU & ((IData)(vlSelfRef.__Vfunc_pooling_SUM__1__data1) 
                                         + (IData)(vlSelfRef.__Vfunc_pooling_SUM__1__data0)));
                    }(), (IData)(vlSelfRef.__Vfunc_pooling_SUM__1__Vfuncout)))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling)
                                                    ? 
                                                   VL_EXTEND_II(32,11, 
                                                                ([&]() {
                            vlSelfRef.__Vfunc_pooling_MIN__2__data1 
                                = __Vfunc_pooling_fun__0__data1;
                            vlSelfRef.__Vfunc_pooling_MIN__2__data0 
                                = __Vfunc_pooling_fun__0__data0;
                            vlSelfRef.__PVT__pooling_MIN__Vstatic__min_int_ff 
                                = VL_GTS_III(11, (IData)(vlSelfRef.__Vfunc_pooling_MIN__2__data1), (IData)(vlSelfRef.__Vfunc_pooling_MIN__2__data0));
                            vlSelfRef.__Vfunc_pooling_MIN__2__Vfuncout 
                                = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_int_ff)
                                    ? (IData)(vlSelfRef.__Vfunc_pooling_MIN__2__data0)
                                    : (IData)(vlSelfRef.__Vfunc_pooling_MIN__2__data1));
                        }(), (IData)(vlSelfRef.__Vfunc_pooling_MIN__2__Vfuncout)))
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling)
                                                     ? 
                                                    VL_EXTEND_II(32,11, 
                                                                 ([&]() {
                                vlSelfRef.__Vfunc_pooling_MAX__3__data1 
                                    = __Vfunc_pooling_fun__0__data1;
                                vlSelfRef.__Vfunc_pooling_MAX__3__data0 
                                    = __Vfunc_pooling_fun__0__data0;
                                vlSelfRef.__PVT__pooling_MAX__Vstatic__max_int_ff 
                                    = VL_GTS_III(11, (IData)(vlSelfRef.__Vfunc_pooling_MAX__3__data0), (IData)(vlSelfRef.__Vfunc_pooling_MAX__3__data1));
                                vlSelfRef.__Vfunc_pooling_MAX__3__Vfuncout 
                                    = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_int_ff)
                                        ? (IData)(vlSelfRef.__Vfunc_pooling_MAX__3__data0)
                                        : (IData)(vlSelfRef.__Vfunc_pooling_MAX__3__data1));
                            }(), (IData)(vlSelfRef.__Vfunc_pooling_MAX__3__Vfuncout)))
                                                     : 0U))));
    vlSelfRef.__PVT__int_pooling = __Vfunc_pooling_fun__0__Vfuncout;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__0(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__pooling_size;
    __Vdly__pooling_size = 0;
    SData/*10:0*/ __Vdly__latch_result6_d3;
    __Vdly__latch_result6_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result5_d3;
    __Vdly__latch_result5_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result4_d3;
    __Vdly__latch_result4_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result3_d3;
    __Vdly__latch_result3_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result1_d3;
    __Vdly__latch_result1_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result0_d3;
    __Vdly__latch_result0_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result7_d3;
    __Vdly__latch_result7_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result2_d3;
    __Vdly__latch_result2_d3 = 0;
    SData/*14:0*/ __Vdly__flush_out6;
    __Vdly__flush_out6 = 0;
    SData/*14:0*/ __Vdly__flush_out5;
    __Vdly__flush_out5 = 0;
    SData/*14:0*/ __Vdly__flush_out4;
    __Vdly__flush_out4 = 0;
    SData/*14:0*/ __Vdly__flush_out3;
    __Vdly__flush_out3 = 0;
    SData/*14:0*/ __Vdly__flush_out1;
    __Vdly__flush_out1 = 0;
    SData/*14:0*/ __Vdly__flush_out0;
    __Vdly__flush_out0 = 0;
    SData/*14:0*/ __Vdly__flush_out7;
    __Vdly__flush_out7 = 0;
    SData/*14:0*/ __Vdly__flush_out2;
    __Vdly__flush_out2 = 0;
    // Body
    __Vdly__pooling_size = vlSelfRef.__PVT__pooling_size;
    __Vdly__flush_out6 = vlSelfRef.__PVT__flush_out6;
    __Vdly__flush_out5 = vlSelfRef.__PVT__flush_out5;
    __Vdly__flush_out4 = vlSelfRef.__PVT__flush_out4;
    __Vdly__flush_out3 = vlSelfRef.__PVT__flush_out3;
    __Vdly__flush_out1 = vlSelfRef.__PVT__flush_out1;
    __Vdly__flush_out0 = vlSelfRef.__PVT__flush_out0;
    __Vdly__flush_out7 = vlSelfRef.__PVT__flush_out7;
    __Vdly__flush_out2 = vlSelfRef.__PVT__flush_out2;
    __Vdly__latch_result6_d3 = vlSelfRef.__PVT__latch_result6_d3;
    __Vdly__latch_result5_d3 = vlSelfRef.__PVT__latch_result5_d3;
    __Vdly__latch_result4_d3 = vlSelfRef.__PVT__latch_result4_d3;
    __Vdly__latch_result3_d3 = vlSelfRef.__PVT__latch_result3_d3;
    __Vdly__latch_result1_d3 = vlSelfRef.__PVT__latch_result1_d3;
    __Vdly__latch_result0_d3 = vlSelfRef.__PVT__latch_result0_d3;
    __Vdly__latch_result7_d3 = vlSelfRef.__PVT__latch_result7_d3;
    __Vdly__latch_result2_d3 = vlSelfRef.__PVT__latch_result2_d3;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelfRef.__PVT__load_din) & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                   >> 0x17U))) {
            __Vdly__pooling_size = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_1__pooling_din_last)
                                     ? 0U : (7U & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__pooling_size))));
        }
        if ((IData)((0x200000000ULL == (0x220000000ULL 
                                        & vlSelfRef.__PVT__pipe_dp_4)))) {
            if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                               >> 0x1cU)))) {
                __Vdly__flush_out6 = vlSelfRef.__PVT__flush_out6;
                __Vdly__flush_out5 = vlSelfRef.__PVT__flush_out5;
                __Vdly__flush_out4 = vlSelfRef.__PVT__flush_out4;
                __Vdly__flush_out3 = vlSelfRef.__PVT__flush_out3;
                __Vdly__flush_out1 = vlSelfRef.__PVT__flush_out1;
                __Vdly__flush_out0 = vlSelfRef.__PVT__flush_out0;
                __Vdly__flush_out7 = vlSelfRef.__PVT__flush_out7;
                __Vdly__flush_out2 = vlSelfRef.__PVT__flush_out2;
            } else if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                      >> 0x1bU)))) {
                __Vdly__flush_out6 = vlSelfRef.__PVT__flush_out6;
                __Vdly__flush_out5 = vlSelfRef.__PVT__flush_out5;
                __Vdly__flush_out4 = vlSelfRef.__PVT__flush_out4;
                __Vdly__flush_out3 = vlSelfRef.__PVT__flush_out3;
                __Vdly__flush_out1 = vlSelfRef.__PVT__flush_out1;
                __Vdly__flush_out0 = vlSelfRef.__PVT__flush_out0;
                __Vdly__flush_out7 = vlSelfRef.__PVT__flush_out7;
                __Vdly__flush_out2 = vlSelfRef.__PVT__flush_out2;
            } else {
                if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out6 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf6)));
                        }
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out7 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf7)));
                        }
                    }
                    if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out5 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf5)));
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out4 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf4)));
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out3 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf3)));
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out2 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf2)));
                        }
                    }
                    if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out1 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf1)));
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out0 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf0)));
                        }
                    }
                }
            }
        }
        if ((((IData)(vlSelfRef.__PVT__pipe_vld_4) 
              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_1__pooling_out_prdy)) 
             & ((IData)((0x200000000ULL == (0x220000000ULL 
                                            & vlSelfRef.__PVT__pipe_dp_4))) 
                | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_0__last_out_en)))) {
            vlSelfRef.__PVT__pooling_cnt = ((7U == (IData)(vlSelfRef.__PVT__pooling_cnt))
                                             ? 0U : 
                                            (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__pooling_cnt))));
        }
        if (((IData)(vlSelfRef.__PVT__pipe_vld_4) & (IData)(vlSelfRef.__PVT__add_out_rdy))) {
            if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                               >> 0x1cU)))) {
                __Vdly__latch_result6_d3 = vlSelfRef.__PVT__latch_result6_d3;
                __Vdly__latch_result5_d3 = vlSelfRef.__PVT__latch_result5_d3;
                __Vdly__latch_result4_d3 = vlSelfRef.__PVT__latch_result4_d3;
                __Vdly__latch_result3_d3 = vlSelfRef.__PVT__latch_result3_d3;
                __Vdly__latch_result1_d3 = vlSelfRef.__PVT__latch_result1_d3;
                __Vdly__latch_result0_d3 = vlSelfRef.__PVT__latch_result0_d3;
                __Vdly__latch_result7_d3 = vlSelfRef.__PVT__latch_result7_d3;
                __Vdly__latch_result2_d3 = vlSelfRef.__PVT__latch_result2_d3;
            } else if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                      >> 0x1bU)))) {
                __Vdly__latch_result6_d3 = vlSelfRef.__PVT__latch_result6_d3;
                __Vdly__latch_result5_d3 = vlSelfRef.__PVT__latch_result5_d3;
                __Vdly__latch_result4_d3 = vlSelfRef.__PVT__latch_result4_d3;
                __Vdly__latch_result3_d3 = vlSelfRef.__PVT__latch_result3_d3;
                __Vdly__latch_result1_d3 = vlSelfRef.__PVT__latch_result1_d3;
                __Vdly__latch_result0_d3 = vlSelfRef.__PVT__latch_result0_d3;
                __Vdly__latch_result7_d3 = vlSelfRef.__PVT__latch_result7_d3;
                __Vdly__latch_result2_d3 = vlSelfRef.__PVT__latch_result2_d3;
            } else {
                if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result6_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result7_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                    }
                    if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result5_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result4_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result3_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result2_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                    }
                    if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result1_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result0_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                    }
                }
            }
        }
        if (vlSelfRef.__PVT__pipe_vld_3) {
            vlSelfRef.__PVT__pipe_vld_4 = 1U;
        } else if (vlSelfRef.__PVT__add_out_rdy) {
            vlSelfRef.__PVT__pipe_vld_4 = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__pipe_vld_3) & (IData)(vlSelfRef.__PVT__pipe_rdy_3))) {
            vlSelfRef.__PVT__pipe_dp_4 = vlSelfRef.__PVT__pipe_dp_3;
        }
        if (vlSelfRef.__PVT__pipe_vld_2) {
            vlSelfRef.__PVT__pipe_vld_3 = 1U;
        } else if (vlSelfRef.__PVT__pipe_rdy_3) {
            vlSelfRef.__PVT__pipe_vld_3 = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__pipe_vld_2) & (IData)(vlSelfRef.__PVT__pipe_rdy_2))) {
            vlSelfRef.__PVT__pipe_dp_3 = vlSelfRef.__PVT__pipe_dp_2;
        }
        if (vlSelfRef.__PVT__pipe_vld_1) {
            vlSelfRef.__PVT__pipe_vld_2 = 1U;
        } else if (vlSelfRef.__PVT__pipe_rdy_2) {
            vlSelfRef.__PVT__pipe_vld_2 = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__pipe_vld_1) & (IData)(vlSelfRef.__PVT__pipe_rdy_1))) {
            vlSelfRef.__PVT__pipe_dp_2 = vlSelfRef.__PVT__pipe_dp_1;
        }
        if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_1__pdma2pdp_pvld) {
            vlSelfRef.__PVT__pipe_vld_1 = 1U;
        } else if (vlSelfRef.__PVT__pipe_rdy_1) {
            vlSelfRef.__PVT__pipe_vld_1 = 0U;
        }
        if (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_1__pdma2pdp_pvld) 
             & (IData)(vlSelfRef.__PVT__pipe_rdy_0))) {
            vlSelfRef.__PVT__pipe_dp_1 = (((QData)((IData)(
                                                           ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_1__pooling_din_last) 
                                                              << 0xbU) 
                                                             | (((IData)(vlSelfRef.__PVT__pooling_size) 
                                                                 << 8U) 
                                                                | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable) 
                                                                   << 7U))) 
                                                            | ((0x1cU 
                                                                & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                   >> 0xdU)) 
                                                               | ((2U 
                                                                   & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                      >> 0x16U)) 
                                                                  | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_1st_1)))))) 
                                           << 0x16U) 
                                          | (QData)((IData)(
                                                            ((0x3ff800U 
                                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                 << 0xbU)) 
                                                             | (IData)(vlSelfRef.__PVT__int_pooling)))));
        }
    } else {
        __Vdly__pooling_size = 0U;
        __Vdly__flush_out6 = 0U;
        __Vdly__flush_out5 = 0U;
        __Vdly__flush_out4 = 0U;
        __Vdly__flush_out3 = 0U;
        __Vdly__flush_out1 = 0U;
        __Vdly__flush_out0 = 0U;
        __Vdly__flush_out7 = 0U;
        __Vdly__flush_out2 = 0U;
        vlSelfRef.__PVT__pooling_cnt = 0U;
        __Vdly__latch_result6_d3 = 0U;
        __Vdly__latch_result5_d3 = 0U;
        __Vdly__latch_result4_d3 = 0U;
        __Vdly__latch_result3_d3 = 0U;
        __Vdly__latch_result1_d3 = 0U;
        __Vdly__latch_result0_d3 = 0U;
        __Vdly__latch_result7_d3 = 0U;
        __Vdly__latch_result2_d3 = 0U;
        vlSelfRef.__PVT__pipe_vld_4 = 0U;
        vlSelfRef.__PVT__pipe_dp_4 = 0ULL;
        vlSelfRef.__PVT__pipe_vld_3 = 0U;
        vlSelfRef.__PVT__pipe_dp_3 = 0ULL;
        vlSelfRef.__PVT__pipe_vld_2 = 0U;
        vlSelfRef.__PVT__pipe_dp_2 = 0ULL;
        vlSelfRef.__PVT__pipe_vld_1 = 0U;
        vlSelfRef.__PVT__pipe_dp_1 = 0ULL;
    }
    vlSelfRef.__PVT__flush_out6 = __Vdly__flush_out6;
    vlSelfRef.__PVT__flush_out5 = __Vdly__flush_out5;
    vlSelfRef.__PVT__flush_out4 = __Vdly__flush_out4;
    vlSelfRef.__PVT__flush_out3 = __Vdly__flush_out3;
    vlSelfRef.__PVT__flush_out1 = __Vdly__flush_out1;
    vlSelfRef.__PVT__flush_out0 = __Vdly__flush_out0;
    vlSelfRef.__PVT__flush_out7 = __Vdly__flush_out7;
    vlSelfRef.__PVT__flush_out2 = __Vdly__flush_out2;
    vlSelfRef.__PVT__latch_result6_d3 = __Vdly__latch_result6_d3;
    vlSelfRef.__PVT__latch_result5_d3 = __Vdly__latch_result5_d3;
    vlSelfRef.__PVT__latch_result4_d3 = __Vdly__latch_result4_d3;
    vlSelfRef.__PVT__latch_result3_d3 = __Vdly__latch_result3_d3;
    vlSelfRef.__PVT__latch_result1_d3 = __Vdly__latch_result1_d3;
    vlSelfRef.__PVT__latch_result0_d3 = __Vdly__latch_result0_d3;
    vlSelfRef.__PVT__latch_result7_d3 = __Vdly__latch_result7_d3;
    vlSelfRef.__PVT__latch_result2_d3 = __Vdly__latch_result2_d3;
    vlSelfRef.__PVT__pooling_result = (0x7ffU & ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__pipe_dp_4 
                                                             >> 0x16U)))
                                                  ? (IData)(
                                                            (vlSelfRef.__PVT__pipe_dp_4 
                                                             >> 0xbU))
                                                  : (IData)(vlSelfRef.__PVT__pipe_dp_4)));
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
    vlSelfRef.__PVT__pooling_size = __Vdly__pooling_size;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__1(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__add_out_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_4)) 
                                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_1__pooling_out_prdy)));
    vlSelfRef.__PVT__pipe_rdy_3 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_4)) 
                                         | (IData)(vlSelfRef.__PVT__add_out_rdy)));
    vlSelfRef.__PVT__pipe_rdy_2 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_3)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_3)));
    vlSelfRef.__PVT__pipe_rdy_1 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_2)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_2)));
    vlSelfRef.__PVT__pipe_rdy_0 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_1)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_1)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__2(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ __Vfunc_pooling_fun__4__Vfuncout;
    __Vfunc_pooling_fun__4__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_pooling_fun__4__data0;
    __Vfunc_pooling_fun__4__data0 = 0;
    SData/*10:0*/ __Vfunc_pooling_fun__4__data1;
    __Vfunc_pooling_fun__4__data1 = 0;
    CData/*1:0*/ __Vfunc_pooling_fun__4__pooling_type;
    __Vfunc_pooling_fun__4__pooling_type = 0;
    // Body
    vlSelfRef.__PVT__load_din = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_1__pdma2pdp_pvld) 
                                 & ((IData)(vlSelfRef.__PVT__pipe_rdy_0) 
                                    & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable)) 
                                       & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_en__BRA__1__KET__))));
    __Vfunc_pooling_fun__4__pooling_type = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__pooling_type_cfg_d;
    if (vlSelfRef.__PVT__load_din) {
        __Vfunc_pooling_fun__4__data1 = (0x7ffU & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0);
        __Vfunc_pooling_fun__4__data0 = ((0x20000U 
                                          & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                          ? ((0x10000U 
                                              & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                              ? ((0x8000U 
                                                  & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                  ? (IData)(vlSelfRef.__PVT__data_buf7)
                                                  : (IData)(vlSelfRef.__PVT__data_buf6))
                                              : ((0x8000U 
                                                  & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                  ? (IData)(vlSelfRef.__PVT__data_buf5)
                                                  : (IData)(vlSelfRef.__PVT__data_buf4)))
                                          : ((0x10000U 
                                              & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                              ? ((0x8000U 
                                                  & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                  ? (IData)(vlSelfRef.__PVT__data_buf3)
                                                  : (IData)(vlSelfRef.__PVT__data_buf2))
                                              : ((0x8000U 
                                                  & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                  ? (IData)(vlSelfRef.__PVT__data_buf1)
                                                  : (IData)(vlSelfRef.__PVT__data_buf0))));
    } else {
        __Vfunc_pooling_fun__4__data1 = 0U;
        __Vfunc_pooling_fun__4__data0 = 0U;
    }
    vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling 
        = (2U == (IData)(__Vfunc_pooling_fun__4__pooling_type));
    vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling 
        = (1U == (IData)(__Vfunc_pooling_fun__4__pooling_type));
    vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling 
        = (0U == (IData)(__Vfunc_pooling_fun__4__pooling_type));
    __Vfunc_pooling_fun__4__Vfuncout = (0x7ffU & ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling)
                                                   ? 
                                                  VL_EXTEND_II(32,11, 
                                                               ([&]() {
                        vlSelfRef.__Vfunc_pooling_SUM__5__data1 
                            = __Vfunc_pooling_fun__4__data1;
                        vlSelfRef.__Vfunc_pooling_SUM__5__data0 
                            = __Vfunc_pooling_fun__4__data0;
                        vlSelfRef.__Vfunc_pooling_SUM__5__Vfuncout 
                            = (0x7ffU & ((IData)(vlSelfRef.__Vfunc_pooling_SUM__5__data1) 
                                         + (IData)(vlSelfRef.__Vfunc_pooling_SUM__5__data0)));
                    }(), (IData)(vlSelfRef.__Vfunc_pooling_SUM__5__Vfuncout)))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling)
                                                    ? 
                                                   VL_EXTEND_II(32,11, 
                                                                ([&]() {
                            vlSelfRef.__Vfunc_pooling_MIN__6__data1 
                                = __Vfunc_pooling_fun__4__data1;
                            vlSelfRef.__Vfunc_pooling_MIN__6__data0 
                                = __Vfunc_pooling_fun__4__data0;
                            vlSelfRef.__PVT__pooling_MIN__Vstatic__min_int_ff 
                                = VL_GTS_III(11, (IData)(vlSelfRef.__Vfunc_pooling_MIN__6__data1), (IData)(vlSelfRef.__Vfunc_pooling_MIN__6__data0));
                            vlSelfRef.__Vfunc_pooling_MIN__6__Vfuncout 
                                = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_int_ff)
                                    ? (IData)(vlSelfRef.__Vfunc_pooling_MIN__6__data0)
                                    : (IData)(vlSelfRef.__Vfunc_pooling_MIN__6__data1));
                        }(), (IData)(vlSelfRef.__Vfunc_pooling_MIN__6__Vfuncout)))
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling)
                                                     ? 
                                                    VL_EXTEND_II(32,11, 
                                                                 ([&]() {
                                vlSelfRef.__Vfunc_pooling_MAX__7__data1 
                                    = __Vfunc_pooling_fun__4__data1;
                                vlSelfRef.__Vfunc_pooling_MAX__7__data0 
                                    = __Vfunc_pooling_fun__4__data0;
                                vlSelfRef.__PVT__pooling_MAX__Vstatic__max_int_ff 
                                    = VL_GTS_III(11, (IData)(vlSelfRef.__Vfunc_pooling_MAX__7__data0), (IData)(vlSelfRef.__Vfunc_pooling_MAX__7__data1));
                                vlSelfRef.__Vfunc_pooling_MAX__7__Vfuncout 
                                    = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_int_ff)
                                        ? (IData)(vlSelfRef.__Vfunc_pooling_MAX__7__data0)
                                        : (IData)(vlSelfRef.__Vfunc_pooling_MAX__7__data1));
                            }(), (IData)(vlSelfRef.__Vfunc_pooling_MAX__7__Vfuncout)))
                                                     : 0U))));
    vlSelfRef.__PVT__int_pooling = __Vfunc_pooling_fun__4__Vfuncout;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2__0(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__pooling_size;
    __Vdly__pooling_size = 0;
    SData/*10:0*/ __Vdly__latch_result6_d3;
    __Vdly__latch_result6_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result5_d3;
    __Vdly__latch_result5_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result4_d3;
    __Vdly__latch_result4_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result3_d3;
    __Vdly__latch_result3_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result1_d3;
    __Vdly__latch_result1_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result0_d3;
    __Vdly__latch_result0_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result7_d3;
    __Vdly__latch_result7_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result2_d3;
    __Vdly__latch_result2_d3 = 0;
    SData/*14:0*/ __Vdly__flush_out6;
    __Vdly__flush_out6 = 0;
    SData/*14:0*/ __Vdly__flush_out5;
    __Vdly__flush_out5 = 0;
    SData/*14:0*/ __Vdly__flush_out4;
    __Vdly__flush_out4 = 0;
    SData/*14:0*/ __Vdly__flush_out3;
    __Vdly__flush_out3 = 0;
    SData/*14:0*/ __Vdly__flush_out1;
    __Vdly__flush_out1 = 0;
    SData/*14:0*/ __Vdly__flush_out0;
    __Vdly__flush_out0 = 0;
    SData/*14:0*/ __Vdly__flush_out7;
    __Vdly__flush_out7 = 0;
    SData/*14:0*/ __Vdly__flush_out2;
    __Vdly__flush_out2 = 0;
    // Body
    __Vdly__pooling_size = vlSelfRef.__PVT__pooling_size;
    __Vdly__flush_out6 = vlSelfRef.__PVT__flush_out6;
    __Vdly__flush_out5 = vlSelfRef.__PVT__flush_out5;
    __Vdly__flush_out4 = vlSelfRef.__PVT__flush_out4;
    __Vdly__flush_out3 = vlSelfRef.__PVT__flush_out3;
    __Vdly__flush_out1 = vlSelfRef.__PVT__flush_out1;
    __Vdly__flush_out0 = vlSelfRef.__PVT__flush_out0;
    __Vdly__flush_out7 = vlSelfRef.__PVT__flush_out7;
    __Vdly__flush_out2 = vlSelfRef.__PVT__flush_out2;
    __Vdly__latch_result6_d3 = vlSelfRef.__PVT__latch_result6_d3;
    __Vdly__latch_result5_d3 = vlSelfRef.__PVT__latch_result5_d3;
    __Vdly__latch_result4_d3 = vlSelfRef.__PVT__latch_result4_d3;
    __Vdly__latch_result3_d3 = vlSelfRef.__PVT__latch_result3_d3;
    __Vdly__latch_result1_d3 = vlSelfRef.__PVT__latch_result1_d3;
    __Vdly__latch_result0_d3 = vlSelfRef.__PVT__latch_result0_d3;
    __Vdly__latch_result7_d3 = vlSelfRef.__PVT__latch_result7_d3;
    __Vdly__latch_result2_d3 = vlSelfRef.__PVT__latch_result2_d3;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelfRef.__PVT__load_din) & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                   >> 0x17U))) {
            __Vdly__pooling_size = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_2__pooling_din_last)
                                     ? 0U : (7U & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__pooling_size))));
        }
        if ((IData)((0x200000000ULL == (0x220000000ULL 
                                        & vlSelfRef.__PVT__pipe_dp_4)))) {
            if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                               >> 0x1cU)))) {
                __Vdly__flush_out6 = vlSelfRef.__PVT__flush_out6;
                __Vdly__flush_out5 = vlSelfRef.__PVT__flush_out5;
                __Vdly__flush_out4 = vlSelfRef.__PVT__flush_out4;
                __Vdly__flush_out3 = vlSelfRef.__PVT__flush_out3;
                __Vdly__flush_out1 = vlSelfRef.__PVT__flush_out1;
                __Vdly__flush_out0 = vlSelfRef.__PVT__flush_out0;
                __Vdly__flush_out7 = vlSelfRef.__PVT__flush_out7;
                __Vdly__flush_out2 = vlSelfRef.__PVT__flush_out2;
            } else if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                      >> 0x1bU)))) {
                __Vdly__flush_out6 = vlSelfRef.__PVT__flush_out6;
                __Vdly__flush_out5 = vlSelfRef.__PVT__flush_out5;
                __Vdly__flush_out4 = vlSelfRef.__PVT__flush_out4;
                __Vdly__flush_out3 = vlSelfRef.__PVT__flush_out3;
                __Vdly__flush_out1 = vlSelfRef.__PVT__flush_out1;
                __Vdly__flush_out0 = vlSelfRef.__PVT__flush_out0;
                __Vdly__flush_out7 = vlSelfRef.__PVT__flush_out7;
                __Vdly__flush_out2 = vlSelfRef.__PVT__flush_out2;
            } else {
                if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out6 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf6)));
                        }
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out7 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf7)));
                        }
                    }
                    if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out5 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf5)));
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out4 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf4)));
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out3 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf3)));
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out2 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf2)));
                        }
                    }
                    if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out1 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf1)));
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out0 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf0)));
                        }
                    }
                }
            }
        }
        if ((((IData)(vlSelfRef.__PVT__pipe_vld_4) 
              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_2__pooling_out_prdy)) 
             & ((IData)((0x200000000ULL == (0x220000000ULL 
                                            & vlSelfRef.__PVT__pipe_dp_4))) 
                | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_0__last_out_en)))) {
            vlSelfRef.__PVT__pooling_cnt = ((7U == (IData)(vlSelfRef.__PVT__pooling_cnt))
                                             ? 0U : 
                                            (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__pooling_cnt))));
        }
        if (((IData)(vlSelfRef.__PVT__pipe_vld_4) & (IData)(vlSelfRef.__PVT__add_out_rdy))) {
            if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                               >> 0x1cU)))) {
                __Vdly__latch_result6_d3 = vlSelfRef.__PVT__latch_result6_d3;
                __Vdly__latch_result5_d3 = vlSelfRef.__PVT__latch_result5_d3;
                __Vdly__latch_result4_d3 = vlSelfRef.__PVT__latch_result4_d3;
                __Vdly__latch_result3_d3 = vlSelfRef.__PVT__latch_result3_d3;
                __Vdly__latch_result1_d3 = vlSelfRef.__PVT__latch_result1_d3;
                __Vdly__latch_result0_d3 = vlSelfRef.__PVT__latch_result0_d3;
                __Vdly__latch_result7_d3 = vlSelfRef.__PVT__latch_result7_d3;
                __Vdly__latch_result2_d3 = vlSelfRef.__PVT__latch_result2_d3;
            } else if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                      >> 0x1bU)))) {
                __Vdly__latch_result6_d3 = vlSelfRef.__PVT__latch_result6_d3;
                __Vdly__latch_result5_d3 = vlSelfRef.__PVT__latch_result5_d3;
                __Vdly__latch_result4_d3 = vlSelfRef.__PVT__latch_result4_d3;
                __Vdly__latch_result3_d3 = vlSelfRef.__PVT__latch_result3_d3;
                __Vdly__latch_result1_d3 = vlSelfRef.__PVT__latch_result1_d3;
                __Vdly__latch_result0_d3 = vlSelfRef.__PVT__latch_result0_d3;
                __Vdly__latch_result7_d3 = vlSelfRef.__PVT__latch_result7_d3;
                __Vdly__latch_result2_d3 = vlSelfRef.__PVT__latch_result2_d3;
            } else {
                if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result6_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result7_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                    }
                    if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result5_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result4_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result3_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result2_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                    }
                    if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result1_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result0_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                    }
                }
            }
        }
        if (vlSelfRef.__PVT__pipe_vld_3) {
            vlSelfRef.__PVT__pipe_vld_4 = 1U;
        } else if (vlSelfRef.__PVT__add_out_rdy) {
            vlSelfRef.__PVT__pipe_vld_4 = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__pipe_vld_3) & (IData)(vlSelfRef.__PVT__pipe_rdy_3))) {
            vlSelfRef.__PVT__pipe_dp_4 = vlSelfRef.__PVT__pipe_dp_3;
        }
        if (vlSelfRef.__PVT__pipe_vld_2) {
            vlSelfRef.__PVT__pipe_vld_3 = 1U;
        } else if (vlSelfRef.__PVT__pipe_rdy_3) {
            vlSelfRef.__PVT__pipe_vld_3 = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__pipe_vld_2) & (IData)(vlSelfRef.__PVT__pipe_rdy_2))) {
            vlSelfRef.__PVT__pipe_dp_3 = vlSelfRef.__PVT__pipe_dp_2;
        }
        if (vlSelfRef.__PVT__pipe_vld_1) {
            vlSelfRef.__PVT__pipe_vld_2 = 1U;
        } else if (vlSelfRef.__PVT__pipe_rdy_2) {
            vlSelfRef.__PVT__pipe_vld_2 = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__pipe_vld_1) & (IData)(vlSelfRef.__PVT__pipe_rdy_1))) {
            vlSelfRef.__PVT__pipe_dp_2 = vlSelfRef.__PVT__pipe_dp_1;
        }
        if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_2__pdma2pdp_pvld) {
            vlSelfRef.__PVT__pipe_vld_1 = 1U;
        } else if (vlSelfRef.__PVT__pipe_rdy_1) {
            vlSelfRef.__PVT__pipe_vld_1 = 0U;
        }
        if (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_2__pdma2pdp_pvld) 
             & (IData)(vlSelfRef.__PVT__pipe_rdy_0))) {
            vlSelfRef.__PVT__pipe_dp_1 = (((QData)((IData)(
                                                           ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_2__pooling_din_last) 
                                                              << 0xbU) 
                                                             | (((IData)(vlSelfRef.__PVT__pooling_size) 
                                                                 << 8U) 
                                                                | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable) 
                                                                   << 7U))) 
                                                            | ((0x1cU 
                                                                & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                   >> 0xdU)) 
                                                               | ((2U 
                                                                   & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                      >> 0x16U)) 
                                                                  | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_1st_2)))))) 
                                           << 0x16U) 
                                          | (QData)((IData)(
                                                            ((0x3ff800U 
                                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                 << 0xbU)) 
                                                             | (IData)(vlSelfRef.__PVT__int_pooling)))));
        }
    } else {
        __Vdly__pooling_size = 0U;
        __Vdly__flush_out6 = 0U;
        __Vdly__flush_out5 = 0U;
        __Vdly__flush_out4 = 0U;
        __Vdly__flush_out3 = 0U;
        __Vdly__flush_out1 = 0U;
        __Vdly__flush_out0 = 0U;
        __Vdly__flush_out7 = 0U;
        __Vdly__flush_out2 = 0U;
        vlSelfRef.__PVT__pooling_cnt = 0U;
        __Vdly__latch_result6_d3 = 0U;
        __Vdly__latch_result5_d3 = 0U;
        __Vdly__latch_result4_d3 = 0U;
        __Vdly__latch_result3_d3 = 0U;
        __Vdly__latch_result1_d3 = 0U;
        __Vdly__latch_result0_d3 = 0U;
        __Vdly__latch_result7_d3 = 0U;
        __Vdly__latch_result2_d3 = 0U;
        vlSelfRef.__PVT__pipe_vld_4 = 0U;
        vlSelfRef.__PVT__pipe_dp_4 = 0ULL;
        vlSelfRef.__PVT__pipe_vld_3 = 0U;
        vlSelfRef.__PVT__pipe_dp_3 = 0ULL;
        vlSelfRef.__PVT__pipe_vld_2 = 0U;
        vlSelfRef.__PVT__pipe_dp_2 = 0ULL;
        vlSelfRef.__PVT__pipe_vld_1 = 0U;
        vlSelfRef.__PVT__pipe_dp_1 = 0ULL;
    }
    vlSelfRef.__PVT__flush_out6 = __Vdly__flush_out6;
    vlSelfRef.__PVT__flush_out5 = __Vdly__flush_out5;
    vlSelfRef.__PVT__flush_out4 = __Vdly__flush_out4;
    vlSelfRef.__PVT__flush_out3 = __Vdly__flush_out3;
    vlSelfRef.__PVT__flush_out1 = __Vdly__flush_out1;
    vlSelfRef.__PVT__flush_out0 = __Vdly__flush_out0;
    vlSelfRef.__PVT__flush_out7 = __Vdly__flush_out7;
    vlSelfRef.__PVT__flush_out2 = __Vdly__flush_out2;
    vlSelfRef.__PVT__latch_result6_d3 = __Vdly__latch_result6_d3;
    vlSelfRef.__PVT__latch_result5_d3 = __Vdly__latch_result5_d3;
    vlSelfRef.__PVT__latch_result4_d3 = __Vdly__latch_result4_d3;
    vlSelfRef.__PVT__latch_result3_d3 = __Vdly__latch_result3_d3;
    vlSelfRef.__PVT__latch_result1_d3 = __Vdly__latch_result1_d3;
    vlSelfRef.__PVT__latch_result0_d3 = __Vdly__latch_result0_d3;
    vlSelfRef.__PVT__latch_result7_d3 = __Vdly__latch_result7_d3;
    vlSelfRef.__PVT__latch_result2_d3 = __Vdly__latch_result2_d3;
    vlSelfRef.__PVT__pooling_result = (0x7ffU & ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__pipe_dp_4 
                                                             >> 0x16U)))
                                                  ? (IData)(
                                                            (vlSelfRef.__PVT__pipe_dp_4 
                                                             >> 0xbU))
                                                  : (IData)(vlSelfRef.__PVT__pipe_dp_4)));
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
    vlSelfRef.__PVT__pooling_size = __Vdly__pooling_size;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2__1(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__add_out_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_4)) 
                                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_2__pooling_out_prdy)));
    vlSelfRef.__PVT__pipe_rdy_3 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_4)) 
                                         | (IData)(vlSelfRef.__PVT__add_out_rdy)));
    vlSelfRef.__PVT__pipe_rdy_2 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_3)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_3)));
    vlSelfRef.__PVT__pipe_rdy_1 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_2)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_2)));
    vlSelfRef.__PVT__pipe_rdy_0 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_1)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_1)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2__2(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ __Vfunc_pooling_fun__8__Vfuncout;
    __Vfunc_pooling_fun__8__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_pooling_fun__8__data0;
    __Vfunc_pooling_fun__8__data0 = 0;
    SData/*10:0*/ __Vfunc_pooling_fun__8__data1;
    __Vfunc_pooling_fun__8__data1 = 0;
    CData/*1:0*/ __Vfunc_pooling_fun__8__pooling_type;
    __Vfunc_pooling_fun__8__pooling_type = 0;
    // Body
    vlSelfRef.__PVT__load_din = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_2__pdma2pdp_pvld) 
                                 & ((IData)(vlSelfRef.__PVT__pipe_rdy_0) 
                                    & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable)) 
                                       & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_en__BRA__2__KET__))));
    __Vfunc_pooling_fun__8__pooling_type = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__pooling_type_cfg_d;
    if (vlSelfRef.__PVT__load_din) {
        __Vfunc_pooling_fun__8__data1 = (0x7ffU & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0);
        __Vfunc_pooling_fun__8__data0 = ((0x20000U 
                                          & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                          ? ((0x10000U 
                                              & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                              ? ((0x8000U 
                                                  & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                  ? (IData)(vlSelfRef.__PVT__data_buf7)
                                                  : (IData)(vlSelfRef.__PVT__data_buf6))
                                              : ((0x8000U 
                                                  & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                  ? (IData)(vlSelfRef.__PVT__data_buf5)
                                                  : (IData)(vlSelfRef.__PVT__data_buf4)))
                                          : ((0x10000U 
                                              & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                              ? ((0x8000U 
                                                  & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                  ? (IData)(vlSelfRef.__PVT__data_buf3)
                                                  : (IData)(vlSelfRef.__PVT__data_buf2))
                                              : ((0x8000U 
                                                  & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                  ? (IData)(vlSelfRef.__PVT__data_buf1)
                                                  : (IData)(vlSelfRef.__PVT__data_buf0))));
    } else {
        __Vfunc_pooling_fun__8__data1 = 0U;
        __Vfunc_pooling_fun__8__data0 = 0U;
    }
    vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling 
        = (2U == (IData)(__Vfunc_pooling_fun__8__pooling_type));
    vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling 
        = (1U == (IData)(__Vfunc_pooling_fun__8__pooling_type));
    vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling 
        = (0U == (IData)(__Vfunc_pooling_fun__8__pooling_type));
    __Vfunc_pooling_fun__8__Vfuncout = (0x7ffU & ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling)
                                                   ? 
                                                  VL_EXTEND_II(32,11, 
                                                               ([&]() {
                        vlSelfRef.__Vfunc_pooling_SUM__9__data1 
                            = __Vfunc_pooling_fun__8__data1;
                        vlSelfRef.__Vfunc_pooling_SUM__9__data0 
                            = __Vfunc_pooling_fun__8__data0;
                        vlSelfRef.__Vfunc_pooling_SUM__9__Vfuncout 
                            = (0x7ffU & ((IData)(vlSelfRef.__Vfunc_pooling_SUM__9__data1) 
                                         + (IData)(vlSelfRef.__Vfunc_pooling_SUM__9__data0)));
                    }(), (IData)(vlSelfRef.__Vfunc_pooling_SUM__9__Vfuncout)))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling)
                                                    ? 
                                                   VL_EXTEND_II(32,11, 
                                                                ([&]() {
                            vlSelfRef.__Vfunc_pooling_MIN__10__data1 
                                = __Vfunc_pooling_fun__8__data1;
                            vlSelfRef.__Vfunc_pooling_MIN__10__data0 
                                = __Vfunc_pooling_fun__8__data0;
                            vlSelfRef.__PVT__pooling_MIN__Vstatic__min_int_ff 
                                = VL_GTS_III(11, (IData)(vlSelfRef.__Vfunc_pooling_MIN__10__data1), (IData)(vlSelfRef.__Vfunc_pooling_MIN__10__data0));
                            vlSelfRef.__Vfunc_pooling_MIN__10__Vfuncout 
                                = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_int_ff)
                                    ? (IData)(vlSelfRef.__Vfunc_pooling_MIN__10__data0)
                                    : (IData)(vlSelfRef.__Vfunc_pooling_MIN__10__data1));
                        }(), (IData)(vlSelfRef.__Vfunc_pooling_MIN__10__Vfuncout)))
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling)
                                                     ? 
                                                    VL_EXTEND_II(32,11, 
                                                                 ([&]() {
                                vlSelfRef.__Vfunc_pooling_MAX__11__data1 
                                    = __Vfunc_pooling_fun__8__data1;
                                vlSelfRef.__Vfunc_pooling_MAX__11__data0 
                                    = __Vfunc_pooling_fun__8__data0;
                                vlSelfRef.__PVT__pooling_MAX__Vstatic__max_int_ff 
                                    = VL_GTS_III(11, (IData)(vlSelfRef.__Vfunc_pooling_MAX__11__data0), (IData)(vlSelfRef.__Vfunc_pooling_MAX__11__data1));
                                vlSelfRef.__Vfunc_pooling_MAX__11__Vfuncout 
                                    = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_int_ff)
                                        ? (IData)(vlSelfRef.__Vfunc_pooling_MAX__11__data0)
                                        : (IData)(vlSelfRef.__Vfunc_pooling_MAX__11__data1));
                            }(), (IData)(vlSelfRef.__Vfunc_pooling_MAX__11__Vfuncout)))
                                                     : 0U))));
    vlSelfRef.__PVT__int_pooling = __Vfunc_pooling_fun__8__Vfuncout;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_3__0(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_3__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__pooling_size;
    __Vdly__pooling_size = 0;
    SData/*10:0*/ __Vdly__latch_result6_d3;
    __Vdly__latch_result6_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result5_d3;
    __Vdly__latch_result5_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result4_d3;
    __Vdly__latch_result4_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result3_d3;
    __Vdly__latch_result3_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result1_d3;
    __Vdly__latch_result1_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result0_d3;
    __Vdly__latch_result0_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result7_d3;
    __Vdly__latch_result7_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result2_d3;
    __Vdly__latch_result2_d3 = 0;
    SData/*14:0*/ __Vdly__flush_out6;
    __Vdly__flush_out6 = 0;
    SData/*14:0*/ __Vdly__flush_out5;
    __Vdly__flush_out5 = 0;
    SData/*14:0*/ __Vdly__flush_out4;
    __Vdly__flush_out4 = 0;
    SData/*14:0*/ __Vdly__flush_out3;
    __Vdly__flush_out3 = 0;
    SData/*14:0*/ __Vdly__flush_out1;
    __Vdly__flush_out1 = 0;
    SData/*14:0*/ __Vdly__flush_out0;
    __Vdly__flush_out0 = 0;
    SData/*14:0*/ __Vdly__flush_out7;
    __Vdly__flush_out7 = 0;
    SData/*14:0*/ __Vdly__flush_out2;
    __Vdly__flush_out2 = 0;
    // Body
    __Vdly__pooling_size = vlSelfRef.__PVT__pooling_size;
    __Vdly__flush_out6 = vlSelfRef.__PVT__flush_out6;
    __Vdly__flush_out5 = vlSelfRef.__PVT__flush_out5;
    __Vdly__flush_out4 = vlSelfRef.__PVT__flush_out4;
    __Vdly__flush_out3 = vlSelfRef.__PVT__flush_out3;
    __Vdly__flush_out1 = vlSelfRef.__PVT__flush_out1;
    __Vdly__flush_out0 = vlSelfRef.__PVT__flush_out0;
    __Vdly__flush_out7 = vlSelfRef.__PVT__flush_out7;
    __Vdly__flush_out2 = vlSelfRef.__PVT__flush_out2;
    __Vdly__latch_result6_d3 = vlSelfRef.__PVT__latch_result6_d3;
    __Vdly__latch_result5_d3 = vlSelfRef.__PVT__latch_result5_d3;
    __Vdly__latch_result4_d3 = vlSelfRef.__PVT__latch_result4_d3;
    __Vdly__latch_result3_d3 = vlSelfRef.__PVT__latch_result3_d3;
    __Vdly__latch_result1_d3 = vlSelfRef.__PVT__latch_result1_d3;
    __Vdly__latch_result0_d3 = vlSelfRef.__PVT__latch_result0_d3;
    __Vdly__latch_result7_d3 = vlSelfRef.__PVT__latch_result7_d3;
    __Vdly__latch_result2_d3 = vlSelfRef.__PVT__latch_result2_d3;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelfRef.__PVT__load_din) & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                   >> 0x17U))) {
            __Vdly__pooling_size = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_3__pooling_din_last)
                                     ? 0U : (7U & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__pooling_size))));
        }
        if ((IData)((0x200000000ULL == (0x220000000ULL 
                                        & vlSelfRef.__PVT__pipe_dp_4)))) {
            if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                               >> 0x1cU)))) {
                __Vdly__flush_out6 = vlSelfRef.__PVT__flush_out6;
                __Vdly__flush_out5 = vlSelfRef.__PVT__flush_out5;
                __Vdly__flush_out4 = vlSelfRef.__PVT__flush_out4;
                __Vdly__flush_out3 = vlSelfRef.__PVT__flush_out3;
                __Vdly__flush_out1 = vlSelfRef.__PVT__flush_out1;
                __Vdly__flush_out0 = vlSelfRef.__PVT__flush_out0;
                __Vdly__flush_out7 = vlSelfRef.__PVT__flush_out7;
                __Vdly__flush_out2 = vlSelfRef.__PVT__flush_out2;
            } else if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                      >> 0x1bU)))) {
                __Vdly__flush_out6 = vlSelfRef.__PVT__flush_out6;
                __Vdly__flush_out5 = vlSelfRef.__PVT__flush_out5;
                __Vdly__flush_out4 = vlSelfRef.__PVT__flush_out4;
                __Vdly__flush_out3 = vlSelfRef.__PVT__flush_out3;
                __Vdly__flush_out1 = vlSelfRef.__PVT__flush_out1;
                __Vdly__flush_out0 = vlSelfRef.__PVT__flush_out0;
                __Vdly__flush_out7 = vlSelfRef.__PVT__flush_out7;
                __Vdly__flush_out2 = vlSelfRef.__PVT__flush_out2;
            } else {
                if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out6 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf6)));
                        }
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out7 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf7)));
                        }
                    }
                    if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out5 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf5)));
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out4 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf4)));
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out3 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf3)));
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out2 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf2)));
                        }
                    }
                    if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out1 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf1)));
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out0 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf0)));
                        }
                    }
                }
            }
        }
        if ((((IData)(vlSelfRef.__PVT__pipe_vld_4) 
              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_3__pooling_out_prdy)) 
             & ((IData)((0x200000000ULL == (0x220000000ULL 
                                            & vlSelfRef.__PVT__pipe_dp_4))) 
                | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_0__last_out_en)))) {
            vlSelfRef.__PVT__pooling_cnt = ((7U == (IData)(vlSelfRef.__PVT__pooling_cnt))
                                             ? 0U : 
                                            (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__pooling_cnt))));
        }
        if (((IData)(vlSelfRef.__PVT__pipe_vld_4) & (IData)(vlSelfRef.__PVT__add_out_rdy))) {
            if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                               >> 0x1cU)))) {
                __Vdly__latch_result6_d3 = vlSelfRef.__PVT__latch_result6_d3;
                __Vdly__latch_result5_d3 = vlSelfRef.__PVT__latch_result5_d3;
                __Vdly__latch_result4_d3 = vlSelfRef.__PVT__latch_result4_d3;
                __Vdly__latch_result3_d3 = vlSelfRef.__PVT__latch_result3_d3;
                __Vdly__latch_result1_d3 = vlSelfRef.__PVT__latch_result1_d3;
                __Vdly__latch_result0_d3 = vlSelfRef.__PVT__latch_result0_d3;
                __Vdly__latch_result7_d3 = vlSelfRef.__PVT__latch_result7_d3;
                __Vdly__latch_result2_d3 = vlSelfRef.__PVT__latch_result2_d3;
            } else if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                      >> 0x1bU)))) {
                __Vdly__latch_result6_d3 = vlSelfRef.__PVT__latch_result6_d3;
                __Vdly__latch_result5_d3 = vlSelfRef.__PVT__latch_result5_d3;
                __Vdly__latch_result4_d3 = vlSelfRef.__PVT__latch_result4_d3;
                __Vdly__latch_result3_d3 = vlSelfRef.__PVT__latch_result3_d3;
                __Vdly__latch_result1_d3 = vlSelfRef.__PVT__latch_result1_d3;
                __Vdly__latch_result0_d3 = vlSelfRef.__PVT__latch_result0_d3;
                __Vdly__latch_result7_d3 = vlSelfRef.__PVT__latch_result7_d3;
                __Vdly__latch_result2_d3 = vlSelfRef.__PVT__latch_result2_d3;
            } else {
                if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result6_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result7_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                    }
                    if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result5_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result4_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result3_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result2_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                    }
                    if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result1_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result0_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                    }
                }
            }
        }
        if (vlSelfRef.__PVT__pipe_vld_3) {
            vlSelfRef.__PVT__pipe_vld_4 = 1U;
        } else if (vlSelfRef.__PVT__add_out_rdy) {
            vlSelfRef.__PVT__pipe_vld_4 = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__pipe_vld_3) & (IData)(vlSelfRef.__PVT__pipe_rdy_3))) {
            vlSelfRef.__PVT__pipe_dp_4 = vlSelfRef.__PVT__pipe_dp_3;
        }
        if (vlSelfRef.__PVT__pipe_vld_2) {
            vlSelfRef.__PVT__pipe_vld_3 = 1U;
        } else if (vlSelfRef.__PVT__pipe_rdy_3) {
            vlSelfRef.__PVT__pipe_vld_3 = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__pipe_vld_2) & (IData)(vlSelfRef.__PVT__pipe_rdy_2))) {
            vlSelfRef.__PVT__pipe_dp_3 = vlSelfRef.__PVT__pipe_dp_2;
        }
        if (vlSelfRef.__PVT__pipe_vld_1) {
            vlSelfRef.__PVT__pipe_vld_2 = 1U;
        } else if (vlSelfRef.__PVT__pipe_rdy_2) {
            vlSelfRef.__PVT__pipe_vld_2 = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__pipe_vld_1) & (IData)(vlSelfRef.__PVT__pipe_rdy_1))) {
            vlSelfRef.__PVT__pipe_dp_2 = vlSelfRef.__PVT__pipe_dp_1;
        }
        if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_3__pdma2pdp_pvld) {
            vlSelfRef.__PVT__pipe_vld_1 = 1U;
        } else if (vlSelfRef.__PVT__pipe_rdy_1) {
            vlSelfRef.__PVT__pipe_vld_1 = 0U;
        }
        if (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_3__pdma2pdp_pvld) 
             & (IData)(vlSelfRef.__PVT__pipe_rdy_0))) {
            vlSelfRef.__PVT__pipe_dp_1 = (((QData)((IData)(
                                                           ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_3__pooling_din_last) 
                                                              << 0xbU) 
                                                             | (((IData)(vlSelfRef.__PVT__pooling_size) 
                                                                 << 8U) 
                                                                | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable) 
                                                                   << 7U))) 
                                                            | ((0x1cU 
                                                                & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                   >> 0xdU)) 
                                                               | ((2U 
                                                                   & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                      >> 0x16U)) 
                                                                  | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_1st_3)))))) 
                                           << 0x16U) 
                                          | (QData)((IData)(
                                                            ((0x3ff800U 
                                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                 << 0xbU)) 
                                                             | (IData)(vlSelfRef.__PVT__int_pooling)))));
        }
    } else {
        __Vdly__pooling_size = 0U;
        __Vdly__flush_out6 = 0U;
        __Vdly__flush_out5 = 0U;
        __Vdly__flush_out4 = 0U;
        __Vdly__flush_out3 = 0U;
        __Vdly__flush_out1 = 0U;
        __Vdly__flush_out0 = 0U;
        __Vdly__flush_out7 = 0U;
        __Vdly__flush_out2 = 0U;
        vlSelfRef.__PVT__pooling_cnt = 0U;
        __Vdly__latch_result6_d3 = 0U;
        __Vdly__latch_result5_d3 = 0U;
        __Vdly__latch_result4_d3 = 0U;
        __Vdly__latch_result3_d3 = 0U;
        __Vdly__latch_result1_d3 = 0U;
        __Vdly__latch_result0_d3 = 0U;
        __Vdly__latch_result7_d3 = 0U;
        __Vdly__latch_result2_d3 = 0U;
        vlSelfRef.__PVT__pipe_vld_4 = 0U;
        vlSelfRef.__PVT__pipe_dp_4 = 0ULL;
        vlSelfRef.__PVT__pipe_vld_3 = 0U;
        vlSelfRef.__PVT__pipe_dp_3 = 0ULL;
        vlSelfRef.__PVT__pipe_vld_2 = 0U;
        vlSelfRef.__PVT__pipe_dp_2 = 0ULL;
        vlSelfRef.__PVT__pipe_vld_1 = 0U;
        vlSelfRef.__PVT__pipe_dp_1 = 0ULL;
    }
    vlSelfRef.__PVT__flush_out6 = __Vdly__flush_out6;
    vlSelfRef.__PVT__flush_out5 = __Vdly__flush_out5;
    vlSelfRef.__PVT__flush_out4 = __Vdly__flush_out4;
    vlSelfRef.__PVT__flush_out3 = __Vdly__flush_out3;
    vlSelfRef.__PVT__flush_out1 = __Vdly__flush_out1;
    vlSelfRef.__PVT__flush_out0 = __Vdly__flush_out0;
    vlSelfRef.__PVT__flush_out7 = __Vdly__flush_out7;
    vlSelfRef.__PVT__flush_out2 = __Vdly__flush_out2;
    vlSelfRef.__PVT__latch_result6_d3 = __Vdly__latch_result6_d3;
    vlSelfRef.__PVT__latch_result5_d3 = __Vdly__latch_result5_d3;
    vlSelfRef.__PVT__latch_result4_d3 = __Vdly__latch_result4_d3;
    vlSelfRef.__PVT__latch_result3_d3 = __Vdly__latch_result3_d3;
    vlSelfRef.__PVT__latch_result1_d3 = __Vdly__latch_result1_d3;
    vlSelfRef.__PVT__latch_result0_d3 = __Vdly__latch_result0_d3;
    vlSelfRef.__PVT__latch_result7_d3 = __Vdly__latch_result7_d3;
    vlSelfRef.__PVT__latch_result2_d3 = __Vdly__latch_result2_d3;
    vlSelfRef.__PVT__pooling_result = (0x7ffU & ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__pipe_dp_4 
                                                             >> 0x16U)))
                                                  ? (IData)(
                                                            (vlSelfRef.__PVT__pipe_dp_4 
                                                             >> 0xbU))
                                                  : (IData)(vlSelfRef.__PVT__pipe_dp_4)));
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
    vlSelfRef.__PVT__pooling_size = __Vdly__pooling_size;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_3__1(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_3__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__add_out_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_4)) 
                                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_3__pooling_out_prdy)));
    vlSelfRef.__PVT__pipe_rdy_3 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_4)) 
                                         | (IData)(vlSelfRef.__PVT__add_out_rdy)));
    vlSelfRef.__PVT__pipe_rdy_2 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_3)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_3)));
    vlSelfRef.__PVT__pipe_rdy_1 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_2)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_2)));
    vlSelfRef.__PVT__pipe_rdy_0 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_1)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_1)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_3__2(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_3__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ __Vfunc_pooling_fun__12__Vfuncout;
    __Vfunc_pooling_fun__12__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_pooling_fun__12__data0;
    __Vfunc_pooling_fun__12__data0 = 0;
    SData/*10:0*/ __Vfunc_pooling_fun__12__data1;
    __Vfunc_pooling_fun__12__data1 = 0;
    CData/*1:0*/ __Vfunc_pooling_fun__12__pooling_type;
    __Vfunc_pooling_fun__12__pooling_type = 0;
    // Body
    vlSelfRef.__PVT__load_din = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_3__pdma2pdp_pvld) 
                                 & ((IData)(vlSelfRef.__PVT__pipe_rdy_0) 
                                    & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable)) 
                                       & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_en__BRA__3__KET__))));
    __Vfunc_pooling_fun__12__pooling_type = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__pooling_type_cfg_d;
    if (vlSelfRef.__PVT__load_din) {
        __Vfunc_pooling_fun__12__data1 = (0x7ffU & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0);
        __Vfunc_pooling_fun__12__data0 = ((0x20000U 
                                           & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                           ? ((0x10000U 
                                               & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                               ? ((0x8000U 
                                                   & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                   ? (IData)(vlSelfRef.__PVT__data_buf7)
                                                   : (IData)(vlSelfRef.__PVT__data_buf6))
                                               : ((0x8000U 
                                                   & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                   ? (IData)(vlSelfRef.__PVT__data_buf5)
                                                   : (IData)(vlSelfRef.__PVT__data_buf4)))
                                           : ((0x10000U 
                                               & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                               ? ((0x8000U 
                                                   & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                   ? (IData)(vlSelfRef.__PVT__data_buf3)
                                                   : (IData)(vlSelfRef.__PVT__data_buf2))
                                               : ((0x8000U 
                                                   & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                   ? (IData)(vlSelfRef.__PVT__data_buf1)
                                                   : (IData)(vlSelfRef.__PVT__data_buf0))));
    } else {
        __Vfunc_pooling_fun__12__data1 = 0U;
        __Vfunc_pooling_fun__12__data0 = 0U;
    }
    vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling 
        = (2U == (IData)(__Vfunc_pooling_fun__12__pooling_type));
    vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling 
        = (1U == (IData)(__Vfunc_pooling_fun__12__pooling_type));
    vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling 
        = (0U == (IData)(__Vfunc_pooling_fun__12__pooling_type));
    __Vfunc_pooling_fun__12__Vfuncout = (0x7ffU & ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling)
                                                    ? 
                                                   VL_EXTEND_II(32,11, 
                                                                ([&]() {
                        vlSelfRef.__Vfunc_pooling_SUM__13__data1 
                            = __Vfunc_pooling_fun__12__data1;
                        vlSelfRef.__Vfunc_pooling_SUM__13__data0 
                            = __Vfunc_pooling_fun__12__data0;
                        vlSelfRef.__Vfunc_pooling_SUM__13__Vfuncout 
                            = (0x7ffU & ((IData)(vlSelfRef.__Vfunc_pooling_SUM__13__data1) 
                                         + (IData)(vlSelfRef.__Vfunc_pooling_SUM__13__data0)));
                    }(), (IData)(vlSelfRef.__Vfunc_pooling_SUM__13__Vfuncout)))
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling)
                                                     ? 
                                                    VL_EXTEND_II(32,11, 
                                                                 ([&]() {
                            vlSelfRef.__Vfunc_pooling_MIN__14__data1 
                                = __Vfunc_pooling_fun__12__data1;
                            vlSelfRef.__Vfunc_pooling_MIN__14__data0 
                                = __Vfunc_pooling_fun__12__data0;
                            vlSelfRef.__PVT__pooling_MIN__Vstatic__min_int_ff 
                                = VL_GTS_III(11, (IData)(vlSelfRef.__Vfunc_pooling_MIN__14__data1), (IData)(vlSelfRef.__Vfunc_pooling_MIN__14__data0));
                            vlSelfRef.__Vfunc_pooling_MIN__14__Vfuncout 
                                = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_int_ff)
                                    ? (IData)(vlSelfRef.__Vfunc_pooling_MIN__14__data0)
                                    : (IData)(vlSelfRef.__Vfunc_pooling_MIN__14__data1));
                        }(), (IData)(vlSelfRef.__Vfunc_pooling_MIN__14__Vfuncout)))
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling)
                                                      ? 
                                                     VL_EXTEND_II(32,11, 
                                                                  ([&]() {
                                vlSelfRef.__Vfunc_pooling_MAX__15__data1 
                                    = __Vfunc_pooling_fun__12__data1;
                                vlSelfRef.__Vfunc_pooling_MAX__15__data0 
                                    = __Vfunc_pooling_fun__12__data0;
                                vlSelfRef.__PVT__pooling_MAX__Vstatic__max_int_ff 
                                    = VL_GTS_III(11, (IData)(vlSelfRef.__Vfunc_pooling_MAX__15__data0), (IData)(vlSelfRef.__Vfunc_pooling_MAX__15__data1));
                                vlSelfRef.__Vfunc_pooling_MAX__15__Vfuncout 
                                    = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_int_ff)
                                        ? (IData)(vlSelfRef.__Vfunc_pooling_MAX__15__data0)
                                        : (IData)(vlSelfRef.__Vfunc_pooling_MAX__15__data1));
                            }(), (IData)(vlSelfRef.__Vfunc_pooling_MAX__15__Vfuncout)))
                                                      : 0U))));
    vlSelfRef.__PVT__int_pooling = __Vfunc_pooling_fun__12__Vfuncout;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_4__0(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_4__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__pooling_size;
    __Vdly__pooling_size = 0;
    SData/*10:0*/ __Vdly__latch_result6_d3;
    __Vdly__latch_result6_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result5_d3;
    __Vdly__latch_result5_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result4_d3;
    __Vdly__latch_result4_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result3_d3;
    __Vdly__latch_result3_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result1_d3;
    __Vdly__latch_result1_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result0_d3;
    __Vdly__latch_result0_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result7_d3;
    __Vdly__latch_result7_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result2_d3;
    __Vdly__latch_result2_d3 = 0;
    SData/*14:0*/ __Vdly__flush_out6;
    __Vdly__flush_out6 = 0;
    SData/*14:0*/ __Vdly__flush_out5;
    __Vdly__flush_out5 = 0;
    SData/*14:0*/ __Vdly__flush_out4;
    __Vdly__flush_out4 = 0;
    SData/*14:0*/ __Vdly__flush_out3;
    __Vdly__flush_out3 = 0;
    SData/*14:0*/ __Vdly__flush_out1;
    __Vdly__flush_out1 = 0;
    SData/*14:0*/ __Vdly__flush_out0;
    __Vdly__flush_out0 = 0;
    SData/*14:0*/ __Vdly__flush_out7;
    __Vdly__flush_out7 = 0;
    SData/*14:0*/ __Vdly__flush_out2;
    __Vdly__flush_out2 = 0;
    // Body
    __Vdly__pooling_size = vlSelfRef.__PVT__pooling_size;
    __Vdly__flush_out6 = vlSelfRef.__PVT__flush_out6;
    __Vdly__flush_out5 = vlSelfRef.__PVT__flush_out5;
    __Vdly__flush_out4 = vlSelfRef.__PVT__flush_out4;
    __Vdly__flush_out3 = vlSelfRef.__PVT__flush_out3;
    __Vdly__flush_out1 = vlSelfRef.__PVT__flush_out1;
    __Vdly__flush_out0 = vlSelfRef.__PVT__flush_out0;
    __Vdly__flush_out7 = vlSelfRef.__PVT__flush_out7;
    __Vdly__flush_out2 = vlSelfRef.__PVT__flush_out2;
    __Vdly__latch_result6_d3 = vlSelfRef.__PVT__latch_result6_d3;
    __Vdly__latch_result5_d3 = vlSelfRef.__PVT__latch_result5_d3;
    __Vdly__latch_result4_d3 = vlSelfRef.__PVT__latch_result4_d3;
    __Vdly__latch_result3_d3 = vlSelfRef.__PVT__latch_result3_d3;
    __Vdly__latch_result1_d3 = vlSelfRef.__PVT__latch_result1_d3;
    __Vdly__latch_result0_d3 = vlSelfRef.__PVT__latch_result0_d3;
    __Vdly__latch_result7_d3 = vlSelfRef.__PVT__latch_result7_d3;
    __Vdly__latch_result2_d3 = vlSelfRef.__PVT__latch_result2_d3;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelfRef.__PVT__load_din) & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                   >> 0x17U))) {
            __Vdly__pooling_size = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_4__pooling_din_last)
                                     ? 0U : (7U & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__pooling_size))));
        }
        if ((IData)((0x200000000ULL == (0x220000000ULL 
                                        & vlSelfRef.__PVT__pipe_dp_4)))) {
            if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                               >> 0x1cU)))) {
                __Vdly__flush_out6 = vlSelfRef.__PVT__flush_out6;
                __Vdly__flush_out5 = vlSelfRef.__PVT__flush_out5;
                __Vdly__flush_out4 = vlSelfRef.__PVT__flush_out4;
                __Vdly__flush_out3 = vlSelfRef.__PVT__flush_out3;
                __Vdly__flush_out1 = vlSelfRef.__PVT__flush_out1;
                __Vdly__flush_out0 = vlSelfRef.__PVT__flush_out0;
                __Vdly__flush_out7 = vlSelfRef.__PVT__flush_out7;
                __Vdly__flush_out2 = vlSelfRef.__PVT__flush_out2;
            } else if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                      >> 0x1bU)))) {
                __Vdly__flush_out6 = vlSelfRef.__PVT__flush_out6;
                __Vdly__flush_out5 = vlSelfRef.__PVT__flush_out5;
                __Vdly__flush_out4 = vlSelfRef.__PVT__flush_out4;
                __Vdly__flush_out3 = vlSelfRef.__PVT__flush_out3;
                __Vdly__flush_out1 = vlSelfRef.__PVT__flush_out1;
                __Vdly__flush_out0 = vlSelfRef.__PVT__flush_out0;
                __Vdly__flush_out7 = vlSelfRef.__PVT__flush_out7;
                __Vdly__flush_out2 = vlSelfRef.__PVT__flush_out2;
            } else {
                if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out6 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf6)));
                        }
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out7 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf7)));
                        }
                    }
                    if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out5 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf5)));
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out4 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf4)));
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out3 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf3)));
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out2 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf2)));
                        }
                    }
                    if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out1 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf1)));
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out0 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf0)));
                        }
                    }
                }
            }
        }
        if ((((IData)(vlSelfRef.__PVT__pipe_vld_4) 
              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_4__pooling_out_prdy)) 
             & ((IData)((0x200000000ULL == (0x220000000ULL 
                                            & vlSelfRef.__PVT__pipe_dp_4))) 
                | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_0__last_out_en)))) {
            vlSelfRef.__PVT__pooling_cnt = ((7U == (IData)(vlSelfRef.__PVT__pooling_cnt))
                                             ? 0U : 
                                            (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__pooling_cnt))));
        }
        if (((IData)(vlSelfRef.__PVT__pipe_vld_4) & (IData)(vlSelfRef.__PVT__add_out_rdy))) {
            if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                               >> 0x1cU)))) {
                __Vdly__latch_result6_d3 = vlSelfRef.__PVT__latch_result6_d3;
                __Vdly__latch_result5_d3 = vlSelfRef.__PVT__latch_result5_d3;
                __Vdly__latch_result4_d3 = vlSelfRef.__PVT__latch_result4_d3;
                __Vdly__latch_result3_d3 = vlSelfRef.__PVT__latch_result3_d3;
                __Vdly__latch_result1_d3 = vlSelfRef.__PVT__latch_result1_d3;
                __Vdly__latch_result0_d3 = vlSelfRef.__PVT__latch_result0_d3;
                __Vdly__latch_result7_d3 = vlSelfRef.__PVT__latch_result7_d3;
                __Vdly__latch_result2_d3 = vlSelfRef.__PVT__latch_result2_d3;
            } else if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                      >> 0x1bU)))) {
                __Vdly__latch_result6_d3 = vlSelfRef.__PVT__latch_result6_d3;
                __Vdly__latch_result5_d3 = vlSelfRef.__PVT__latch_result5_d3;
                __Vdly__latch_result4_d3 = vlSelfRef.__PVT__latch_result4_d3;
                __Vdly__latch_result3_d3 = vlSelfRef.__PVT__latch_result3_d3;
                __Vdly__latch_result1_d3 = vlSelfRef.__PVT__latch_result1_d3;
                __Vdly__latch_result0_d3 = vlSelfRef.__PVT__latch_result0_d3;
                __Vdly__latch_result7_d3 = vlSelfRef.__PVT__latch_result7_d3;
                __Vdly__latch_result2_d3 = vlSelfRef.__PVT__latch_result2_d3;
            } else {
                if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result6_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result7_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                    }
                    if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result5_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result4_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result3_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result2_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                    }
                    if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result1_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result0_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                    }
                }
            }
        }
        if (vlSelfRef.__PVT__pipe_vld_3) {
            vlSelfRef.__PVT__pipe_vld_4 = 1U;
        } else if (vlSelfRef.__PVT__add_out_rdy) {
            vlSelfRef.__PVT__pipe_vld_4 = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__pipe_vld_3) & (IData)(vlSelfRef.__PVT__pipe_rdy_3))) {
            vlSelfRef.__PVT__pipe_dp_4 = vlSelfRef.__PVT__pipe_dp_3;
        }
        if (vlSelfRef.__PVT__pipe_vld_2) {
            vlSelfRef.__PVT__pipe_vld_3 = 1U;
        } else if (vlSelfRef.__PVT__pipe_rdy_3) {
            vlSelfRef.__PVT__pipe_vld_3 = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__pipe_vld_2) & (IData)(vlSelfRef.__PVT__pipe_rdy_2))) {
            vlSelfRef.__PVT__pipe_dp_3 = vlSelfRef.__PVT__pipe_dp_2;
        }
        if (vlSelfRef.__PVT__pipe_vld_1) {
            vlSelfRef.__PVT__pipe_vld_2 = 1U;
        } else if (vlSelfRef.__PVT__pipe_rdy_2) {
            vlSelfRef.__PVT__pipe_vld_2 = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__pipe_vld_1) & (IData)(vlSelfRef.__PVT__pipe_rdy_1))) {
            vlSelfRef.__PVT__pipe_dp_2 = vlSelfRef.__PVT__pipe_dp_1;
        }
        if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_4__pdma2pdp_pvld) {
            vlSelfRef.__PVT__pipe_vld_1 = 1U;
        } else if (vlSelfRef.__PVT__pipe_rdy_1) {
            vlSelfRef.__PVT__pipe_vld_1 = 0U;
        }
        if (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_4__pdma2pdp_pvld) 
             & (IData)(vlSelfRef.__PVT__pipe_rdy_0))) {
            vlSelfRef.__PVT__pipe_dp_1 = (((QData)((IData)(
                                                           ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_4__pooling_din_last) 
                                                              << 0xbU) 
                                                             | (((IData)(vlSelfRef.__PVT__pooling_size) 
                                                                 << 8U) 
                                                                | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable) 
                                                                   << 7U))) 
                                                            | ((0x1cU 
                                                                & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                   >> 0xdU)) 
                                                               | ((2U 
                                                                   & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                      >> 0x16U)) 
                                                                  | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_1st_4)))))) 
                                           << 0x16U) 
                                          | (QData)((IData)(
                                                            ((0x3ff800U 
                                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                 << 0xbU)) 
                                                             | (IData)(vlSelfRef.__PVT__int_pooling)))));
        }
    } else {
        __Vdly__pooling_size = 0U;
        __Vdly__flush_out6 = 0U;
        __Vdly__flush_out5 = 0U;
        __Vdly__flush_out4 = 0U;
        __Vdly__flush_out3 = 0U;
        __Vdly__flush_out1 = 0U;
        __Vdly__flush_out0 = 0U;
        __Vdly__flush_out7 = 0U;
        __Vdly__flush_out2 = 0U;
        vlSelfRef.__PVT__pooling_cnt = 0U;
        __Vdly__latch_result6_d3 = 0U;
        __Vdly__latch_result5_d3 = 0U;
        __Vdly__latch_result4_d3 = 0U;
        __Vdly__latch_result3_d3 = 0U;
        __Vdly__latch_result1_d3 = 0U;
        __Vdly__latch_result0_d3 = 0U;
        __Vdly__latch_result7_d3 = 0U;
        __Vdly__latch_result2_d3 = 0U;
        vlSelfRef.__PVT__pipe_vld_4 = 0U;
        vlSelfRef.__PVT__pipe_dp_4 = 0ULL;
        vlSelfRef.__PVT__pipe_vld_3 = 0U;
        vlSelfRef.__PVT__pipe_dp_3 = 0ULL;
        vlSelfRef.__PVT__pipe_vld_2 = 0U;
        vlSelfRef.__PVT__pipe_dp_2 = 0ULL;
        vlSelfRef.__PVT__pipe_vld_1 = 0U;
        vlSelfRef.__PVT__pipe_dp_1 = 0ULL;
    }
    vlSelfRef.__PVT__flush_out6 = __Vdly__flush_out6;
    vlSelfRef.__PVT__flush_out5 = __Vdly__flush_out5;
    vlSelfRef.__PVT__flush_out4 = __Vdly__flush_out4;
    vlSelfRef.__PVT__flush_out3 = __Vdly__flush_out3;
    vlSelfRef.__PVT__flush_out1 = __Vdly__flush_out1;
    vlSelfRef.__PVT__flush_out0 = __Vdly__flush_out0;
    vlSelfRef.__PVT__flush_out7 = __Vdly__flush_out7;
    vlSelfRef.__PVT__flush_out2 = __Vdly__flush_out2;
    vlSelfRef.__PVT__latch_result6_d3 = __Vdly__latch_result6_d3;
    vlSelfRef.__PVT__latch_result5_d3 = __Vdly__latch_result5_d3;
    vlSelfRef.__PVT__latch_result4_d3 = __Vdly__latch_result4_d3;
    vlSelfRef.__PVT__latch_result3_d3 = __Vdly__latch_result3_d3;
    vlSelfRef.__PVT__latch_result1_d3 = __Vdly__latch_result1_d3;
    vlSelfRef.__PVT__latch_result0_d3 = __Vdly__latch_result0_d3;
    vlSelfRef.__PVT__latch_result7_d3 = __Vdly__latch_result7_d3;
    vlSelfRef.__PVT__latch_result2_d3 = __Vdly__latch_result2_d3;
    vlSelfRef.__PVT__pooling_result = (0x7ffU & ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__pipe_dp_4 
                                                             >> 0x16U)))
                                                  ? (IData)(
                                                            (vlSelfRef.__PVT__pipe_dp_4 
                                                             >> 0xbU))
                                                  : (IData)(vlSelfRef.__PVT__pipe_dp_4)));
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
    vlSelfRef.__PVT__pooling_size = __Vdly__pooling_size;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_4__1(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_4__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__add_out_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_4)) 
                                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_4__pooling_out_prdy)));
    vlSelfRef.__PVT__pipe_rdy_3 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_4)) 
                                         | (IData)(vlSelfRef.__PVT__add_out_rdy)));
    vlSelfRef.__PVT__pipe_rdy_2 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_3)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_3)));
    vlSelfRef.__PVT__pipe_rdy_1 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_2)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_2)));
    vlSelfRef.__PVT__pipe_rdy_0 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_1)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_1)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_4__2(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_4__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ __Vfunc_pooling_fun__16__Vfuncout;
    __Vfunc_pooling_fun__16__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_pooling_fun__16__data0;
    __Vfunc_pooling_fun__16__data0 = 0;
    SData/*10:0*/ __Vfunc_pooling_fun__16__data1;
    __Vfunc_pooling_fun__16__data1 = 0;
    CData/*1:0*/ __Vfunc_pooling_fun__16__pooling_type;
    __Vfunc_pooling_fun__16__pooling_type = 0;
    // Body
    vlSelfRef.__PVT__load_din = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_4__pdma2pdp_pvld) 
                                 & ((IData)(vlSelfRef.__PVT__pipe_rdy_0) 
                                    & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable)) 
                                       & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_en__BRA__4__KET__))));
    __Vfunc_pooling_fun__16__pooling_type = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__pooling_type_cfg_d;
    if (vlSelfRef.__PVT__load_din) {
        __Vfunc_pooling_fun__16__data1 = (0x7ffU & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0);
        __Vfunc_pooling_fun__16__data0 = ((0x20000U 
                                           & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                           ? ((0x10000U 
                                               & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                               ? ((0x8000U 
                                                   & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                   ? (IData)(vlSelfRef.__PVT__data_buf7)
                                                   : (IData)(vlSelfRef.__PVT__data_buf6))
                                               : ((0x8000U 
                                                   & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                   ? (IData)(vlSelfRef.__PVT__data_buf5)
                                                   : (IData)(vlSelfRef.__PVT__data_buf4)))
                                           : ((0x10000U 
                                               & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                               ? ((0x8000U 
                                                   & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                   ? (IData)(vlSelfRef.__PVT__data_buf3)
                                                   : (IData)(vlSelfRef.__PVT__data_buf2))
                                               : ((0x8000U 
                                                   & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                   ? (IData)(vlSelfRef.__PVT__data_buf1)
                                                   : (IData)(vlSelfRef.__PVT__data_buf0))));
    } else {
        __Vfunc_pooling_fun__16__data1 = 0U;
        __Vfunc_pooling_fun__16__data0 = 0U;
    }
    vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling 
        = (2U == (IData)(__Vfunc_pooling_fun__16__pooling_type));
    vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling 
        = (1U == (IData)(__Vfunc_pooling_fun__16__pooling_type));
    vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling 
        = (0U == (IData)(__Vfunc_pooling_fun__16__pooling_type));
    __Vfunc_pooling_fun__16__Vfuncout = (0x7ffU & ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling)
                                                    ? 
                                                   VL_EXTEND_II(32,11, 
                                                                ([&]() {
                        vlSelfRef.__Vfunc_pooling_SUM__17__data1 
                            = __Vfunc_pooling_fun__16__data1;
                        vlSelfRef.__Vfunc_pooling_SUM__17__data0 
                            = __Vfunc_pooling_fun__16__data0;
                        vlSelfRef.__Vfunc_pooling_SUM__17__Vfuncout 
                            = (0x7ffU & ((IData)(vlSelfRef.__Vfunc_pooling_SUM__17__data1) 
                                         + (IData)(vlSelfRef.__Vfunc_pooling_SUM__17__data0)));
                    }(), (IData)(vlSelfRef.__Vfunc_pooling_SUM__17__Vfuncout)))
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling)
                                                     ? 
                                                    VL_EXTEND_II(32,11, 
                                                                 ([&]() {
                            vlSelfRef.__Vfunc_pooling_MIN__18__data1 
                                = __Vfunc_pooling_fun__16__data1;
                            vlSelfRef.__Vfunc_pooling_MIN__18__data0 
                                = __Vfunc_pooling_fun__16__data0;
                            vlSelfRef.__PVT__pooling_MIN__Vstatic__min_int_ff 
                                = VL_GTS_III(11, (IData)(vlSelfRef.__Vfunc_pooling_MIN__18__data1), (IData)(vlSelfRef.__Vfunc_pooling_MIN__18__data0));
                            vlSelfRef.__Vfunc_pooling_MIN__18__Vfuncout 
                                = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_int_ff)
                                    ? (IData)(vlSelfRef.__Vfunc_pooling_MIN__18__data0)
                                    : (IData)(vlSelfRef.__Vfunc_pooling_MIN__18__data1));
                        }(), (IData)(vlSelfRef.__Vfunc_pooling_MIN__18__Vfuncout)))
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling)
                                                      ? 
                                                     VL_EXTEND_II(32,11, 
                                                                  ([&]() {
                                vlSelfRef.__Vfunc_pooling_MAX__19__data1 
                                    = __Vfunc_pooling_fun__16__data1;
                                vlSelfRef.__Vfunc_pooling_MAX__19__data0 
                                    = __Vfunc_pooling_fun__16__data0;
                                vlSelfRef.__PVT__pooling_MAX__Vstatic__max_int_ff 
                                    = VL_GTS_III(11, (IData)(vlSelfRef.__Vfunc_pooling_MAX__19__data0), (IData)(vlSelfRef.__Vfunc_pooling_MAX__19__data1));
                                vlSelfRef.__Vfunc_pooling_MAX__19__Vfuncout 
                                    = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_int_ff)
                                        ? (IData)(vlSelfRef.__Vfunc_pooling_MAX__19__data0)
                                        : (IData)(vlSelfRef.__Vfunc_pooling_MAX__19__data1));
                            }(), (IData)(vlSelfRef.__Vfunc_pooling_MAX__19__Vfuncout)))
                                                      : 0U))));
    vlSelfRef.__PVT__int_pooling = __Vfunc_pooling_fun__16__Vfuncout;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_5__0(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_5__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__pooling_size;
    __Vdly__pooling_size = 0;
    SData/*10:0*/ __Vdly__latch_result6_d3;
    __Vdly__latch_result6_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result5_d3;
    __Vdly__latch_result5_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result4_d3;
    __Vdly__latch_result4_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result3_d3;
    __Vdly__latch_result3_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result1_d3;
    __Vdly__latch_result1_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result0_d3;
    __Vdly__latch_result0_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result7_d3;
    __Vdly__latch_result7_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result2_d3;
    __Vdly__latch_result2_d3 = 0;
    SData/*14:0*/ __Vdly__flush_out6;
    __Vdly__flush_out6 = 0;
    SData/*14:0*/ __Vdly__flush_out5;
    __Vdly__flush_out5 = 0;
    SData/*14:0*/ __Vdly__flush_out4;
    __Vdly__flush_out4 = 0;
    SData/*14:0*/ __Vdly__flush_out3;
    __Vdly__flush_out3 = 0;
    SData/*14:0*/ __Vdly__flush_out1;
    __Vdly__flush_out1 = 0;
    SData/*14:0*/ __Vdly__flush_out0;
    __Vdly__flush_out0 = 0;
    SData/*14:0*/ __Vdly__flush_out7;
    __Vdly__flush_out7 = 0;
    SData/*14:0*/ __Vdly__flush_out2;
    __Vdly__flush_out2 = 0;
    // Body
    __Vdly__pooling_size = vlSelfRef.__PVT__pooling_size;
    __Vdly__flush_out6 = vlSelfRef.__PVT__flush_out6;
    __Vdly__flush_out5 = vlSelfRef.__PVT__flush_out5;
    __Vdly__flush_out4 = vlSelfRef.__PVT__flush_out4;
    __Vdly__flush_out3 = vlSelfRef.__PVT__flush_out3;
    __Vdly__flush_out1 = vlSelfRef.__PVT__flush_out1;
    __Vdly__flush_out0 = vlSelfRef.__PVT__flush_out0;
    __Vdly__flush_out7 = vlSelfRef.__PVT__flush_out7;
    __Vdly__flush_out2 = vlSelfRef.__PVT__flush_out2;
    __Vdly__latch_result6_d3 = vlSelfRef.__PVT__latch_result6_d3;
    __Vdly__latch_result5_d3 = vlSelfRef.__PVT__latch_result5_d3;
    __Vdly__latch_result4_d3 = vlSelfRef.__PVT__latch_result4_d3;
    __Vdly__latch_result3_d3 = vlSelfRef.__PVT__latch_result3_d3;
    __Vdly__latch_result1_d3 = vlSelfRef.__PVT__latch_result1_d3;
    __Vdly__latch_result0_d3 = vlSelfRef.__PVT__latch_result0_d3;
    __Vdly__latch_result7_d3 = vlSelfRef.__PVT__latch_result7_d3;
    __Vdly__latch_result2_d3 = vlSelfRef.__PVT__latch_result2_d3;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelfRef.__PVT__load_din) & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                   >> 0x17U))) {
            __Vdly__pooling_size = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_5__pooling_din_last)
                                     ? 0U : (7U & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__pooling_size))));
        }
        if ((IData)((0x200000000ULL == (0x220000000ULL 
                                        & vlSelfRef.__PVT__pipe_dp_4)))) {
            if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                               >> 0x1cU)))) {
                __Vdly__flush_out6 = vlSelfRef.__PVT__flush_out6;
                __Vdly__flush_out5 = vlSelfRef.__PVT__flush_out5;
                __Vdly__flush_out4 = vlSelfRef.__PVT__flush_out4;
                __Vdly__flush_out3 = vlSelfRef.__PVT__flush_out3;
                __Vdly__flush_out1 = vlSelfRef.__PVT__flush_out1;
                __Vdly__flush_out0 = vlSelfRef.__PVT__flush_out0;
                __Vdly__flush_out7 = vlSelfRef.__PVT__flush_out7;
                __Vdly__flush_out2 = vlSelfRef.__PVT__flush_out2;
            } else if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                      >> 0x1bU)))) {
                __Vdly__flush_out6 = vlSelfRef.__PVT__flush_out6;
                __Vdly__flush_out5 = vlSelfRef.__PVT__flush_out5;
                __Vdly__flush_out4 = vlSelfRef.__PVT__flush_out4;
                __Vdly__flush_out3 = vlSelfRef.__PVT__flush_out3;
                __Vdly__flush_out1 = vlSelfRef.__PVT__flush_out1;
                __Vdly__flush_out0 = vlSelfRef.__PVT__flush_out0;
                __Vdly__flush_out7 = vlSelfRef.__PVT__flush_out7;
                __Vdly__flush_out2 = vlSelfRef.__PVT__flush_out2;
            } else {
                if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out6 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf6)));
                        }
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out7 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf7)));
                        }
                    }
                    if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out5 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf5)));
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out4 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf4)));
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out3 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf3)));
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out2 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf2)));
                        }
                    }
                    if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out1 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf1)));
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out0 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf0)));
                        }
                    }
                }
            }
        }
        if ((((IData)(vlSelfRef.__PVT__pipe_vld_4) 
              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_5__pooling_out_prdy)) 
             & ((IData)((0x200000000ULL == (0x220000000ULL 
                                            & vlSelfRef.__PVT__pipe_dp_4))) 
                | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_0__last_out_en)))) {
            vlSelfRef.__PVT__pooling_cnt = ((7U == (IData)(vlSelfRef.__PVT__pooling_cnt))
                                             ? 0U : 
                                            (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__pooling_cnt))));
        }
        if (((IData)(vlSelfRef.__PVT__pipe_vld_4) & (IData)(vlSelfRef.__PVT__add_out_rdy))) {
            if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                               >> 0x1cU)))) {
                __Vdly__latch_result6_d3 = vlSelfRef.__PVT__latch_result6_d3;
                __Vdly__latch_result5_d3 = vlSelfRef.__PVT__latch_result5_d3;
                __Vdly__latch_result4_d3 = vlSelfRef.__PVT__latch_result4_d3;
                __Vdly__latch_result3_d3 = vlSelfRef.__PVT__latch_result3_d3;
                __Vdly__latch_result1_d3 = vlSelfRef.__PVT__latch_result1_d3;
                __Vdly__latch_result0_d3 = vlSelfRef.__PVT__latch_result0_d3;
                __Vdly__latch_result7_d3 = vlSelfRef.__PVT__latch_result7_d3;
                __Vdly__latch_result2_d3 = vlSelfRef.__PVT__latch_result2_d3;
            } else if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                      >> 0x1bU)))) {
                __Vdly__latch_result6_d3 = vlSelfRef.__PVT__latch_result6_d3;
                __Vdly__latch_result5_d3 = vlSelfRef.__PVT__latch_result5_d3;
                __Vdly__latch_result4_d3 = vlSelfRef.__PVT__latch_result4_d3;
                __Vdly__latch_result3_d3 = vlSelfRef.__PVT__latch_result3_d3;
                __Vdly__latch_result1_d3 = vlSelfRef.__PVT__latch_result1_d3;
                __Vdly__latch_result0_d3 = vlSelfRef.__PVT__latch_result0_d3;
                __Vdly__latch_result7_d3 = vlSelfRef.__PVT__latch_result7_d3;
                __Vdly__latch_result2_d3 = vlSelfRef.__PVT__latch_result2_d3;
            } else {
                if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result6_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result7_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                    }
                    if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result5_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result4_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result3_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result2_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                    }
                    if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result1_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result0_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                    }
                }
            }
        }
        if (vlSelfRef.__PVT__pipe_vld_3) {
            vlSelfRef.__PVT__pipe_vld_4 = 1U;
        } else if (vlSelfRef.__PVT__add_out_rdy) {
            vlSelfRef.__PVT__pipe_vld_4 = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__pipe_vld_3) & (IData)(vlSelfRef.__PVT__pipe_rdy_3))) {
            vlSelfRef.__PVT__pipe_dp_4 = vlSelfRef.__PVT__pipe_dp_3;
        }
        if (vlSelfRef.__PVT__pipe_vld_2) {
            vlSelfRef.__PVT__pipe_vld_3 = 1U;
        } else if (vlSelfRef.__PVT__pipe_rdy_3) {
            vlSelfRef.__PVT__pipe_vld_3 = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__pipe_vld_2) & (IData)(vlSelfRef.__PVT__pipe_rdy_2))) {
            vlSelfRef.__PVT__pipe_dp_3 = vlSelfRef.__PVT__pipe_dp_2;
        }
        if (vlSelfRef.__PVT__pipe_vld_1) {
            vlSelfRef.__PVT__pipe_vld_2 = 1U;
        } else if (vlSelfRef.__PVT__pipe_rdy_2) {
            vlSelfRef.__PVT__pipe_vld_2 = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__pipe_vld_1) & (IData)(vlSelfRef.__PVT__pipe_rdy_1))) {
            vlSelfRef.__PVT__pipe_dp_2 = vlSelfRef.__PVT__pipe_dp_1;
        }
        if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_5__pdma2pdp_pvld) {
            vlSelfRef.__PVT__pipe_vld_1 = 1U;
        } else if (vlSelfRef.__PVT__pipe_rdy_1) {
            vlSelfRef.__PVT__pipe_vld_1 = 0U;
        }
        if (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_5__pdma2pdp_pvld) 
             & (IData)(vlSelfRef.__PVT__pipe_rdy_0))) {
            vlSelfRef.__PVT__pipe_dp_1 = (((QData)((IData)(
                                                           ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_5__pooling_din_last) 
                                                              << 0xbU) 
                                                             | (((IData)(vlSelfRef.__PVT__pooling_size) 
                                                                 << 8U) 
                                                                | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable) 
                                                                   << 7U))) 
                                                            | ((0x1cU 
                                                                & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                   >> 0xdU)) 
                                                               | ((2U 
                                                                   & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                      >> 0x16U)) 
                                                                  | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_1st_5)))))) 
                                           << 0x16U) 
                                          | (QData)((IData)(
                                                            ((0x3ff800U 
                                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                 << 0xbU)) 
                                                             | (IData)(vlSelfRef.__PVT__int_pooling)))));
        }
    } else {
        __Vdly__pooling_size = 0U;
        __Vdly__flush_out6 = 0U;
        __Vdly__flush_out5 = 0U;
        __Vdly__flush_out4 = 0U;
        __Vdly__flush_out3 = 0U;
        __Vdly__flush_out1 = 0U;
        __Vdly__flush_out0 = 0U;
        __Vdly__flush_out7 = 0U;
        __Vdly__flush_out2 = 0U;
        vlSelfRef.__PVT__pooling_cnt = 0U;
        __Vdly__latch_result6_d3 = 0U;
        __Vdly__latch_result5_d3 = 0U;
        __Vdly__latch_result4_d3 = 0U;
        __Vdly__latch_result3_d3 = 0U;
        __Vdly__latch_result1_d3 = 0U;
        __Vdly__latch_result0_d3 = 0U;
        __Vdly__latch_result7_d3 = 0U;
        __Vdly__latch_result2_d3 = 0U;
        vlSelfRef.__PVT__pipe_vld_4 = 0U;
        vlSelfRef.__PVT__pipe_dp_4 = 0ULL;
        vlSelfRef.__PVT__pipe_vld_3 = 0U;
        vlSelfRef.__PVT__pipe_dp_3 = 0ULL;
        vlSelfRef.__PVT__pipe_vld_2 = 0U;
        vlSelfRef.__PVT__pipe_dp_2 = 0ULL;
        vlSelfRef.__PVT__pipe_vld_1 = 0U;
        vlSelfRef.__PVT__pipe_dp_1 = 0ULL;
    }
    vlSelfRef.__PVT__flush_out6 = __Vdly__flush_out6;
    vlSelfRef.__PVT__flush_out5 = __Vdly__flush_out5;
    vlSelfRef.__PVT__flush_out4 = __Vdly__flush_out4;
    vlSelfRef.__PVT__flush_out3 = __Vdly__flush_out3;
    vlSelfRef.__PVT__flush_out1 = __Vdly__flush_out1;
    vlSelfRef.__PVT__flush_out0 = __Vdly__flush_out0;
    vlSelfRef.__PVT__flush_out7 = __Vdly__flush_out7;
    vlSelfRef.__PVT__flush_out2 = __Vdly__flush_out2;
    vlSelfRef.__PVT__latch_result6_d3 = __Vdly__latch_result6_d3;
    vlSelfRef.__PVT__latch_result5_d3 = __Vdly__latch_result5_d3;
    vlSelfRef.__PVT__latch_result4_d3 = __Vdly__latch_result4_d3;
    vlSelfRef.__PVT__latch_result3_d3 = __Vdly__latch_result3_d3;
    vlSelfRef.__PVT__latch_result1_d3 = __Vdly__latch_result1_d3;
    vlSelfRef.__PVT__latch_result0_d3 = __Vdly__latch_result0_d3;
    vlSelfRef.__PVT__latch_result7_d3 = __Vdly__latch_result7_d3;
    vlSelfRef.__PVT__latch_result2_d3 = __Vdly__latch_result2_d3;
    vlSelfRef.__PVT__pooling_result = (0x7ffU & ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__pipe_dp_4 
                                                             >> 0x16U)))
                                                  ? (IData)(
                                                            (vlSelfRef.__PVT__pipe_dp_4 
                                                             >> 0xbU))
                                                  : (IData)(vlSelfRef.__PVT__pipe_dp_4)));
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
    vlSelfRef.__PVT__pooling_size = __Vdly__pooling_size;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_5__1(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_5__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__add_out_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_4)) 
                                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_5__pooling_out_prdy)));
    vlSelfRef.__PVT__pipe_rdy_3 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_4)) 
                                         | (IData)(vlSelfRef.__PVT__add_out_rdy)));
    vlSelfRef.__PVT__pipe_rdy_2 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_3)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_3)));
    vlSelfRef.__PVT__pipe_rdy_1 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_2)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_2)));
    vlSelfRef.__PVT__pipe_rdy_0 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_1)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_1)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_5__2(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_5__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ __Vfunc_pooling_fun__20__Vfuncout;
    __Vfunc_pooling_fun__20__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_pooling_fun__20__data0;
    __Vfunc_pooling_fun__20__data0 = 0;
    SData/*10:0*/ __Vfunc_pooling_fun__20__data1;
    __Vfunc_pooling_fun__20__data1 = 0;
    CData/*1:0*/ __Vfunc_pooling_fun__20__pooling_type;
    __Vfunc_pooling_fun__20__pooling_type = 0;
    // Body
    vlSelfRef.__PVT__load_din = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_5__pdma2pdp_pvld) 
                                 & ((IData)(vlSelfRef.__PVT__pipe_rdy_0) 
                                    & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable)) 
                                       & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_en__BRA__5__KET__))));
    __Vfunc_pooling_fun__20__pooling_type = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__pooling_type_cfg_d;
    if (vlSelfRef.__PVT__load_din) {
        __Vfunc_pooling_fun__20__data1 = (0x7ffU & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0);
        __Vfunc_pooling_fun__20__data0 = ((0x20000U 
                                           & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                           ? ((0x10000U 
                                               & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                               ? ((0x8000U 
                                                   & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                   ? (IData)(vlSelfRef.__PVT__data_buf7)
                                                   : (IData)(vlSelfRef.__PVT__data_buf6))
                                               : ((0x8000U 
                                                   & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                   ? (IData)(vlSelfRef.__PVT__data_buf5)
                                                   : (IData)(vlSelfRef.__PVT__data_buf4)))
                                           : ((0x10000U 
                                               & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                               ? ((0x8000U 
                                                   & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                   ? (IData)(vlSelfRef.__PVT__data_buf3)
                                                   : (IData)(vlSelfRef.__PVT__data_buf2))
                                               : ((0x8000U 
                                                   & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                   ? (IData)(vlSelfRef.__PVT__data_buf1)
                                                   : (IData)(vlSelfRef.__PVT__data_buf0))));
    } else {
        __Vfunc_pooling_fun__20__data1 = 0U;
        __Vfunc_pooling_fun__20__data0 = 0U;
    }
    vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling 
        = (2U == (IData)(__Vfunc_pooling_fun__20__pooling_type));
    vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling 
        = (1U == (IData)(__Vfunc_pooling_fun__20__pooling_type));
    vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling 
        = (0U == (IData)(__Vfunc_pooling_fun__20__pooling_type));
    __Vfunc_pooling_fun__20__Vfuncout = (0x7ffU & ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling)
                                                    ? 
                                                   VL_EXTEND_II(32,11, 
                                                                ([&]() {
                        vlSelfRef.__Vfunc_pooling_SUM__21__data1 
                            = __Vfunc_pooling_fun__20__data1;
                        vlSelfRef.__Vfunc_pooling_SUM__21__data0 
                            = __Vfunc_pooling_fun__20__data0;
                        vlSelfRef.__Vfunc_pooling_SUM__21__Vfuncout 
                            = (0x7ffU & ((IData)(vlSelfRef.__Vfunc_pooling_SUM__21__data1) 
                                         + (IData)(vlSelfRef.__Vfunc_pooling_SUM__21__data0)));
                    }(), (IData)(vlSelfRef.__Vfunc_pooling_SUM__21__Vfuncout)))
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling)
                                                     ? 
                                                    VL_EXTEND_II(32,11, 
                                                                 ([&]() {
                            vlSelfRef.__Vfunc_pooling_MIN__22__data1 
                                = __Vfunc_pooling_fun__20__data1;
                            vlSelfRef.__Vfunc_pooling_MIN__22__data0 
                                = __Vfunc_pooling_fun__20__data0;
                            vlSelfRef.__PVT__pooling_MIN__Vstatic__min_int_ff 
                                = VL_GTS_III(11, (IData)(vlSelfRef.__Vfunc_pooling_MIN__22__data1), (IData)(vlSelfRef.__Vfunc_pooling_MIN__22__data0));
                            vlSelfRef.__Vfunc_pooling_MIN__22__Vfuncout 
                                = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_int_ff)
                                    ? (IData)(vlSelfRef.__Vfunc_pooling_MIN__22__data0)
                                    : (IData)(vlSelfRef.__Vfunc_pooling_MIN__22__data1));
                        }(), (IData)(vlSelfRef.__Vfunc_pooling_MIN__22__Vfuncout)))
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling)
                                                      ? 
                                                     VL_EXTEND_II(32,11, 
                                                                  ([&]() {
                                vlSelfRef.__Vfunc_pooling_MAX__23__data1 
                                    = __Vfunc_pooling_fun__20__data1;
                                vlSelfRef.__Vfunc_pooling_MAX__23__data0 
                                    = __Vfunc_pooling_fun__20__data0;
                                vlSelfRef.__PVT__pooling_MAX__Vstatic__max_int_ff 
                                    = VL_GTS_III(11, (IData)(vlSelfRef.__Vfunc_pooling_MAX__23__data0), (IData)(vlSelfRef.__Vfunc_pooling_MAX__23__data1));
                                vlSelfRef.__Vfunc_pooling_MAX__23__Vfuncout 
                                    = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_int_ff)
                                        ? (IData)(vlSelfRef.__Vfunc_pooling_MAX__23__data0)
                                        : (IData)(vlSelfRef.__Vfunc_pooling_MAX__23__data1));
                            }(), (IData)(vlSelfRef.__Vfunc_pooling_MAX__23__Vfuncout)))
                                                      : 0U))));
    vlSelfRef.__PVT__int_pooling = __Vfunc_pooling_fun__20__Vfuncout;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_6__0(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_6__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__pooling_size;
    __Vdly__pooling_size = 0;
    SData/*10:0*/ __Vdly__latch_result6_d3;
    __Vdly__latch_result6_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result5_d3;
    __Vdly__latch_result5_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result4_d3;
    __Vdly__latch_result4_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result3_d3;
    __Vdly__latch_result3_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result1_d3;
    __Vdly__latch_result1_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result0_d3;
    __Vdly__latch_result0_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result7_d3;
    __Vdly__latch_result7_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result2_d3;
    __Vdly__latch_result2_d3 = 0;
    SData/*14:0*/ __Vdly__flush_out6;
    __Vdly__flush_out6 = 0;
    SData/*14:0*/ __Vdly__flush_out5;
    __Vdly__flush_out5 = 0;
    SData/*14:0*/ __Vdly__flush_out4;
    __Vdly__flush_out4 = 0;
    SData/*14:0*/ __Vdly__flush_out3;
    __Vdly__flush_out3 = 0;
    SData/*14:0*/ __Vdly__flush_out1;
    __Vdly__flush_out1 = 0;
    SData/*14:0*/ __Vdly__flush_out0;
    __Vdly__flush_out0 = 0;
    SData/*14:0*/ __Vdly__flush_out7;
    __Vdly__flush_out7 = 0;
    SData/*14:0*/ __Vdly__flush_out2;
    __Vdly__flush_out2 = 0;
    // Body
    __Vdly__pooling_size = vlSelfRef.__PVT__pooling_size;
    __Vdly__flush_out6 = vlSelfRef.__PVT__flush_out6;
    __Vdly__flush_out5 = vlSelfRef.__PVT__flush_out5;
    __Vdly__flush_out4 = vlSelfRef.__PVT__flush_out4;
    __Vdly__flush_out3 = vlSelfRef.__PVT__flush_out3;
    __Vdly__flush_out1 = vlSelfRef.__PVT__flush_out1;
    __Vdly__flush_out0 = vlSelfRef.__PVT__flush_out0;
    __Vdly__flush_out7 = vlSelfRef.__PVT__flush_out7;
    __Vdly__flush_out2 = vlSelfRef.__PVT__flush_out2;
    __Vdly__latch_result6_d3 = vlSelfRef.__PVT__latch_result6_d3;
    __Vdly__latch_result5_d3 = vlSelfRef.__PVT__latch_result5_d3;
    __Vdly__latch_result4_d3 = vlSelfRef.__PVT__latch_result4_d3;
    __Vdly__latch_result3_d3 = vlSelfRef.__PVT__latch_result3_d3;
    __Vdly__latch_result1_d3 = vlSelfRef.__PVT__latch_result1_d3;
    __Vdly__latch_result0_d3 = vlSelfRef.__PVT__latch_result0_d3;
    __Vdly__latch_result7_d3 = vlSelfRef.__PVT__latch_result7_d3;
    __Vdly__latch_result2_d3 = vlSelfRef.__PVT__latch_result2_d3;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelfRef.__PVT__load_din) & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                   >> 0x17U))) {
            __Vdly__pooling_size = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_6__pooling_din_last)
                                     ? 0U : (7U & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__pooling_size))));
        }
        if ((IData)((0x200000000ULL == (0x220000000ULL 
                                        & vlSelfRef.__PVT__pipe_dp_4)))) {
            if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                               >> 0x1cU)))) {
                __Vdly__flush_out6 = vlSelfRef.__PVT__flush_out6;
                __Vdly__flush_out5 = vlSelfRef.__PVT__flush_out5;
                __Vdly__flush_out4 = vlSelfRef.__PVT__flush_out4;
                __Vdly__flush_out3 = vlSelfRef.__PVT__flush_out3;
                __Vdly__flush_out1 = vlSelfRef.__PVT__flush_out1;
                __Vdly__flush_out0 = vlSelfRef.__PVT__flush_out0;
                __Vdly__flush_out7 = vlSelfRef.__PVT__flush_out7;
                __Vdly__flush_out2 = vlSelfRef.__PVT__flush_out2;
            } else if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                      >> 0x1bU)))) {
                __Vdly__flush_out6 = vlSelfRef.__PVT__flush_out6;
                __Vdly__flush_out5 = vlSelfRef.__PVT__flush_out5;
                __Vdly__flush_out4 = vlSelfRef.__PVT__flush_out4;
                __Vdly__flush_out3 = vlSelfRef.__PVT__flush_out3;
                __Vdly__flush_out1 = vlSelfRef.__PVT__flush_out1;
                __Vdly__flush_out0 = vlSelfRef.__PVT__flush_out0;
                __Vdly__flush_out7 = vlSelfRef.__PVT__flush_out7;
                __Vdly__flush_out2 = vlSelfRef.__PVT__flush_out2;
            } else {
                if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out6 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf6)));
                        }
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out7 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf7)));
                        }
                    }
                    if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out5 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf5)));
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out4 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf4)));
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out3 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf3)));
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out2 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf2)));
                        }
                    }
                    if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out1 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf1)));
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out0 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf0)));
                        }
                    }
                }
            }
        }
        if ((((IData)(vlSelfRef.__PVT__pipe_vld_4) 
              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_6__pooling_out_prdy)) 
             & ((IData)((0x200000000ULL == (0x220000000ULL 
                                            & vlSelfRef.__PVT__pipe_dp_4))) 
                | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_0__last_out_en)))) {
            vlSelfRef.__PVT__pooling_cnt = ((7U == (IData)(vlSelfRef.__PVT__pooling_cnt))
                                             ? 0U : 
                                            (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__pooling_cnt))));
        }
        if (((IData)(vlSelfRef.__PVT__pipe_vld_4) & (IData)(vlSelfRef.__PVT__add_out_rdy))) {
            if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                               >> 0x1cU)))) {
                __Vdly__latch_result6_d3 = vlSelfRef.__PVT__latch_result6_d3;
                __Vdly__latch_result5_d3 = vlSelfRef.__PVT__latch_result5_d3;
                __Vdly__latch_result4_d3 = vlSelfRef.__PVT__latch_result4_d3;
                __Vdly__latch_result3_d3 = vlSelfRef.__PVT__latch_result3_d3;
                __Vdly__latch_result1_d3 = vlSelfRef.__PVT__latch_result1_d3;
                __Vdly__latch_result0_d3 = vlSelfRef.__PVT__latch_result0_d3;
                __Vdly__latch_result7_d3 = vlSelfRef.__PVT__latch_result7_d3;
                __Vdly__latch_result2_d3 = vlSelfRef.__PVT__latch_result2_d3;
            } else if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                      >> 0x1bU)))) {
                __Vdly__latch_result6_d3 = vlSelfRef.__PVT__latch_result6_d3;
                __Vdly__latch_result5_d3 = vlSelfRef.__PVT__latch_result5_d3;
                __Vdly__latch_result4_d3 = vlSelfRef.__PVT__latch_result4_d3;
                __Vdly__latch_result3_d3 = vlSelfRef.__PVT__latch_result3_d3;
                __Vdly__latch_result1_d3 = vlSelfRef.__PVT__latch_result1_d3;
                __Vdly__latch_result0_d3 = vlSelfRef.__PVT__latch_result0_d3;
                __Vdly__latch_result7_d3 = vlSelfRef.__PVT__latch_result7_d3;
                __Vdly__latch_result2_d3 = vlSelfRef.__PVT__latch_result2_d3;
            } else {
                if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result6_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result7_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                    }
                    if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result5_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result4_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result3_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result2_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                    }
                    if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result1_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result0_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                    }
                }
            }
        }
        if (vlSelfRef.__PVT__pipe_vld_3) {
            vlSelfRef.__PVT__pipe_vld_4 = 1U;
        } else if (vlSelfRef.__PVT__add_out_rdy) {
            vlSelfRef.__PVT__pipe_vld_4 = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__pipe_vld_3) & (IData)(vlSelfRef.__PVT__pipe_rdy_3))) {
            vlSelfRef.__PVT__pipe_dp_4 = vlSelfRef.__PVT__pipe_dp_3;
        }
        if (vlSelfRef.__PVT__pipe_vld_2) {
            vlSelfRef.__PVT__pipe_vld_3 = 1U;
        } else if (vlSelfRef.__PVT__pipe_rdy_3) {
            vlSelfRef.__PVT__pipe_vld_3 = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__pipe_vld_2) & (IData)(vlSelfRef.__PVT__pipe_rdy_2))) {
            vlSelfRef.__PVT__pipe_dp_3 = vlSelfRef.__PVT__pipe_dp_2;
        }
        if (vlSelfRef.__PVT__pipe_vld_1) {
            vlSelfRef.__PVT__pipe_vld_2 = 1U;
        } else if (vlSelfRef.__PVT__pipe_rdy_2) {
            vlSelfRef.__PVT__pipe_vld_2 = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__pipe_vld_1) & (IData)(vlSelfRef.__PVT__pipe_rdy_1))) {
            vlSelfRef.__PVT__pipe_dp_2 = vlSelfRef.__PVT__pipe_dp_1;
        }
        if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_6__pdma2pdp_pvld) {
            vlSelfRef.__PVT__pipe_vld_1 = 1U;
        } else if (vlSelfRef.__PVT__pipe_rdy_1) {
            vlSelfRef.__PVT__pipe_vld_1 = 0U;
        }
        if (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_6__pdma2pdp_pvld) 
             & (IData)(vlSelfRef.__PVT__pipe_rdy_0))) {
            vlSelfRef.__PVT__pipe_dp_1 = (((QData)((IData)(
                                                           ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_6__pooling_din_last) 
                                                              << 0xbU) 
                                                             | (((IData)(vlSelfRef.__PVT__pooling_size) 
                                                                 << 8U) 
                                                                | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable) 
                                                                   << 7U))) 
                                                            | ((0x1cU 
                                                                & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                   >> 0xdU)) 
                                                               | ((2U 
                                                                   & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                      >> 0x16U)) 
                                                                  | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_1st_6)))))) 
                                           << 0x16U) 
                                          | (QData)((IData)(
                                                            ((0x3ff800U 
                                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                 << 0xbU)) 
                                                             | (IData)(vlSelfRef.__PVT__int_pooling)))));
        }
    } else {
        __Vdly__pooling_size = 0U;
        __Vdly__flush_out6 = 0U;
        __Vdly__flush_out5 = 0U;
        __Vdly__flush_out4 = 0U;
        __Vdly__flush_out3 = 0U;
        __Vdly__flush_out1 = 0U;
        __Vdly__flush_out0 = 0U;
        __Vdly__flush_out7 = 0U;
        __Vdly__flush_out2 = 0U;
        vlSelfRef.__PVT__pooling_cnt = 0U;
        __Vdly__latch_result6_d3 = 0U;
        __Vdly__latch_result5_d3 = 0U;
        __Vdly__latch_result4_d3 = 0U;
        __Vdly__latch_result3_d3 = 0U;
        __Vdly__latch_result1_d3 = 0U;
        __Vdly__latch_result0_d3 = 0U;
        __Vdly__latch_result7_d3 = 0U;
        __Vdly__latch_result2_d3 = 0U;
        vlSelfRef.__PVT__pipe_vld_4 = 0U;
        vlSelfRef.__PVT__pipe_dp_4 = 0ULL;
        vlSelfRef.__PVT__pipe_vld_3 = 0U;
        vlSelfRef.__PVT__pipe_dp_3 = 0ULL;
        vlSelfRef.__PVT__pipe_vld_2 = 0U;
        vlSelfRef.__PVT__pipe_dp_2 = 0ULL;
        vlSelfRef.__PVT__pipe_vld_1 = 0U;
        vlSelfRef.__PVT__pipe_dp_1 = 0ULL;
    }
    vlSelfRef.__PVT__flush_out6 = __Vdly__flush_out6;
    vlSelfRef.__PVT__flush_out5 = __Vdly__flush_out5;
    vlSelfRef.__PVT__flush_out4 = __Vdly__flush_out4;
    vlSelfRef.__PVT__flush_out3 = __Vdly__flush_out3;
    vlSelfRef.__PVT__flush_out1 = __Vdly__flush_out1;
    vlSelfRef.__PVT__flush_out0 = __Vdly__flush_out0;
    vlSelfRef.__PVT__flush_out7 = __Vdly__flush_out7;
    vlSelfRef.__PVT__flush_out2 = __Vdly__flush_out2;
    vlSelfRef.__PVT__latch_result6_d3 = __Vdly__latch_result6_d3;
    vlSelfRef.__PVT__latch_result5_d3 = __Vdly__latch_result5_d3;
    vlSelfRef.__PVT__latch_result4_d3 = __Vdly__latch_result4_d3;
    vlSelfRef.__PVT__latch_result3_d3 = __Vdly__latch_result3_d3;
    vlSelfRef.__PVT__latch_result1_d3 = __Vdly__latch_result1_d3;
    vlSelfRef.__PVT__latch_result0_d3 = __Vdly__latch_result0_d3;
    vlSelfRef.__PVT__latch_result7_d3 = __Vdly__latch_result7_d3;
    vlSelfRef.__PVT__latch_result2_d3 = __Vdly__latch_result2_d3;
    vlSelfRef.__PVT__pooling_result = (0x7ffU & ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__pipe_dp_4 
                                                             >> 0x16U)))
                                                  ? (IData)(
                                                            (vlSelfRef.__PVT__pipe_dp_4 
                                                             >> 0xbU))
                                                  : (IData)(vlSelfRef.__PVT__pipe_dp_4)));
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
    vlSelfRef.__PVT__pooling_size = __Vdly__pooling_size;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_6__1(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_6__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__add_out_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_4)) 
                                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_6__pooling_out_prdy)));
    vlSelfRef.__PVT__pipe_rdy_3 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_4)) 
                                         | (IData)(vlSelfRef.__PVT__add_out_rdy)));
    vlSelfRef.__PVT__pipe_rdy_2 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_3)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_3)));
    vlSelfRef.__PVT__pipe_rdy_1 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_2)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_2)));
    vlSelfRef.__PVT__pipe_rdy_0 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_1)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_1)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_6__2(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_6__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ __Vfunc_pooling_fun__24__Vfuncout;
    __Vfunc_pooling_fun__24__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_pooling_fun__24__data0;
    __Vfunc_pooling_fun__24__data0 = 0;
    SData/*10:0*/ __Vfunc_pooling_fun__24__data1;
    __Vfunc_pooling_fun__24__data1 = 0;
    CData/*1:0*/ __Vfunc_pooling_fun__24__pooling_type;
    __Vfunc_pooling_fun__24__pooling_type = 0;
    // Body
    vlSelfRef.__PVT__load_din = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_6__pdma2pdp_pvld) 
                                 & ((IData)(vlSelfRef.__PVT__pipe_rdy_0) 
                                    & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable)) 
                                       & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_en__BRA__6__KET__))));
    __Vfunc_pooling_fun__24__pooling_type = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__pooling_type_cfg_d;
    if (vlSelfRef.__PVT__load_din) {
        __Vfunc_pooling_fun__24__data1 = (0x7ffU & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0);
        __Vfunc_pooling_fun__24__data0 = ((0x20000U 
                                           & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                           ? ((0x10000U 
                                               & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                               ? ((0x8000U 
                                                   & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                   ? (IData)(vlSelfRef.__PVT__data_buf7)
                                                   : (IData)(vlSelfRef.__PVT__data_buf6))
                                               : ((0x8000U 
                                                   & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                   ? (IData)(vlSelfRef.__PVT__data_buf5)
                                                   : (IData)(vlSelfRef.__PVT__data_buf4)))
                                           : ((0x10000U 
                                               & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                               ? ((0x8000U 
                                                   & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                   ? (IData)(vlSelfRef.__PVT__data_buf3)
                                                   : (IData)(vlSelfRef.__PVT__data_buf2))
                                               : ((0x8000U 
                                                   & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                   ? (IData)(vlSelfRef.__PVT__data_buf1)
                                                   : (IData)(vlSelfRef.__PVT__data_buf0))));
    } else {
        __Vfunc_pooling_fun__24__data1 = 0U;
        __Vfunc_pooling_fun__24__data0 = 0U;
    }
    vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling 
        = (2U == (IData)(__Vfunc_pooling_fun__24__pooling_type));
    vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling 
        = (1U == (IData)(__Vfunc_pooling_fun__24__pooling_type));
    vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling 
        = (0U == (IData)(__Vfunc_pooling_fun__24__pooling_type));
    __Vfunc_pooling_fun__24__Vfuncout = (0x7ffU & ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling)
                                                    ? 
                                                   VL_EXTEND_II(32,11, 
                                                                ([&]() {
                        vlSelfRef.__Vfunc_pooling_SUM__25__data1 
                            = __Vfunc_pooling_fun__24__data1;
                        vlSelfRef.__Vfunc_pooling_SUM__25__data0 
                            = __Vfunc_pooling_fun__24__data0;
                        vlSelfRef.__Vfunc_pooling_SUM__25__Vfuncout 
                            = (0x7ffU & ((IData)(vlSelfRef.__Vfunc_pooling_SUM__25__data1) 
                                         + (IData)(vlSelfRef.__Vfunc_pooling_SUM__25__data0)));
                    }(), (IData)(vlSelfRef.__Vfunc_pooling_SUM__25__Vfuncout)))
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling)
                                                     ? 
                                                    VL_EXTEND_II(32,11, 
                                                                 ([&]() {
                            vlSelfRef.__Vfunc_pooling_MIN__26__data1 
                                = __Vfunc_pooling_fun__24__data1;
                            vlSelfRef.__Vfunc_pooling_MIN__26__data0 
                                = __Vfunc_pooling_fun__24__data0;
                            vlSelfRef.__PVT__pooling_MIN__Vstatic__min_int_ff 
                                = VL_GTS_III(11, (IData)(vlSelfRef.__Vfunc_pooling_MIN__26__data1), (IData)(vlSelfRef.__Vfunc_pooling_MIN__26__data0));
                            vlSelfRef.__Vfunc_pooling_MIN__26__Vfuncout 
                                = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_int_ff)
                                    ? (IData)(vlSelfRef.__Vfunc_pooling_MIN__26__data0)
                                    : (IData)(vlSelfRef.__Vfunc_pooling_MIN__26__data1));
                        }(), (IData)(vlSelfRef.__Vfunc_pooling_MIN__26__Vfuncout)))
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling)
                                                      ? 
                                                     VL_EXTEND_II(32,11, 
                                                                  ([&]() {
                                vlSelfRef.__Vfunc_pooling_MAX__27__data1 
                                    = __Vfunc_pooling_fun__24__data1;
                                vlSelfRef.__Vfunc_pooling_MAX__27__data0 
                                    = __Vfunc_pooling_fun__24__data0;
                                vlSelfRef.__PVT__pooling_MAX__Vstatic__max_int_ff 
                                    = VL_GTS_III(11, (IData)(vlSelfRef.__Vfunc_pooling_MAX__27__data0), (IData)(vlSelfRef.__Vfunc_pooling_MAX__27__data1));
                                vlSelfRef.__Vfunc_pooling_MAX__27__Vfuncout 
                                    = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_int_ff)
                                        ? (IData)(vlSelfRef.__Vfunc_pooling_MAX__27__data0)
                                        : (IData)(vlSelfRef.__Vfunc_pooling_MAX__27__data1));
                            }(), (IData)(vlSelfRef.__Vfunc_pooling_MAX__27__Vfuncout)))
                                                      : 0U))));
    vlSelfRef.__PVT__int_pooling = __Vfunc_pooling_fun__24__Vfuncout;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__0(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__pooling_size;
    __Vdly__pooling_size = 0;
    SData/*10:0*/ __Vdly__latch_result6_d3;
    __Vdly__latch_result6_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result5_d3;
    __Vdly__latch_result5_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result4_d3;
    __Vdly__latch_result4_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result3_d3;
    __Vdly__latch_result3_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result1_d3;
    __Vdly__latch_result1_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result0_d3;
    __Vdly__latch_result0_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result7_d3;
    __Vdly__latch_result7_d3 = 0;
    SData/*10:0*/ __Vdly__latch_result2_d3;
    __Vdly__latch_result2_d3 = 0;
    SData/*14:0*/ __Vdly__flush_out6;
    __Vdly__flush_out6 = 0;
    SData/*14:0*/ __Vdly__flush_out5;
    __Vdly__flush_out5 = 0;
    SData/*14:0*/ __Vdly__flush_out4;
    __Vdly__flush_out4 = 0;
    SData/*14:0*/ __Vdly__flush_out3;
    __Vdly__flush_out3 = 0;
    SData/*14:0*/ __Vdly__flush_out1;
    __Vdly__flush_out1 = 0;
    SData/*14:0*/ __Vdly__flush_out0;
    __Vdly__flush_out0 = 0;
    SData/*14:0*/ __Vdly__flush_out7;
    __Vdly__flush_out7 = 0;
    SData/*14:0*/ __Vdly__flush_out2;
    __Vdly__flush_out2 = 0;
    // Body
    __Vdly__pooling_size = vlSelfRef.__PVT__pooling_size;
    __Vdly__flush_out6 = vlSelfRef.__PVT__flush_out6;
    __Vdly__flush_out5 = vlSelfRef.__PVT__flush_out5;
    __Vdly__flush_out4 = vlSelfRef.__PVT__flush_out4;
    __Vdly__flush_out3 = vlSelfRef.__PVT__flush_out3;
    __Vdly__flush_out1 = vlSelfRef.__PVT__flush_out1;
    __Vdly__flush_out0 = vlSelfRef.__PVT__flush_out0;
    __Vdly__flush_out7 = vlSelfRef.__PVT__flush_out7;
    __Vdly__flush_out2 = vlSelfRef.__PVT__flush_out2;
    __Vdly__latch_result6_d3 = vlSelfRef.__PVT__latch_result6_d3;
    __Vdly__latch_result5_d3 = vlSelfRef.__PVT__latch_result5_d3;
    __Vdly__latch_result4_d3 = vlSelfRef.__PVT__latch_result4_d3;
    __Vdly__latch_result3_d3 = vlSelfRef.__PVT__latch_result3_d3;
    __Vdly__latch_result1_d3 = vlSelfRef.__PVT__latch_result1_d3;
    __Vdly__latch_result0_d3 = vlSelfRef.__PVT__latch_result0_d3;
    __Vdly__latch_result7_d3 = vlSelfRef.__PVT__latch_result7_d3;
    __Vdly__latch_result2_d3 = vlSelfRef.__PVT__latch_result2_d3;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (((IData)(vlSelfRef.__PVT__load_din) & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                   >> 0x17U))) {
            __Vdly__pooling_size = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_7__pooling_din_last)
                                     ? 0U : (7U & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__pooling_size))));
        }
        if ((IData)((0x200000000ULL == (0x220000000ULL 
                                        & vlSelfRef.__PVT__pipe_dp_4)))) {
            if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                               >> 0x1cU)))) {
                __Vdly__flush_out6 = vlSelfRef.__PVT__flush_out6;
                __Vdly__flush_out5 = vlSelfRef.__PVT__flush_out5;
                __Vdly__flush_out4 = vlSelfRef.__PVT__flush_out4;
                __Vdly__flush_out3 = vlSelfRef.__PVT__flush_out3;
                __Vdly__flush_out1 = vlSelfRef.__PVT__flush_out1;
                __Vdly__flush_out0 = vlSelfRef.__PVT__flush_out0;
                __Vdly__flush_out7 = vlSelfRef.__PVT__flush_out7;
                __Vdly__flush_out2 = vlSelfRef.__PVT__flush_out2;
            } else if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                      >> 0x1bU)))) {
                __Vdly__flush_out6 = vlSelfRef.__PVT__flush_out6;
                __Vdly__flush_out5 = vlSelfRef.__PVT__flush_out5;
                __Vdly__flush_out4 = vlSelfRef.__PVT__flush_out4;
                __Vdly__flush_out3 = vlSelfRef.__PVT__flush_out3;
                __Vdly__flush_out1 = vlSelfRef.__PVT__flush_out1;
                __Vdly__flush_out0 = vlSelfRef.__PVT__flush_out0;
                __Vdly__flush_out7 = vlSelfRef.__PVT__flush_out7;
                __Vdly__flush_out2 = vlSelfRef.__PVT__flush_out2;
            } else {
                if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out6 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf6)));
                        }
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out7 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf7)));
                        }
                    }
                    if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out5 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf5)));
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out4 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf4)));
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out3 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf3)));
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out2 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf2)));
                        }
                    }
                    if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__flush_out1 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf1)));
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__flush_out0 = ((0x4000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__pipe_dp_4 
                                                               >> 0x17U)) 
                                                      << 0xeU)) 
                                                  | ((0x3800U 
                                                      & ((IData)(
                                                                 (vlSelfRef.__PVT__pipe_dp_4 
                                                                  >> 0x1eU)) 
                                                         << 0xbU)) 
                                                     | (IData)(vlSelfRef.__PVT__data_buf0)));
                        }
                    }
                }
            }
        }
        if ((((IData)(vlSelfRef.__PVT__pipe_vld_4) 
              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_7__pooling_out_prdy)) 
             & ((IData)((0x200000000ULL == (0x220000000ULL 
                                            & vlSelfRef.__PVT__pipe_dp_4))) 
                | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_0__last_out_en)))) {
            vlSelfRef.__PVT__pooling_cnt = ((7U == (IData)(vlSelfRef.__PVT__pooling_cnt))
                                             ? 0U : 
                                            (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__pooling_cnt))));
        }
        if (((IData)(vlSelfRef.__PVT__pipe_vld_4) & (IData)(vlSelfRef.__PVT__add_out_rdy))) {
            if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                               >> 0x1cU)))) {
                __Vdly__latch_result6_d3 = vlSelfRef.__PVT__latch_result6_d3;
                __Vdly__latch_result5_d3 = vlSelfRef.__PVT__latch_result5_d3;
                __Vdly__latch_result4_d3 = vlSelfRef.__PVT__latch_result4_d3;
                __Vdly__latch_result3_d3 = vlSelfRef.__PVT__latch_result3_d3;
                __Vdly__latch_result1_d3 = vlSelfRef.__PVT__latch_result1_d3;
                __Vdly__latch_result0_d3 = vlSelfRef.__PVT__latch_result0_d3;
                __Vdly__latch_result7_d3 = vlSelfRef.__PVT__latch_result7_d3;
                __Vdly__latch_result2_d3 = vlSelfRef.__PVT__latch_result2_d3;
            } else if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                      >> 0x1bU)))) {
                __Vdly__latch_result6_d3 = vlSelfRef.__PVT__latch_result6_d3;
                __Vdly__latch_result5_d3 = vlSelfRef.__PVT__latch_result5_d3;
                __Vdly__latch_result4_d3 = vlSelfRef.__PVT__latch_result4_d3;
                __Vdly__latch_result3_d3 = vlSelfRef.__PVT__latch_result3_d3;
                __Vdly__latch_result1_d3 = vlSelfRef.__PVT__latch_result1_d3;
                __Vdly__latch_result0_d3 = vlSelfRef.__PVT__latch_result0_d3;
                __Vdly__latch_result7_d3 = vlSelfRef.__PVT__latch_result7_d3;
                __Vdly__latch_result2_d3 = vlSelfRef.__PVT__latch_result2_d3;
            } else {
                if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                   >> 0x1aU)))) {
                    if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result6_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result7_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                    }
                    if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result5_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result4_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                      >> 0x1aU))))) {
                    if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                       >> 0x19U)))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result3_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result2_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                    }
                    if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                          >> 0x19U))))) {
                        if ((1U & (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                           >> 0x18U)))) {
                            __Vdly__latch_result1_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                        if ((1U & (~ (IData)((vlSelfRef.__PVT__pipe_dp_4 
                                              >> 0x18U))))) {
                            __Vdly__latch_result0_d3 
                                = vlSelfRef.__PVT__pooling_result;
                        }
                    }
                }
            }
        }
        if (vlSelfRef.__PVT__pipe_vld_3) {
            vlSelfRef.__PVT__pipe_vld_4 = 1U;
        } else if (vlSelfRef.__PVT__add_out_rdy) {
            vlSelfRef.__PVT__pipe_vld_4 = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__pipe_vld_3) & (IData)(vlSelfRef.__PVT__pipe_rdy_3))) {
            vlSelfRef.__PVT__pipe_dp_4 = vlSelfRef.__PVT__pipe_dp_3;
        }
        if (vlSelfRef.__PVT__pipe_vld_2) {
            vlSelfRef.__PVT__pipe_vld_3 = 1U;
        } else if (vlSelfRef.__PVT__pipe_rdy_3) {
            vlSelfRef.__PVT__pipe_vld_3 = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__pipe_vld_2) & (IData)(vlSelfRef.__PVT__pipe_rdy_2))) {
            vlSelfRef.__PVT__pipe_dp_3 = vlSelfRef.__PVT__pipe_dp_2;
        }
        if (vlSelfRef.__PVT__pipe_vld_1) {
            vlSelfRef.__PVT__pipe_vld_2 = 1U;
        } else if (vlSelfRef.__PVT__pipe_rdy_2) {
            vlSelfRef.__PVT__pipe_vld_2 = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__pipe_vld_1) & (IData)(vlSelfRef.__PVT__pipe_rdy_1))) {
            vlSelfRef.__PVT__pipe_dp_2 = vlSelfRef.__PVT__pipe_dp_1;
        }
        if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_7__pdma2pdp_pvld) {
            vlSelfRef.__PVT__pipe_vld_1 = 1U;
        } else if (vlSelfRef.__PVT__pipe_rdy_1) {
            vlSelfRef.__PVT__pipe_vld_1 = 0U;
        }
        if (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_7__pdma2pdp_pvld) 
             & (IData)(vlSelfRef.__PVT__pipe_rdy_0))) {
            vlSelfRef.__PVT__pipe_dp_1 = (((QData)((IData)(
                                                           ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_7__pooling_din_last) 
                                                              << 0xbU) 
                                                             | (((IData)(vlSelfRef.__PVT__pooling_size) 
                                                                 << 8U) 
                                                                | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable) 
                                                                   << 7U))) 
                                                            | ((0x1cU 
                                                                & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                   >> 0xdU)) 
                                                               | ((2U 
                                                                   & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                      >> 0x16U)) 
                                                                  | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pooling_din_1st_7)))))) 
                                           << 0x16U) 
                                          | (QData)((IData)(
                                                            ((0x3ff800U 
                                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0 
                                                                 << 0xbU)) 
                                                             | (IData)(vlSelfRef.__PVT__int_pooling)))));
        }
    } else {
        __Vdly__pooling_size = 0U;
        __Vdly__flush_out6 = 0U;
        __Vdly__flush_out5 = 0U;
        __Vdly__flush_out4 = 0U;
        __Vdly__flush_out3 = 0U;
        __Vdly__flush_out1 = 0U;
        __Vdly__flush_out0 = 0U;
        __Vdly__flush_out7 = 0U;
        __Vdly__flush_out2 = 0U;
        vlSelfRef.__PVT__pooling_cnt = 0U;
        __Vdly__latch_result6_d3 = 0U;
        __Vdly__latch_result5_d3 = 0U;
        __Vdly__latch_result4_d3 = 0U;
        __Vdly__latch_result3_d3 = 0U;
        __Vdly__latch_result1_d3 = 0U;
        __Vdly__latch_result0_d3 = 0U;
        __Vdly__latch_result7_d3 = 0U;
        __Vdly__latch_result2_d3 = 0U;
        vlSelfRef.__PVT__pipe_vld_4 = 0U;
        vlSelfRef.__PVT__pipe_dp_4 = 0ULL;
        vlSelfRef.__PVT__pipe_vld_3 = 0U;
        vlSelfRef.__PVT__pipe_dp_3 = 0ULL;
        vlSelfRef.__PVT__pipe_vld_2 = 0U;
        vlSelfRef.__PVT__pipe_dp_2 = 0ULL;
        vlSelfRef.__PVT__pipe_vld_1 = 0U;
        vlSelfRef.__PVT__pipe_dp_1 = 0ULL;
    }
    vlSelfRef.__PVT__flush_out6 = __Vdly__flush_out6;
    vlSelfRef.__PVT__flush_out5 = __Vdly__flush_out5;
    vlSelfRef.__PVT__flush_out4 = __Vdly__flush_out4;
    vlSelfRef.__PVT__flush_out3 = __Vdly__flush_out3;
    vlSelfRef.__PVT__flush_out1 = __Vdly__flush_out1;
    vlSelfRef.__PVT__flush_out0 = __Vdly__flush_out0;
    vlSelfRef.__PVT__flush_out7 = __Vdly__flush_out7;
    vlSelfRef.__PVT__flush_out2 = __Vdly__flush_out2;
    vlSelfRef.__PVT__latch_result6_d3 = __Vdly__latch_result6_d3;
    vlSelfRef.__PVT__latch_result5_d3 = __Vdly__latch_result5_d3;
    vlSelfRef.__PVT__latch_result4_d3 = __Vdly__latch_result4_d3;
    vlSelfRef.__PVT__latch_result3_d3 = __Vdly__latch_result3_d3;
    vlSelfRef.__PVT__latch_result1_d3 = __Vdly__latch_result1_d3;
    vlSelfRef.__PVT__latch_result0_d3 = __Vdly__latch_result0_d3;
    vlSelfRef.__PVT__latch_result7_d3 = __Vdly__latch_result7_d3;
    vlSelfRef.__PVT__latch_result2_d3 = __Vdly__latch_result2_d3;
    vlSelfRef.__PVT__pooling_result = (0x7ffU & ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__pipe_dp_4 
                                                             >> 0x16U)))
                                                  ? (IData)(
                                                            (vlSelfRef.__PVT__pipe_dp_4 
                                                             >> 0xbU))
                                                  : (IData)(vlSelfRef.__PVT__pipe_dp_4)));
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
    vlSelfRef.__PVT__pooling_size = __Vdly__pooling_size;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__1(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__add_out_rdy = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_4)) 
                                          | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_7__pooling_out_prdy)));
    vlSelfRef.__PVT__pipe_rdy_3 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_4)) 
                                         | (IData)(vlSelfRef.__PVT__add_out_rdy)));
    vlSelfRef.__PVT__pipe_rdy_2 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_3)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_3)));
    vlSelfRef.__PVT__pipe_rdy_1 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_2)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_2)));
    vlSelfRef.__PVT__pipe_rdy_0 = (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_vld_1)) 
                                         | (IData)(vlSelfRef.__PVT__pipe_rdy_1)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__2(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ __Vfunc_pooling_fun__28__Vfuncout;
    __Vfunc_pooling_fun__28__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_pooling_fun__28__data0;
    __Vfunc_pooling_fun__28__data0 = 0;
    SData/*10:0*/ __Vfunc_pooling_fun__28__data1;
    __Vfunc_pooling_fun__28__data1 = 0;
    CData/*1:0*/ __Vfunc_pooling_fun__28__pooling_type;
    __Vfunc_pooling_fun__28__pooling_type = 0;
    // Body
    vlSelfRef.__PVT__load_din = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____Vcellinp__unit1d_7__pdma2pdp_pvld) 
                                 & ((IData)(vlSelfRef.__PVT__pipe_rdy_0) 
                                    & ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__cur_datin_disable)) 
                                       & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_en__BRA__7__KET__))));
    __Vfunc_pooling_fun__28__pooling_type = vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__pooling_type_cfg_d;
    if (vlSelfRef.__PVT__load_din) {
        __Vfunc_pooling_fun__28__data1 = (0x7ffU & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0);
        __Vfunc_pooling_fun__28__data0 = ((0x20000U 
                                           & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                           ? ((0x10000U 
                                               & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                               ? ((0x8000U 
                                                   & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                   ? (IData)(vlSelfRef.__PVT__data_buf7)
                                                   : (IData)(vlSelfRef.__PVT__data_buf6))
                                               : ((0x8000U 
                                                   & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                   ? (IData)(vlSelfRef.__PVT__data_buf5)
                                                   : (IData)(vlSelfRef.__PVT__data_buf4)))
                                           : ((0x10000U 
                                               & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                               ? ((0x8000U 
                                                   & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                   ? (IData)(vlSelfRef.__PVT__data_buf3)
                                                   : (IData)(vlSelfRef.__PVT__data_buf2))
                                               : ((0x8000U 
                                                   & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pipe_skid_pdp_datin_pd_f0)
                                                   ? (IData)(vlSelfRef.__PVT__data_buf1)
                                                   : (IData)(vlSelfRef.__PVT__data_buf0))));
    } else {
        __Vfunc_pooling_fun__28__data1 = 0U;
        __Vfunc_pooling_fun__28__data0 = 0U;
    }
    vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling 
        = (2U == (IData)(__Vfunc_pooling_fun__28__pooling_type));
    vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling 
        = (1U == (IData)(__Vfunc_pooling_fun__28__pooling_type));
    vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling 
        = (0U == (IData)(__Vfunc_pooling_fun__28__pooling_type));
    __Vfunc_pooling_fun__28__Vfuncout = (0x7ffU & ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__mean_pooling)
                                                    ? 
                                                   VL_EXTEND_II(32,11, 
                                                                ([&]() {
                        vlSelfRef.__Vfunc_pooling_SUM__29__data1 
                            = __Vfunc_pooling_fun__28__data1;
                        vlSelfRef.__Vfunc_pooling_SUM__29__data0 
                            = __Vfunc_pooling_fun__28__data0;
                        vlSelfRef.__Vfunc_pooling_SUM__29__Vfuncout 
                            = (0x7ffU & ((IData)(vlSelfRef.__Vfunc_pooling_SUM__29__data1) 
                                         + (IData)(vlSelfRef.__Vfunc_pooling_SUM__29__data0)));
                    }(), (IData)(vlSelfRef.__Vfunc_pooling_SUM__29__Vfuncout)))
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__min_pooling)
                                                     ? 
                                                    VL_EXTEND_II(32,11, 
                                                                 ([&]() {
                            vlSelfRef.__Vfunc_pooling_MIN__30__data1 
                                = __Vfunc_pooling_fun__28__data1;
                            vlSelfRef.__Vfunc_pooling_MIN__30__data0 
                                = __Vfunc_pooling_fun__28__data0;
                            vlSelfRef.__PVT__pooling_MIN__Vstatic__min_int_ff 
                                = VL_GTS_III(11, (IData)(vlSelfRef.__Vfunc_pooling_MIN__30__data1), (IData)(vlSelfRef.__Vfunc_pooling_MIN__30__data0));
                            vlSelfRef.__Vfunc_pooling_MIN__30__Vfuncout 
                                = ((IData)(vlSelfRef.__PVT__pooling_MIN__Vstatic__min_int_ff)
                                    ? (IData)(vlSelfRef.__Vfunc_pooling_MIN__30__data0)
                                    : (IData)(vlSelfRef.__Vfunc_pooling_MIN__30__data1));
                        }(), (IData)(vlSelfRef.__Vfunc_pooling_MIN__30__Vfuncout)))
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__pooling_fun__Vstatic__max_pooling)
                                                      ? 
                                                     VL_EXTEND_II(32,11, 
                                                                  ([&]() {
                                vlSelfRef.__Vfunc_pooling_MAX__31__data1 
                                    = __Vfunc_pooling_fun__28__data1;
                                vlSelfRef.__Vfunc_pooling_MAX__31__data0 
                                    = __Vfunc_pooling_fun__28__data0;
                                vlSelfRef.__PVT__pooling_MAX__Vstatic__max_int_ff 
                                    = VL_GTS_III(11, (IData)(vlSelfRef.__Vfunc_pooling_MAX__31__data0), (IData)(vlSelfRef.__Vfunc_pooling_MAX__31__data1));
                                vlSelfRef.__Vfunc_pooling_MAX__31__Vfuncout 
                                    = ((IData)(vlSelfRef.__PVT__pooling_MAX__Vstatic__max_int_ff)
                                        ? (IData)(vlSelfRef.__Vfunc_pooling_MAX__31__data0)
                                        : (IData)(vlSelfRef.__Vfunc_pooling_MAX__31__data1));
                            }(), (IData)(vlSelfRef.__Vfunc_pooling_MAX__31__Vfuncout)))
                                                      : 0U))));
    vlSelfRef.__PVT__int_pooling = __Vfunc_pooling_fun__28__Vfuncout;
}
