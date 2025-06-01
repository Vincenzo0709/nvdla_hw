// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "VNV_nvdla__pch.h"
#include "VNV_nvdla_NV_NVDLA_partition_m.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__2(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__pp_pvld_d0_d3 
        = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__pp_pvld_d0_d2;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__3(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__3\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__pp_pvld_d0_d3 
        = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__pp_pvld_d0_d2;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__4(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__4\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__pp_pvld_d0_d3 
        = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__pp_pvld_d0_d2;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__5(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__5\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__pp_pvld_d0_d3 
        = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__pp_pvld_d0_d2;
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__6(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__6\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_sd_pvld 
        = ((IData)(vlSelfRef.__PVT__nvdla_core_rstn) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_pvld_w));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_sd_pvld 
        = ((IData)(vlSelfRef.__PVT__nvdla_core_rstn) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_pvld_w));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_sd_pvld 
        = ((IData)(vlSelfRef.__PVT__nvdla_core_rstn) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_pvld_w));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_sd_pvld 
        = ((IData)(vlSelfRef.__PVT__nvdla_core_rstn) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_pvld_w));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_actv_vld 
        = ((IData)(vlSelfRef.__PVT__nvdla_core_rstn) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_actv_pvld_w));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_actv_vld 
        = ((IData)(vlSelfRef.__PVT__nvdla_core_rstn) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_actv_pvld_w));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_actv_vld 
        = ((IData)(vlSelfRef.__PVT__nvdla_core_rstn) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_actv_pvld_w));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_actv_vld 
        = ((IData)(vlSelfRef.__PVT__nvdla_core_rstn) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_actv_pvld_w));
    if (vlSelfRef.__PVT__nvdla_core_rstn) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld 
            = (0xffU & (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_actv_pvld_w))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld 
            = (0xffU & (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_actv_pvld_w))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld 
            = (0xffU & (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_actv_pvld_w))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld 
            = (0xffU & (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_actv_pvld_w))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0 
            = (0xffU & (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1 
            = (0xffU & (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2 
            = (0xffU & (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3 
            = (0xffU & (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld))));
        if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg0 
                = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz;
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg1 
                = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz;
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg2 
                = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz;
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg3 
                = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz;
        } else if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg0 = 0U;
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg1 = 0U;
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg2 = 0U;
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg3 = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
             & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_actv_pvld_w))) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_nz 
                = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_nz;
        } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
                    & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_actv_pvld_w))) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_nz = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
             & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_actv_pvld_w))) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_nz 
                = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_nz;
        } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
                    & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_actv_pvld_w))) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_nz = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
             & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_actv_pvld_w))) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_nz 
                = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_nz;
        } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
                    & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_actv_pvld_w))) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_nz = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
             & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_actv_pvld_w))) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_nz 
                = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_nz;
        } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
                    & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_actv_pvld_w))) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_nz = 0U;
        }
    } else {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0 = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1 = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2 = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3 = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg0 = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg1 = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg2 = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg3 = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_nz = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_nz = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_nz = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_nz = 0U;
    }
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_stripe_end 
        = ((IData)(vlSelfRef.__PVT__nvdla_core_rstn) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_end));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_end 
        = ((IData)(vlSelfRef.__PVT__nvdla_core_rstn) 
           && (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pd_d2) 
                >> 6U) & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__7(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__7\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__nvdla_core_rstn) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_mask_d2 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_mask_d1;
        if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__cfg_reg_en) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__cfg_is_wg_d1 
                = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__cfg_is_wg;
        } else if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__cfg_reg_en) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__cfg_is_wg_d1 = 0U;
        }
    } else {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_mask_d2 = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__cfg_is_wg_d1 = 0U;
    }
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__cfg_reg_en_d1 
        = ((IData)(vlSelfRef.__PVT__nvdla_core_rstn) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__cfg_reg_en));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__10(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__10\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_cfg__DOT__cfg_reg_en_d1 
        = ((IData)(vlSelfRef.__PVT__nvdla_core_rstn) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__cfg_reg_en));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__cfg_is_wg = 0U;
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__cfg_reg_en 
        = ((IData)(vlSelfRef.__PVT__nvdla_core_rstn) 
           && (IData)((((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_op_en_reg) 
                        >> 2U) & ((~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_cfg__DOT__op_en_d1)) 
                                  | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_cfg__DOT__op_done_d1)))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_cfg__DOT__op_en_d1 
        = ((IData)(vlSelfRef.__PVT__nvdla_core_rstn) 
           && (1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_op_en_reg) 
                     >> 2U)));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_cfg__DOT__op_done_d1 
        = ((IData)(vlSelfRef.__PVT__nvdla_core_rstn) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d3));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__12(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__12\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0) 
               | (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__7__03a0__KET__)));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1) 
               | (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__7__03a0__KET__)));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2) 
               | (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__7__03a0__KET__)));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3) 
               | (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__7__03a0__KET__)));
    } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
            = (0xffffffffffffff00ULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
            = (0xffffffffffffff00ULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
            = (0xffffffffffffff00ULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
            = (0xffffffffffffff00ULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3);
    }
    if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 1U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0) 
               | ((QData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__15__03a8__KET__)) 
                  << 8U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1) 
               | ((QData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__15__03a8__KET__)) 
                  << 8U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2) 
               | ((QData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__15__03a8__KET__)) 
                  << 8U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3) 
               | ((QData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__15__03a8__KET__)) 
                  << 8U));
    } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 1U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
            = (0xffffffffffff00ffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
            = (0xffffffffffff00ffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
            = (0xffffffffffff00ffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
            = (0xffffffffffff00ffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3);
    }
    if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 2U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0) 
               | ((QData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__23__03a16__KET__)) 
                  << 0x10U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1) 
               | ((QData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__23__03a16__KET__)) 
                  << 0x10U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2) 
               | ((QData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__23__03a16__KET__)) 
                  << 0x10U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3) 
               | ((QData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__23__03a16__KET__)) 
                  << 0x10U));
    } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 2U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
            = (0xffffffffff00ffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
            = (0xffffffffff00ffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
            = (0xffffffffff00ffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
            = (0xffffffffff00ffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3);
    }
    if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 3U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0) 
               | ((QData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__31__03a24__KET__)) 
                  << 0x18U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1) 
               | ((QData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__31__03a24__KET__)) 
                  << 0x18U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2) 
               | ((QData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__31__03a24__KET__)) 
                  << 0x18U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3) 
               | ((QData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__31__03a24__KET__)) 
                  << 0x18U));
    } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 3U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
            = (0xffffffff00ffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
            = (0xffffffff00ffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
            = (0xffffffff00ffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
            = (0xffffffff00ffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3);
    }
    if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 4U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0) 
               | ((QData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__39__03a32__KET__)) 
                  << 0x20U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1) 
               | ((QData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__39__03a32__KET__)) 
                  << 0x20U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2) 
               | ((QData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__39__03a32__KET__)) 
                  << 0x20U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3) 
               | ((QData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__39__03a32__KET__)) 
                  << 0x20U));
    } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 4U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
            = (0xffffff00ffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
            = (0xffffff00ffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
            = (0xffffff00ffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
            = (0xffffff00ffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3);
    }
    if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 5U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0) 
               | ((QData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__47__03a40__KET__)) 
                  << 0x28U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1) 
               | ((QData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__47__03a40__KET__)) 
                  << 0x28U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2) 
               | ((QData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__47__03a40__KET__)) 
                  << 0x28U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3) 
               | ((QData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__47__03a40__KET__)) 
                  << 0x28U));
    } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 5U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
            = (0xffff00ffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
            = (0xffff00ffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
            = (0xffff00ffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
            = (0xffff00ffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3);
    }
    if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 6U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
            = ((0xff00ffffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0) 
               | ((QData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__55__03a48__KET__)) 
                  << 0x30U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
            = ((0xff00ffffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1) 
               | ((QData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__55__03a48__KET__)) 
                  << 0x30U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
            = ((0xff00ffffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2) 
               | ((QData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__55__03a48__KET__)) 
                  << 0x30U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
            = ((0xff00ffffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3) 
               | ((QData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__55__03a48__KET__)) 
                  << 0x30U));
    } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 6U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
            = (0xff00ffffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
            = (0xff00ffffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
            = (0xff00ffffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
            = (0xff00ffffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3);
    }
    if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
         & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
            >> 7U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
            = ((0xffffffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0) 
               | ((QData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__63__03a56__KET__)) 
                  << 0x38U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
            = ((0xffffffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1) 
               | ((QData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__63__03a56__KET__)) 
                  << 0x38U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
            = ((0xffffffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2) 
               | ((QData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__63__03a56__KET__)) 
                  << 0x38U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
            = ((0xffffffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3) 
               | ((QData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__63__03a56__KET__)) 
                  << 0x38U));
    } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld) 
                & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz) 
                   >> 7U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
            = (0xffffffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
            = (0xffffffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
            = (0xffffffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
            = (0xffffffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3);
    }
    if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
         & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_actv_pvld_w))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data) 
               | (IData)((IData)(((- (IData)((1U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_nz)))) 
                                  & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data__BRA__7__03a0__KET__)))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data) 
               | ((QData)((IData)(((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_nz) 
                                                >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data__BRA__15__03a8__KET__)))) 
                  << 8U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data) 
               | ((QData)((IData)(((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_nz) 
                                                >> 2U)))) 
                                   & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data__BRA__23__03a16__KET__)))) 
                  << 0x10U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data) 
               | ((QData)((IData)(((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_nz) 
                                                >> 3U)))) 
                                   & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data__BRA__31__03a24__KET__)))) 
                  << 0x18U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data) 
               | ((QData)((IData)(((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_nz) 
                                                >> 4U)))) 
                                   & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data__BRA__39__03a32__KET__)))) 
                  << 0x20U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data) 
               | ((QData)((IData)(((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_nz) 
                                                >> 5U)))) 
                                   & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data__BRA__47__03a40__KET__)))) 
                  << 0x28U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
            = ((0xff00ffffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data) 
               | ((QData)((IData)(((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_nz) 
                                                >> 6U)))) 
                                   & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data__BRA__55__03a48__KET__)))) 
                  << 0x30U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
            = ((0xffffffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data) 
               | ((QData)((IData)(((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_nz) 
                                                >> 7U)))) 
                                   & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data__BRA__63__03a56__KET__)))) 
                  << 0x38U));
    } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
                & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_actv_pvld_w))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
            = (0xffffffffffffff00ULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
            = (0xffffffffffff00ffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
            = (0xffffffffff00ffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
            = (0xffffffff00ffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
            = (0xffffff00ffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
            = (0xffff00ffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
            = (0xff00ffffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
            = (0xffffffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data);
    }
    if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
         & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_actv_pvld_w))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data) 
               | (IData)((IData)(((- (IData)((1U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_nz)))) 
                                  & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data__BRA__7__03a0__KET__)))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data) 
               | ((QData)((IData)(((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_nz) 
                                                >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data__BRA__15__03a8__KET__)))) 
                  << 8U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data) 
               | ((QData)((IData)(((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_nz) 
                                                >> 2U)))) 
                                   & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data__BRA__23__03a16__KET__)))) 
                  << 0x10U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data) 
               | ((QData)((IData)(((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_nz) 
                                                >> 3U)))) 
                                   & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data__BRA__31__03a24__KET__)))) 
                  << 0x18U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data) 
               | ((QData)((IData)(((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_nz) 
                                                >> 4U)))) 
                                   & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data__BRA__39__03a32__KET__)))) 
                  << 0x20U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data) 
               | ((QData)((IData)(((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_nz) 
                                                >> 5U)))) 
                                   & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data__BRA__47__03a40__KET__)))) 
                  << 0x28U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
            = ((0xff00ffffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data) 
               | ((QData)((IData)(((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_nz) 
                                                >> 6U)))) 
                                   & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data__BRA__55__03a48__KET__)))) 
                  << 0x30U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
            = ((0xffffffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data) 
               | ((QData)((IData)(((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_nz) 
                                                >> 7U)))) 
                                   & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data__BRA__63__03a56__KET__)))) 
                  << 0x38U));
    } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
                & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_actv_pvld_w))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
            = (0xffffffffffffff00ULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
            = (0xffffffffffff00ffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
            = (0xffffffffff00ffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
            = (0xffffffff00ffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
            = (0xffffff00ffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
            = (0xffff00ffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
            = (0xff00ffffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
            = (0xffffffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data);
    }
    if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
         & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_actv_pvld_w))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data) 
               | (IData)((IData)(((- (IData)((1U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_nz)))) 
                                  & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data__BRA__7__03a0__KET__)))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data) 
               | ((QData)((IData)(((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_nz) 
                                                >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data__BRA__15__03a8__KET__)))) 
                  << 8U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data) 
               | ((QData)((IData)(((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_nz) 
                                                >> 2U)))) 
                                   & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data__BRA__23__03a16__KET__)))) 
                  << 0x10U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data) 
               | ((QData)((IData)(((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_nz) 
                                                >> 3U)))) 
                                   & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data__BRA__31__03a24__KET__)))) 
                  << 0x18U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data) 
               | ((QData)((IData)(((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_nz) 
                                                >> 4U)))) 
                                   & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data__BRA__39__03a32__KET__)))) 
                  << 0x20U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data) 
               | ((QData)((IData)(((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_nz) 
                                                >> 5U)))) 
                                   & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data__BRA__47__03a40__KET__)))) 
                  << 0x28U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
            = ((0xff00ffffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data) 
               | ((QData)((IData)(((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_nz) 
                                                >> 6U)))) 
                                   & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data__BRA__55__03a48__KET__)))) 
                  << 0x30U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
            = ((0xffffffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data) 
               | ((QData)((IData)(((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_nz) 
                                                >> 7U)))) 
                                   & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data__BRA__63__03a56__KET__)))) 
                  << 0x38U));
    } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
                & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_actv_pvld_w))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
            = (0xffffffffffffff00ULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
            = (0xffffffffffff00ffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
            = (0xffffffffff00ffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
            = (0xffffffff00ffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
            = (0xffffff00ffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
            = (0xffff00ffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
            = (0xff00ffffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
            = (0xffffffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data);
    }
    if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
         & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_actv_pvld_w))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data) 
               | (IData)((IData)(((- (IData)((1U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_nz)))) 
                                  & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data__BRA__7__03a0__KET__)))));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data) 
               | ((QData)((IData)(((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_nz) 
                                                >> 1U)))) 
                                   & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data__BRA__15__03a8__KET__)))) 
                  << 8U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data) 
               | ((QData)((IData)(((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_nz) 
                                                >> 2U)))) 
                                   & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data__BRA__23__03a16__KET__)))) 
                  << 0x10U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data) 
               | ((QData)((IData)(((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_nz) 
                                                >> 3U)))) 
                                   & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data__BRA__31__03a24__KET__)))) 
                  << 0x18U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data) 
               | ((QData)((IData)(((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_nz) 
                                                >> 4U)))) 
                                   & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data__BRA__39__03a32__KET__)))) 
                  << 0x20U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data) 
               | ((QData)((IData)(((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_nz) 
                                                >> 5U)))) 
                                   & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data__BRA__47__03a40__KET__)))) 
                  << 0x28U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
            = ((0xff00ffffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data) 
               | ((QData)((IData)(((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_nz) 
                                                >> 6U)))) 
                                   & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data__BRA__55__03a48__KET__)))) 
                  << 0x30U));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
            = ((0xffffffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data) 
               | ((QData)((IData)(((- (IData)((1U & 
                                               ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_nz) 
                                                >> 7U)))) 
                                   & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data__BRA__63__03a56__KET__)))) 
                  << 0x38U));
    } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) 
                & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_actv_pvld_w))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
            = (0xffffffffffffff00ULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
            = (0xffffffffffff00ffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
            = (0xffffffffff00ffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
            = (0xffffffff00ffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
            = (0xffffff00ffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
            = (0xffff00ffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
            = (0xff00ffffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data);
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
            = (0xffffffffffffffULL & vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data);
    }
    if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) 
         & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__7__03a0__KET__ 
            = (0xffU & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data_w));
    } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) 
                & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__7__03a0__KET__ = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) 
         & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2) 
            >> 1U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__15__03a8__KET__ 
            = (0xffU & (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data_w 
                                >> 8U)));
    } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) 
                & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2) 
                   >> 1U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__15__03a8__KET__ = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) 
         & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2) 
            >> 2U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__23__03a16__KET__ 
            = (0xffU & (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data_w 
                                >> 0x10U)));
    } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) 
                & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2) 
                   >> 2U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__23__03a16__KET__ = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) 
         & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2) 
            >> 3U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__31__03a24__KET__ 
            = (0xffU & (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data_w 
                                >> 0x18U)));
    } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) 
                & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2) 
                   >> 3U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__31__03a24__KET__ = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) 
         & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2) 
            >> 4U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__39__03a32__KET__ 
            = (0xffU & (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data_w 
                                >> 0x20U)));
    } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) 
                & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2) 
                   >> 4U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__39__03a32__KET__ = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) 
         & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2) 
            >> 5U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__47__03a40__KET__ 
            = (0xffU & (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data_w 
                                >> 0x28U)));
    } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) 
                & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2) 
                   >> 5U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__47__03a40__KET__ = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) 
         & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2) 
            >> 6U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__55__03a48__KET__ 
            = (0xffU & (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data_w 
                                >> 0x30U)));
    } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) 
                & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2) 
                   >> 6U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__55__03a48__KET__ = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) 
         & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2) 
            >> 7U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__63__03a56__KET__ 
            = (0xffU & (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data_w 
                                >> 0x38U)));
    } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) 
                & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2) 
                   >> 7U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data__BRA__63__03a56__KET__ = 0U;
    }
    if ((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data__BRA__7__03a0__KET__ 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__7__03a0__KET__;
    } else if ((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                      & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data__BRA__7__03a0__KET__ = 0U;
    }
    if ((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
               & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                  >> 1U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data__BRA__15__03a8__KET__ 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__15__03a8__KET__;
    } else if ((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                      & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                         >> 1U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data__BRA__15__03a8__KET__ = 0U;
    }
    if ((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
               & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                  >> 2U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data__BRA__23__03a16__KET__ 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__23__03a16__KET__;
    } else if ((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                      & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                         >> 2U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data__BRA__23__03a16__KET__ = 0U;
    }
    if ((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
               & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                  >> 3U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data__BRA__31__03a24__KET__ 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__31__03a24__KET__;
    } else if ((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                      & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                         >> 3U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data__BRA__31__03a24__KET__ = 0U;
    }
    if ((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
               & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                  >> 4U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data__BRA__39__03a32__KET__ 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__39__03a32__KET__;
    } else if ((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                      & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                         >> 4U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data__BRA__39__03a32__KET__ = 0U;
    }
    if ((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
               & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                  >> 5U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data__BRA__47__03a40__KET__ 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__47__03a40__KET__;
    } else if ((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                      & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                         >> 5U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data__BRA__47__03a40__KET__ = 0U;
    }
    if ((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
               & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                  >> 6U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data__BRA__55__03a48__KET__ 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__55__03a48__KET__;
    } else if ((1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                      & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                         >> 6U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data__BRA__55__03a48__KET__ = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
         & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
            >> 7U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data__BRA__63__03a56__KET__ 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__63__03a56__KET__;
    } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                   >> 7U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_data__BRA__63__03a56__KET__ = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                >> 1U) & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data__BRA__7__03a0__KET__ 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__7__03a0__KET__;
    } else if ((1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                       >> 1U) & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data__BRA__7__03a0__KET__ = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                >> 1U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                          >> 1U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data__BRA__15__03a8__KET__ 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__15__03a8__KET__;
    } else if ((1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                       >> 1U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                 >> 1U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data__BRA__15__03a8__KET__ = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                >> 1U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                          >> 2U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data__BRA__23__03a16__KET__ 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__23__03a16__KET__;
    } else if ((1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                       >> 1U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                 >> 2U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data__BRA__23__03a16__KET__ = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                >> 1U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                          >> 3U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data__BRA__31__03a24__KET__ 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__31__03a24__KET__;
    } else if ((1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                       >> 1U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                 >> 3U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data__BRA__31__03a24__KET__ = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                >> 1U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                          >> 4U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data__BRA__39__03a32__KET__ 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__39__03a32__KET__;
    } else if ((1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                       >> 1U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                 >> 4U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data__BRA__39__03a32__KET__ = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                >> 1U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                          >> 5U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data__BRA__47__03a40__KET__ 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__47__03a40__KET__;
    } else if ((1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                       >> 1U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                 >> 5U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data__BRA__47__03a40__KET__ = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                >> 1U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                          >> 6U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data__BRA__55__03a48__KET__ 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__55__03a48__KET__;
    } else if ((1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                       >> 1U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                 >> 6U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data__BRA__55__03a48__KET__ = 0U;
    }
    if ((IData)((((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 1U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                            >> 7U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data__BRA__63__03a56__KET__ 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__63__03a56__KET__;
    } else if ((IData)((((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                         >> 1U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                   >> 7U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_data__BRA__63__03a56__KET__ = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                >> 2U) & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data__BRA__7__03a0__KET__ 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__7__03a0__KET__;
    } else if ((1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                       >> 2U) & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data__BRA__7__03a0__KET__ = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                >> 2U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                          >> 1U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data__BRA__15__03a8__KET__ 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__15__03a8__KET__;
    } else if ((1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                       >> 2U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                 >> 1U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data__BRA__15__03a8__KET__ = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                >> 2U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                          >> 2U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data__BRA__23__03a16__KET__ 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__23__03a16__KET__;
    } else if ((1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                       >> 2U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                 >> 2U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data__BRA__23__03a16__KET__ = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                >> 2U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                          >> 3U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data__BRA__31__03a24__KET__ 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__31__03a24__KET__;
    } else if ((1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                       >> 2U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                 >> 3U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data__BRA__31__03a24__KET__ = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                >> 2U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                          >> 4U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data__BRA__39__03a32__KET__ 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__39__03a32__KET__;
    } else if ((1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                       >> 2U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                 >> 4U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data__BRA__39__03a32__KET__ = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                >> 2U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                          >> 5U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data__BRA__47__03a40__KET__ 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__47__03a40__KET__;
    } else if ((1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                       >> 2U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                 >> 5U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data__BRA__47__03a40__KET__ = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                >> 2U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                          >> 6U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data__BRA__55__03a48__KET__ 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__55__03a48__KET__;
    } else if ((1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                       >> 2U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                 >> 6U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data__BRA__55__03a48__KET__ = 0U;
    }
    if ((IData)((((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 2U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                            >> 7U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data__BRA__63__03a56__KET__ 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__63__03a56__KET__;
    } else if ((IData)((((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                         >> 2U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                   >> 7U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_data__BRA__63__03a56__KET__ = 0U;
    }
    if ((IData)((((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 3U) & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data__BRA__7__03a0__KET__ 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__7__03a0__KET__;
    } else if ((IData)((((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                         >> 3U) & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data__BRA__7__03a0__KET__ = 0U;
    }
    if ((IData)((((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 3U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                            >> 1U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data__BRA__15__03a8__KET__ 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__15__03a8__KET__;
    } else if ((IData)((((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                         >> 3U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                   >> 1U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data__BRA__15__03a8__KET__ = 0U;
    }
    if ((IData)((((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 3U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                            >> 2U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data__BRA__23__03a16__KET__ 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__23__03a16__KET__;
    } else if ((IData)((((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                         >> 3U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                   >> 2U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data__BRA__23__03a16__KET__ = 0U;
    }
    if ((IData)((((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 3U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                            >> 3U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data__BRA__31__03a24__KET__ 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__31__03a24__KET__;
    } else if ((IData)((((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                         >> 3U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                   >> 3U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data__BRA__31__03a24__KET__ = 0U;
    }
    if ((IData)((((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 3U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                            >> 4U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data__BRA__39__03a32__KET__ 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__39__03a32__KET__;
    } else if ((IData)((((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                         >> 3U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                   >> 4U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data__BRA__39__03a32__KET__ = 0U;
    }
    if ((IData)((((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 3U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                            >> 5U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data__BRA__47__03a40__KET__ 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__47__03a40__KET__;
    } else if ((IData)((((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                         >> 3U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                   >> 5U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data__BRA__47__03a40__KET__ = 0U;
    }
    if ((IData)((((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 3U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                            >> 6U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data__BRA__55__03a48__KET__ 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__55__03a48__KET__;
    } else if ((IData)((((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                         >> 3U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                   >> 6U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data__BRA__55__03a48__KET__ = 0U;
    }
    if ((IData)((((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 3U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                            >> 7U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data__BRA__63__03a56__KET__ 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__63__03a56__KET__;
    } else if ((IData)((((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                         >> 3U) & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz) 
                                   >> 7U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_data__BRA__63__03a56__KET__ = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) 
         & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__7__03a0__KET__ 
            = (0xffU & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data_w));
    } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) 
                & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__7__03a0__KET__ = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) 
         & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2) 
            >> 1U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__15__03a8__KET__ 
            = (0xffU & (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data_w 
                                >> 8U)));
    } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) 
                & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2) 
                   >> 1U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__15__03a8__KET__ = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) 
         & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2) 
            >> 2U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__23__03a16__KET__ 
            = (0xffU & (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data_w 
                                >> 0x10U)));
    } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) 
                & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2) 
                   >> 2U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__23__03a16__KET__ = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) 
         & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2) 
            >> 3U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__31__03a24__KET__ 
            = (0xffU & (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data_w 
                                >> 0x18U)));
    } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) 
                & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2) 
                   >> 3U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__31__03a24__KET__ = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) 
         & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2) 
            >> 4U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__39__03a32__KET__ 
            = (0xffU & (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data_w 
                                >> 0x20U)));
    } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) 
                & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2) 
                   >> 4U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__39__03a32__KET__ = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) 
         & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2) 
            >> 5U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__47__03a40__KET__ 
            = (0xffU & (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data_w 
                                >> 0x28U)));
    } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) 
                & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2) 
                   >> 5U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__47__03a40__KET__ = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) 
         & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2) 
            >> 6U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__55__03a48__KET__ 
            = (0xffU & (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data_w 
                                >> 0x30U)));
    } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) 
                & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2) 
                   >> 6U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__55__03a48__KET__ = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) 
         & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2) 
            >> 7U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__63__03a56__KET__ 
            = (0xffU & (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data_w 
                                >> 0x38U)));
    } else if (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) 
                & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2) 
                   >> 7U))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data__BRA__63__03a56__KET__ = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__13(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__13\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_mask_d1))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d2 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1;
    } else if ((1U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_mask_d1))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d2 = 0U;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_mask_d1))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d2 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1;
    } else if ((2U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_mask_d1))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d2 = 0U;
    }
    if ((4U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_mask_d1))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d2 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1;
    } else if ((4U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_mask_d1))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d2 = 0U;
    }
    if ((8U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_mask_d1))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d2 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1;
    } else if ((8U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_mask_d1))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d2 = 0U;
    }
    if ((1U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__out_mask))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__sum_out_d0_d3;
    } else if ((1U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__out_mask))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data0_d1 = 0U;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__out_mask))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__sum_out_d0_d3;
    } else if ((2U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__out_mask))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data1_d1 = 0U;
    }
    if ((4U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__out_mask))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__sum_out_d0_d3;
    } else if ((4U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__out_mask))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data2_d1 = 0U;
    }
    if ((8U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__out_mask))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__sum_out_d0_d3;
    } else if ((8U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__out_mask))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_data3_d1 = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__14(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__14\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_op_en_reg 
        = ((IData)(vlSelfRef.__PVT__nvdla_core_rstn)
            ? (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_op_en_reg_w)
            : 0U);
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__15(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__15\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d3 
        = ((IData)(vlSelfRef.__PVT__nvdla_core_rstn) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d2));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_mask_d1 
        = ((IData)(vlSelfRef.__PVT__nvdla_core_rstn)
            ? (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__out_mask)
            : 0U);
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d2 
        = ((IData)(vlSelfRef.__PVT__nvdla_core_rstn) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d1));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d1 
        = ((IData)(vlSelfRef.__PVT__nvdla_core_rstn) 
           && (IData)(((0x140U == (0x140U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pd_d2))) 
                       & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d2))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__16(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__16\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_pvld 
        = ((IData)(vlSelfRef.__PVT__nvdla_core_rstn) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2));
    if (vlSelfRef.__PVT__nvdla_core_rstn) {
        if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz 
                = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_mask_d2;
        } else if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz = 0U;
        }
        if ((1U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel))) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_nz 
                = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz;
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel))) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_nz = 0U;
        }
        if ((2U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel))) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_nz 
                = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz;
        } else if ((2U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel))) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_nz = 0U;
        }
        if ((4U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel))) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_nz 
                = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz;
        } else if ((4U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel))) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_nz = 0U;
        }
        if ((8U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel))) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_nz 
                = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz;
        } else if ((8U & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel))) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_nz = 0U;
        }
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel 
            = ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_sel_d2) 
               & (- (IData)((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2))));
        if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz 
                = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_mask_d2;
        } else if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_pvld_d2) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz = 0U;
        }
    } else {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_nz = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_nz = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_nz = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_nz = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_nz = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_nz = 0U;
    }
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st 
        = ((IData)(vlSelfRef.__PVT__nvdla_core_rstn) 
           && (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pd_d2) 
                >> 5U) & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2)));
    if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_actv_pvld_w 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_sd_pvld;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_actv_pvld_w 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_sd_pvld;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_actv_pvld_w 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_sd_pvld;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_actv_pvld_w 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_sd_pvld;
    } else {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_actv_pvld_w 
            = ((~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_stripe_end)) 
               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_actv_vld));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_actv_pvld_w 
            = ((~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_stripe_end)) 
               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_actv_vld));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_actv_pvld_w 
            = ((~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_stripe_end)) 
               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_actv_vld));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_actv_pvld_w 
            = ((~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_stripe_end)) 
               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_actv_vld));
    }
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt0_sd_pvld_w 
        = (1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                 | ((~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st)) 
                    & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_sd_pvld))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt1_sd_pvld_w 
        = (1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 1U) | ((~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st)) 
                            & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_sd_pvld))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt2_sd_pvld_w 
        = (1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 2U) | ((~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st)) 
                            & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_sd_pvld))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt3_sd_pvld_w 
        = (1U & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_sel) 
                  >> 3U) | ((~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_stripe_st)) 
                            & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_sd_pvld))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__17(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__17\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_pre_data_w 
        = (((QData)((IData)(((((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data7_d2) 
                               << 0x18U) | ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data6_d2) 
                                            << 0x10U)) 
                             | (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data5_d2) 
                                 << 8U) | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data4_d2))))) 
            << 0x20U) | (QData)((IData)(((((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data3_d2) 
                                           << 0x18U) 
                                          | ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data2_d2) 
                                             << 0x10U)) 
                                         | (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data1_d2) 
                                             << 8U) 
                                            | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_data0_d2))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__wt_pre_data_w 
        = (((QData)((IData)(((((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data7_d2) 
                               << 0x18U) | ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data6_d2) 
                                            << 0x10U)) 
                             | (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data5_d2) 
                                 << 8U) | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data4_d2))))) 
            << 0x20U) | (QData)((IData)(((((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data3_d2) 
                                           << 0x18U) 
                                          | ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data2_d2) 
                                             << 0x10U)) 
                                         | (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data1_d2) 
                                             << 8U) 
                                            | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_wt_data0_d2))))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__18(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__18\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__pp_pvld_d0_d2) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__sum_out_d0_d3 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__sum_out_d0_d2;
    }
    if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__pp_pvld_d0_d1) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__pp_pvld_d0_d2 = 1U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__sum_out_d0_d2 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__sum_out_d0_d1;
    } else {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__pp_pvld_d0_d2 = 0U;
    }
    if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__pp_pvld_d0) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__pp_pvld_d0_d1 = 1U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__sum_out_d0_d1 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__sum_out_d0;
    } else {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__pp_pvld_d0_d1 = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__19(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__19\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__pp_pvld_d0_d2) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__sum_out_d0_d3 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__sum_out_d0_d2;
    }
    if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__pp_pvld_d0_d1) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__pp_pvld_d0_d2 = 1U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__sum_out_d0_d2 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__sum_out_d0_d1;
    } else {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__pp_pvld_d0_d2 = 0U;
    }
    if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__pp_pvld_d0) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__pp_pvld_d0_d1 = 1U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__sum_out_d0_d1 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__sum_out_d0;
    } else {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__pp_pvld_d0_d1 = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__20(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__20\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__pp_pvld_d0_d2) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__sum_out_d0_d3 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__sum_out_d0_d2;
    }
    if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__pp_pvld_d0_d1) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__pp_pvld_d0_d2 = 1U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__sum_out_d0_d2 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__sum_out_d0_d1;
    } else {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__pp_pvld_d0_d2 = 0U;
    }
    if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__pp_pvld_d0) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__pp_pvld_d0_d1 = 1U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__sum_out_d0_d1 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__sum_out_d0;
    } else {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__pp_pvld_d0_d1 = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__21(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__21\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__pp_pvld_d0_d2) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__sum_out_d0_d3 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__sum_out_d0_d2;
    }
    if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__pp_pvld_d0_d1) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__pp_pvld_d0_d2 = 1U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__sum_out_d0_d2 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__sum_out_d0_d1;
    } else {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__pp_pvld_d0_d2 = 0U;
    }
    if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__pp_pvld_d0) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__pp_pvld_d0_d1 = 1U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__sum_out_d0_d1 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__sum_out_d0;
    } else {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__pp_pvld_d0_d1 = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___nba_comb__TOP__NV_nvdla__DOT__u_partition_ma__0(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___nba_comb__TOP__NV_nvdla__DOT__u_partition_ma__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__out_mask 
        = ((((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__pp_pvld_d0_d3) 
             << 3U) | ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__pp_pvld_d0_d3) 
                       << 2U)) | (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__pp_pvld_d0_d3) 
                                   << 1U) | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__pp_pvld_d0_d3)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___nba_comb__TOP__NV_nvdla__DOT__u_partition_ma__1(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___nba_comb__TOP__NV_nvdla__DOT__u_partition_ma__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_op_en_reg_w 
        = ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d3)
            ? 0U : ((6U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_op_en_reg) 
                           << 1U)) | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_op_en_ori)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__23(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__23\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__pp_pvld_d0 
        = (1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0) 
                 & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld)));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__pp_pvld_d0 
        = (1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1) 
                 & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld)));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__pp_pvld_d0 
        = (1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2) 
                 & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld)));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__pp_pvld_d0 
        = (1U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3) 
                 & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___nba_comb__TOP__NV_nvdla__DOT__u_partition_ma__2(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___nba_comb__TOP__NV_nvdla__DOT__u_partition_ma__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__sum_out_d0 
        = (0x7ffffU & (VL_EXTENDS_II(19,18, (0x3ffffU 
                                             & (VL_MULS_III(18, 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,8, 
                                                                             (0xffU 
                                                                              & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data)))), 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,8, 
                                                                             (0xffU 
                                                                              & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0))))) 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld) 
                                                                 & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0) 
                                                                    & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_nz) 
                                                                       & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg0)))))))))) 
                       + (VL_EXTENDS_II(19,18, (0x3ffffU 
                                                & (VL_MULS_III(18, 
                                                               (0x3ffffU 
                                                                & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
                                                                                >> 8U))))), 
                                                               (0x3ffffU 
                                                                & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
                                                                                >> 8U)))))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld) 
                                                                     & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0) 
                                                                        & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_nz) 
                                                                           & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg0)))) 
                                                                    >> 1U))))))) 
                          + (VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (VL_MULS_III(18, 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
                                                                                >> 0x10U))))), 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
                                                                                >> 0x10U)))))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld) 
                                                                        & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0) 
                                                                           & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_nz) 
                                                                              & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg0)))) 
                                                                       >> 2U))))))) 
                             + (VL_EXTENDS_II(19,18, 
                                              (0x3ffffU 
                                               & (VL_MULS_III(18, 
                                                              (0x3ffffU 
                                                               & VL_EXTENDS_II(18,8, 
                                                                               (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
                                                                                >> 0x18U))))), 
                                                              (0x3ffffU 
                                                               & VL_EXTENDS_II(18,8, 
                                                                               (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
                                                                                >> 0x18U)))))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld) 
                                                                    & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0) 
                                                                       & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_nz) 
                                                                          & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg0)))) 
                                                                   >> 3U))))))) 
                                + (VL_EXTENDS_II(19,18, 
                                                 (0x3ffffU 
                                                  & (VL_MULS_III(18, 
                                                                 (0x3ffffU 
                                                                  & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
                                                                                >> 0x20U))))), 
                                                                 (0x3ffffU 
                                                                  & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
                                                                                >> 0x20U)))))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld) 
                                                                       & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0) 
                                                                          & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_nz) 
                                                                             & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg0)))) 
                                                                      >> 4U))))))) 
                                   + (VL_EXTENDS_II(19,18, 
                                                    (0x3ffffU 
                                                     & (VL_MULS_III(18, 
                                                                    (0x3ffffU 
                                                                     & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
                                                                                >> 0x28U))))), 
                                                                    (0x3ffffU 
                                                                     & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
                                                                                >> 0x28U)))))) 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld) 
                                                                          & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0) 
                                                                             & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_nz) 
                                                                                & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg0)))) 
                                                                         >> 5U))))))) 
                                      + (VL_EXTENDS_II(19,18, 
                                                       (0x3ffffU 
                                                        & (VL_MULS_III(18, 
                                                                       (0x3ffffU 
                                                                        & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
                                                                                >> 0x30U))))), 
                                                                       (0x3ffffU 
                                                                        & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
                                                                                >> 0x30U)))))) 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld) 
                                                                             & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0) 
                                                                                & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_nz) 
                                                                                & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg0)))) 
                                                                            >> 6U))))))) 
                                         + VL_EXTENDS_II(19,18, 
                                                         (0x3ffffU 
                                                          & (VL_MULS_III(18, 
                                                                         (0x3ffffU 
                                                                          & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_data 
                                                                                >> 0x38U))))), 
                                                                         (0x3ffffU 
                                                                          & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg0 
                                                                                >> 0x38U)))))) 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_pvld) 
                                                                               & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg0) 
                                                                                & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt0_actv_nz) 
                                                                                & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg0)))) 
                                                                              >> 7U)))))))))))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__sum_out_d0 
        = (0x7ffffU & (VL_EXTENDS_II(19,18, (0x3ffffU 
                                             & (VL_MULS_III(18, 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,8, 
                                                                             (0xffU 
                                                                              & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data)))), 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,8, 
                                                                             (0xffU 
                                                                              & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1))))) 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld) 
                                                                 & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1) 
                                                                    & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_nz) 
                                                                       & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg1)))))))))) 
                       + (VL_EXTENDS_II(19,18, (0x3ffffU 
                                                & (VL_MULS_III(18, 
                                                               (0x3ffffU 
                                                                & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
                                                                                >> 8U))))), 
                                                               (0x3ffffU 
                                                                & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
                                                                                >> 8U)))))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld) 
                                                                     & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1) 
                                                                        & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_nz) 
                                                                           & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg1)))) 
                                                                    >> 1U))))))) 
                          + (VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (VL_MULS_III(18, 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
                                                                                >> 0x10U))))), 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
                                                                                >> 0x10U)))))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld) 
                                                                        & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1) 
                                                                           & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_nz) 
                                                                              & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg1)))) 
                                                                       >> 2U))))))) 
                             + (VL_EXTENDS_II(19,18, 
                                              (0x3ffffU 
                                               & (VL_MULS_III(18, 
                                                              (0x3ffffU 
                                                               & VL_EXTENDS_II(18,8, 
                                                                               (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
                                                                                >> 0x18U))))), 
                                                              (0x3ffffU 
                                                               & VL_EXTENDS_II(18,8, 
                                                                               (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
                                                                                >> 0x18U)))))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld) 
                                                                    & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1) 
                                                                       & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_nz) 
                                                                          & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg1)))) 
                                                                   >> 3U))))))) 
                                + (VL_EXTENDS_II(19,18, 
                                                 (0x3ffffU 
                                                  & (VL_MULS_III(18, 
                                                                 (0x3ffffU 
                                                                  & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
                                                                                >> 0x20U))))), 
                                                                 (0x3ffffU 
                                                                  & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
                                                                                >> 0x20U)))))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld) 
                                                                       & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1) 
                                                                          & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_nz) 
                                                                             & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg1)))) 
                                                                      >> 4U))))))) 
                                   + (VL_EXTENDS_II(19,18, 
                                                    (0x3ffffU 
                                                     & (VL_MULS_III(18, 
                                                                    (0x3ffffU 
                                                                     & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
                                                                                >> 0x28U))))), 
                                                                    (0x3ffffU 
                                                                     & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
                                                                                >> 0x28U)))))) 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld) 
                                                                          & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1) 
                                                                             & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_nz) 
                                                                                & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg1)))) 
                                                                         >> 5U))))))) 
                                      + (VL_EXTENDS_II(19,18, 
                                                       (0x3ffffU 
                                                        & (VL_MULS_III(18, 
                                                                       (0x3ffffU 
                                                                        & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
                                                                                >> 0x30U))))), 
                                                                       (0x3ffffU 
                                                                        & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
                                                                                >> 0x30U)))))) 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld) 
                                                                             & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1) 
                                                                                & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_nz) 
                                                                                & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg1)))) 
                                                                            >> 6U))))))) 
                                         + VL_EXTENDS_II(19,18, 
                                                         (0x3ffffU 
                                                          & (VL_MULS_III(18, 
                                                                         (0x3ffffU 
                                                                          & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_data 
                                                                                >> 0x38U))))), 
                                                                         (0x3ffffU 
                                                                          & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg1 
                                                                                >> 0x38U)))))) 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_pvld) 
                                                                               & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg1) 
                                                                                & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt1_actv_nz) 
                                                                                & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg1)))) 
                                                                              >> 7U)))))))))))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__sum_out_d0 
        = (0x7ffffU & (VL_EXTENDS_II(19,18, (0x3ffffU 
                                             & (VL_MULS_III(18, 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,8, 
                                                                             (0xffU 
                                                                              & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data)))), 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,8, 
                                                                             (0xffU 
                                                                              & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2))))) 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld) 
                                                                 & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2) 
                                                                    & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_nz) 
                                                                       & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg2)))))))))) 
                       + (VL_EXTENDS_II(19,18, (0x3ffffU 
                                                & (VL_MULS_III(18, 
                                                               (0x3ffffU 
                                                                & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
                                                                                >> 8U))))), 
                                                               (0x3ffffU 
                                                                & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
                                                                                >> 8U)))))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld) 
                                                                     & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2) 
                                                                        & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_nz) 
                                                                           & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg2)))) 
                                                                    >> 1U))))))) 
                          + (VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (VL_MULS_III(18, 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
                                                                                >> 0x10U))))), 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
                                                                                >> 0x10U)))))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld) 
                                                                        & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2) 
                                                                           & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_nz) 
                                                                              & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg2)))) 
                                                                       >> 2U))))))) 
                             + (VL_EXTENDS_II(19,18, 
                                              (0x3ffffU 
                                               & (VL_MULS_III(18, 
                                                              (0x3ffffU 
                                                               & VL_EXTENDS_II(18,8, 
                                                                               (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
                                                                                >> 0x18U))))), 
                                                              (0x3ffffU 
                                                               & VL_EXTENDS_II(18,8, 
                                                                               (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
                                                                                >> 0x18U)))))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld) 
                                                                    & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2) 
                                                                       & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_nz) 
                                                                          & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg2)))) 
                                                                   >> 3U))))))) 
                                + (VL_EXTENDS_II(19,18, 
                                                 (0x3ffffU 
                                                  & (VL_MULS_III(18, 
                                                                 (0x3ffffU 
                                                                  & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
                                                                                >> 0x20U))))), 
                                                                 (0x3ffffU 
                                                                  & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
                                                                                >> 0x20U)))))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld) 
                                                                       & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2) 
                                                                          & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_nz) 
                                                                             & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg2)))) 
                                                                      >> 4U))))))) 
                                   + (VL_EXTENDS_II(19,18, 
                                                    (0x3ffffU 
                                                     & (VL_MULS_III(18, 
                                                                    (0x3ffffU 
                                                                     & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
                                                                                >> 0x28U))))), 
                                                                    (0x3ffffU 
                                                                     & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
                                                                                >> 0x28U)))))) 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld) 
                                                                          & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2) 
                                                                             & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_nz) 
                                                                                & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg2)))) 
                                                                         >> 5U))))))) 
                                      + (VL_EXTENDS_II(19,18, 
                                                       (0x3ffffU 
                                                        & (VL_MULS_III(18, 
                                                                       (0x3ffffU 
                                                                        & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
                                                                                >> 0x30U))))), 
                                                                       (0x3ffffU 
                                                                        & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
                                                                                >> 0x30U)))))) 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld) 
                                                                             & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2) 
                                                                                & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_nz) 
                                                                                & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg2)))) 
                                                                            >> 6U))))))) 
                                         + VL_EXTENDS_II(19,18, 
                                                         (0x3ffffU 
                                                          & (VL_MULS_III(18, 
                                                                         (0x3ffffU 
                                                                          & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_data 
                                                                                >> 0x38U))))), 
                                                                         (0x3ffffU 
                                                                          & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg2 
                                                                                >> 0x38U)))))) 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_pvld) 
                                                                               & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg2) 
                                                                                & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt2_actv_nz) 
                                                                                & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg2)))) 
                                                                              >> 7U)))))))))))))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__sum_out_d0 
        = (0x7ffffU & (VL_EXTENDS_II(19,18, (0x3ffffU 
                                             & (VL_MULS_III(18, 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,8, 
                                                                             (0xffU 
                                                                              & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data)))), 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,8, 
                                                                             (0xffU 
                                                                              & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3))))) 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld) 
                                                                 & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3) 
                                                                    & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_nz) 
                                                                       & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg3)))))))))) 
                       + (VL_EXTENDS_II(19,18, (0x3ffffU 
                                                & (VL_MULS_III(18, 
                                                               (0x3ffffU 
                                                                & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
                                                                                >> 8U))))), 
                                                               (0x3ffffU 
                                                                & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
                                                                                >> 8U)))))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld) 
                                                                     & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3) 
                                                                        & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_nz) 
                                                                           & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg3)))) 
                                                                    >> 1U))))))) 
                          + (VL_EXTENDS_II(19,18, (0x3ffffU 
                                                   & (VL_MULS_III(18, 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
                                                                                >> 0x10U))))), 
                                                                  (0x3ffffU 
                                                                   & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
                                                                                >> 0x10U)))))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld) 
                                                                        & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3) 
                                                                           & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_nz) 
                                                                              & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg3)))) 
                                                                       >> 2U))))))) 
                             + (VL_EXTENDS_II(19,18, 
                                              (0x3ffffU 
                                               & (VL_MULS_III(18, 
                                                              (0x3ffffU 
                                                               & VL_EXTENDS_II(18,8, 
                                                                               (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
                                                                                >> 0x18U))))), 
                                                              (0x3ffffU 
                                                               & VL_EXTENDS_II(18,8, 
                                                                               (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
                                                                                >> 0x18U)))))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld) 
                                                                    & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3) 
                                                                       & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_nz) 
                                                                          & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg3)))) 
                                                                   >> 3U))))))) 
                                + (VL_EXTENDS_II(19,18, 
                                                 (0x3ffffU 
                                                  & (VL_MULS_III(18, 
                                                                 (0x3ffffU 
                                                                  & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
                                                                                >> 0x20U))))), 
                                                                 (0x3ffffU 
                                                                  & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
                                                                                >> 0x20U)))))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld) 
                                                                       & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3) 
                                                                          & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_nz) 
                                                                             & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg3)))) 
                                                                      >> 4U))))))) 
                                   + (VL_EXTENDS_II(19,18, 
                                                    (0x3ffffU 
                                                     & (VL_MULS_III(18, 
                                                                    (0x3ffffU 
                                                                     & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
                                                                                >> 0x28U))))), 
                                                                    (0x3ffffU 
                                                                     & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
                                                                                >> 0x28U)))))) 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld) 
                                                                          & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3) 
                                                                             & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_nz) 
                                                                                & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg3)))) 
                                                                         >> 5U))))))) 
                                      + (VL_EXTENDS_II(19,18, 
                                                       (0x3ffffU 
                                                        & (VL_MULS_III(18, 
                                                                       (0x3ffffU 
                                                                        & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
                                                                                >> 0x30U))))), 
                                                                       (0x3ffffU 
                                                                        & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
                                                                                >> 0x30U)))))) 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld) 
                                                                             & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3) 
                                                                                & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_nz) 
                                                                                & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg3)))) 
                                                                            >> 6U))))))) 
                                         + VL_EXTENDS_II(19,18, 
                                                         (0x3ffffU 
                                                          & (VL_MULS_III(18, 
                                                                         (0x3ffffU 
                                                                          & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_data 
                                                                                >> 0x38U))))), 
                                                                         (0x3ffffU 
                                                                          & VL_EXTENDS_II(18,8, 
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_data_reg3 
                                                                                >> 0x38U)))))) 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_pvld) 
                                                                               & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_pvld_reg3) 
                                                                                & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__wt3_actv_nz) 
                                                                                & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_active__DOT__dat_actv_nz_reg3)))) 
                                                                              >> 7U)))))))))))))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__24(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__24\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__nvdla_core_rstn) {
        if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pvld_d1) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pd_d2 
                = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pd_d1;
        } else if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pvld_d1) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pd_d2 = 0U;
        }
        if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d2) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pd_d1 
                = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pd_d2;
        } else if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d2) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pd_d1 = 0U;
        }
    } else {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pd_d2 = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pd_d1 = 0U;
    }
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pvld_d2 
        = ((IData)(vlSelfRef.__PVT__nvdla_core_rstn) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pvld_d1));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pvld_d1 
        = ((IData)(vlSelfRef.__PVT__nvdla_core_rstn) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d2));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__25(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_ma__25\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d1) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pd_d2 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pd_d1;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d2 = 1U;
    } else {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d2 = 0U;
    }
    if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pd_d1 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pd_d2;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d1 = 1U;
    } else {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d1 = 0U;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___nba_comb__TOP__NV_nvdla__DOT__u_partition_ma__3(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___nba_comb__TOP__NV_nvdla__DOT__u_partition_ma__3\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en_w 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en)) 
                  & ((2U == (0x3ffU & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd))) 
                     & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__d0_reg_wr_en)))
                  ? (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                             >> 0x16U)) : ((~ ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d3) 
                                               & (~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer)))) 
                                           & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en_w 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en)) 
                  & ((2U == (0x3ffU & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd))) 
                     & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__d1_reg_wr_en)))
                  ? (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                             >> 0x16U)) : ((~ ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d3) 
                                               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer))) 
                                           & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_mb__7(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_mb__7\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__nvdla_core_rstn) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_mask_d2 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_mask_d1;
        if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__cfg_reg_en) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__cfg_is_wg_d1 
                = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__cfg_is_wg;
        } else if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__cfg_reg_en) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__cfg_is_wg_d1 = 0U;
        }
        if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pvld_d1) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pd_d2 
                = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pd_d1;
        } else if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pvld_d1) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pd_d2 = 0U;
        }
        if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d2) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pd_d1 
                = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pd_d2;
        } else if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d2) {
            vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pd_d1 = 0U;
        }
    } else {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_mask_d2 = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__cfg_is_wg_d1 = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pd_d2 = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pd_d1 = 0U;
    }
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__cfg_reg_en_d1 
        = ((IData)(vlSelfRef.__PVT__nvdla_core_rstn) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__cfg_reg_en));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_mb__18(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_mb__18\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d1) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pd_d2 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pd_d1;
    }
    if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pd_d1 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pd_d2;
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_mb__25(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_mb__25\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pvld_d2 
        = ((IData)(vlSelfRef.__PVT__nvdla_core_rstn) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pvld_d1));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_pvld_d1 
        = ((IData)(vlSelfRef.__PVT__nvdla_core_rstn) 
           && (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d2));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_mb__26(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___nba_sequent__TOP__NV_nvdla__DOT__u_partition_mb__26\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d2 
        = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d1;
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__in_dat_pvld_d1 
        = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_in__DOT__in_rt_dat_pvld_d2;
}
