// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "VNV_nvdla__pch.h"
#include "VNV_nvdla_NV_NVDLA_CDMA_dual_reg.h"
#include "VNV_nvdla__Syms.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_dual_reg___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0__0(VNV_nvdla_NV_NVDLA_CDMA_dual_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_dual_reg___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en) {
        if (((((((((0xbcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U))) | 
                   (0x58U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) | 
                  (0x5cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U)))) | 
                 (0xb0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                      << 2U)))) | (0xa4U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))) 
               | (0xa8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                      << 2U)))) | (0xacU 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))) 
             | (0xe8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                    << 2U))))) {
            if ((0xbcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_BANK_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,(((IData)(vlSelfRef.weight_bank) 
                                      << 0x10U) | (IData)(vlSelfRef.data_bank)),
                                 32,(((IData)(vlSelfRef.weight_bank) 
                                      << 0x10U) | (IData)(vlSelfRef.data_bank)));
                }
            } else if ((0x58U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_BATCH_NUMBER_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.batches,
                                 32,(IData)(vlSelfRef.batches));
                }
            } else if ((0x5cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_BATCH_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.batch_stride,
                                 32,vlSelfRef.batch_stride);
                }
            } else if ((0xb0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_CONV_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,(((IData)(vlSelfRef.conv_y_stride) 
                                      << 0x10U) | (IData)(vlSelfRef.conv_x_stride)),
                                 32,(((IData)(vlSelfRef.conv_y_stride) 
                                      << 0x10U) | (IData)(vlSelfRef.conv_x_stride)));
                }
            } else if ((0xa4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_CVT_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,(((IData)(vlSelfRef.cvt_truncate) 
                                      << 4U) | (IData)(vlSelfRef.cvt_en)),
                                 32,(((IData)(vlSelfRef.cvt_truncate) 
                                      << 4U) | (IData)(vlSelfRef.cvt_en)));
                }
            } else if ((0xa8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_CVT_OFFSET_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.cvt_offset,
                                 32,(IData)(vlSelfRef.cvt_offset));
                }
            } else if ((0xacU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_CVT_SCALE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.cvt_scale,
                                 32,(IData)(vlSelfRef.cvt_scale));
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_CYA_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x16U)),32,
                             vlSelfRef.cya,32,vlSelfRef.cya);
            }
        } else if (((((((((0x30U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U))) 
                          | (0x38U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0x34U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))) 
                        | (0x3cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) 
                       | (0x4cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                              << 2U)))) 
                      | (0x2cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                             << 2U)))) 
                     | (0x18U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                    | (0x1cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U))))) {
            if ((0x30U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_DAIN_ADDR_HIGH_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.datain_addr_high_0,
                                 32,vlSelfRef.datain_addr_high_0);
                }
            } else if ((0x38U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_DAIN_ADDR_HIGH_1_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.datain_addr_high_1,
                                 32,vlSelfRef.datain_addr_high_1);
                }
            } else if ((0x34U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_DAIN_ADDR_LOW_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.datain_addr_low_0,
                                 32,vlSelfRef.datain_addr_low_0);
                }
            } else if ((0x3cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_DAIN_ADDR_LOW_1_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.datain_addr_low_1,
                                 32,vlSelfRef.datain_addr_low_1);
                }
            } else if ((0x4cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_DAIN_MAP_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,(((IData)(vlSelfRef.surf_packed) 
                                      << 0x10U) | (IData)(vlSelfRef.line_packed)),
                                 32,(((IData)(vlSelfRef.surf_packed) 
                                      << 0x10U) | (IData)(vlSelfRef.line_packed)));
                }
            } else if ((0x2cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_DAIN_RAM_TYPE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.datain_ram_type,
                                 32,(IData)(vlSelfRef.datain_ram_type));
                }
            } else if ((0x18U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_DATAIN_FORMAT_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,(((IData)(vlSelfRef.pixel_sign_override) 
                                      << 0x14U) | (
                                                   ((IData)(vlSelfRef.pixel_mapping) 
                                                    << 0x10U) 
                                                   | (((IData)(vlSelfRef.pixel_format) 
                                                       << 8U) 
                                                      | (IData)(vlSelfRef.datain_format)))),
                                 32,(((IData)(vlSelfRef.pixel_sign_override) 
                                      << 0x14U) | (
                                                   ((IData)(vlSelfRef.pixel_mapping) 
                                                    << 0x10U) 
                                                   | (((IData)(vlSelfRef.pixel_format) 
                                                       << 8U) 
                                                      | (IData)(vlSelfRef.datain_format)))));
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_DATAIN_SIZE_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x16U)),32,
                             (((IData)(vlSelfRef.datain_height) 
                               << 0x10U) | (IData)(vlSelfRef.datain_width)),
                             32,(((IData)(vlSelfRef.datain_height) 
                                  << 0x10U) | (IData)(vlSelfRef.datain_width)));
            }
        } else if (((((((((0x20U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U))) 
                          | (0x24U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0x60U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))) 
                        | (0x64U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) 
                       | (0xccU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                              << 2U)))) 
                      | (0xd0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                             << 2U)))) 
                     | (0x40U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                    | (0x44U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U))))) {
            if ((0x20U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_DATAIN_SIZE_1_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.datain_channel,
                                 32,(IData)(vlSelfRef.datain_channel));
                }
            } else if ((0x24U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_DATAIN_SIZE_EXT_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,(((IData)(vlSelfRef.datain_height_ext) 
                                      << 0x10U) | (IData)(vlSelfRef.datain_width_ext)),
                                 32,(((IData)(vlSelfRef.datain_height_ext) 
                                      << 0x10U) | (IData)(vlSelfRef.datain_width_ext)));
                }
            } else if ((0x60U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_ENTRY_PER_SLICE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.entries,
                                 32,(IData)(vlSelfRef.entries));
                }
            } else if ((0x64U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_FETCH_GRAIN_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.grains,
                                 32,(IData)(vlSelfRef.grains));
                }
            } else if ((0xccU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: read-only reg wr: NVDLA_CDMA_D_INF_INPUT_DATA_NUM_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1065, "");
                }
            } else if ((0xd0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: read-only reg wr: NVDLA_CDMA_D_INF_INPUT_WEIGHT_NUM_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1069, "");
                }
            } else if ((0x40U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_LINE_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.line_stride,
                                 32,vlSelfRef.line_stride);
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_LINE_UV_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x16U)),32,
                             vlSelfRef.uv_line_stride,
                             32,vlSelfRef.uv_line_stride);
            }
        } else if (((((((((0x98U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U))) 
                          | (0x9cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0xa0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))) 
                        | (0x14U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) 
                       | (0xc0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                              << 2U)))) 
                      | (0xc4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                             << 2U)))) 
                     | (0xc8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                    | (0x10U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U))))) {
            if ((0x98U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_MEAN_FORMAT_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.mean_format,
                                 32,(IData)(vlSelfRef.mean_format));
                }
            } else if ((0x9cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_MEAN_GLOBAL_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,(((IData)(vlSelfRef.mean_gu) 
                                      << 0x10U) | (IData)(vlSelfRef.mean_ry)),
                                 32,(((IData)(vlSelfRef.mean_gu) 
                                      << 0x10U) | (IData)(vlSelfRef.mean_ry)));
                }
            } else if ((0xa0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_MEAN_GLOBAL_1_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,(((IData)(vlSelfRef.mean_ax) 
                                      << 0x10U) | (IData)(vlSelfRef.mean_bv)),
                                 32,(((IData)(vlSelfRef.mean_ax) 
                                      << 0x10U) | (IData)(vlSelfRef.mean_bv)));
                }
            } else if ((0x14U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_MISC_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,(((IData)(vlSelfRef.skip_weight_rls) 
                                      << 0x1cU) | (
                                                   ((IData)(vlSelfRef.skip_data_rls) 
                                                    << 0x18U) 
                                                   | (((IData)(vlSelfRef.weight_reuse) 
                                                       << 0x14U) 
                                                      | (((IData)(vlSelfRef.data_reuse) 
                                                          << 0x10U) 
                                                         | (((IData)(vlSelfRef.proc_precision) 
                                                             << 0xcU) 
                                                            | (((IData)(vlSelfRef.in_precision) 
                                                                << 8U) 
                                                               | (IData)(vlSelfRef.conv_mode))))))),
                                 32,(((IData)(vlSelfRef.skip_weight_rls) 
                                      << 0x1cU) | (
                                                   ((IData)(vlSelfRef.skip_data_rls) 
                                                    << 0x18U) 
                                                   | (((IData)(vlSelfRef.weight_reuse) 
                                                       << 0x14U) 
                                                      | (((IData)(vlSelfRef.data_reuse) 
                                                          << 0x10U) 
                                                         | (((IData)(vlSelfRef.proc_precision) 
                                                             << 0xcU) 
                                                            | (((IData)(vlSelfRef.in_precision) 
                                                                << 8U) 
                                                               | (IData)(vlSelfRef.conv_mode))))))));
                }
            } else if ((0xc0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_NAN_FLUSH_TO_ZERO_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.nan_to_zero,
                                 32,(IData)(vlSelfRef.nan_to_zero));
                }
            } else if ((0xc4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: read-only reg wr: NVDLA_CDMA_D_NAN_INPUT_DATA_NUM_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1080, "");
                }
            } else if ((0xc8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: read-only reg wr: NVDLA_CDMA_D_NAN_INPUT_WEIGHT_NUM_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1084, "");
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_OP_ENABLE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x16U)),32,
                             vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d0_op_en,
                             32,(IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d0_op_en));
            }
        } else if (((((((((0xe0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U))) 
                          | (0xd8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0xd4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))) 
                        | (0xe4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) 
                       | (0xdcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                              << 2U)))) 
                      | (0x28U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                             << 2U)))) 
                     | (0x50U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                    | (0x54U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U))))) {
            if ((0xe0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: read-only reg wr: NVDLA_CDMA_D_PERF_DAT_READ_LATENCY_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1089, "");
                }
            } else if ((0xd8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: read-only reg wr: NVDLA_CDMA_D_PERF_DAT_READ_STALL_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1093, "");
                }
            } else if ((0xd4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_PERF_ENABLE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.dma_en,
                                 32,(IData)(vlSelfRef.dma_en));
                }
            } else if ((0xe4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: read-only reg wr: NVDLA_CDMA_D_PERF_WT_READ_LATENCY_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1098, "");
                }
            } else if ((0xdcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: read-only reg wr: NVDLA_CDMA_D_PERF_WT_READ_STALL_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1102, "");
                }
            } else if ((0x28U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_PIXEL_OFFSET_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,(((IData)(vlSelfRef.pixel_y_offset) 
                                      << 0x10U) | (IData)(vlSelfRef.pixel_x_offset)),
                                 32,(((IData)(vlSelfRef.pixel_y_offset) 
                                      << 0x10U) | (IData)(vlSelfRef.pixel_x_offset)));
                }
            } else if ((0x50U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_RESERVED_X_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,(((IData)(vlSelfRef.rsv_per_uv_line) 
                                      << 0x10U) | (IData)(vlSelfRef.rsv_per_line)),
                                 32,(((IData)(vlSelfRef.rsv_per_uv_line) 
                                      << 0x10U) | (IData)(vlSelfRef.rsv_per_line)));
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_RESERVED_Y_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x16U)),32,
                             (((IData)(vlSelfRef.rsv_y_index) 
                               << 0x10U) | (IData)(vlSelfRef.rsv_height)),
                             32,(((IData)(vlSelfRef.rsv_y_index) 
                                  << 0x10U) | (IData)(vlSelfRef.rsv_height)));
            }
        } else if (((((((((0x48U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U))) 
                          | (0x78U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0x7cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))) 
                        | (0x80U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) 
                       | (0x68U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                              << 2U)))) 
                      | (0x74U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                             << 2U)))) 
                     | (0x6cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                    | (0x70U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U))))) {
            if ((0x48U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_SURF_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.surf_stride,
                                 32,vlSelfRef.surf_stride);
                }
            } else if ((0x78U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WEIGHT_ADDR_HIGH_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.weight_addr_high,
                                 32,vlSelfRef.weight_addr_high);
                }
            } else if ((0x7cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WEIGHT_ADDR_LOW_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.weight_addr_low,
                                 32,vlSelfRef.weight_addr_low);
                }
            } else if ((0x80U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WEIGHT_BYTES_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.weight_bytes,
                                 32,vlSelfRef.weight_bytes);
                }
            } else if ((0x68U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WEIGHT_FORMAT_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.weight_format,
                                 32,(IData)(vlSelfRef.weight_format));
                }
            } else if ((0x74U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WEIGHT_RAM_TYPE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.weight_ram_type,
                                 32,(IData)(vlSelfRef.weight_ram_type));
                }
            } else if ((0x6cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WEIGHT_SIZE_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.byte_per_kernel,
                                 32,vlSelfRef.byte_per_kernel);
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WEIGHT_SIZE_1_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x16U)),32,
                             vlSelfRef.weight_kernel,
                             32,(IData)(vlSelfRef.weight_kernel));
            }
        } else if ((0x84U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WGS_ADDR_HIGH_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x16U)),32,
                             vlSelfRef.wgs_addr_high,
                             32,vlSelfRef.wgs_addr_high);
            }
        } else if ((0x88U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WGS_ADDR_LOW_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x16U)),32,
                             vlSelfRef.wgs_addr_low,
                             32,vlSelfRef.wgs_addr_low);
            }
        } else if ((0x8cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WMB_ADDR_HIGH_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x16U)),32,
                             vlSelfRef.wmb_addr_high,
                             32,vlSelfRef.wmb_addr_high);
            }
        } else if ((0x90U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WMB_ADDR_LOW_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x16U)),32,
                             vlSelfRef.wmb_addr_low,
                             32,vlSelfRef.wmb_addr_low);
            }
        } else if ((0x94U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_WMB_BYTES_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x16U)),32,
                             vlSelfRef.wmb_bytes,32,
                             vlSelfRef.wmb_bytes);
            }
        } else if ((0xb4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_ZERO_PADDING_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x16U)),32,
                             (((IData)(vlSelfRef.pad_bottom) 
                               << 0x18U) | (((IData)(vlSelfRef.pad_top) 
                                             << 0x10U) 
                                            | (((IData)(vlSelfRef.pad_right) 
                                                << 8U) 
                                               | (IData)(vlSelfRef.pad_left)))),
                             32,(((IData)(vlSelfRef.pad_bottom) 
                                  << 0x18U) | (((IData)(vlSelfRef.pad_top) 
                                                << 0x10U) 
                                               | (((IData)(vlSelfRef.pad_right) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.pad_left)))));
            }
        } else if ((0xb8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: NVDLA_CDMA_D_ZERO_PADDING_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x16U)),32,
                             vlSelfRef.pad_value,32,
                             (IData)(vlSelfRef.pad_value));
            }
        } else {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d0: reg wr: Unknown register (0x%x) = 0x%x\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),12,
                             (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x16U)));
            }
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_invalid_wr))) {
                VL_WRITEF_NX("ERROR: write to undefined register!\n",0);
                VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1124, "");
            }
        }
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_dual_reg___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0__1(VNV_nvdla_NV_NVDLA_CDMA_dual_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_dual_reg___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__nvdla_core_rstn) {
        if (vlSelfRef.__PVT__nvdla_cdma_d_conv_stride_0_wren) {
            vlSelfRef.conv_y_stride = (7U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                     >> 0x26U)));
            vlSelfRef.conv_x_stride = (7U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                     >> 0x16U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_datain_size_ext_0_0_wren) {
            vlSelfRef.datain_height_ext = (0x1fffU 
                                           & (IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x26U)));
            vlSelfRef.datain_width_ext = (0x1fffU & (IData)(
                                                            (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                             >> 0x16U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_pixel_offset_0_wren) {
            vlSelfRef.pixel_y_offset = (7U & (IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x26U)));
            vlSelfRef.pixel_x_offset = (0x1fU & (IData)(
                                                        (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                         >> 0x16U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_reserved_x_cfg_0_wren) {
            vlSelfRef.rsv_per_uv_line = (0x3ffU & (IData)(
                                                          (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                           >> 0x26U)));
            vlSelfRef.rsv_per_line = (0x3ffU & (IData)(
                                                       (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                        >> 0x16U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_reserved_y_cfg_0_wren) {
            vlSelfRef.rsv_y_index = (0x1fU & (IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x26U)));
            vlSelfRef.rsv_height = (7U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x16U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_datain_format_0_wren) {
            vlSelfRef.pixel_mapping = (1U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                     >> 0x26U)));
            vlSelfRef.datain_format = (1U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                     >> 0x16U)));
            vlSelfRef.pixel_format = (0x3fU & (IData)(
                                                      (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                       >> 0x1eU)));
            vlSelfRef.pixel_sign_override = (1U & (IData)(
                                                          (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                           >> 0x2aU)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_zero_padding_0_wren) {
            vlSelfRef.pad_bottom = (0x3fU & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                     >> 0x2eU)));
            vlSelfRef.pad_top = (0x1fU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x26U)));
            vlSelfRef.pad_right = (0x3fU & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x1eU)));
            vlSelfRef.pad_left = (0x1fU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x16U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_cvt_cfg_0_wren) {
            vlSelfRef.cvt_en = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                              >> 0x16U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_dain_map_0_wren) {
            vlSelfRef.line_packed = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x16U)));
            vlSelfRef.surf_packed = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x26U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_misc_cfg_0_wren) {
            vlSelfRef.skip_data_rls = (1U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                     >> 0x2eU)));
            vlSelfRef.weight_reuse = (1U & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x2aU)));
            vlSelfRef.data_reuse = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x26U)));
            vlSelfRef.conv_mode = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                 >> 0x16U)));
            vlSelfRef.skip_weight_rls = (1U & (IData)(
                                                      (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                       >> 0x32U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_bank_0_wren) {
            vlSelfRef.weight_bank = (0x1fU & (IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x26U)));
            vlSelfRef.data_bank = (0x1fU & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x16U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_mean_global_1_0_wren) {
            vlSelfRef.mean_ax = (0xffffU & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x26U)));
            vlSelfRef.mean_bv = (0xffffU & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x16U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_datain_size_0_0_wren) {
            vlSelfRef.datain_height = (0x1fffU & (IData)(
                                                         (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                          >> 0x26U)));
            vlSelfRef.datain_width = (0x1fffU & (IData)(
                                                        (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                         >> 0x16U)));
        }
        if (((0xe8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelfRef.cya = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                     >> 0x16U));
        }
        if (((0xc0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelfRef.nan_to_zero = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x16U)));
        }
        if (((0x68U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelfRef.weight_format = (1U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                     >> 0x16U)));
        }
        if (((0x84U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelfRef.wgs_addr_high = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                               >> 0x16U));
        }
        if (((0x88U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelfRef.wgs_addr_low = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                              >> 0x16U));
        }
        if (((0x8cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelfRef.wmb_addr_high = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                               >> 0x16U));
        }
        if (((0x90U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelfRef.wmb_addr_low = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                              >> 0x16U));
        }
        if (((0x94U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelfRef.wmb_bytes = (0xfffffffU & (IData)(
                                                        (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                         >> 0x16U)));
        }
        if (((0x60U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelfRef.entries = (0x3fffU & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x16U)));
        }
        if (((0xd4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelfRef.dma_en = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                              >> 0x16U)));
        }
        if (((0x70U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelfRef.weight_kernel = (0x1fffU & (IData)(
                                                         (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                          >> 0x16U)));
        }
        if (((0x44U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelfRef.uv_line_stride = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                >> 0x16U));
        }
        if (((0x38U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelfRef.datain_addr_high_1 = (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x16U));
        }
        if (((0x3cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelfRef.datain_addr_low_1 = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x16U));
        }
        if (((0x78U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelfRef.weight_addr_high = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x16U));
        }
        if (((0x64U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelfRef.grains = (0xfffU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x16U)));
        }
        if (((0x40U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelfRef.line_stride = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U));
        }
        if (((0x7cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelfRef.weight_addr_low = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                 >> 0x16U));
        }
        if (((0x80U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelfRef.weight_bytes = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                              >> 0x16U));
        }
        if (((0x5cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelfRef.batch_stride = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                              >> 0x16U));
        }
        if (((0x30U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelfRef.datain_addr_high_0 = (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x16U));
        }
        if (((0x34U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelfRef.datain_addr_low_0 = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x16U));
        }
        if (((0x48U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelfRef.surf_stride = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U));
        }
        if (((0x20U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelfRef.datain_channel = (0x1fffU & (IData)(
                                                          (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                           >> 0x16U)));
        }
        if (((0x74U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelfRef.weight_ram_type = (1U & (IData)(
                                                      (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                       >> 0x16U)));
        }
        if (((0x58U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelfRef.batches = (0x1fU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x16U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_mean_global_0_0_wren) {
            vlSelfRef.mean_gu = (0xffffU & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x26U)));
            vlSelfRef.mean_ry = (0xffffU & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x16U)));
        }
        if (((0x2cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelfRef.datain_ram_type = (1U & (IData)(
                                                      (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                       >> 0x16U)));
        }
        if (((0x98U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelfRef.mean_format = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x16U)));
        }
        if (((0x6cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelfRef.byte_per_kernel = (0x3ffffU & (IData)(
                                                            (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                             >> 0x16U)));
        }
    } else {
        vlSelfRef.conv_y_stride = 0U;
        vlSelfRef.conv_x_stride = 0U;
        vlSelfRef.datain_height_ext = 0U;
        vlSelfRef.datain_width_ext = 0U;
        vlSelfRef.pixel_y_offset = 0U;
        vlSelfRef.rsv_per_uv_line = 0U;
        vlSelfRef.rsv_per_line = 0U;
        vlSelfRef.rsv_y_index = 0U;
        vlSelfRef.rsv_height = 0U;
        vlSelfRef.pixel_mapping = 0U;
        vlSelfRef.pad_bottom = 0U;
        vlSelfRef.pad_top = 0U;
        vlSelfRef.cvt_en = 0U;
        vlSelfRef.line_packed = 0U;
        vlSelfRef.skip_data_rls = 0U;
        vlSelfRef.weight_bank = 0U;
        vlSelfRef.weight_reuse = 0U;
        vlSelfRef.surf_packed = 0U;
        vlSelfRef.mean_ax = 0U;
        vlSelfRef.datain_height = 0U;
        vlSelfRef.pad_right = 0U;
        vlSelfRef.pixel_x_offset = 0U;
        vlSelfRef.data_reuse = 0U;
        vlSelfRef.datain_width = 0U;
        vlSelfRef.data_bank = 0U;
        vlSelfRef.pad_left = 0U;
        vlSelfRef.cya = 0U;
        vlSelfRef.nan_to_zero = 0U;
        vlSelfRef.weight_format = 0U;
        vlSelfRef.wgs_addr_high = 0U;
        vlSelfRef.wgs_addr_low = 0U;
        vlSelfRef.wmb_addr_high = 0U;
        vlSelfRef.wmb_addr_low = 0U;
        vlSelfRef.wmb_bytes = 0U;
        vlSelfRef.entries = 0U;
        vlSelfRef.dma_en = 0U;
        vlSelfRef.weight_kernel = 0U;
        vlSelfRef.uv_line_stride = 0U;
        vlSelfRef.datain_addr_high_1 = 0U;
        vlSelfRef.datain_addr_low_1 = 0U;
        vlSelfRef.weight_addr_high = 0U;
        vlSelfRef.grains = 0U;
        vlSelfRef.line_stride = 0U;
        vlSelfRef.weight_addr_low = 0U;
        vlSelfRef.weight_bytes = 0U;
        vlSelfRef.batch_stride = 0U;
        vlSelfRef.datain_addr_high_0 = 0U;
        vlSelfRef.datain_addr_low_0 = 0U;
        vlSelfRef.datain_format = 0U;
        vlSelfRef.conv_mode = 0U;
        vlSelfRef.pixel_format = 0xcU;
        vlSelfRef.surf_stride = 0U;
        vlSelfRef.datain_channel = 0U;
        vlSelfRef.weight_ram_type = 0U;
        vlSelfRef.batches = 0U;
        vlSelfRef.mean_gu = 0U;
        vlSelfRef.mean_ry = 0U;
        vlSelfRef.mean_bv = 0U;
        vlSelfRef.datain_ram_type = 0U;
        vlSelfRef.skip_weight_rls = 0U;
        vlSelfRef.pixel_sign_override = 0U;
        vlSelfRef.mean_format = 0U;
        vlSelfRef.byte_per_kernel = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_dual_reg___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0__2(VNV_nvdla_NV_NVDLA_CDMA_dual_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_dual_reg___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__nvdla_core_rstn) {
        if (vlSelfRef.__PVT__nvdla_cdma_d_misc_cfg_0_wren) {
            vlSelfRef.in_precision = (3U & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x1eU)));
            vlSelfRef.proc_precision = (3U & (IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x22U)));
        }
        if (((0xb8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelfRef.pad_value = (0xffffU & (IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x16U)));
        }
        if (((0xacU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelfRef.cvt_scale = (0xffffU & (IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x16U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_cvt_cfg_0_wren) {
            vlSelfRef.cvt_truncate = (0x3fU & (IData)(
                                                      (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                       >> 0x1aU)));
        }
    } else {
        vlSelfRef.in_precision = 1U;
        vlSelfRef.proc_precision = 1U;
        vlSelfRef.pad_value = 0U;
        vlSelfRef.cvt_scale = 0U;
        vlSelfRef.cvt_truncate = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_dual_reg___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0__3(VNV_nvdla_NV_NVDLA_CDMA_dual_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_dual_reg___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0__3\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__nvdla_core_rstn) {
        if (((0xa8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en))) {
            vlSelfRef.cvt_offset = (0xffffU & (IData)(
                                                      (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                       >> 0x16U)));
        }
    } else {
        vlSelfRef.cvt_offset = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_dual_reg___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0__4(VNV_nvdla_NV_NVDLA_CDMA_dual_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_dual_reg___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0__4\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.reg_rd_data = (((((((((0xbcU == (0xffcU 
                                               & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                  << 2U))) 
                                    | (0x58U == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U)))) 
                                   | (0x5cU == (0xffcU 
                                                & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) 
                                  | (0xb0U == (0xffcU 
                                               & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                  << 2U)))) 
                                 | (0xa4U == (0xffcU 
                                              & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))) 
                                | (0xa8U == (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))) 
                               | (0xacU == (0xffcU 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) 
                              | (0xe8U == (0xffcU & 
                                           ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U))))
                              ? ((0xbcU == (0xffcU 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))
                                  ? (((IData)(vlSelfRef.weight_bank) 
                                      << 0x10U) | (IData)(vlSelfRef.data_bank))
                                  : ((0x58U == (0xffcU 
                                                & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))
                                      ? (IData)(vlSelfRef.batches)
                                      : ((0x5cU == 
                                          (0xffcU & 
                                           ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))
                                          ? vlSelfRef.batch_stride
                                          : ((0xb0U 
                                              == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))
                                              ? (((IData)(vlSelfRef.conv_y_stride) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.conv_x_stride))
                                              : ((0xa4U 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))
                                                  ? 
                                                 (((IData)(vlSelfRef.cvt_truncate) 
                                                   << 4U) 
                                                  | (IData)(vlSelfRef.cvt_en))
                                                  : 
                                                 ((0xa8U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))
                                                   ? (IData)(vlSelfRef.cvt_offset)
                                                   : 
                                                  ((0xacU 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? (IData)(vlSelfRef.cvt_scale)
                                                    : vlSelfRef.cya)))))))
                              : (((((((((0x30U == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U))) 
                                        | (0x38U == 
                                           (0xffcU 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) 
                                       | (0x34U == 
                                          (0xffcU & 
                                           ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                                      | (0x3cU == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))) 
                                     | (0x4cU == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))) 
                                    | (0x2cU == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U)))) 
                                   | (0x18U == (0xffcU 
                                                & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) 
                                  | (0x1cU == (0xffcU 
                                               & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                  << 2U))))
                                  ? ((0x30U == (0xffcU 
                                                & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))
                                      ? vlSelfRef.datain_addr_high_0
                                      : ((0x38U == 
                                          (0xffcU & 
                                           ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))
                                          ? vlSelfRef.datain_addr_high_1
                                          : ((0x34U 
                                              == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))
                                              ? vlSelfRef.datain_addr_low_0
                                              : ((0x3cU 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))
                                                  ? vlSelfRef.datain_addr_low_1
                                                  : 
                                                 ((0x4cU 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))
                                                   ? 
                                                  (((IData)(vlSelfRef.surf_packed) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelfRef.line_packed))
                                                   : 
                                                  ((0x2cU 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? (IData)(vlSelfRef.datain_ram_type)
                                                    : 
                                                   ((0x18U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? 
                                                    (((IData)(vlSelfRef.pixel_sign_override) 
                                                      << 0x14U) 
                                                     | (((IData)(vlSelfRef.pixel_mapping) 
                                                         << 0x10U) 
                                                        | (((IData)(vlSelfRef.pixel_format) 
                                                            << 8U) 
                                                           | (IData)(vlSelfRef.datain_format))))
                                                     : 
                                                    (((IData)(vlSelfRef.datain_height) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelfRef.datain_width)))))))))
                                  : (((((((((0x20U 
                                             == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U))) 
                                            | (0x24U 
                                               == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))) 
                                           | (0x60U 
                                              == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))) 
                                          | (0x64U 
                                             == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U)))) 
                                         | (0xccU == 
                                            (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))) 
                                        | (0xd0U == 
                                           (0xffcU 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) 
                                       | (0x40U == 
                                          (0xffcU & 
                                           ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                                      | (0x44U == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U))))
                                      ? ((0x20U == 
                                          (0xffcU & 
                                           ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))
                                          ? (IData)(vlSelfRef.datain_channel)
                                          : ((0x24U 
                                              == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))
                                              ? (((IData)(vlSelfRef.datain_height_ext) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.datain_width_ext))
                                              : ((0x60U 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))
                                                  ? (IData)(vlSelfRef.entries)
                                                  : 
                                                 ((0x64U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))
                                                   ? (IData)(vlSelfRef.grains)
                                                   : 
                                                  ((0xccU 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_inf_data_num
                                                    : 
                                                   ((0xd0U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_inf_weight_num
                                                     : 
                                                    ((0x40U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSelfRef.line_stride
                                                      : vlSelfRef.uv_line_stride)))))))
                                      : (((((((((0x98U 
                                                 == 
                                                 (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U))) 
                                                | (0x9cU 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))) 
                                               | (0xa0U 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))) 
                                              | (0x14U 
                                                 == 
                                                 (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))) 
                                             | (0xc0U 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U)))) 
                                            | (0xc4U 
                                               == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))) 
                                           | (0xc8U 
                                              == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))) 
                                          | (0x10U 
                                             == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U))))
                                          ? ((0x98U 
                                              == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))
                                              ? (IData)(vlSelfRef.mean_format)
                                              : ((0x9cU 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))
                                                  ? 
                                                 (((IData)(vlSelfRef.mean_gu) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mean_ry))
                                                  : 
                                                 ((0xa0U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))
                                                   ? 
                                                  (((IData)(vlSelfRef.mean_ax) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelfRef.mean_bv))
                                                   : 
                                                  ((0x14U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? 
                                                   (((IData)(vlSelfRef.skip_weight_rls) 
                                                     << 0x1cU) 
                                                    | (((IData)(vlSelfRef.skip_data_rls) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelfRef.weight_reuse) 
                                                           << 0x14U) 
                                                          | (((IData)(vlSelfRef.data_reuse) 
                                                              << 0x10U) 
                                                             | (((IData)(vlSelfRef.proc_precision) 
                                                                 << 0xcU) 
                                                                | (((IData)(vlSelfRef.in_precision) 
                                                                    << 8U) 
                                                                   | (IData)(vlSelfRef.conv_mode)))))))
                                                    : 
                                                   ((0xc0U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? (IData)(vlSelfRef.nan_to_zero)
                                                     : 
                                                    ((0xc4U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_nan_data_num
                                                      : 
                                                     ((0xc8U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))
                                                       ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_nan_weight_num
                                                       : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d0_op_en))))))))
                                          : (((((((
                                                   ((0xe0U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U))) 
                                                    | (0xd8U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))) 
                                                   | (0xd4U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))) 
                                                  | (0xe4U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))) 
                                                 | (0xdcU 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))) 
                                                | (0x28U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))) 
                                               | (0x50U 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))) 
                                              | (0x54U 
                                                 == 
                                                 (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U))))
                                              ? ((0xe0U 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))
                                                  ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_dat_rd_latency
                                                  : 
                                                 ((0xd8U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))
                                                   ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_dat_rd_stall
                                                   : 
                                                  ((0xd4U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? (IData)(vlSelfRef.dma_en)
                                                    : 
                                                   ((0xe4U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_wt_rd_latency
                                                     : 
                                                    ((0xdcU 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d0_wt_rd_stall
                                                      : 
                                                     ((0x28U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))
                                                       ? 
                                                      (((IData)(vlSelfRef.pixel_y_offset) 
                                                        << 0x10U) 
                                                       | (IData)(vlSelfRef.pixel_x_offset))
                                                       : 
                                                      ((0x50U 
                                                        == 
                                                        (0xffcU 
                                                         & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U)))
                                                        ? 
                                                       (((IData)(vlSelfRef.rsv_per_uv_line) 
                                                         << 0x10U) 
                                                        | (IData)(vlSelfRef.rsv_per_line))
                                                        : 
                                                       (((IData)(vlSelfRef.rsv_y_index) 
                                                         << 0x10U) 
                                                        | (IData)(vlSelfRef.rsv_height)))))))))
                                              : (((
                                                   ((((((0x48U 
                                                         == 
                                                         (0xffcU 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                             << 2U))) 
                                                        | (0x78U 
                                                           == 
                                                           (0xffcU 
                                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                               << 2U)))) 
                                                       | (0x7cU 
                                                          == 
                                                          (0xffcU 
                                                           & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                              << 2U)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0xffcU 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                             << 2U)))) 
                                                     | (0x68U 
                                                        == 
                                                        (0xffcU 
                                                         & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U)))) 
                                                    | (0x74U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))) 
                                                   | (0x6cU 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))) 
                                                  | (0x70U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U))))
                                                  ? 
                                                 ((0x48U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))
                                                   ? vlSelfRef.surf_stride
                                                   : 
                                                  ((0x78U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? vlSelfRef.weight_addr_high
                                                    : 
                                                   ((0x7cU 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSelfRef.weight_addr_low
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSelfRef.weight_bytes
                                                      : 
                                                     ((0x68U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))
                                                       ? (IData)(vlSelfRef.weight_format)
                                                       : 
                                                      ((0x74U 
                                                        == 
                                                        (0xffcU 
                                                         & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U)))
                                                        ? (IData)(vlSelfRef.weight_ram_type)
                                                        : 
                                                       ((0x6cU 
                                                         == 
                                                         (0xffcU 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                             << 2U)))
                                                         ? vlSelfRef.byte_per_kernel
                                                         : (IData)(vlSelfRef.weight_kernel))))))))
                                                  : 
                                                 ((0x84U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))
                                                   ? vlSelfRef.wgs_addr_high
                                                   : 
                                                  ((0x88U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? vlSelfRef.wgs_addr_low
                                                    : 
                                                   ((0x8cU 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSelfRef.wmb_addr_high
                                                     : 
                                                    ((0x90U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSelfRef.wmb_addr_low
                                                      : 
                                                     ((0x94U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))
                                                       ? vlSelfRef.wmb_bytes
                                                       : 
                                                      ((0xb4U 
                                                        == 
                                                        (0xffcU 
                                                         & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U)))
                                                        ? 
                                                       (((IData)(vlSelfRef.pad_bottom) 
                                                         << 0x18U) 
                                                        | (((IData)(vlSelfRef.pad_top) 
                                                            << 0x10U) 
                                                           | (((IData)(vlSelfRef.pad_right) 
                                                               << 8U) 
                                                              | (IData)(vlSelfRef.pad_left))))
                                                        : 
                                                       ((0xb8U 
                                                         == 
                                                         (0xffcU 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                             << 2U)))
                                                         ? (IData)(vlSelfRef.pad_value)
                                                         : 0U)))))))))))));
    vlSelfRef.__PVT__nvdla_cdma_d_bank_0_wren = ((0xbcU 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U))) 
                                                 & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_conv_stride_0_wren 
        = ((0xb0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_cvt_cfg_0_wren = 
        ((0xa4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                              << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_dain_map_0_wren = 
        ((0x4cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                              << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_datain_format_0_wren 
        = ((0x18U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_datain_size_0_0_wren 
        = ((0x1cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_datain_size_ext_0_0_wren 
        = ((0x24U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_mean_global_0_0_wren 
        = ((0x9cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_mean_global_1_0_wren 
        = ((0xa0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_misc_cfg_0_wren = 
        ((0x14U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                              << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_pixel_offset_0_wren 
        = ((0x28U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_reserved_x_cfg_0_wren 
        = ((0x50U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_reserved_y_cfg_0_wren 
        = ((0x54U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_zero_padding_0_wren 
        = ((0xb4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d0_reg_wr_en));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_dual_reg___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1__0(VNV_nvdla_NV_NVDLA_CDMA_dual_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_dual_reg___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en) {
        if (((((((((0xbcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U))) | 
                   (0x58U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) | 
                  (0x5cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                       << 2U)))) | 
                 (0xb0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                      << 2U)))) | (0xa4U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))) 
               | (0xa8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                      << 2U)))) | (0xacU 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))) 
             | (0xe8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                    << 2U))))) {
            if ((0xbcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_BANK_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,(((IData)(vlSelfRef.weight_bank) 
                                      << 0x10U) | (IData)(vlSelfRef.data_bank)),
                                 32,(((IData)(vlSelfRef.weight_bank) 
                                      << 0x10U) | (IData)(vlSelfRef.data_bank)));
                }
            } else if ((0x58U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_BATCH_NUMBER_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.batches,
                                 32,(IData)(vlSelfRef.batches));
                }
            } else if ((0x5cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_BATCH_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.batch_stride,
                                 32,vlSelfRef.batch_stride);
                }
            } else if ((0xb0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_CONV_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,(((IData)(vlSelfRef.conv_y_stride) 
                                      << 0x10U) | (IData)(vlSelfRef.conv_x_stride)),
                                 32,(((IData)(vlSelfRef.conv_y_stride) 
                                      << 0x10U) | (IData)(vlSelfRef.conv_x_stride)));
                }
            } else if ((0xa4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_CVT_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,(((IData)(vlSelfRef.cvt_truncate) 
                                      << 4U) | (IData)(vlSelfRef.cvt_en)),
                                 32,(((IData)(vlSelfRef.cvt_truncate) 
                                      << 4U) | (IData)(vlSelfRef.cvt_en)));
                }
            } else if ((0xa8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_CVT_OFFSET_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.cvt_offset,
                                 32,(IData)(vlSelfRef.cvt_offset));
                }
            } else if ((0xacU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_CVT_SCALE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.cvt_scale,
                                 32,(IData)(vlSelfRef.cvt_scale));
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_CYA_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x16U)),32,
                             vlSelfRef.cya,32,vlSelfRef.cya);
            }
        } else if (((((((((0x30U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U))) 
                          | (0x38U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0x34U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))) 
                        | (0x3cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) 
                       | (0x4cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                              << 2U)))) 
                      | (0x2cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                             << 2U)))) 
                     | (0x18U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                    | (0x1cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U))))) {
            if ((0x30U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_DAIN_ADDR_HIGH_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.datain_addr_high_0,
                                 32,vlSelfRef.datain_addr_high_0);
                }
            } else if ((0x38U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_DAIN_ADDR_HIGH_1_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.datain_addr_high_1,
                                 32,vlSelfRef.datain_addr_high_1);
                }
            } else if ((0x34U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_DAIN_ADDR_LOW_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.datain_addr_low_0,
                                 32,vlSelfRef.datain_addr_low_0);
                }
            } else if ((0x3cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_DAIN_ADDR_LOW_1_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.datain_addr_low_1,
                                 32,vlSelfRef.datain_addr_low_1);
                }
            } else if ((0x4cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_DAIN_MAP_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,(((IData)(vlSelfRef.surf_packed) 
                                      << 0x10U) | (IData)(vlSelfRef.line_packed)),
                                 32,(((IData)(vlSelfRef.surf_packed) 
                                      << 0x10U) | (IData)(vlSelfRef.line_packed)));
                }
            } else if ((0x2cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_DAIN_RAM_TYPE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.datain_ram_type,
                                 32,(IData)(vlSelfRef.datain_ram_type));
                }
            } else if ((0x18U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_DATAIN_FORMAT_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,(((IData)(vlSelfRef.pixel_sign_override) 
                                      << 0x14U) | (
                                                   ((IData)(vlSelfRef.pixel_mapping) 
                                                    << 0x10U) 
                                                   | (((IData)(vlSelfRef.pixel_format) 
                                                       << 8U) 
                                                      | (IData)(vlSelfRef.datain_format)))),
                                 32,(((IData)(vlSelfRef.pixel_sign_override) 
                                      << 0x14U) | (
                                                   ((IData)(vlSelfRef.pixel_mapping) 
                                                    << 0x10U) 
                                                   | (((IData)(vlSelfRef.pixel_format) 
                                                       << 8U) 
                                                      | (IData)(vlSelfRef.datain_format)))));
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_DATAIN_SIZE_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x16U)),32,
                             (((IData)(vlSelfRef.datain_height) 
                               << 0x10U) | (IData)(vlSelfRef.datain_width)),
                             32,(((IData)(vlSelfRef.datain_height) 
                                  << 0x10U) | (IData)(vlSelfRef.datain_width)));
            }
        } else if (((((((((0x20U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U))) 
                          | (0x24U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0x60U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))) 
                        | (0x64U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) 
                       | (0xccU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                              << 2U)))) 
                      | (0xd0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                             << 2U)))) 
                     | (0x40U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                    | (0x44U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U))))) {
            if ((0x20U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_DATAIN_SIZE_1_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.datain_channel,
                                 32,(IData)(vlSelfRef.datain_channel));
                }
            } else if ((0x24U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_DATAIN_SIZE_EXT_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,(((IData)(vlSelfRef.datain_height_ext) 
                                      << 0x10U) | (IData)(vlSelfRef.datain_width_ext)),
                                 32,(((IData)(vlSelfRef.datain_height_ext) 
                                      << 0x10U) | (IData)(vlSelfRef.datain_width_ext)));
                }
            } else if ((0x60U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_ENTRY_PER_SLICE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.entries,
                                 32,(IData)(vlSelfRef.entries));
                }
            } else if ((0x64U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_FETCH_GRAIN_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.grains,
                                 32,(IData)(vlSelfRef.grains));
                }
            } else if ((0xccU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: read-only reg wr: NVDLA_CDMA_D_INF_INPUT_DATA_NUM_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1065, "");
                }
            } else if ((0xd0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: read-only reg wr: NVDLA_CDMA_D_INF_INPUT_WEIGHT_NUM_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1069, "");
                }
            } else if ((0x40U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_LINE_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.line_stride,
                                 32,vlSelfRef.line_stride);
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_LINE_UV_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x16U)),32,
                             vlSelfRef.uv_line_stride,
                             32,vlSelfRef.uv_line_stride);
            }
        } else if (((((((((0x98U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U))) 
                          | (0x9cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0xa0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))) 
                        | (0x14U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) 
                       | (0xc0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                              << 2U)))) 
                      | (0xc4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                             << 2U)))) 
                     | (0xc8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                    | (0x10U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U))))) {
            if ((0x98U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_MEAN_FORMAT_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.mean_format,
                                 32,(IData)(vlSelfRef.mean_format));
                }
            } else if ((0x9cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_MEAN_GLOBAL_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,(((IData)(vlSelfRef.mean_gu) 
                                      << 0x10U) | (IData)(vlSelfRef.mean_ry)),
                                 32,(((IData)(vlSelfRef.mean_gu) 
                                      << 0x10U) | (IData)(vlSelfRef.mean_ry)));
                }
            } else if ((0xa0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_MEAN_GLOBAL_1_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,(((IData)(vlSelfRef.mean_ax) 
                                      << 0x10U) | (IData)(vlSelfRef.mean_bv)),
                                 32,(((IData)(vlSelfRef.mean_ax) 
                                      << 0x10U) | (IData)(vlSelfRef.mean_bv)));
                }
            } else if ((0x14U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_MISC_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,(((IData)(vlSelfRef.skip_weight_rls) 
                                      << 0x1cU) | (
                                                   ((IData)(vlSelfRef.skip_data_rls) 
                                                    << 0x18U) 
                                                   | (((IData)(vlSelfRef.weight_reuse) 
                                                       << 0x14U) 
                                                      | (((IData)(vlSelfRef.data_reuse) 
                                                          << 0x10U) 
                                                         | (((IData)(vlSelfRef.proc_precision) 
                                                             << 0xcU) 
                                                            | (((IData)(vlSelfRef.in_precision) 
                                                                << 8U) 
                                                               | (IData)(vlSelfRef.conv_mode))))))),
                                 32,(((IData)(vlSelfRef.skip_weight_rls) 
                                      << 0x1cU) | (
                                                   ((IData)(vlSelfRef.skip_data_rls) 
                                                    << 0x18U) 
                                                   | (((IData)(vlSelfRef.weight_reuse) 
                                                       << 0x14U) 
                                                      | (((IData)(vlSelfRef.data_reuse) 
                                                          << 0x10U) 
                                                         | (((IData)(vlSelfRef.proc_precision) 
                                                             << 0xcU) 
                                                            | (((IData)(vlSelfRef.in_precision) 
                                                                << 8U) 
                                                               | (IData)(vlSelfRef.conv_mode))))))));
                }
            } else if ((0xc0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_NAN_FLUSH_TO_ZERO_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.nan_to_zero,
                                 32,(IData)(vlSelfRef.nan_to_zero));
                }
            } else if ((0xc4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: read-only reg wr: NVDLA_CDMA_D_NAN_INPUT_DATA_NUM_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1080, "");
                }
            } else if ((0xc8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: read-only reg wr: NVDLA_CDMA_D_NAN_INPUT_WEIGHT_NUM_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1084, "");
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_OP_ENABLE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x16U)),32,
                             vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d1_op_en,
                             32,(IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d1_op_en));
            }
        } else if (((((((((0xe0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U))) 
                          | (0xd8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0xd4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))) 
                        | (0xe4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) 
                       | (0xdcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                              << 2U)))) 
                      | (0x28U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                             << 2U)))) 
                     | (0x50U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                    | (0x54U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U))))) {
            if ((0xe0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: read-only reg wr: NVDLA_CDMA_D_PERF_DAT_READ_LATENCY_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1089, "");
                }
            } else if ((0xd8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: read-only reg wr: NVDLA_CDMA_D_PERF_DAT_READ_STALL_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1093, "");
                }
            } else if ((0xd4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_PERF_ENABLE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.dma_en,
                                 32,(IData)(vlSelfRef.dma_en));
                }
            } else if ((0xe4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: read-only reg wr: NVDLA_CDMA_D_PERF_WT_READ_LATENCY_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1098, "");
                }
            } else if ((0xdcU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: read-only reg wr: NVDLA_CDMA_D_PERF_WT_READ_STALL_0 = 0x%x\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)));
                }
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_rowr))) {
                    VL_WRITEF_NX("ERROR: write to read-only register!\n",0);
                    VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1102, "");
                }
            } else if ((0x28U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_PIXEL_OFFSET_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,(((IData)(vlSelfRef.pixel_y_offset) 
                                      << 0x10U) | (IData)(vlSelfRef.pixel_x_offset)),
                                 32,(((IData)(vlSelfRef.pixel_y_offset) 
                                      << 0x10U) | (IData)(vlSelfRef.pixel_x_offset)));
                }
            } else if ((0x50U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_RESERVED_X_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,(((IData)(vlSelfRef.rsv_per_uv_line) 
                                      << 0x10U) | (IData)(vlSelfRef.rsv_per_line)),
                                 32,(((IData)(vlSelfRef.rsv_per_uv_line) 
                                      << 0x10U) | (IData)(vlSelfRef.rsv_per_line)));
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_RESERVED_Y_CFG_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x16U)),32,
                             (((IData)(vlSelfRef.rsv_y_index) 
                               << 0x10U) | (IData)(vlSelfRef.rsv_height)),
                             32,(((IData)(vlSelfRef.rsv_y_index) 
                                  << 0x10U) | (IData)(vlSelfRef.rsv_height)));
            }
        } else if (((((((((0x48U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U))) 
                          | (0x78U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))) 
                         | (0x7cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))) 
                        | (0x80U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) 
                       | (0x68U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                              << 2U)))) 
                      | (0x74U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                             << 2U)))) 
                     | (0x6cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                    | (0x70U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                           << 2U))))) {
            if ((0x48U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                     << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_SURF_STRIDE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.surf_stride,
                                 32,vlSelfRef.surf_stride);
                }
            } else if ((0x78U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WEIGHT_ADDR_HIGH_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.weight_addr_high,
                                 32,vlSelfRef.weight_addr_high);
                }
            } else if ((0x7cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WEIGHT_ADDR_LOW_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.weight_addr_low,
                                 32,vlSelfRef.weight_addr_low);
                }
            } else if ((0x80U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WEIGHT_BYTES_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.weight_bytes,
                                 32,vlSelfRef.weight_bytes);
                }
            } else if ((0x68U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WEIGHT_FORMAT_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.weight_format,
                                 32,(IData)(vlSelfRef.weight_format));
                }
            } else if ((0x74U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WEIGHT_RAM_TYPE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.weight_ram_type,
                                 32,(IData)(vlSelfRef.weight_ram_type));
                }
            } else if ((0x6cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) {
                if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                    VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WEIGHT_SIZE_0_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                                 64,VL_TIME_UNITED_Q(10),
                                 -11,vlSymsp->name(),
                                 32,(IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U)),
                                 32,vlSelfRef.byte_per_kernel,
                                 32,vlSelfRef.byte_per_kernel);
                }
            } else if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WEIGHT_SIZE_1_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x16U)),32,
                             vlSelfRef.weight_kernel,
                             32,(IData)(vlSelfRef.weight_kernel));
            }
        } else if ((0x84U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WGS_ADDR_HIGH_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x16U)),32,
                             vlSelfRef.wgs_addr_high,
                             32,vlSelfRef.wgs_addr_high);
            }
        } else if ((0x88U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WGS_ADDR_LOW_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x16U)),32,
                             vlSelfRef.wgs_addr_low,
                             32,vlSelfRef.wgs_addr_low);
            }
        } else if ((0x8cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WMB_ADDR_HIGH_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x16U)),32,
                             vlSelfRef.wmb_addr_high,
                             32,vlSelfRef.wmb_addr_high);
            }
        } else if ((0x90U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WMB_ADDR_LOW_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x16U)),32,
                             vlSelfRef.wmb_addr_low,
                             32,vlSelfRef.wmb_addr_low);
            }
        } else if ((0x94U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_WMB_BYTES_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x16U)),32,
                             vlSelfRef.wmb_bytes,32,
                             vlSelfRef.wmb_bytes);
            }
        } else if ((0xb4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_ZERO_PADDING_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x16U)),32,
                             (((IData)(vlSelfRef.pad_bottom) 
                               << 0x18U) | (((IData)(vlSelfRef.pad_top) 
                                             << 0x10U) 
                                            | (((IData)(vlSelfRef.pad_right) 
                                                << 8U) 
                                               | (IData)(vlSelfRef.pad_left)))),
                             32,(((IData)(vlSelfRef.pad_bottom) 
                                  << 0x18U) | (((IData)(vlSelfRef.pad_top) 
                                                << 0x10U) 
                                               | (((IData)(vlSelfRef.pad_right) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.pad_left)))));
            }
        } else if ((0xb8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)))) {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: NVDLA_CDMA_D_ZERO_PADDING_VALUE_0 = 0x%x (old value: 0x%x, 0x%b))\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x16U)),32,
                             vlSelfRef.pad_value,32,
                             (IData)(vlSelfRef.pad_value));
            }
        } else {
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_dump))) {
                VL_WRITEF_NX("%t:%NNV_nvdla.u_partition_c.u_NV_NVDLA_cdma.u_regfile.u_dual_reg_d1: reg wr: Unknown register (0x%x) = 0x%x\n",0,
                             64,VL_TIME_UNITED_Q(10),
                             -11,vlSymsp->name(),12,
                             (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                        << 2U)),32,
                             (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                      >> 0x16U)));
            }
            if (VL_UNLIKELY((vlSelfRef.__PVT__arreggen_abort_on_invalid_wr))) {
                VL_WRITEF_NX("ERROR: write to undefined register!\n",0);
                VL_FINISH_MT("../../outdir/nv_small/vmod/nvdla/cdma/NV_NVDLA_CDMA_dual_reg.v", 1124, "");
            }
        }
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_dual_reg___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1__1(VNV_nvdla_NV_NVDLA_CDMA_dual_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_dual_reg___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__nvdla_core_rstn) {
        if (vlSelfRef.__PVT__nvdla_cdma_d_conv_stride_0_wren) {
            vlSelfRef.conv_y_stride = (7U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                     >> 0x26U)));
            vlSelfRef.conv_x_stride = (7U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                     >> 0x16U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_datain_size_ext_0_0_wren) {
            vlSelfRef.datain_height_ext = (0x1fffU 
                                           & (IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x26U)));
            vlSelfRef.datain_width_ext = (0x1fffU & (IData)(
                                                            (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                             >> 0x16U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_pixel_offset_0_wren) {
            vlSelfRef.pixel_y_offset = (7U & (IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x26U)));
            vlSelfRef.pixel_x_offset = (0x1fU & (IData)(
                                                        (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                         >> 0x16U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_reserved_x_cfg_0_wren) {
            vlSelfRef.rsv_per_uv_line = (0x3ffU & (IData)(
                                                          (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                           >> 0x26U)));
            vlSelfRef.rsv_per_line = (0x3ffU & (IData)(
                                                       (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                        >> 0x16U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_reserved_y_cfg_0_wren) {
            vlSelfRef.rsv_y_index = (0x1fU & (IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x26U)));
            vlSelfRef.rsv_height = (7U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x16U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_datain_format_0_wren) {
            vlSelfRef.pixel_mapping = (1U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                     >> 0x26U)));
            vlSelfRef.datain_format = (1U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                     >> 0x16U)));
            vlSelfRef.pixel_format = (0x3fU & (IData)(
                                                      (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                       >> 0x1eU)));
            vlSelfRef.pixel_sign_override = (1U & (IData)(
                                                          (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                           >> 0x2aU)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_zero_padding_0_wren) {
            vlSelfRef.pad_bottom = (0x3fU & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                     >> 0x2eU)));
            vlSelfRef.pad_top = (0x1fU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x26U)));
            vlSelfRef.pad_right = (0x3fU & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x1eU)));
            vlSelfRef.pad_left = (0x1fU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x16U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_cvt_cfg_0_wren) {
            vlSelfRef.cvt_en = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                              >> 0x16U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_dain_map_0_wren) {
            vlSelfRef.line_packed = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x16U)));
            vlSelfRef.surf_packed = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x26U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_misc_cfg_0_wren) {
            vlSelfRef.skip_data_rls = (1U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                     >> 0x2eU)));
            vlSelfRef.weight_reuse = (1U & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x2aU)));
            vlSelfRef.data_reuse = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x26U)));
            vlSelfRef.conv_mode = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                 >> 0x16U)));
            vlSelfRef.skip_weight_rls = (1U & (IData)(
                                                      (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                       >> 0x32U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_bank_0_wren) {
            vlSelfRef.weight_bank = (0x1fU & (IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x26U)));
            vlSelfRef.data_bank = (0x1fU & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x16U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_mean_global_1_0_wren) {
            vlSelfRef.mean_ax = (0xffffU & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x26U)));
            vlSelfRef.mean_bv = (0xffffU & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x16U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_datain_size_0_0_wren) {
            vlSelfRef.datain_height = (0x1fffU & (IData)(
                                                         (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                          >> 0x26U)));
            vlSelfRef.datain_width = (0x1fffU & (IData)(
                                                        (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                         >> 0x16U)));
        }
        if (((0xe8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelfRef.cya = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                     >> 0x16U));
        }
        if (((0xc0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelfRef.nan_to_zero = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x16U)));
        }
        if (((0x68U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelfRef.weight_format = (1U & (IData)(
                                                    (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                     >> 0x16U)));
        }
        if (((0x84U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelfRef.wgs_addr_high = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                               >> 0x16U));
        }
        if (((0x88U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelfRef.wgs_addr_low = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                              >> 0x16U));
        }
        if (((0x8cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelfRef.wmb_addr_high = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                               >> 0x16U));
        }
        if (((0x90U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelfRef.wmb_addr_low = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                              >> 0x16U));
        }
        if (((0x94U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelfRef.wmb_bytes = (0xfffffffU & (IData)(
                                                        (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                         >> 0x16U)));
        }
        if (((0x60U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelfRef.entries = (0x3fffU & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x16U)));
        }
        if (((0xd4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelfRef.dma_en = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                              >> 0x16U)));
        }
        if (((0x70U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelfRef.weight_kernel = (0x1fffU & (IData)(
                                                         (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                          >> 0x16U)));
        }
        if (((0x44U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelfRef.uv_line_stride = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                >> 0x16U));
        }
        if (((0x38U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelfRef.datain_addr_high_1 = (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x16U));
        }
        if (((0x3cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelfRef.datain_addr_low_1 = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x16U));
        }
        if (((0x78U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelfRef.weight_addr_high = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x16U));
        }
        if (((0x64U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelfRef.grains = (0xfffU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x16U)));
        }
        if (((0x40U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelfRef.line_stride = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U));
        }
        if (((0x7cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelfRef.weight_addr_low = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                 >> 0x16U));
        }
        if (((0x80U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelfRef.weight_bytes = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                              >> 0x16U));
        }
        if (((0x5cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelfRef.batch_stride = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                              >> 0x16U));
        }
        if (((0x30U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelfRef.datain_addr_high_0 = (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x16U));
        }
        if (((0x34U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelfRef.datain_addr_low_0 = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x16U));
        }
        if (((0x48U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelfRef.surf_stride = (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                             >> 0x16U));
        }
        if (((0x20U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelfRef.datain_channel = (0x1fffU & (IData)(
                                                          (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                           >> 0x16U)));
        }
        if (((0x74U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelfRef.weight_ram_type = (1U & (IData)(
                                                      (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                       >> 0x16U)));
        }
        if (((0x58U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelfRef.batches = (0x1fU & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                  >> 0x16U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_mean_global_0_0_wren) {
            vlSelfRef.mean_gu = (0xffffU & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x26U)));
            vlSelfRef.mean_ry = (0xffffU & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x16U)));
        }
        if (((0x2cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelfRef.datain_ram_type = (1U & (IData)(
                                                      (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                       >> 0x16U)));
        }
        if (((0x98U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelfRef.mean_format = (1U & (IData)((vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                   >> 0x16U)));
        }
        if (((0x6cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelfRef.byte_per_kernel = (0x3ffffU & (IData)(
                                                            (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                             >> 0x16U)));
        }
    } else {
        vlSelfRef.conv_y_stride = 0U;
        vlSelfRef.conv_x_stride = 0U;
        vlSelfRef.datain_height_ext = 0U;
        vlSelfRef.datain_width_ext = 0U;
        vlSelfRef.pixel_y_offset = 0U;
        vlSelfRef.rsv_per_uv_line = 0U;
        vlSelfRef.rsv_per_line = 0U;
        vlSelfRef.rsv_y_index = 0U;
        vlSelfRef.rsv_height = 0U;
        vlSelfRef.pixel_mapping = 0U;
        vlSelfRef.pad_bottom = 0U;
        vlSelfRef.pad_top = 0U;
        vlSelfRef.cvt_en = 0U;
        vlSelfRef.line_packed = 0U;
        vlSelfRef.skip_data_rls = 0U;
        vlSelfRef.weight_bank = 0U;
        vlSelfRef.weight_reuse = 0U;
        vlSelfRef.surf_packed = 0U;
        vlSelfRef.mean_ax = 0U;
        vlSelfRef.datain_height = 0U;
        vlSelfRef.pad_right = 0U;
        vlSelfRef.pixel_x_offset = 0U;
        vlSelfRef.data_reuse = 0U;
        vlSelfRef.datain_width = 0U;
        vlSelfRef.data_bank = 0U;
        vlSelfRef.pad_left = 0U;
        vlSelfRef.cya = 0U;
        vlSelfRef.nan_to_zero = 0U;
        vlSelfRef.weight_format = 0U;
        vlSelfRef.wgs_addr_high = 0U;
        vlSelfRef.wgs_addr_low = 0U;
        vlSelfRef.wmb_addr_high = 0U;
        vlSelfRef.wmb_addr_low = 0U;
        vlSelfRef.wmb_bytes = 0U;
        vlSelfRef.entries = 0U;
        vlSelfRef.dma_en = 0U;
        vlSelfRef.weight_kernel = 0U;
        vlSelfRef.uv_line_stride = 0U;
        vlSelfRef.datain_addr_high_1 = 0U;
        vlSelfRef.datain_addr_low_1 = 0U;
        vlSelfRef.weight_addr_high = 0U;
        vlSelfRef.grains = 0U;
        vlSelfRef.line_stride = 0U;
        vlSelfRef.weight_addr_low = 0U;
        vlSelfRef.weight_bytes = 0U;
        vlSelfRef.batch_stride = 0U;
        vlSelfRef.datain_addr_high_0 = 0U;
        vlSelfRef.datain_addr_low_0 = 0U;
        vlSelfRef.datain_format = 0U;
        vlSelfRef.conv_mode = 0U;
        vlSelfRef.pixel_format = 0xcU;
        vlSelfRef.surf_stride = 0U;
        vlSelfRef.datain_channel = 0U;
        vlSelfRef.weight_ram_type = 0U;
        vlSelfRef.batches = 0U;
        vlSelfRef.mean_gu = 0U;
        vlSelfRef.mean_ry = 0U;
        vlSelfRef.mean_bv = 0U;
        vlSelfRef.datain_ram_type = 0U;
        vlSelfRef.skip_weight_rls = 0U;
        vlSelfRef.pixel_sign_override = 0U;
        vlSelfRef.mean_format = 0U;
        vlSelfRef.byte_per_kernel = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_dual_reg___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1__2(VNV_nvdla_NV_NVDLA_CDMA_dual_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_dual_reg___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__nvdla_core_rstn) {
        if (vlSelfRef.__PVT__nvdla_cdma_d_misc_cfg_0_wren) {
            vlSelfRef.in_precision = (3U & (IData)(
                                                   (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                    >> 0x1eU)));
            vlSelfRef.proc_precision = (3U & (IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x22U)));
        }
        if (((0xb8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelfRef.pad_value = (0xffffU & (IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x16U)));
        }
        if (((0xacU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelfRef.cvt_scale = (0xffffU & (IData)(
                                                     (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                      >> 0x16U)));
        }
        if (vlSelfRef.__PVT__nvdla_cdma_d_cvt_cfg_0_wren) {
            vlSelfRef.cvt_truncate = (0x3fU & (IData)(
                                                      (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                       >> 0x1aU)));
        }
    } else {
        vlSelfRef.in_precision = 1U;
        vlSelfRef.proc_precision = 1U;
        vlSelfRef.pad_value = 0U;
        vlSelfRef.cvt_scale = 0U;
        vlSelfRef.cvt_truncate = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_dual_reg___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1__3(VNV_nvdla_NV_NVDLA_CDMA_dual_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_dual_reg___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1__3\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__nvdla_core_rstn) {
        if (((0xa8U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                  << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en))) {
            vlSelfRef.cvt_offset = (0xffffU & (IData)(
                                                      (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd 
                                                       >> 0x16U)));
        }
    } else {
        vlSelfRef.cvt_offset = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_dual_reg___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1__4(VNV_nvdla_NV_NVDLA_CDMA_dual_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_dual_reg___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1__4\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.reg_rd_data = (((((((((0xbcU == (0xffcU 
                                               & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                  << 2U))) 
                                    | (0x58U == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U)))) 
                                   | (0x5cU == (0xffcU 
                                                & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) 
                                  | (0xb0U == (0xffcU 
                                               & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                  << 2U)))) 
                                 | (0xa4U == (0xffcU 
                                              & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                 << 2U)))) 
                                | (0xa8U == (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))) 
                               | (0xacU == (0xffcU 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) 
                              | (0xe8U == (0xffcU & 
                                           ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U))))
                              ? ((0xbcU == (0xffcU 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))
                                  ? (((IData)(vlSelfRef.weight_bank) 
                                      << 0x10U) | (IData)(vlSelfRef.data_bank))
                                  : ((0x58U == (0xffcU 
                                                & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))
                                      ? (IData)(vlSelfRef.batches)
                                      : ((0x5cU == 
                                          (0xffcU & 
                                           ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))
                                          ? vlSelfRef.batch_stride
                                          : ((0xb0U 
                                              == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))
                                              ? (((IData)(vlSelfRef.conv_y_stride) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.conv_x_stride))
                                              : ((0xa4U 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))
                                                  ? 
                                                 (((IData)(vlSelfRef.cvt_truncate) 
                                                   << 4U) 
                                                  | (IData)(vlSelfRef.cvt_en))
                                                  : 
                                                 ((0xa8U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))
                                                   ? (IData)(vlSelfRef.cvt_offset)
                                                   : 
                                                  ((0xacU 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? (IData)(vlSelfRef.cvt_scale)
                                                    : vlSelfRef.cya)))))))
                              : (((((((((0x30U == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U))) 
                                        | (0x38U == 
                                           (0xffcU 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) 
                                       | (0x34U == 
                                          (0xffcU & 
                                           ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                                      | (0x3cU == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))) 
                                     | (0x4cU == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))) 
                                    | (0x2cU == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U)))) 
                                   | (0x18U == (0xffcU 
                                                & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))) 
                                  | (0x1cU == (0xffcU 
                                               & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                  << 2U))))
                                  ? ((0x30U == (0xffcU 
                                                & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                   << 2U)))
                                      ? vlSelfRef.datain_addr_high_0
                                      : ((0x38U == 
                                          (0xffcU & 
                                           ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))
                                          ? vlSelfRef.datain_addr_high_1
                                          : ((0x34U 
                                              == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))
                                              ? vlSelfRef.datain_addr_low_0
                                              : ((0x3cU 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))
                                                  ? vlSelfRef.datain_addr_low_1
                                                  : 
                                                 ((0x4cU 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))
                                                   ? 
                                                  (((IData)(vlSelfRef.surf_packed) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelfRef.line_packed))
                                                   : 
                                                  ((0x2cU 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? (IData)(vlSelfRef.datain_ram_type)
                                                    : 
                                                   ((0x18U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? 
                                                    (((IData)(vlSelfRef.pixel_sign_override) 
                                                      << 0x14U) 
                                                     | (((IData)(vlSelfRef.pixel_mapping) 
                                                         << 0x10U) 
                                                        | (((IData)(vlSelfRef.pixel_format) 
                                                            << 8U) 
                                                           | (IData)(vlSelfRef.datain_format))))
                                                     : 
                                                    (((IData)(vlSelfRef.datain_height) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelfRef.datain_width)))))))))
                                  : (((((((((0x20U 
                                             == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U))) 
                                            | (0x24U 
                                               == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))) 
                                           | (0x60U 
                                              == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))) 
                                          | (0x64U 
                                             == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U)))) 
                                         | (0xccU == 
                                            (0xffcU 
                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                << 2U)))) 
                                        | (0xd0U == 
                                           (0xffcU 
                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                               << 2U)))) 
                                       | (0x40U == 
                                          (0xffcU & 
                                           ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))) 
                                      | (0x44U == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U))))
                                      ? ((0x20U == 
                                          (0xffcU & 
                                           ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                            << 2U)))
                                          ? (IData)(vlSelfRef.datain_channel)
                                          : ((0x24U 
                                              == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))
                                              ? (((IData)(vlSelfRef.datain_height_ext) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.datain_width_ext))
                                              : ((0x60U 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))
                                                  ? (IData)(vlSelfRef.entries)
                                                  : 
                                                 ((0x64U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))
                                                   ? (IData)(vlSelfRef.grains)
                                                   : 
                                                  ((0xccU 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_inf_data_num
                                                    : 
                                                   ((0xd0U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_inf_weight_num
                                                     : 
                                                    ((0x40U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSelfRef.line_stride
                                                      : vlSelfRef.uv_line_stride)))))))
                                      : (((((((((0x98U 
                                                 == 
                                                 (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U))) 
                                                | (0x9cU 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))) 
                                               | (0xa0U 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))) 
                                              | (0x14U 
                                                 == 
                                                 (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))) 
                                             | (0xc0U 
                                                == 
                                                (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U)))) 
                                            | (0xc4U 
                                               == (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))) 
                                           | (0xc8U 
                                              == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))) 
                                          | (0x10U 
                                             == (0xffcU 
                                                 & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                    << 2U))))
                                          ? ((0x98U 
                                              == (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U)))
                                              ? (IData)(vlSelfRef.mean_format)
                                              : ((0x9cU 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))
                                                  ? 
                                                 (((IData)(vlSelfRef.mean_gu) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mean_ry))
                                                  : 
                                                 ((0xa0U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))
                                                   ? 
                                                  (((IData)(vlSelfRef.mean_ax) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelfRef.mean_bv))
                                                   : 
                                                  ((0x14U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? 
                                                   (((IData)(vlSelfRef.skip_weight_rls) 
                                                     << 0x1cU) 
                                                    | (((IData)(vlSelfRef.skip_data_rls) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelfRef.weight_reuse) 
                                                           << 0x14U) 
                                                          | (((IData)(vlSelfRef.data_reuse) 
                                                              << 0x10U) 
                                                             | (((IData)(vlSelfRef.proc_precision) 
                                                                 << 0xcU) 
                                                                | (((IData)(vlSelfRef.in_precision) 
                                                                    << 8U) 
                                                                   | (IData)(vlSelfRef.conv_mode)))))))
                                                    : 
                                                   ((0xc0U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? (IData)(vlSelfRef.nan_to_zero)
                                                     : 
                                                    ((0xc4U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_nan_data_num
                                                      : 
                                                     ((0xc8U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))
                                                       ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_nan_weight_num
                                                       : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_d1_op_en))))))))
                                          : (((((((
                                                   ((0xe0U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U))) 
                                                    | (0xd8U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))) 
                                                   | (0xd4U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))) 
                                                  | (0xe4U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))) 
                                                 | (0xdcU 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))) 
                                                | (0x28U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))) 
                                               | (0x50U 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))) 
                                              | (0x54U 
                                                 == 
                                                 (0xffcU 
                                                  & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                     << 2U))))
                                              ? ((0xe0U 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U)))
                                                  ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_dat_rd_latency
                                                  : 
                                                 ((0xd8U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))
                                                   ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_dat_rd_stall
                                                   : 
                                                  ((0xd4U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? (IData)(vlSelfRef.dma_en)
                                                    : 
                                                   ((0xe4U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_wt_rd_latency
                                                     : 
                                                    ((0xdcU 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__dp2reg_d1_wt_rd_stall
                                                      : 
                                                     ((0x28U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))
                                                       ? 
                                                      (((IData)(vlSelfRef.pixel_y_offset) 
                                                        << 0x10U) 
                                                       | (IData)(vlSelfRef.pixel_x_offset))
                                                       : 
                                                      ((0x50U 
                                                        == 
                                                        (0xffcU 
                                                         & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U)))
                                                        ? 
                                                       (((IData)(vlSelfRef.rsv_per_uv_line) 
                                                         << 0x10U) 
                                                        | (IData)(vlSelfRef.rsv_per_line))
                                                        : 
                                                       (((IData)(vlSelfRef.rsv_y_index) 
                                                         << 0x10U) 
                                                        | (IData)(vlSelfRef.rsv_height)))))))))
                                              : (((
                                                   ((((((0x48U 
                                                         == 
                                                         (0xffcU 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                             << 2U))) 
                                                        | (0x78U 
                                                           == 
                                                           (0xffcU 
                                                            & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                               << 2U)))) 
                                                       | (0x7cU 
                                                          == 
                                                          (0xffcU 
                                                           & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                              << 2U)))) 
                                                      | (0x80U 
                                                         == 
                                                         (0xffcU 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                             << 2U)))) 
                                                     | (0x68U 
                                                        == 
                                                        (0xffcU 
                                                         & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U)))) 
                                                    | (0x74U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))) 
                                                   | (0x6cU 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))) 
                                                  | (0x70U 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U))))
                                                  ? 
                                                 ((0x48U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))
                                                   ? vlSelfRef.surf_stride
                                                   : 
                                                  ((0x78U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? vlSelfRef.weight_addr_high
                                                    : 
                                                   ((0x7cU 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSelfRef.weight_addr_low
                                                     : 
                                                    ((0x80U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSelfRef.weight_bytes
                                                      : 
                                                     ((0x68U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))
                                                       ? (IData)(vlSelfRef.weight_format)
                                                       : 
                                                      ((0x74U 
                                                        == 
                                                        (0xffcU 
                                                         & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U)))
                                                        ? (IData)(vlSelfRef.weight_ram_type)
                                                        : 
                                                       ((0x6cU 
                                                         == 
                                                         (0xffcU 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                             << 2U)))
                                                         ? vlSelfRef.byte_per_kernel
                                                         : (IData)(vlSelfRef.weight_kernel))))))))
                                                  : 
                                                 ((0x84U 
                                                   == 
                                                   (0xffcU 
                                                    & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                       << 2U)))
                                                   ? vlSelfRef.wgs_addr_high
                                                   : 
                                                  ((0x88U 
                                                    == 
                                                    (0xffcU 
                                                     & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                        << 2U)))
                                                    ? vlSelfRef.wgs_addr_low
                                                    : 
                                                   ((0x8cU 
                                                     == 
                                                     (0xffcU 
                                                      & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                         << 2U)))
                                                     ? vlSelfRef.wmb_addr_high
                                                     : 
                                                    ((0x90U 
                                                      == 
                                                      (0xffcU 
                                                       & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                          << 2U)))
                                                      ? vlSelfRef.wmb_addr_low
                                                      : 
                                                     ((0x94U 
                                                       == 
                                                       (0xffcU 
                                                        & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                           << 2U)))
                                                       ? vlSelfRef.wmb_bytes
                                                       : 
                                                      ((0xb4U 
                                                        == 
                                                        (0xffcU 
                                                         & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                            << 2U)))
                                                        ? 
                                                       (((IData)(vlSelfRef.pad_bottom) 
                                                         << 0x18U) 
                                                        | (((IData)(vlSelfRef.pad_top) 
                                                            << 0x10U) 
                                                           | (((IData)(vlSelfRef.pad_right) 
                                                               << 8U) 
                                                              | (IData)(vlSelfRef.pad_left))))
                                                        : 
                                                       ((0xb8U 
                                                         == 
                                                         (0xffcU 
                                                          & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                             << 2U)))
                                                         ? (IData)(vlSelfRef.pad_value)
                                                         : 0U)))))))))))));
    vlSelfRef.__PVT__nvdla_cdma_d_bank_0_wren = ((0xbcU 
                                                  == 
                                                  (0xffcU 
                                                   & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                                      << 2U))) 
                                                 & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_conv_stride_0_wren 
        = ((0xb0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_cvt_cfg_0_wren = 
        ((0xa4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                              << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_dain_map_0_wren = 
        ((0x4cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                              << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_datain_format_0_wren 
        = ((0x18U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_datain_size_0_0_wren 
        = ((0x1cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_datain_size_ext_0_0_wren 
        = ((0x24U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_mean_global_0_0_wren 
        = ((0x9cU == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_mean_global_1_0_wren 
        = ((0xa0U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_misc_cfg_0_wren = 
        ((0x14U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                              << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_pixel_offset_0_wren 
        = ((0x28U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_reserved_x_cfg_0_wren 
        = ((0x50U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_reserved_y_cfg_0_wren 
        = ((0x54U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en));
    vlSelfRef.__PVT__nvdla_cdma_d_zero_padding_0_wren 
        = ((0xb4U == (0xffcU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__req_pd) 
                                << 2U))) & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__d1_reg_wr_en));
}
