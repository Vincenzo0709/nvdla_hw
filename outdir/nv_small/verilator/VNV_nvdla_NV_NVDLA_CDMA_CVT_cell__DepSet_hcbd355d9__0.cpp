// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "VNV_nvdla__pch.h"
#include "VNV_nvdla_NV_NVDLA_CDMA_CVT_cell.h"
#include "VNV_nvdla__Syms.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_0__1(VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_0__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe_p3__DOT__p3_skid_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__nvdla_core_rstn) 
         && ((1U & (~ (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_skid_valid))) 
             && (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_skid_catch)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__nvdla_core_rstn) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc))
                    : (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__nvdla_core_rstn) 
         && (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                    ? (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc))
                    : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
    vlSelfRef.__PVT__pipe_p3__DOT__p3_pipe_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__nvdla_core_rstn) 
         && (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_skid_pipe_valid));
    vlSelfRef.__PVT__chn_sync_prdy = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__nvdla_core_rstn))) 
                                      || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p3__DOT__p3_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__nvdla_core_rstn))) 
           || (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_skid_ready));
    vlSelfRef.__PVT__tru_out_prdy = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__nvdla_core_rstn))) 
                                     || (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_skid_ready));
    vlSelfRef.__PVT__sub_out_prdy = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__nvdla_core_rstn))) 
                                     || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__nvdla_core_rstn))) 
           || (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop 
        = ((1U & (~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__nvdla_core_rstn))) 
           || (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__nvdla_core_rstn) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid))));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid = 
        ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__nvdla_core_rstn) 
         && (1U & ((~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc)) 
                   | (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_pipe_valid))));
    vlSelfRef.__PVT__pipe_p3__DOT__p3_skid_catch = 0U;
    vlSelfRef.__PVT__pipe_p3__DOT__p3_skid_ready = 1U;
    vlSelfRef.__PVT__pipe_p3__DOT__p3_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid)
            : (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_skid_valid));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc 
        = (1U & ((IData)(vlSelfRef.__PVT__tru_out_prdy) 
                 | (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid)
            : (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc 
        = (1U & ((IData)(vlSelfRef.__PVT__sub_out_prdy) 
                 | (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch = 
        (((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_valid) 
          & (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_catch))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_0__2(VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_0__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chn_sync_pvld = (1U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_0__3(VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_0__3\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chn_data_ext = ((0x20000U & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_0_d0 
                                                  << 1U)) 
                                     | vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_0_d0);
    vlSelfRef.__PVT__chn_alu_ext = ((0x30000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_0_d0) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_0_d0));
    vlSelfRef.__PVT__sub_dout = (0x3ffffU & ((0x7ffffU 
                                              & VL_EXTENDS_II(19,18, vlSelfRef.__PVT__chn_data_ext)) 
                                             - (0x7ffffU 
                                                & VL_EXTENDS_II(19,18, vlSelfRef.__PVT__chn_alu_ext))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_comb__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_0__0(VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_comb__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_0__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    // Body
    vlSelfRef.__PVT__mul_dout = (0x3ffffffffULL & VL_MULS_QQQ(34, 
                                                              (0x3ffffffffULL 
                                                               & VL_EXTENDS_QI(34,18, vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_data)), 
                                                              (0x3ffffffffULL 
                                                               & VL_EXTENDS_QI(34,16, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale)))));
    __Vtemp_3[0U] = 0U;
    __Vtemp_3[1U] = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data) 
                     << 2U);
    __Vtemp_3[2U] = (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                               >> 0x21U)))))))) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data) 
                                 >> 0x1eU) | ((IData)(
                                                      (vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp_3[3U] = (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                               >> 0x21U)))))))) 
                      >> 0x1cU) | ((IData)(((0x3ffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                              >> 0x21U))))))) 
                                            >> 0x20U)) 
                                   << 4U));
    VL_SHIFTR_WWI(102,102,6, __Vtemp_4, __Vtemp_3, (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate));
    vlSelfRef.u_shiftright_su__DOT____VdfgRegularize_h62844cb7_0_0[0U] 
        = __Vtemp_4[0U];
    vlSelfRef.u_shiftright_su__DOT____VdfgRegularize_h62844cb7_0_0[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.u_shiftright_su__DOT____VdfgRegularize_h62844cb7_0_0[2U] 
        = __Vtemp_4[2U];
    vlSelfRef.u_shiftright_su__DOT____VdfgRegularize_h62844cb7_0_0[3U] 
        = (0x3fU & __Vtemp_4[3U]);
    if (vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop) {
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_pipe_valid 
            = vlSelfRef.__PVT__chn_sync_pvld;
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_pipe_data 
            = vlSelfRef.__PVT__sub_dout;
    } else {
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_pipe_valid 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid;
        vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_pipe_data 
            = vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_data;
    }
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch = 
        (((IData)(vlSelfRef.__PVT__chn_sync_pvld) & (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
         & (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc)));
    vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_ready = 
        (1U & ((IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_valid)
                ? (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_pipe_ready_bc)
                : (~ (IData)(vlSelfRef.__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_pipe_data 
        = ((IData)(vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? vlSelfRef.__PVT__mul_dout : vlSelfRef.__PVT__pipe_p2__DOT__p2_skid_data);
    vlSelfRef.__PVT__u_shiftright_su__DOT__point5 = 
        (1U & ((vlSelfRef.u_shiftright_su__DOT____VdfgRegularize_h62844cb7_0_0[1U] 
                >> 1U) & ((~ (IData)((vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data 
                                      >> 0x21U))) | 
                          (0U != (0x1ffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSelfRef.u_shiftright_su__DOT____VdfgRegularize_h62844cb7_0_0[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.u_shiftright_su__DOT____VdfgRegularize_h62844cb7_0_0[0U]))))))));
    vlSelfRef.__PVT__u_shiftright_su__DOT__tru_need_sat 
        = (1U & (((~ (IData)((0x1ffffU == (0x1ffffU 
                                           & ((vlSelfRef.u_shiftright_su__DOT____VdfgRegularize_h62844cb7_0_0[2U] 
                                               << 0xeU) 
                                              | (vlSelfRef.u_shiftright_su__DOT____VdfgRegularize_h62844cb7_0_0[1U] 
                                                 >> 0x12U)))))) 
                  & (IData)((vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data 
                             >> 0x21U))) | ((~ (IData)(
                                                       (vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data 
                                                        >> 0x21U))) 
                                            & ((0U 
                                                != 
                                                (0x1ffffU 
                                                 & ((vlSelfRef.u_shiftright_su__DOT____VdfgRegularize_h62844cb7_0_0[2U] 
                                                     << 0xeU) 
                                                    | (vlSelfRef.u_shiftright_su__DOT____VdfgRegularize_h62844cb7_0_0[1U] 
                                                       >> 0x12U)))) 
                                               | (IData)(
                                                         ((0x3fffcU 
                                                           == 
                                                           (0x3fffcU 
                                                            & vlSelfRef.u_shiftright_su__DOT____VdfgRegularize_h62844cb7_0_0[1U])) 
                                                          & (IData)(vlSelfRef.__PVT__u_shiftright_su__DOT__point5)))))));
    vlSelfRef.__VdfgRegularize_h699e0f9f_1_1 = (0x1ffffU 
                                                & ((IData)(vlSelfRef.__PVT__u_shiftright_su__DOT__tru_need_sat)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__pipe_p2__DOT__p2_pipe_data 
                                                                >> 0x21U)))
                                                     ? 0x10000U
                                                     : 0xffffU)
                                                    : 
                                                   (((vlSelfRef.u_shiftright_su__DOT____VdfgRegularize_h62844cb7_0_0[1U] 
                                                      << 0x1eU) 
                                                     | (vlSelfRef.u_shiftright_su__DOT____VdfgRegularize_h62844cb7_0_0[1U] 
                                                        >> 2U)) 
                                                    + (IData)(vlSelfRef.__PVT__u_shiftright_su__DOT__point5))));
    vlSelfRef.u_saturate_int16__DOT____VdfgRegularize_h493f23e7_0_0 
        = ((0x22U > (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate)) 
           & (vlSelfRef.__VdfgRegularize_h699e0f9f_1_1 
              >> 0xfU));
    vlSelfRef.__PVT__u_saturate_int16__DOT__data_sign 
        = ((0x22U > (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate)) 
           & (vlSelfRef.__VdfgRegularize_h699e0f9f_1_1 
              >> 0x10U));
    vlSelfRef.__PVT__dout_int8_sat = (0xffU & ((((~ (IData)(
                                                            ((0xff80U 
                                                              == 
                                                              (0xff80U 
                                                               & vlSelfRef.__VdfgRegularize_h699e0f9f_1_1)) 
                                                             & (0x22U 
                                                                > (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate))))) 
                                                 & (IData)(vlSelfRef.__PVT__u_saturate_int16__DOT__data_sign)) 
                                                | ((~ (IData)(vlSelfRef.__PVT__u_saturate_int16__DOT__data_sign)) 
                                                   & ((0x22U 
                                                       > (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate)) 
                                                      & (0U 
                                                         != 
                                                         (0x1ffU 
                                                          & (vlSelfRef.__VdfgRegularize_h699e0f9f_1_1 
                                                             >> 7U))))))
                                                ? ((IData)(vlSelfRef.__PVT__u_saturate_int16__DOT__data_sign)
                                                    ? 0x80U
                                                    : 0x7fU)
                                                : (
                                                   (0x22U 
                                                    <= (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate))
                                                    ? 0U
                                                    : vlSelfRef.__VdfgRegularize_h699e0f9f_1_1)));
    vlSelfRef.__PVT__chn_dout = (0xffffU & ((1U == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision))
                                             ? ((((~ (IData)(vlSelfRef.u_saturate_int16__DOT____VdfgRegularize_h493f23e7_0_0)) 
                                                  & (IData)(vlSelfRef.__PVT__u_saturate_int16__DOT__data_sign)) 
                                                 | ((~ (IData)(vlSelfRef.__PVT__u_saturate_int16__DOT__data_sign)) 
                                                    & (IData)(vlSelfRef.u_saturate_int16__DOT____VdfgRegularize_h493f23e7_0_0)))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__u_saturate_int16__DOT__data_sign)
                                                  ? 0x8000U
                                                  : 0x7fffU)
                                                 : 
                                                ((0x22U 
                                                  <= (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate))
                                                  ? 0U
                                                  : vlSelfRef.__VdfgRegularize_h699e0f9f_1_1))
                                             : ((0xff00U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.__PVT__dout_int8_sat) 
                                                                   >> 7U)))) 
                                                    << 8U)) 
                                                | (IData)(vlSelfRef.__PVT__dout_int8_sat))));
    vlSelfRef.__PVT__pipe_p3__DOT__p3_skid_pipe_data 
        = ((IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_skid_ready_flop)
            ? (IData)(vlSelfRef.__PVT__chn_dout) : (IData)(vlSelfRef.__PVT__pipe_p3__DOT__p3_skid_data));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_1__2(VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_1__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chn_sync_pvld = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0) 
                                            >> 1U));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_1__3(VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_1__3\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chn_data_ext = ((0x20000U & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_1_d0 
                                                  << 1U)) 
                                     | vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_1_d0);
    vlSelfRef.__PVT__chn_alu_ext = ((0x30000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_1_d0) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_1_d0));
    vlSelfRef.__PVT__sub_dout = (0x3ffffU & ((0x7ffffU 
                                              & VL_EXTENDS_II(19,18, vlSelfRef.__PVT__chn_data_ext)) 
                                             - (0x7ffffU 
                                                & VL_EXTENDS_II(19,18, vlSelfRef.__PVT__chn_alu_ext))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_2__2(VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_2__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chn_sync_pvld = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0) 
                                            >> 2U));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_2__3(VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_2__3\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chn_data_ext = ((0x20000U & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_2_d0 
                                                  << 1U)) 
                                     | vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_2_d0);
    vlSelfRef.__PVT__chn_alu_ext = ((0x30000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_2_d0) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_2_d0));
    vlSelfRef.__PVT__sub_dout = (0x3ffffU & ((0x7ffffU 
                                              & VL_EXTENDS_II(19,18, vlSelfRef.__PVT__chn_data_ext)) 
                                             - (0x7ffffU 
                                                & VL_EXTENDS_II(19,18, vlSelfRef.__PVT__chn_alu_ext))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_3__2(VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_3__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chn_sync_pvld = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0) 
                                            >> 3U));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_3__3(VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_3__3\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chn_data_ext = ((0x20000U & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_3_d0 
                                                  << 1U)) 
                                     | vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_3_d0);
    vlSelfRef.__PVT__chn_alu_ext = ((0x30000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_3_d0) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_3_d0));
    vlSelfRef.__PVT__sub_dout = (0x3ffffU & ((0x7ffffU 
                                              & VL_EXTENDS_II(19,18, vlSelfRef.__PVT__chn_data_ext)) 
                                             - (0x7ffffU 
                                                & VL_EXTENDS_II(19,18, vlSelfRef.__PVT__chn_alu_ext))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_4__2(VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_4__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chn_sync_pvld = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0) 
                                            >> 4U));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_4__3(VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_4__3\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chn_data_ext = ((0x20000U & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_4_d0 
                                                  << 1U)) 
                                     | vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_4_d0);
    vlSelfRef.__PVT__chn_alu_ext = ((0x30000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_4_d0) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_4_d0));
    vlSelfRef.__PVT__sub_dout = (0x3ffffU & ((0x7ffffU 
                                              & VL_EXTENDS_II(19,18, vlSelfRef.__PVT__chn_data_ext)) 
                                             - (0x7ffffU 
                                                & VL_EXTENDS_II(19,18, vlSelfRef.__PVT__chn_alu_ext))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_5__2(VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_5__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chn_sync_pvld = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0) 
                                            >> 5U));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_5__3(VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_5__3\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chn_data_ext = ((0x20000U & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_5_d0 
                                                  << 1U)) 
                                     | vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_5_d0);
    vlSelfRef.__PVT__chn_alu_ext = ((0x30000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_5_d0) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_5_d0));
    vlSelfRef.__PVT__sub_dout = (0x3ffffU & ((0x7ffffU 
                                              & VL_EXTENDS_II(19,18, vlSelfRef.__PVT__chn_data_ext)) 
                                             - (0x7ffffU 
                                                & VL_EXTENDS_II(19,18, vlSelfRef.__PVT__chn_alu_ext))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_6__2(VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_6__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chn_sync_pvld = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0) 
                                            >> 6U));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_6__3(VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_6__3\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chn_data_ext = ((0x20000U & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_6_d0 
                                                  << 1U)) 
                                     | vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_6_d0);
    vlSelfRef.__PVT__chn_alu_ext = ((0x30000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_6_d0) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_6_d0));
    vlSelfRef.__PVT__sub_dout = (0x3ffffU & ((0x7ffffU 
                                              & VL_EXTENDS_II(19,18, vlSelfRef.__PVT__chn_data_ext)) 
                                             - (0x7ffffU 
                                                & VL_EXTENDS_II(19,18, vlSelfRef.__PVT__chn_alu_ext))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_7__2(VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_7__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chn_sync_pvld = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0) 
                                            >> 7U));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_7__3(VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___nba_sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_7__3\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__chn_data_ext = ((0x20000U & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_7_d0 
                                                  << 1U)) 
                                     | vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_0_7_d0);
    vlSelfRef.__PVT__chn_alu_ext = ((0x30000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_7_d0) 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                    | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__oprand_1_7_d0));
    vlSelfRef.__PVT__sub_dout = (0x3ffffU & ((0x7ffffU 
                                              & VL_EXTENDS_II(19,18, vlSelfRef.__PVT__chn_data_ext)) 
                                             - (0x7ffffU 
                                                & VL_EXTENDS_II(19,18, vlSelfRef.__PVT__chn_alu_ext))));
}
