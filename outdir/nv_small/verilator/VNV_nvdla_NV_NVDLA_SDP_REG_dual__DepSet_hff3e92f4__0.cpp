// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "VNV_nvdla__pch.h"
#include "VNV_nvdla_NV_NVDLA_SDP_REG_dual.h"
#include "VNV_nvdla__Syms.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_REG_dual___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0__0(VNV_nvdla_NV_NVDLA_SDP_REG_dual* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_SDP_REG_dual___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en) {
        if (((((((((0xc0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                        << 2U))) | 
                   (0xc4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                        << 2U)))) | 
                  (0xc8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                       << 2U)))) | 
                 (0x44U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                      << 2U)))) | (0x40U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))) 
               | (0x3cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                      << 2U)))) | (0xbcU 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))) 
             | (0x70U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                    << 2U))))) {
            if ((0xc0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_CVT_OFFSET_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.cvt_offset,
                                 32,vlSelfRef.cvt_offset);
                }
            } else if ((0xc4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_CVT_SCALE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.cvt_scale,
                                 32,(IData)(vlSelfRef.cvt_scale));
                }
            } else if ((0xc8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_CVT_SHIFT_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.cvt_shift,
                                 32,(IData)(vlSelfRef.cvt_shift));
                }
            } else if ((0x44U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DATA_CUBE_CHANNEL_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.channel,
                                 32,(IData)(vlSelfRef.channel));
                }
            } else if ((0x40U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DATA_CUBE_HEIGHT_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.height,
                                 32,(IData)(vlSelfRef.height));
                }
            } else if ((0x3cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DATA_CUBE_WIDTH_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.width,
                                 32,(IData)(vlSelfRef.width));
                }
            } else if ((0xbcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DATA_FORMAT_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,(((IData)(vlSelfRef.out_precision) 
                                      << 2U) | (IData)(vlSelfRef.proc_precision)),
                                 32,(((IData)(vlSelfRef.out_precision) 
                                      << 2U) | (IData)(vlSelfRef.proc_precision)));
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_BN_ALU_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                      >> 0x16U)),32,
                             (((IData)(vlSelfRef.bn_alu_shift_value) 
                               << 8U) | (IData)(vlSelfRef.bn_alu_src)),
                             32,(((IData)(vlSelfRef.bn_alu_shift_value) 
                                  << 8U) | (IData)(vlSelfRef.bn_alu_src)));
            }
        } else if (((((((((0x74U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U))) 
                          | (0x6cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0x78U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))) 
                        | (0x7cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) 
                       | (0x5cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                              << 2U)))) 
                      | (0x60U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                             << 2U)))) 
                     | (0x58U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                    | (0x64U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U))))) {
            if ((0x74U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_BN_ALU_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.bn_alu_operand,
                                 32,(IData)(vlSelfRef.bn_alu_operand));
                }
            } else if ((0x6cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_BN_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,((((IData)(vlSelfRef.bn_relu_bypass) 
                                       << 6U) | (((IData)(vlSelfRef.bn_mul_prelu) 
                                                  << 5U) 
                                                 | ((IData)(vlSelfRef.bn_mul_bypass) 
                                                    << 4U))) 
                                     | (((IData)(vlSelfRef.bn_alu_algo) 
                                         << 2U) | (
                                                   ((IData)(vlSelfRef.bn_alu_bypass) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.bn_bypass)))),
                                 32,((((IData)(vlSelfRef.bn_relu_bypass) 
                                       << 6U) | (((IData)(vlSelfRef.bn_mul_prelu) 
                                                  << 5U) 
                                                 | ((IData)(vlSelfRef.bn_mul_bypass) 
                                                    << 4U))) 
                                     | (((IData)(vlSelfRef.bn_alu_algo) 
                                         << 2U) | (
                                                   ((IData)(vlSelfRef.bn_alu_bypass) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.bn_bypass)))));
                }
            } else if ((0x78U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_BN_MUL_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,(((IData)(vlSelfRef.bn_mul_shift_value) 
                                      << 8U) | (IData)(vlSelfRef.bn_mul_src)),
                                 32,(((IData)(vlSelfRef.bn_mul_shift_value) 
                                      << 8U) | (IData)(vlSelfRef.bn_mul_src)));
                }
            } else if ((0x7cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_BN_MUL_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.bn_mul_operand,
                                 32,(IData)(vlSelfRef.bn_mul_operand));
                }
            } else if ((0x5cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_BS_ALU_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,(((IData)(vlSelfRef.bs_alu_shift_value) 
                                      << 8U) | (IData)(vlSelfRef.bs_alu_src)),
                                 32,(((IData)(vlSelfRef.bs_alu_shift_value) 
                                      << 8U) | (IData)(vlSelfRef.bs_alu_src)));
                }
            } else if ((0x60U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_BS_ALU_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.bs_alu_operand,
                                 32,(IData)(vlSelfRef.bs_alu_operand));
                }
            } else if ((0x58U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_BS_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,((((IData)(vlSelfRef.bs_relu_bypass) 
                                       << 6U) | (((IData)(vlSelfRef.bs_mul_prelu) 
                                                  << 5U) 
                                                 | ((IData)(vlSelfRef.bs_mul_bypass) 
                                                    << 4U))) 
                                     | (((IData)(vlSelfRef.bs_alu_algo) 
                                         << 2U) | (
                                                   ((IData)(vlSelfRef.bs_alu_bypass) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.bs_bypass)))),
                                 32,((((IData)(vlSelfRef.bs_relu_bypass) 
                                       << 6U) | (((IData)(vlSelfRef.bs_mul_prelu) 
                                                  << 5U) 
                                                 | ((IData)(vlSelfRef.bs_mul_bypass) 
                                                    << 4U))) 
                                     | (((IData)(vlSelfRef.bs_alu_algo) 
                                         << 2U) | (
                                                   ((IData)(vlSelfRef.bs_alu_bypass) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.bs_bypass)))));
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_BS_MUL_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                      >> 0x16U)),32,
                             (((IData)(vlSelfRef.bs_mul_shift_value) 
                               << 8U) | (IData)(vlSelfRef.bs_mul_src)),
                             32,(((IData)(vlSelfRef.bs_mul_shift_value) 
                                  << 8U) | (IData)(vlSelfRef.bs_mul_src)));
            }
        } else if (((((((((0x68U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U))) 
                          | (0x84U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0x8cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))) 
                        | (0x90U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) 
                       | (0x94U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                              << 2U)))) 
                      | (0x88U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                             << 2U)))) 
                     | (0x80U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                    | (0x98U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U))))) {
            if ((0x68U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_BS_MUL_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.bs_mul_operand,
                                 32,(IData)(vlSelfRef.bs_mul_operand));
                }
            } else if ((0x84U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_ALU_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,(((IData)(vlSelfRef.ew_alu_cvt_bypass) 
                                      << 1U) | (IData)(vlSelfRef.ew_alu_src)),
                                 32,(((IData)(vlSelfRef.ew_alu_cvt_bypass) 
                                      << 1U) | (IData)(vlSelfRef.ew_alu_src)));
                }
            } else if ((0x8cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_ALU_CVT_OFFSET_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.ew_alu_cvt_offset,
                                 32,vlSelfRef.ew_alu_cvt_offset);
                }
            } else if ((0x90U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_ALU_CVT_SCALE_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.ew_alu_cvt_scale,
                                 32,(IData)(vlSelfRef.ew_alu_cvt_scale));
                }
            } else if ((0x94U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_ALU_CVT_TRUNCATE_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.ew_alu_cvt_truncate,
                                 32,(IData)(vlSelfRef.ew_alu_cvt_truncate));
                }
            } else if ((0x88U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_ALU_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.ew_alu_operand,
                                 32,vlSelfRef.ew_alu_operand);
                }
            } else if ((0x80U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,((((IData)(vlSelfRef.ew_lut_bypass) 
                                       << 6U) | (((IData)(vlSelfRef.ew_mul_prelu) 
                                                  << 5U) 
                                                 | ((IData)(vlSelfRef.ew_mul_bypass) 
                                                    << 4U))) 
                                     | (((IData)(vlSelfRef.ew_alu_algo) 
                                         << 2U) | (
                                                   ((IData)(vlSelfRef.ew_alu_bypass) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.ew_bypass)))),
                                 32,((((IData)(vlSelfRef.ew_lut_bypass) 
                                       << 6U) | (((IData)(vlSelfRef.ew_mul_prelu) 
                                                  << 5U) 
                                                 | ((IData)(vlSelfRef.ew_mul_bypass) 
                                                    << 4U))) 
                                     | (((IData)(vlSelfRef.ew_alu_algo) 
                                         << 2U) | (
                                                   ((IData)(vlSelfRef.ew_alu_bypass) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.ew_bypass)))));
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_MUL_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                      >> 0x16U)),32,
                             (((IData)(vlSelfRef.ew_mul_cvt_bypass) 
                               << 1U) | (IData)(vlSelfRef.ew_mul_src)),
                             32,(((IData)(vlSelfRef.ew_mul_cvt_bypass) 
                                  << 1U) | (IData)(vlSelfRef.ew_mul_src)));
            }
        } else if (((((((((0xa0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U))) 
                          | (0xa4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0xa8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))) 
                        | (0x9cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) 
                       | (0xacU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                              << 2U)))) 
                      | (0x4cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                             << 2U)))) 
                     | (0x48U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                    | (0xb8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U))))) {
            if ((0xa0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_MUL_CVT_OFFSET_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.ew_mul_cvt_offset,
                                 32,vlSelfRef.ew_mul_cvt_offset);
                }
            } else if ((0xa4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_MUL_CVT_SCALE_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.ew_mul_cvt_scale,
                                 32,(IData)(vlSelfRef.ew_mul_cvt_scale));
                }
            } else if ((0xa8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_MUL_CVT_TRUNCATE_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.ew_mul_cvt_truncate,
                                 32,(IData)(vlSelfRef.ew_mul_cvt_truncate));
                }
            } else if ((0x9cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_MUL_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.ew_mul_operand,
                                 32,vlSelfRef.ew_mul_operand);
                }
            } else if ((0xacU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DP_EW_TRUNCATE_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.ew_truncate,
                                 32,(IData)(vlSelfRef.ew_truncate));
                }
            } else if ((0x4cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DST_BASE_ADDR_HIGH_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.dst_base_addr_high,
                                 32,vlSelfRef.dst_base_addr_high);
                }
            } else if ((0x48U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DST_BASE_ADDR_LOW_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.dst_base_addr_low,
                                 32,vlSelfRef.dst_base_addr_low);
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DST_BATCH_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                      >> 0x16U)),32,
                             vlSelfRef.dst_batch_stride,
                             32,vlSelfRef.dst_batch_stride);
            }
        } else if (((((((((0xb4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U))) 
                          | (0x50U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0x54U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))) 
                        | (0xb0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) 
                       | (0x38U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                              << 2U)))) 
                      | (0xdcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                             << 2U)))) 
                     | (0xf0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                    | (0xf4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U))))) {
            if ((0xb4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DST_DMA_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.dst_ram_type,
                                 32,(IData)(vlSelfRef.dst_ram_type));
                }
            } else if ((0x50U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DST_LINE_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.dst_line_stride,
                                 32,vlSelfRef.dst_line_stride);
                }
            } else if ((0x54U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_DST_SURFACE_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.dst_surface_stride,
                                 32,vlSelfRef.dst_surface_stride);
                }
            } else if ((0xb0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_FEATURE_MODE_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,(((IData)(vlSelfRef.batch_number) 
                                      << 8U) | ((((IData)(vlSelfRef.nan_to_zero) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.winograd) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.output_dst) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.flying_mode)))),
                                 32,(((IData)(vlSelfRef.batch_number) 
                                      << 8U) | ((((IData)(vlSelfRef.nan_to_zero) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.winograd) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.output_dst) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.flying_mode)))));
                }
            } else if ((0x38U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_OP_ENABLE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d0_op_en,
                                 32,(IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d0_op_en));
                }
            } else if ((0xdcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: NVDLA_SDP_D_PERF_ENABLE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,((((IData)(vlSelfRef.perf_nan_inf_count_en) 
                                       << 3U) | ((IData)(vlSelfRef.perf_sat_en) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.perf_lut_en) 
                                         << 1U) | (IData)(vlSelfRef.perf_dma_en))),
                                 32,((((IData)(vlSelfRef.perf_nan_inf_count_en) 
                                       << 3U) | ((IData)(vlSelfRef.perf_sat_en) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.perf_lut_en) 
                                         << 1U) | (IData)(vlSelfRef.perf_dma_en))));
                }
            } else if ((0xf0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: read-only reg wr: NVDLA_SDP_D_PERF_LUT_HYBRID_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1034, "");
                }
            } else {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: read-only reg wr: NVDLA_SDP_D_PERF_LUT_LE_HIT_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1038, "");
                }
            }
        } else if (((((((((0xf8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U))) 
                          | (0xe8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0xe4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))) 
                        | (0xecU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) 
                       | (0xe0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                              << 2U)))) 
                      | (0xccU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                             << 2U)))) 
                     | (0xd4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                    | (0xd0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U))))) {
            if ((0xf8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: read-only reg wr: NVDLA_SDP_D_PERF_LUT_LO_HIT_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1042, "");
                }
            } else if ((0xe8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: read-only reg wr: NVDLA_SDP_D_PERF_LUT_OFLOW_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1046, "");
                }
            } else if ((0xe4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: read-only reg wr: NVDLA_SDP_D_PERF_LUT_UFLOW_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1050, "");
                }
            } else if ((0xecU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: read-only reg wr: NVDLA_SDP_D_PERF_OUT_SATURATION_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1054, "");
                }
            } else if ((0xe0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: read-only reg wr: NVDLA_SDP_D_PERF_WDMA_WRITE_STALL_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1058, "");
                }
            } else if ((0xccU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: read-only reg wr: NVDLA_SDP_D_STATUS_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1062, "");
                }
            } else if ((0xd4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: read-only reg wr: NVDLA_SDP_D_STATUS_INF_INPUT_NUM_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1066, "");
                }
            } else {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: read-only reg wr: NVDLA_SDP_D_STATUS_NAN_INPUT_NUM_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1070, "");
                }
            }
        } else if ((0xd8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: read-only reg wr: NVDLA_SDP_D_STATUS_NAN_OUTPUT_NUM_0 = 0x%x\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                      >> 0x16U)));
            }
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1074, "");
            }
        } else {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d0: reg wr: Unknown register (0x%x) = 0x%x\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),12,
                             (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                        << 2U)),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                      >> 0x16U)));
            }
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_invalid_wr))) {
                VL_WRITEF_NX("ERROR: write to undefined register!\n",0);
                VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1078, "");
            }
        }
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_REG_dual___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0__1(VNV_nvdla_NV_NVDLA_SDP_REG_dual* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_SDP_REG_dual___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn) {
        if (vlSelfRef.__PVT__nvdla_sdp_d_dp_ew_alu_cfg_0_wren) {
            vlSelfRef.ew_alu_cvt_bypass = (1U & (IData)(
                                                        (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                         >> 0x17U)));
            vlSelfRef.ew_alu_src = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x16U)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_dp_ew_mul_cfg_0_wren) {
            vlSelfRef.ew_mul_cvt_bypass = (1U & (IData)(
                                                        (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                         >> 0x17U)));
            vlSelfRef.ew_mul_src = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x16U)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_perf_enable_0_wren) {
            vlSelfRef.perf_nan_inf_count_en = (1U & (IData)(
                                                            (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                             >> 0x19U)));
            vlSelfRef.perf_lut_en = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x17U)));
            vlSelfRef.perf_dma_en = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x16U)));
            vlSelfRef.perf_sat_en = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x18U)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_feature_mode_cfg_0_wren) {
            vlSelfRef.batch_number = (0x1fU & (IData)(
                                                      (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                       >> 0x1eU)));
            vlSelfRef.winograd = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                >> 0x18U)));
            vlSelfRef.output_dst = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x17U)));
            vlSelfRef.nan_to_zero = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x19U)));
            vlSelfRef.flying_mode = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x16U)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_dp_ew_cfg_0_wren) {
            vlSelfRef.ew_lut_bypass = (1U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                     >> 0x1cU)));
            vlSelfRef.ew_mul_prelu = (1U & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                    >> 0x1bU)));
            vlSelfRef.ew_mul_bypass = (1U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                     >> 0x1aU)));
            vlSelfRef.ew_alu_algo = (3U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x18U)));
            vlSelfRef.ew_alu_bypass = (1U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                     >> 0x17U)));
            vlSelfRef.ew_bypass = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                 >> 0x16U)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_dp_bn_alu_cfg_0_wren) {
            vlSelfRef.bn_alu_src = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x16U)));
            vlSelfRef.bn_alu_shift_value = (0x3fU & (IData)(
                                                            (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                             >> 0x1eU)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_dp_bn_mul_cfg_0_wren) {
            vlSelfRef.bn_mul_src = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x16U)));
            vlSelfRef.bn_mul_shift_value = (0xffU & (IData)(
                                                            (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                             >> 0x1eU)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_dp_bs_alu_cfg_0_wren) {
            vlSelfRef.bs_alu_src = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x16U)));
            vlSelfRef.bs_alu_shift_value = (0x3fU & (IData)(
                                                            (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                             >> 0x1eU)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_dp_bs_mul_cfg_0_wren) {
            vlSelfRef.bs_mul_src = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x16U)));
            vlSelfRef.bs_mul_shift_value = (0xffU & (IData)(
                                                            (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                             >> 0x1eU)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_dp_bn_cfg_0_wren) {
            vlSelfRef.bn_mul_bypass = (1U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                     >> 0x1aU)));
            vlSelfRef.bn_alu_bypass = (1U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                     >> 0x17U)));
            vlSelfRef.bn_relu_bypass = (1U & (IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                      >> 0x1cU)));
            vlSelfRef.bn_alu_algo = (3U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x18U)));
            vlSelfRef.bn_mul_prelu = (1U & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                    >> 0x1bU)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_dp_bs_cfg_0_wren) {
            vlSelfRef.bs_mul_bypass = (1U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                     >> 0x1aU)));
            vlSelfRef.bs_alu_bypass = (1U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                     >> 0x17U)));
            vlSelfRef.bs_relu_bypass = (1U & (IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                      >> 0x1cU)));
            vlSelfRef.bs_alu_algo = (3U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x18U)));
            vlSelfRef.bs_mul_prelu = (1U & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                    >> 0x1bU)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_data_format_0_wren) {
            vlSelfRef.out_precision = (3U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                     >> 0x18U)));
            vlSelfRef.proc_precision = (3U & (IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                      >> 0x16U)));
        }
        if (((0x8cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelfRef.ew_alu_cvt_offset = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x16U));
        }
        if (((0x90U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelfRef.ew_alu_cvt_scale = (0xffffU & (IData)(
                                                            (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                             >> 0x16U)));
        }
        if (((0x94U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelfRef.ew_alu_cvt_truncate = (0x3fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                        >> 0x16U)));
        }
        if (((0x88U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelfRef.ew_alu_operand = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                >> 0x16U));
        }
        if (((0xa0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelfRef.ew_mul_cvt_offset = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x16U));
        }
        if (((0xa4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelfRef.ew_mul_cvt_scale = (0xffffU & (IData)(
                                                            (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                             >> 0x16U)));
        }
        if (((0xa8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelfRef.ew_mul_cvt_truncate = (0x3fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                        >> 0x16U)));
        }
        if (((0x9cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelfRef.ew_mul_operand = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                >> 0x16U));
        }
        if (((0xacU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelfRef.ew_truncate = (0x3ffU & (IData)(
                                                      (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                       >> 0x16U)));
        }
        if (((0x4cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelfRef.dst_base_addr_high = (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                    >> 0x16U));
        }
        if (((0xb8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelfRef.dst_batch_stride = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x16U));
        }
        if (((0x48U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelfRef.dst_base_addr_low = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x16U));
        }
        if (((0x50U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelfRef.dst_line_stride = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                 >> 0x16U));
        }
        if (((0x54U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelfRef.dst_surface_stride = (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                    >> 0x16U));
        }
        if (((0x44U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelfRef.channel = (0x1fffU & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                    >> 0x16U)));
        }
        if (((0x40U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelfRef.height = (0x1fffU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x16U)));
        }
        if (((0x3cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelfRef.width = (0x1fffU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x16U)));
        }
        if (((0xb4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelfRef.dst_ram_type = (1U & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                    >> 0x16U)));
        }
        if (((0xc4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelfRef.cvt_scale = (0xffffU & (IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                      >> 0x16U)));
        }
        if (((0xc0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelfRef.cvt_offset = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                            >> 0x16U));
        }
        if (((0x7cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelfRef.bn_mul_operand = (0xffffU & (IData)(
                                                          (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                           >> 0x16U)));
        }
        if (((0x68U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelfRef.bs_mul_operand = (0xffffU & (IData)(
                                                          (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                           >> 0x16U)));
        }
        if (((0x74U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelfRef.bn_alu_operand = (0xffffU & (IData)(
                                                          (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                           >> 0x16U)));
        }
        if (((0x60U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelfRef.bs_alu_operand = (0xffffU & (IData)(
                                                          (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                           >> 0x16U)));
        }
        if (((0xc8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en))) {
            vlSelfRef.cvt_shift = (0x3fU & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                    >> 0x16U)));
        }
    } else {
        vlSelfRef.ew_alu_cvt_bypass = 1U;
        vlSelfRef.ew_alu_src = 0U;
        vlSelfRef.ew_mul_cvt_bypass = 1U;
        vlSelfRef.ew_mul_src = 0U;
        vlSelfRef.perf_nan_inf_count_en = 0U;
        vlSelfRef.perf_lut_en = 0U;
        vlSelfRef.batch_number = 0U;
        vlSelfRef.winograd = 0U;
        vlSelfRef.ew_lut_bypass = 1U;
        vlSelfRef.ew_mul_prelu = 0U;
        vlSelfRef.ew_mul_bypass = 1U;
        vlSelfRef.ew_alu_algo = 0U;
        vlSelfRef.ew_alu_bypass = 1U;
        vlSelfRef.ew_bypass = 1U;
        vlSelfRef.bn_alu_src = 0U;
        vlSelfRef.bn_mul_src = 0U;
        vlSelfRef.bs_alu_src = 0U;
        vlSelfRef.bs_mul_src = 0U;
        vlSelfRef.perf_dma_en = 0U;
        vlSelfRef.bn_mul_bypass = 1U;
        vlSelfRef.bn_alu_bypass = 1U;
        vlSelfRef.bs_mul_bypass = 1U;
        vlSelfRef.bs_alu_bypass = 1U;
        vlSelfRef.out_precision = 0U;
        vlSelfRef.ew_alu_cvt_offset = 0U;
        vlSelfRef.ew_alu_cvt_scale = 0U;
        vlSelfRef.ew_alu_cvt_truncate = 0U;
        vlSelfRef.ew_alu_operand = 0U;
        vlSelfRef.ew_mul_cvt_offset = 0U;
        vlSelfRef.ew_mul_cvt_scale = 0U;
        vlSelfRef.ew_mul_cvt_truncate = 0U;
        vlSelfRef.ew_mul_operand = 0U;
        vlSelfRef.ew_truncate = 0U;
        vlSelfRef.dst_base_addr_high = 0U;
        vlSelfRef.dst_batch_stride = 0U;
        vlSelfRef.dst_base_addr_low = 0U;
        vlSelfRef.dst_line_stride = 0U;
        vlSelfRef.dst_surface_stride = 0U;
        vlSelfRef.proc_precision = 0U;
        vlSelfRef.channel = 0U;
        vlSelfRef.height = 0U;
        vlSelfRef.output_dst = 0U;
        vlSelfRef.width = 0U;
        vlSelfRef.dst_ram_type = 0U;
        vlSelfRef.nan_to_zero = 0U;
        vlSelfRef.bn_alu_shift_value = 0U;
        vlSelfRef.bs_alu_shift_value = 0U;
        vlSelfRef.flying_mode = 0U;
        vlSelfRef.bn_relu_bypass = 1U;
        vlSelfRef.bs_relu_bypass = 1U;
        vlSelfRef.bn_alu_algo = 0U;
        vlSelfRef.bs_alu_algo = 0U;
        vlSelfRef.perf_sat_en = 0U;
        vlSelfRef.bn_mul_prelu = 0U;
        vlSelfRef.bs_mul_prelu = 1U;
        vlSelfRef.bn_mul_shift_value = 0U;
        vlSelfRef.bs_mul_shift_value = 0U;
        vlSelfRef.cvt_scale = 0U;
        vlSelfRef.cvt_offset = 0U;
        vlSelfRef.bn_mul_operand = 0U;
        vlSelfRef.bs_mul_operand = 0U;
        vlSelfRef.bn_alu_operand = 0U;
        vlSelfRef.bs_alu_operand = 0U;
        vlSelfRef.cvt_shift = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_REG_dual___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0__2(VNV_nvdla_NV_NVDLA_SDP_REG_dual* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_SDP_REG_dual___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn) {
        if (vlSelfRef.__PVT__nvdla_sdp_d_dp_bs_cfg_0_wren) {
            vlSelfRef.bs_bypass = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                 >> 0x16U)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_dp_bn_cfg_0_wren) {
            vlSelfRef.bn_bypass = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                 >> 0x16U)));
        }
    } else {
        vlSelfRef.bs_bypass = 1U;
        vlSelfRef.bn_bypass = 1U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_REG_dual___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0__3(VNV_nvdla_NV_NVDLA_SDP_REG_dual* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_SDP_REG_dual___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0__3\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.reg_rd_data = (((((((((0xc0U == (0xffcU 
                                               & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                  << 2U))) 
                                    | (0xc4U == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U)))) 
                                   | (0xc8U == (0xffcU 
                                                & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) 
                                  | (0x44U == (0xffcU 
                                               & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                  << 2U)))) 
                                 | (0x40U == (0xffcU 
                                              & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))) 
                                | (0x3cU == (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))) 
                               | (0xbcU == (0xffcU 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) 
                              | (0x70U == (0xffcU & 
                                           ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U))))
                              ? ((0xc0U == (0xffcU 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))
                                  ? vlSelfRef.cvt_offset
                                  : ((0xc4U == (0xffcU 
                                                & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))
                                      ? (IData)(vlSelfRef.cvt_scale)
                                      : ((0xc8U == 
                                          (0xffcU & 
                                           ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))
                                          ? (IData)(vlSelfRef.cvt_shift)
                                          : ((0x44U 
                                              == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))
                                              ? (IData)(vlSelfRef.channel)
                                              : ((0x40U 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))
                                                  ? (IData)(vlSelfRef.height)
                                                  : 
                                                 ((0x3cU 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))
                                                   ? (IData)(vlSelfRef.width)
                                                   : 
                                                  ((0xbcU 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? 
                                                   (((IData)(vlSelfRef.out_precision) 
                                                     << 2U) 
                                                    | (IData)(vlSelfRef.proc_precision))
                                                    : 
                                                   (((IData)(vlSelfRef.bn_alu_shift_value) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.bn_alu_src)))))))))
                              : (((((((((0x74U == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U))) 
                                        | (0x6cU == 
                                           (0xffcU 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) 
                                       | (0x78U == 
                                          (0xffcU & 
                                           ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                                      | (0x7cU == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))) 
                                     | (0x5cU == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))) 
                                    | (0x60U == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U)))) 
                                   | (0x58U == (0xffcU 
                                                & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) 
                                  | (0x64U == (0xffcU 
                                               & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                  << 2U))))
                                  ? ((0x74U == (0xffcU 
                                                & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))
                                      ? (IData)(vlSelfRef.bn_alu_operand)
                                      : ((0x6cU == 
                                          (0xffcU & 
                                           ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))
                                          ? ((((IData)(vlSelfRef.bn_relu_bypass) 
                                               << 6U) 
                                              | (((IData)(vlSelfRef.bn_mul_prelu) 
                                                  << 5U) 
                                                 | ((IData)(vlSelfRef.bn_mul_bypass) 
                                                    << 4U))) 
                                             | (((IData)(vlSelfRef.bn_alu_algo) 
                                                 << 2U) 
                                                | (((IData)(vlSelfRef.bn_alu_bypass) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.bn_bypass))))
                                          : ((0x78U 
                                              == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))
                                              ? (((IData)(vlSelfRef.bn_mul_shift_value) 
                                                  << 8U) 
                                                 | (IData)(vlSelfRef.bn_mul_src))
                                              : ((0x7cU 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))
                                                  ? (IData)(vlSelfRef.bn_mul_operand)
                                                  : 
                                                 ((0x5cU 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))
                                                   ? 
                                                  (((IData)(vlSelfRef.bs_alu_shift_value) 
                                                    << 8U) 
                                                   | (IData)(vlSelfRef.bs_alu_src))
                                                   : 
                                                  ((0x60U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? (IData)(vlSelfRef.bs_alu_operand)
                                                    : 
                                                   ((0x58U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))
                                                     ? 
                                                    ((((IData)(vlSelfRef.bs_relu_bypass) 
                                                       << 6U) 
                                                      | (((IData)(vlSelfRef.bs_mul_prelu) 
                                                          << 5U) 
                                                         | ((IData)(vlSelfRef.bs_mul_bypass) 
                                                            << 4U))) 
                                                     | (((IData)(vlSelfRef.bs_alu_algo) 
                                                         << 2U) 
                                                        | (((IData)(vlSelfRef.bs_alu_bypass) 
                                                            << 1U) 
                                                           | (IData)(vlSelfRef.bs_bypass))))
                                                     : 
                                                    (((IData)(vlSelfRef.bs_mul_shift_value) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.bs_mul_src)))))))))
                                  : (((((((((0x68U 
                                             == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U))) 
                                            | (0x84U 
                                               == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))) 
                                           | (0x8cU 
                                              == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))) 
                                          | (0x90U 
                                             == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U)))) 
                                         | (0x94U == 
                                            (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))) 
                                        | (0x88U == 
                                           (0xffcU 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) 
                                       | (0x80U == 
                                          (0xffcU & 
                                           ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                                      | (0x98U == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U))))
                                      ? ((0x68U == 
                                          (0xffcU & 
                                           ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))
                                          ? (IData)(vlSelfRef.bs_mul_operand)
                                          : ((0x84U 
                                              == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))
                                              ? (((IData)(vlSelfRef.ew_alu_cvt_bypass) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.ew_alu_src))
                                              : ((0x8cU 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))
                                                  ? vlSelfRef.ew_alu_cvt_offset
                                                  : 
                                                 ((0x90U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))
                                                   ? (IData)(vlSelfRef.ew_alu_cvt_scale)
                                                   : 
                                                  ((0x94U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? (IData)(vlSelfRef.ew_alu_cvt_truncate)
                                                    : 
                                                   ((0x88U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSelfRef.ew_alu_operand
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                          << 2U)))
                                                      ? 
                                                     ((((IData)(vlSelfRef.ew_lut_bypass) 
                                                        << 6U) 
                                                       | (((IData)(vlSelfRef.ew_mul_prelu) 
                                                           << 5U) 
                                                          | ((IData)(vlSelfRef.ew_mul_bypass) 
                                                             << 4U))) 
                                                      | (((IData)(vlSelfRef.ew_alu_algo) 
                                                          << 2U) 
                                                         | (((IData)(vlSelfRef.ew_alu_bypass) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.ew_bypass))))
                                                      : 
                                                     (((IData)(vlSelfRef.ew_mul_cvt_bypass) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.ew_mul_src)))))))))
                                      : (((((((((0xa0U 
                                                 == 
                                                 (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U))) 
                                                | (0xa4U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))) 
                                               | (0xa8U 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))) 
                                              | (0x9cU 
                                                 == 
                                                 (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))) 
                                             | (0xacU 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U)))) 
                                            | (0x4cU 
                                               == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))) 
                                           | (0x48U 
                                              == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))) 
                                          | (0xb8U 
                                             == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U))))
                                          ? ((0xa0U 
                                              == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))
                                              ? vlSelfRef.ew_mul_cvt_offset
                                              : ((0xa4U 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))
                                                  ? (IData)(vlSelfRef.ew_mul_cvt_scale)
                                                  : 
                                                 ((0xa8U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))
                                                   ? (IData)(vlSelfRef.ew_mul_cvt_truncate)
                                                   : 
                                                  ((0x9cU 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? vlSelfRef.ew_mul_operand
                                                    : 
                                                   ((0xacU 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))
                                                     ? (IData)(vlSelfRef.ew_truncate)
                                                     : 
                                                    ((0x4cU 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSelfRef.dst_base_addr_high
                                                      : 
                                                     ((0x48U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U)))
                                                       ? vlSelfRef.dst_base_addr_low
                                                       : vlSelfRef.dst_batch_stride)))))))
                                          : (((((((
                                                   ((0xb4U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U))) 
                                                    | (0x50U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U)))) 
                                                   | (0x54U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                          << 2U)))) 
                                                  | (0xb0U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))) 
                                                 | (0x38U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))) 
                                                | (0xdcU 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))) 
                                               | (0xf0U 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))) 
                                              | (0xf4U 
                                                 == 
                                                 (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U))))
                                              ? ((0xb4U 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))
                                                  ? (IData)(vlSelfRef.dst_ram_type)
                                                  : 
                                                 ((0x50U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))
                                                   ? vlSelfRef.dst_line_stride
                                                   : 
                                                  ((0x54U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? vlSelfRef.dst_surface_stride
                                                    : 
                                                   ((0xb0U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))
                                                     ? 
                                                    (((IData)(vlSelfRef.batch_number) 
                                                      << 8U) 
                                                     | ((((IData)(vlSelfRef.nan_to_zero) 
                                                          << 3U) 
                                                         | ((IData)(vlSelfRef.winograd) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.output_dst) 
                                                            << 1U) 
                                                           | (IData)(vlSelfRef.flying_mode))))
                                                     : 
                                                    ((0x38U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                          << 2U)))
                                                      ? (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d0_op_en)
                                                      : 
                                                     ((0xdcU 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U)))
                                                       ? 
                                                      ((((IData)(vlSelfRef.perf_nan_inf_count_en) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.perf_sat_en) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.perf_lut_en) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.perf_dma_en)))
                                                       : 
                                                      ((0xf0U 
                                                        == 
                                                        (0xffcU 
                                                         & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                            << 2U)))
                                                        ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_lut_hybrid
                                                        : vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_lut_le_hit)))))))
                                              : (((
                                                   ((((((0xf8U 
                                                         == 
                                                         (0xffcU 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                             << 2U))) 
                                                        | (0xe8U 
                                                           == 
                                                           (0xffcU 
                                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                               << 2U)))) 
                                                       | (0xe4U 
                                                          == 
                                                          (0xffcU 
                                                           & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                              << 2U)))) 
                                                      | (0xecU 
                                                         == 
                                                         (0xffcU 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                             << 2U)))) 
                                                     | (0xe0U 
                                                        == 
                                                        (0xffcU 
                                                         & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                            << 2U)))) 
                                                    | (0xccU 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U)))) 
                                                   | (0xd4U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                          << 2U)))) 
                                                  | (0xd0U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U))))
                                                  ? 
                                                 ((0xf8U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))
                                                   ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_lut_lo_hit
                                                   : 
                                                  ((0xe8U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_lut_oflow
                                                    : 
                                                   ((0xe4U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_lut_uflow
                                                     : 
                                                    ((0xecU 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_out_saturation
                                                      : 
                                                     ((0xe0U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U)))
                                                       ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_wdma_stall
                                                       : 
                                                      ((0xccU 
                                                        == 
                                                        (0xffcU 
                                                         & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                            << 2U)))
                                                        ? (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_status_unequal)
                                                        : 
                                                       ((0xd4U 
                                                         == 
                                                         (0xffcU 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                             << 2U)))
                                                         ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_status_inf_input_num
                                                         : vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_status_nan_input_num)))))))
                                                  : 
                                                 ((0xd8U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))
                                                   ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d0_status_nan_output_num
                                                   : 0U)))))));
    vlSelfRef.__PVT__nvdla_sdp_d_data_format_0_wren 
        = ((0xbcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_bn_alu_cfg_0_wren 
        = ((0x70U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_bn_cfg_0_wren = 
        ((0x6cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                              << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_bn_mul_cfg_0_wren 
        = ((0x78U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_bs_alu_cfg_0_wren 
        = ((0x5cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_bs_cfg_0_wren = 
        ((0x58U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                              << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_bs_mul_cfg_0_wren 
        = ((0x64U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_ew_alu_cfg_0_wren 
        = ((0x84U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_ew_cfg_0_wren = 
        ((0x80U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                              << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_ew_mul_cfg_0_wren 
        = ((0x98U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_feature_mode_cfg_0_wren 
        = ((0xb0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_perf_enable_0_wren 
        = ((0xdcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d0_reg_wr_en));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_REG_dual___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d1__0(VNV_nvdla_NV_NVDLA_SDP_REG_dual* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_SDP_REG_dual___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d1__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en) {
        if (((((((((0xc0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                        << 2U))) | 
                   (0xc4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                        << 2U)))) | 
                  (0xc8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                       << 2U)))) | 
                 (0x44U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                      << 2U)))) | (0x40U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))) 
               | (0x3cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                      << 2U)))) | (0xbcU 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))) 
             | (0x70U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                    << 2U))))) {
            if ((0xc0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_CVT_OFFSET_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.cvt_offset,
                                 32,vlSelfRef.cvt_offset);
                }
            } else if ((0xc4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_CVT_SCALE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.cvt_scale,
                                 32,(IData)(vlSelfRef.cvt_scale));
                }
            } else if ((0xc8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_CVT_SHIFT_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.cvt_shift,
                                 32,(IData)(vlSelfRef.cvt_shift));
                }
            } else if ((0x44U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DATA_CUBE_CHANNEL_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.channel,
                                 32,(IData)(vlSelfRef.channel));
                }
            } else if ((0x40U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DATA_CUBE_HEIGHT_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.height,
                                 32,(IData)(vlSelfRef.height));
                }
            } else if ((0x3cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DATA_CUBE_WIDTH_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.width,
                                 32,(IData)(vlSelfRef.width));
                }
            } else if ((0xbcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DATA_FORMAT_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,(((IData)(vlSelfRef.out_precision) 
                                      << 2U) | (IData)(vlSelfRef.proc_precision)),
                                 32,(((IData)(vlSelfRef.out_precision) 
                                      << 2U) | (IData)(vlSelfRef.proc_precision)));
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_BN_ALU_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                      >> 0x16U)),32,
                             (((IData)(vlSelfRef.bn_alu_shift_value) 
                               << 8U) | (IData)(vlSelfRef.bn_alu_src)),
                             32,(((IData)(vlSelfRef.bn_alu_shift_value) 
                                  << 8U) | (IData)(vlSelfRef.bn_alu_src)));
            }
        } else if (((((((((0x74U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U))) 
                          | (0x6cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0x78U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))) 
                        | (0x7cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) 
                       | (0x5cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                              << 2U)))) 
                      | (0x60U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                             << 2U)))) 
                     | (0x58U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                    | (0x64U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U))))) {
            if ((0x74U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_BN_ALU_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.bn_alu_operand,
                                 32,(IData)(vlSelfRef.bn_alu_operand));
                }
            } else if ((0x6cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_BN_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,((((IData)(vlSelfRef.bn_relu_bypass) 
                                       << 6U) | (((IData)(vlSelfRef.bn_mul_prelu) 
                                                  << 5U) 
                                                 | ((IData)(vlSelfRef.bn_mul_bypass) 
                                                    << 4U))) 
                                     | (((IData)(vlSelfRef.bn_alu_algo) 
                                         << 2U) | (
                                                   ((IData)(vlSelfRef.bn_alu_bypass) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.bn_bypass)))),
                                 32,((((IData)(vlSelfRef.bn_relu_bypass) 
                                       << 6U) | (((IData)(vlSelfRef.bn_mul_prelu) 
                                                  << 5U) 
                                                 | ((IData)(vlSelfRef.bn_mul_bypass) 
                                                    << 4U))) 
                                     | (((IData)(vlSelfRef.bn_alu_algo) 
                                         << 2U) | (
                                                   ((IData)(vlSelfRef.bn_alu_bypass) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.bn_bypass)))));
                }
            } else if ((0x78U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_BN_MUL_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,(((IData)(vlSelfRef.bn_mul_shift_value) 
                                      << 8U) | (IData)(vlSelfRef.bn_mul_src)),
                                 32,(((IData)(vlSelfRef.bn_mul_shift_value) 
                                      << 8U) | (IData)(vlSelfRef.bn_mul_src)));
                }
            } else if ((0x7cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_BN_MUL_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.bn_mul_operand,
                                 32,(IData)(vlSelfRef.bn_mul_operand));
                }
            } else if ((0x5cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_BS_ALU_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,(((IData)(vlSelfRef.bs_alu_shift_value) 
                                      << 8U) | (IData)(vlSelfRef.bs_alu_src)),
                                 32,(((IData)(vlSelfRef.bs_alu_shift_value) 
                                      << 8U) | (IData)(vlSelfRef.bs_alu_src)));
                }
            } else if ((0x60U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_BS_ALU_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.bs_alu_operand,
                                 32,(IData)(vlSelfRef.bs_alu_operand));
                }
            } else if ((0x58U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_BS_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,((((IData)(vlSelfRef.bs_relu_bypass) 
                                       << 6U) | (((IData)(vlSelfRef.bs_mul_prelu) 
                                                  << 5U) 
                                                 | ((IData)(vlSelfRef.bs_mul_bypass) 
                                                    << 4U))) 
                                     | (((IData)(vlSelfRef.bs_alu_algo) 
                                         << 2U) | (
                                                   ((IData)(vlSelfRef.bs_alu_bypass) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.bs_bypass)))),
                                 32,((((IData)(vlSelfRef.bs_relu_bypass) 
                                       << 6U) | (((IData)(vlSelfRef.bs_mul_prelu) 
                                                  << 5U) 
                                                 | ((IData)(vlSelfRef.bs_mul_bypass) 
                                                    << 4U))) 
                                     | (((IData)(vlSelfRef.bs_alu_algo) 
                                         << 2U) | (
                                                   ((IData)(vlSelfRef.bs_alu_bypass) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.bs_bypass)))));
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_BS_MUL_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                      >> 0x16U)),32,
                             (((IData)(vlSelfRef.bs_mul_shift_value) 
                               << 8U) | (IData)(vlSelfRef.bs_mul_src)),
                             32,(((IData)(vlSelfRef.bs_mul_shift_value) 
                                  << 8U) | (IData)(vlSelfRef.bs_mul_src)));
            }
        } else if (((((((((0x68U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U))) 
                          | (0x84U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0x8cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))) 
                        | (0x90U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) 
                       | (0x94U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                              << 2U)))) 
                      | (0x88U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                             << 2U)))) 
                     | (0x80U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                    | (0x98U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U))))) {
            if ((0x68U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_BS_MUL_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.bs_mul_operand,
                                 32,(IData)(vlSelfRef.bs_mul_operand));
                }
            } else if ((0x84U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_ALU_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,(((IData)(vlSelfRef.ew_alu_cvt_bypass) 
                                      << 1U) | (IData)(vlSelfRef.ew_alu_src)),
                                 32,(((IData)(vlSelfRef.ew_alu_cvt_bypass) 
                                      << 1U) | (IData)(vlSelfRef.ew_alu_src)));
                }
            } else if ((0x8cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_ALU_CVT_OFFSET_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.ew_alu_cvt_offset,
                                 32,vlSelfRef.ew_alu_cvt_offset);
                }
            } else if ((0x90U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_ALU_CVT_SCALE_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.ew_alu_cvt_scale,
                                 32,(IData)(vlSelfRef.ew_alu_cvt_scale));
                }
            } else if ((0x94U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_ALU_CVT_TRUNCATE_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.ew_alu_cvt_truncate,
                                 32,(IData)(vlSelfRef.ew_alu_cvt_truncate));
                }
            } else if ((0x88U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_ALU_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.ew_alu_operand,
                                 32,vlSelfRef.ew_alu_operand);
                }
            } else if ((0x80U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,((((IData)(vlSelfRef.ew_lut_bypass) 
                                       << 6U) | (((IData)(vlSelfRef.ew_mul_prelu) 
                                                  << 5U) 
                                                 | ((IData)(vlSelfRef.ew_mul_bypass) 
                                                    << 4U))) 
                                     | (((IData)(vlSelfRef.ew_alu_algo) 
                                         << 2U) | (
                                                   ((IData)(vlSelfRef.ew_alu_bypass) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.ew_bypass)))),
                                 32,((((IData)(vlSelfRef.ew_lut_bypass) 
                                       << 6U) | (((IData)(vlSelfRef.ew_mul_prelu) 
                                                  << 5U) 
                                                 | ((IData)(vlSelfRef.ew_mul_bypass) 
                                                    << 4U))) 
                                     | (((IData)(vlSelfRef.ew_alu_algo) 
                                         << 2U) | (
                                                   ((IData)(vlSelfRef.ew_alu_bypass) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.ew_bypass)))));
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_MUL_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                      >> 0x16U)),32,
                             (((IData)(vlSelfRef.ew_mul_cvt_bypass) 
                               << 1U) | (IData)(vlSelfRef.ew_mul_src)),
                             32,(((IData)(vlSelfRef.ew_mul_cvt_bypass) 
                                  << 1U) | (IData)(vlSelfRef.ew_mul_src)));
            }
        } else if (((((((((0xa0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U))) 
                          | (0xa4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0xa8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))) 
                        | (0x9cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) 
                       | (0xacU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                              << 2U)))) 
                      | (0x4cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                             << 2U)))) 
                     | (0x48U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                    | (0xb8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U))))) {
            if ((0xa0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_MUL_CVT_OFFSET_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.ew_mul_cvt_offset,
                                 32,vlSelfRef.ew_mul_cvt_offset);
                }
            } else if ((0xa4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_MUL_CVT_SCALE_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.ew_mul_cvt_scale,
                                 32,(IData)(vlSelfRef.ew_mul_cvt_scale));
                }
            } else if ((0xa8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_MUL_CVT_TRUNCATE_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.ew_mul_cvt_truncate,
                                 32,(IData)(vlSelfRef.ew_mul_cvt_truncate));
                }
            } else if ((0x9cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_MUL_SRC_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.ew_mul_operand,
                                 32,vlSelfRef.ew_mul_operand);
                }
            } else if ((0xacU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DP_EW_TRUNCATE_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.ew_truncate,
                                 32,(IData)(vlSelfRef.ew_truncate));
                }
            } else if ((0x4cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DST_BASE_ADDR_HIGH_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.dst_base_addr_high,
                                 32,vlSelfRef.dst_base_addr_high);
                }
            } else if ((0x48U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DST_BASE_ADDR_LOW_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.dst_base_addr_low,
                                 32,vlSelfRef.dst_base_addr_low);
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DST_BATCH_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                      >> 0x16U)),32,
                             vlSelfRef.dst_batch_stride,
                             32,vlSelfRef.dst_batch_stride);
            }
        } else if (((((((((0xb4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U))) 
                          | (0x50U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0x54U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))) 
                        | (0xb0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) 
                       | (0x38U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                              << 2U)))) 
                      | (0xdcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                             << 2U)))) 
                     | (0xf0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                    | (0xf4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U))))) {
            if ((0xb4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DST_DMA_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.dst_ram_type,
                                 32,(IData)(vlSelfRef.dst_ram_type));
                }
            } else if ((0x50U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DST_LINE_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.dst_line_stride,
                                 32,vlSelfRef.dst_line_stride);
                }
            } else if ((0x54U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_DST_SURFACE_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.dst_surface_stride,
                                 32,vlSelfRef.dst_surface_stride);
                }
            } else if ((0xb0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_FEATURE_MODE_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,(((IData)(vlSelfRef.batch_number) 
                                      << 8U) | ((((IData)(vlSelfRef.nan_to_zero) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.winograd) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.output_dst) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.flying_mode)))),
                                 32,(((IData)(vlSelfRef.batch_number) 
                                      << 8U) | ((((IData)(vlSelfRef.nan_to_zero) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.winograd) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.output_dst) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.flying_mode)))));
                }
            } else if ((0x38U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_OP_ENABLE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d1_op_en,
                                 32,(IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d1_op_en));
                }
            } else if ((0xdcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: NVDLA_SDP_D_PERF_ENABLE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)),
                                 32,((((IData)(vlSelfRef.perf_nan_inf_count_en) 
                                       << 3U) | ((IData)(vlSelfRef.perf_sat_en) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.perf_lut_en) 
                                         << 1U) | (IData)(vlSelfRef.perf_dma_en))),
                                 32,((((IData)(vlSelfRef.perf_nan_inf_count_en) 
                                       << 3U) | ((IData)(vlSelfRef.perf_sat_en) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.perf_lut_en) 
                                         << 1U) | (IData)(vlSelfRef.perf_dma_en))));
                }
            } else if ((0xf0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: read-only reg wr: NVDLA_SDP_D_PERF_LUT_HYBRID_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1034, "");
                }
            } else {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: read-only reg wr: NVDLA_SDP_D_PERF_LUT_LE_HIT_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1038, "");
                }
            }
        } else if (((((((((0xf8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U))) 
                          | (0xe8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0xe4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))) 
                        | (0xecU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) 
                       | (0xe0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                              << 2U)))) 
                      | (0xccU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                             << 2U)))) 
                     | (0xd4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                    | (0xd0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                           << 2U))))) {
            if ((0xf8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: read-only reg wr: NVDLA_SDP_D_PERF_LUT_LO_HIT_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1042, "");
                }
            } else if ((0xe8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: read-only reg wr: NVDLA_SDP_D_PERF_LUT_OFLOW_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1046, "");
                }
            } else if ((0xe4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: read-only reg wr: NVDLA_SDP_D_PERF_LUT_UFLOW_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1050, "");
                }
            } else if ((0xecU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: read-only reg wr: NVDLA_SDP_D_PERF_OUT_SATURATION_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1054, "");
                }
            } else if ((0xe0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: read-only reg wr: NVDLA_SDP_D_PERF_WDMA_WRITE_STALL_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1058, "");
                }
            } else if ((0xccU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: read-only reg wr: NVDLA_SDP_D_STATUS_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1062, "");
                }
            } else if ((0xd4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: read-only reg wr: NVDLA_SDP_D_STATUS_INF_INPUT_NUM_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1066, "");
                }
            } else {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: read-only reg wr: NVDLA_SDP_D_STATUS_NAN_INPUT_NUM_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1070, "");
                }
            }
        } else if ((0xd8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: read-only reg wr: NVDLA_SDP_D_STATUS_NAN_OUTPUT_NUM_0 = 0x%x\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                      >> 0x16U)));
            }
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1074, "");
            }
        } else {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_p.u_NV_NVDLA_sdp.u_reg.u_dual_reg_d1: reg wr: Unknown register (0x%x) = 0x%x\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),12,
                             (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                        << 2U)),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                      >> 0x16U)));
            }
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_invalid_wr))) {
                VL_WRITEF_NX("ERROR: write to undefined register!\n",0);
                VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/sdp/NV_NVDLA_SDP_REG_dual.v", 1078, "");
            }
        }
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_REG_dual___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d1__1(VNV_nvdla_NV_NVDLA_SDP_REG_dual* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_SDP_REG_dual___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d1__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__nvdla_core_rstn) {
        if (vlSelfRef.__PVT__nvdla_sdp_d_dp_ew_alu_cfg_0_wren) {
            vlSelfRef.ew_alu_cvt_bypass = (1U & (IData)(
                                                        (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                         >> 0x17U)));
            vlSelfRef.ew_alu_src = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x16U)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_dp_ew_mul_cfg_0_wren) {
            vlSelfRef.ew_mul_cvt_bypass = (1U & (IData)(
                                                        (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                         >> 0x17U)));
            vlSelfRef.ew_mul_src = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x16U)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_perf_enable_0_wren) {
            vlSelfRef.perf_nan_inf_count_en = (1U & (IData)(
                                                            (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                             >> 0x19U)));
            vlSelfRef.perf_lut_en = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x17U)));
            vlSelfRef.perf_dma_en = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x16U)));
            vlSelfRef.perf_sat_en = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x18U)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_feature_mode_cfg_0_wren) {
            vlSelfRef.batch_number = (0x1fU & (IData)(
                                                      (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                       >> 0x1eU)));
            vlSelfRef.winograd = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                >> 0x18U)));
            vlSelfRef.output_dst = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x17U)));
            vlSelfRef.nan_to_zero = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x19U)));
            vlSelfRef.flying_mode = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x16U)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_dp_ew_cfg_0_wren) {
            vlSelfRef.ew_lut_bypass = (1U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                     >> 0x1cU)));
            vlSelfRef.ew_mul_prelu = (1U & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                    >> 0x1bU)));
            vlSelfRef.ew_mul_bypass = (1U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                     >> 0x1aU)));
            vlSelfRef.ew_alu_algo = (3U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x18U)));
            vlSelfRef.ew_alu_bypass = (1U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                     >> 0x17U)));
            vlSelfRef.ew_bypass = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                 >> 0x16U)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_dp_bn_alu_cfg_0_wren) {
            vlSelfRef.bn_alu_src = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x16U)));
            vlSelfRef.bn_alu_shift_value = (0x3fU & (IData)(
                                                            (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                             >> 0x1eU)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_dp_bn_mul_cfg_0_wren) {
            vlSelfRef.bn_mul_src = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x16U)));
            vlSelfRef.bn_mul_shift_value = (0xffU & (IData)(
                                                            (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                             >> 0x1eU)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_dp_bs_alu_cfg_0_wren) {
            vlSelfRef.bs_alu_src = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x16U)));
            vlSelfRef.bs_alu_shift_value = (0x3fU & (IData)(
                                                            (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                             >> 0x1eU)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_dp_bs_mul_cfg_0_wren) {
            vlSelfRef.bs_mul_src = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x16U)));
            vlSelfRef.bs_mul_shift_value = (0xffU & (IData)(
                                                            (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                             >> 0x1eU)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_dp_bn_cfg_0_wren) {
            vlSelfRef.bn_mul_bypass = (1U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                     >> 0x1aU)));
            vlSelfRef.bn_alu_bypass = (1U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                     >> 0x17U)));
            vlSelfRef.bn_relu_bypass = (1U & (IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                      >> 0x1cU)));
            vlSelfRef.bn_alu_algo = (3U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x18U)));
            vlSelfRef.bn_mul_prelu = (1U & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                    >> 0x1bU)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_dp_bs_cfg_0_wren) {
            vlSelfRef.bs_mul_bypass = (1U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                     >> 0x1aU)));
            vlSelfRef.bs_alu_bypass = (1U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                     >> 0x17U)));
            vlSelfRef.bs_relu_bypass = (1U & (IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                      >> 0x1cU)));
            vlSelfRef.bs_alu_algo = (3U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x18U)));
            vlSelfRef.bs_mul_prelu = (1U & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                    >> 0x1bU)));
        }
        if (vlSelfRef.__PVT__nvdla_sdp_d_data_format_0_wren) {
            vlSelfRef.out_precision = (3U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                     >> 0x18U)));
            vlSelfRef.proc_precision = (3U & (IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                      >> 0x16U)));
        }
        if (((0x8cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelfRef.ew_alu_cvt_offset = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x16U));
        }
        if (((0x90U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelfRef.ew_alu_cvt_scale = (0xffffU & (IData)(
                                                            (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                             >> 0x16U)));
        }
        if (((0x94U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelfRef.ew_alu_cvt_truncate = (0x3fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                        >> 0x16U)));
        }
        if (((0x88U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelfRef.ew_alu_operand = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                >> 0x16U));
        }
        if (((0xa0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelfRef.ew_mul_cvt_offset = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x16U));
        }
        if (((0xa4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelfRef.ew_mul_cvt_scale = (0xffffU & (IData)(
                                                            (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                             >> 0x16U)));
        }
        if (((0xa8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelfRef.ew_mul_cvt_truncate = (0x3fU 
                                             & (IData)(
                                                       (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                        >> 0x16U)));
        }
        if (((0x9cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelfRef.ew_mul_operand = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                >> 0x16U));
        }
        if (((0xacU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelfRef.ew_truncate = (0x3ffU & (IData)(
                                                      (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                       >> 0x16U)));
        }
        if (((0x4cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelfRef.dst_base_addr_high = (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                    >> 0x16U));
        }
        if (((0xb8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelfRef.dst_batch_stride = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x16U));
        }
        if (((0x48U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelfRef.dst_base_addr_low = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x16U));
        }
        if (((0x50U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelfRef.dst_line_stride = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                 >> 0x16U));
        }
        if (((0x54U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelfRef.dst_surface_stride = (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                    >> 0x16U));
        }
        if (((0x44U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelfRef.channel = (0x1fffU & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                    >> 0x16U)));
        }
        if (((0x40U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelfRef.height = (0x1fffU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                   >> 0x16U)));
        }
        if (((0x3cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelfRef.width = (0x1fffU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                  >> 0x16U)));
        }
        if (((0xb4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelfRef.dst_ram_type = (1U & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                    >> 0x16U)));
        }
        if (((0xc4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelfRef.cvt_scale = (0xffffU & (IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                      >> 0x16U)));
        }
        if (((0xc0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelfRef.cvt_offset = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                            >> 0x16U));
        }
        if (((0x7cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelfRef.bn_mul_operand = (0xffffU & (IData)(
                                                          (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                           >> 0x16U)));
        }
        if (((0x68U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelfRef.bs_mul_operand = (0xffffU & (IData)(
                                                          (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                           >> 0x16U)));
        }
        if (((0x74U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelfRef.bn_alu_operand = (0xffffU & (IData)(
                                                          (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                           >> 0x16U)));
        }
        if (((0x60U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelfRef.bs_alu_operand = (0xffffU & (IData)(
                                                          (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                           >> 0x16U)));
        }
        if (((0xc8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en))) {
            vlSelfRef.cvt_shift = (0x3fU & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd 
                                                    >> 0x16U)));
        }
    } else {
        vlSelfRef.ew_alu_cvt_bypass = 1U;
        vlSelfRef.ew_alu_src = 0U;
        vlSelfRef.ew_mul_cvt_bypass = 1U;
        vlSelfRef.ew_mul_src = 0U;
        vlSelfRef.perf_nan_inf_count_en = 0U;
        vlSelfRef.perf_lut_en = 0U;
        vlSelfRef.batch_number = 0U;
        vlSelfRef.winograd = 0U;
        vlSelfRef.ew_lut_bypass = 1U;
        vlSelfRef.ew_mul_prelu = 0U;
        vlSelfRef.ew_mul_bypass = 1U;
        vlSelfRef.ew_alu_algo = 0U;
        vlSelfRef.ew_alu_bypass = 1U;
        vlSelfRef.ew_bypass = 1U;
        vlSelfRef.bn_alu_src = 0U;
        vlSelfRef.bn_mul_src = 0U;
        vlSelfRef.bs_alu_src = 0U;
        vlSelfRef.bs_mul_src = 0U;
        vlSelfRef.perf_dma_en = 0U;
        vlSelfRef.bn_mul_bypass = 1U;
        vlSelfRef.bn_alu_bypass = 1U;
        vlSelfRef.bs_mul_bypass = 1U;
        vlSelfRef.bs_alu_bypass = 1U;
        vlSelfRef.out_precision = 0U;
        vlSelfRef.ew_alu_cvt_offset = 0U;
        vlSelfRef.ew_alu_cvt_scale = 0U;
        vlSelfRef.ew_alu_cvt_truncate = 0U;
        vlSelfRef.ew_alu_operand = 0U;
        vlSelfRef.ew_mul_cvt_offset = 0U;
        vlSelfRef.ew_mul_cvt_scale = 0U;
        vlSelfRef.ew_mul_cvt_truncate = 0U;
        vlSelfRef.ew_mul_operand = 0U;
        vlSelfRef.ew_truncate = 0U;
        vlSelfRef.dst_base_addr_high = 0U;
        vlSelfRef.dst_batch_stride = 0U;
        vlSelfRef.dst_base_addr_low = 0U;
        vlSelfRef.dst_line_stride = 0U;
        vlSelfRef.dst_surface_stride = 0U;
        vlSelfRef.proc_precision = 0U;
        vlSelfRef.channel = 0U;
        vlSelfRef.height = 0U;
        vlSelfRef.output_dst = 0U;
        vlSelfRef.width = 0U;
        vlSelfRef.dst_ram_type = 0U;
        vlSelfRef.nan_to_zero = 0U;
        vlSelfRef.bn_alu_shift_value = 0U;
        vlSelfRef.bs_alu_shift_value = 0U;
        vlSelfRef.flying_mode = 0U;
        vlSelfRef.bn_relu_bypass = 1U;
        vlSelfRef.bs_relu_bypass = 1U;
        vlSelfRef.bn_alu_algo = 0U;
        vlSelfRef.bs_alu_algo = 0U;
        vlSelfRef.perf_sat_en = 0U;
        vlSelfRef.bn_mul_prelu = 0U;
        vlSelfRef.bs_mul_prelu = 1U;
        vlSelfRef.bn_mul_shift_value = 0U;
        vlSelfRef.bs_mul_shift_value = 0U;
        vlSelfRef.cvt_scale = 0U;
        vlSelfRef.cvt_offset = 0U;
        vlSelfRef.bn_mul_operand = 0U;
        vlSelfRef.bs_mul_operand = 0U;
        vlSelfRef.bn_alu_operand = 0U;
        vlSelfRef.bs_alu_operand = 0U;
        vlSelfRef.cvt_shift = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_SDP_REG_dual___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d1__3(VNV_nvdla_NV_NVDLA_SDP_REG_dual* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_SDP_REG_dual___nba_sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d1__3\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.reg_rd_data = (((((((((0xc0U == (0xffcU 
                                               & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                  << 2U))) 
                                    | (0xc4U == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U)))) 
                                   | (0xc8U == (0xffcU 
                                                & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) 
                                  | (0x44U == (0xffcU 
                                               & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                  << 2U)))) 
                                 | (0x40U == (0xffcU 
                                              & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                 << 2U)))) 
                                | (0x3cU == (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))) 
                               | (0xbcU == (0xffcU 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) 
                              | (0x70U == (0xffcU & 
                                           ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U))))
                              ? ((0xc0U == (0xffcU 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))
                                  ? vlSelfRef.cvt_offset
                                  : ((0xc4U == (0xffcU 
                                                & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))
                                      ? (IData)(vlSelfRef.cvt_scale)
                                      : ((0xc8U == 
                                          (0xffcU & 
                                           ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))
                                          ? (IData)(vlSelfRef.cvt_shift)
                                          : ((0x44U 
                                              == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))
                                              ? (IData)(vlSelfRef.channel)
                                              : ((0x40U 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))
                                                  ? (IData)(vlSelfRef.height)
                                                  : 
                                                 ((0x3cU 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))
                                                   ? (IData)(vlSelfRef.width)
                                                   : 
                                                  ((0xbcU 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? 
                                                   (((IData)(vlSelfRef.out_precision) 
                                                     << 2U) 
                                                    | (IData)(vlSelfRef.proc_precision))
                                                    : 
                                                   (((IData)(vlSelfRef.bn_alu_shift_value) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.bn_alu_src)))))))))
                              : (((((((((0x74U == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U))) 
                                        | (0x6cU == 
                                           (0xffcU 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) 
                                       | (0x78U == 
                                          (0xffcU & 
                                           ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                                      | (0x7cU == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))) 
                                     | (0x5cU == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))) 
                                    | (0x60U == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U)))) 
                                   | (0x58U == (0xffcU 
                                                & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))) 
                                  | (0x64U == (0xffcU 
                                               & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                  << 2U))))
                                  ? ((0x74U == (0xffcU 
                                                & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                   << 2U)))
                                      ? (IData)(vlSelfRef.bn_alu_operand)
                                      : ((0x6cU == 
                                          (0xffcU & 
                                           ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))
                                          ? ((((IData)(vlSelfRef.bn_relu_bypass) 
                                               << 6U) 
                                              | (((IData)(vlSelfRef.bn_mul_prelu) 
                                                  << 5U) 
                                                 | ((IData)(vlSelfRef.bn_mul_bypass) 
                                                    << 4U))) 
                                             | (((IData)(vlSelfRef.bn_alu_algo) 
                                                 << 2U) 
                                                | (((IData)(vlSelfRef.bn_alu_bypass) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.bn_bypass))))
                                          : ((0x78U 
                                              == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))
                                              ? (((IData)(vlSelfRef.bn_mul_shift_value) 
                                                  << 8U) 
                                                 | (IData)(vlSelfRef.bn_mul_src))
                                              : ((0x7cU 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))
                                                  ? (IData)(vlSelfRef.bn_mul_operand)
                                                  : 
                                                 ((0x5cU 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))
                                                   ? 
                                                  (((IData)(vlSelfRef.bs_alu_shift_value) 
                                                    << 8U) 
                                                   | (IData)(vlSelfRef.bs_alu_src))
                                                   : 
                                                  ((0x60U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? (IData)(vlSelfRef.bs_alu_operand)
                                                    : 
                                                   ((0x58U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))
                                                     ? 
                                                    ((((IData)(vlSelfRef.bs_relu_bypass) 
                                                       << 6U) 
                                                      | (((IData)(vlSelfRef.bs_mul_prelu) 
                                                          << 5U) 
                                                         | ((IData)(vlSelfRef.bs_mul_bypass) 
                                                            << 4U))) 
                                                     | (((IData)(vlSelfRef.bs_alu_algo) 
                                                         << 2U) 
                                                        | (((IData)(vlSelfRef.bs_alu_bypass) 
                                                            << 1U) 
                                                           | (IData)(vlSelfRef.bs_bypass))))
                                                     : 
                                                    (((IData)(vlSelfRef.bs_mul_shift_value) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.bs_mul_src)))))))))
                                  : (((((((((0x68U 
                                             == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U))) 
                                            | (0x84U 
                                               == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))) 
                                           | (0x8cU 
                                              == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))) 
                                          | (0x90U 
                                             == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U)))) 
                                         | (0x94U == 
                                            (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                << 2U)))) 
                                        | (0x88U == 
                                           (0xffcU 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                               << 2U)))) 
                                       | (0x80U == 
                                          (0xffcU & 
                                           ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))) 
                                      | (0x98U == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U))))
                                      ? ((0x68U == 
                                          (0xffcU & 
                                           ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                            << 2U)))
                                          ? (IData)(vlSelfRef.bs_mul_operand)
                                          : ((0x84U 
                                              == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))
                                              ? (((IData)(vlSelfRef.ew_alu_cvt_bypass) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.ew_alu_src))
                                              : ((0x8cU 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))
                                                  ? vlSelfRef.ew_alu_cvt_offset
                                                  : 
                                                 ((0x90U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))
                                                   ? (IData)(vlSelfRef.ew_alu_cvt_scale)
                                                   : 
                                                  ((0x94U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? (IData)(vlSelfRef.ew_alu_cvt_truncate)
                                                    : 
                                                   ((0x88U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSelfRef.ew_alu_operand
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                          << 2U)))
                                                      ? 
                                                     ((((IData)(vlSelfRef.ew_lut_bypass) 
                                                        << 6U) 
                                                       | (((IData)(vlSelfRef.ew_mul_prelu) 
                                                           << 5U) 
                                                          | ((IData)(vlSelfRef.ew_mul_bypass) 
                                                             << 4U))) 
                                                      | (((IData)(vlSelfRef.ew_alu_algo) 
                                                          << 2U) 
                                                         | (((IData)(vlSelfRef.ew_alu_bypass) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.ew_bypass))))
                                                      : 
                                                     (((IData)(vlSelfRef.ew_mul_cvt_bypass) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.ew_mul_src)))))))))
                                      : (((((((((0xa0U 
                                                 == 
                                                 (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U))) 
                                                | (0xa4U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))) 
                                               | (0xa8U 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))) 
                                              | (0x9cU 
                                                 == 
                                                 (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))) 
                                             | (0xacU 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U)))) 
                                            | (0x4cU 
                                               == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))) 
                                           | (0x48U 
                                              == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))) 
                                          | (0xb8U 
                                             == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                    << 2U))))
                                          ? ((0xa0U 
                                              == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U)))
                                              ? vlSelfRef.ew_mul_cvt_offset
                                              : ((0xa4U 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))
                                                  ? (IData)(vlSelfRef.ew_mul_cvt_scale)
                                                  : 
                                                 ((0xa8U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))
                                                   ? (IData)(vlSelfRef.ew_mul_cvt_truncate)
                                                   : 
                                                  ((0x9cU 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? vlSelfRef.ew_mul_operand
                                                    : 
                                                   ((0xacU 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))
                                                     ? (IData)(vlSelfRef.ew_truncate)
                                                     : 
                                                    ((0x4cU 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSelfRef.dst_base_addr_high
                                                      : 
                                                     ((0x48U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U)))
                                                       ? vlSelfRef.dst_base_addr_low
                                                       : vlSelfRef.dst_batch_stride)))))))
                                          : (((((((
                                                   ((0xb4U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U))) 
                                                    | (0x50U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U)))) 
                                                   | (0x54U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                          << 2U)))) 
                                                  | (0xb0U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))) 
                                                 | (0x38U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))) 
                                                | (0xdcU 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))) 
                                               | (0xf0U 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))) 
                                              | (0xf4U 
                                                 == 
                                                 (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                     << 2U))))
                                              ? ((0xb4U 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                      << 2U)))
                                                  ? (IData)(vlSelfRef.dst_ram_type)
                                                  : 
                                                 ((0x50U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))
                                                   ? vlSelfRef.dst_line_stride
                                                   : 
                                                  ((0x54U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? vlSelfRef.dst_surface_stride
                                                    : 
                                                   ((0xb0U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))
                                                     ? 
                                                    (((IData)(vlSelfRef.batch_number) 
                                                      << 8U) 
                                                     | ((((IData)(vlSelfRef.nan_to_zero) 
                                                          << 3U) 
                                                         | ((IData)(vlSelfRef.winograd) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.output_dst) 
                                                            << 1U) 
                                                           | (IData)(vlSelfRef.flying_mode))))
                                                     : 
                                                    ((0x38U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                          << 2U)))
                                                      ? (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__reg2dp_d1_op_en)
                                                      : 
                                                     ((0xdcU 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U)))
                                                       ? 
                                                      ((((IData)(vlSelfRef.perf_nan_inf_count_en) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.perf_sat_en) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.perf_lut_en) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.perf_dma_en)))
                                                       : 
                                                      ((0xf0U 
                                                        == 
                                                        (0xffcU 
                                                         & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                            << 2U)))
                                                        ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_lut_hybrid
                                                        : vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_lut_le_hit)))))))
                                              : (((
                                                   ((((((0xf8U 
                                                         == 
                                                         (0xffcU 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                             << 2U))) 
                                                        | (0xe8U 
                                                           == 
                                                           (0xffcU 
                                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                               << 2U)))) 
                                                       | (0xe4U 
                                                          == 
                                                          (0xffcU 
                                                           & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                              << 2U)))) 
                                                      | (0xecU 
                                                         == 
                                                         (0xffcU 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                             << 2U)))) 
                                                     | (0xe0U 
                                                        == 
                                                        (0xffcU 
                                                         & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                            << 2U)))) 
                                                    | (0xccU 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U)))) 
                                                   | (0xd4U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                          << 2U)))) 
                                                  | (0xd0U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U))))
                                                  ? 
                                                 ((0xf8U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))
                                                   ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_lut_lo_hit
                                                   : 
                                                  ((0xe8U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                        << 2U)))
                                                    ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_lut_oflow
                                                    : 
                                                   ((0xe4U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_lut_uflow
                                                     : 
                                                    ((0xecU 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_out_saturation
                                                      : 
                                                     ((0xe0U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                           << 2U)))
                                                       ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_wdma_stall
                                                       : 
                                                      ((0xccU 
                                                        == 
                                                        (0xffcU 
                                                         & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                            << 2U)))
                                                        ? (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_status_unequal)
                                                        : 
                                                       ((0xd4U 
                                                         == 
                                                         (0xffcU 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                             << 2U)))
                                                         ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_status_inf_input_num
                                                         : vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_status_nan_input_num)))))))
                                                  : 
                                                 ((0xd8U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                                       << 2U)))
                                                   ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__dp2reg_d1_status_nan_output_num
                                                   : 0U)))))));
    vlSelfRef.__PVT__nvdla_sdp_d_data_format_0_wren 
        = ((0xbcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_bn_alu_cfg_0_wren 
        = ((0x70U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_bn_cfg_0_wren = 
        ((0x6cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                              << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_bn_mul_cfg_0_wren 
        = ((0x78U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_bs_alu_cfg_0_wren 
        = ((0x5cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_bs_cfg_0_wren = 
        ((0x58U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                              << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_bs_mul_cfg_0_wren 
        = ((0x64U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_ew_alu_cfg_0_wren 
        = ((0x84U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_ew_cfg_0_wren = 
        ((0x80U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                              << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_dp_ew_mul_cfg_0_wren 
        = ((0x98U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_feature_mode_cfg_0_wren 
        = ((0xb0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en));
    vlSelfRef.__PVT__nvdla_sdp_d_perf_enable_0_wren 
        = ((0xdcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__d1_reg_wr_en));
}
