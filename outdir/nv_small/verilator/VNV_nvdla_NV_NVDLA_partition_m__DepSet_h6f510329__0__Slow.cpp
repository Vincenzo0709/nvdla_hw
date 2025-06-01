// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "VNV_nvdla__pch.h"
#include "VNV_nvdla_NV_NVDLA_partition_m.h"
#include "VNV_nvdla__Syms.h"

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_partition_m___stl_sequent__TOP__NV_nvdla__DOT__u_partition_ma__0(VNV_nvdla_NV_NVDLA_partition_m* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNV_nvdla_NV_NVDLA_partition_m___stl_sequent__TOP__NV_nvdla__DOT__u_partition_ma__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer_w 
        = (1U & (~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer)));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__nvdla_op_gated_clk_4 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_slcg_op_4__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__nvdla_op_gated_clk_5 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_slcg_op_5__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__nvdla_op_gated_clk_0 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_slcg_op_0__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__nvdla_op_gated_clk_1 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_slcg_op_1__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__nvdla_op_gated_clk_2 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_slcg_op_2__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__nvdla_op_gated_clk_3 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_slcg_op_3__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__nvdla_op_gated_clk_6 
        = ((IData)(vlSymsp->TOP.dla_core_clk) & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_slcg_op_6__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
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
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg_rd_en 
        = ((~ (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                       >> 0x36U))) & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pvld));
    if (vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__reg2dp_conv_mode 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_conv_mode;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__reg2dp_proc_precision_NC 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_proc_precision;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_op_en_ori 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en;
    } else {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__reg2dp_conv_mode 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_conv_mode;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__reg2dp_proc_precision_NC 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_proc_precision;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_op_en_ori 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en;
    }
    if (vlSymsp->TOP.test_mode) {
        vlSelfRef.__PVT__nvdla_core_rstn = vlSymsp->TOP.direct_reset_;
        vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__inreset_tm_ 
            = vlSymsp->TOP.direct_reset_;
    } else {
        vlSelfRef.__PVT__nvdla_core_rstn = vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__reset_;
        vlSelfRef.__PVT__u_partition_m_reset__DOT__sync_reset_synced_rstn__DOT__inreset_tm_ 
            = vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn;
    }
    vlSelfRef.__VdfgRegularize_h0c613da9_4_0 = ((IData)(vlSelfRef.__PVT__u_dla_clk_ovr_on_sync__DOT__sync_sbus) 
                                                | ((IData)(vlSymsp->TOP.tmc2slcg_disable_clock_gating) 
                                                   | (IData)(vlSelfRef.__PVT__u_global_clk_ovr_on_sync__DOT__sync_sbus)));
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
    if ((0xcU == (0xffcU & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                            << 2U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__d0_reg_rd_data 
            = (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_proc_precision) 
                << 0xcU) | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_conv_mode));
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__d1_reg_rd_data 
            = (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_proc_precision) 
                << 0xcU) | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_conv_mode));
    } else if ((8U == (0xffcU & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                 << 2U)))) {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__d0_reg_rd_data 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__d1_reg_rd_data 
            = vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en;
    } else {
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__d0_reg_rd_data = 0U;
        vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__d1_reg_rd_data = 0U;
    }
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__out_mask 
        = ((((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_3__DOT__pp_pvld_d0_d3) 
             << 3U) | ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_2__DOT__pp_pvld_d0_d3) 
                       << 2U)) | (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_1__DOT__pp_pvld_d0_d3) 
                                   << 1U) | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_mac_0__DOT__pp_pvld_d0_d3)));
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
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_single_reg__DOT__nvdla_cmac_a_s_status_0_out 
        = ((((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en)
              ? ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer)
                  ? 1U : 2U) : 0U) << 0x10U) | ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en)
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer)
                                                  ? 2U
                                                  : 1U)
                                                 : 0U));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__select_d0 
        = ((~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_producer)) 
           & (8U <= (0xffcU & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                               << 2U))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__select_d1 
        = ((8U <= (0xffcU & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                             << 2U))) & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_producer));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg_wr_en 
        = ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pvld) 
           & (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                      >> 0x36U)));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_op_en_reg_w 
        = ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d3)
            ? 0U : ((6U & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_op_en_reg) 
                           << 1U)) | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_op_en_ori)));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__s_reg_rd_data 
        = ((4U == (0xffcU & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                             << 2U))) ? (((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer) 
                                          << 0x10U) 
                                         | (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_producer))
            : ((0U == (0xffcU & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                                 << 2U))) ? vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_single_reg__DOT__nvdla_cmac_a_s_status_0_out
                : 0U));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__s_reg_wr_en 
        = ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg_wr_en) 
           & (8U > (0xffcU & ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd) 
                              << 2U))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__d0_reg_wr_en 
        = ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg_wr_en) 
           & ((~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en)) 
              & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__select_d0)));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__d1_reg_wr_en 
        = ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg_wr_en) 
           & ((~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en)) 
              & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__select_d1)));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d0__DOT__nvdla_cmac_a_d_misc_cfg_0_wren 
        = ((3U == (0x3ffU & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd))) 
           & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__d0_reg_wr_en));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en_w 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en)) 
                  & ((2U == (0x3ffU & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd))) 
                     & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__d0_reg_wr_en)))
                  ? (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                             >> 0x16U)) : ((~ ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d3) 
                                               & (~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer)))) 
                                           & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d0_op_en))));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__u_dual_reg_d1__DOT__nvdla_cmac_a_d_misc_cfg_0_wren 
        = ((3U == (0x3ffU & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd))) 
           & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__d1_reg_wr_en));
    vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en_w 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en)) 
                  & ((2U == (0x3ffU & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd))) 
                     & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__d1_reg_wr_en)))
                  ? (IData)((vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__req_pd 
                             >> 0x16U)) : ((~ ((IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_core__DOT__u_rt_out__DOT__out_rt_done_d3) 
                                               & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__dp2reg_consumer))) 
                                           & (IData)(vlSelfRef.__PVT__u_NV_NVDLA_cmac__DOT__u_reg__DOT__reg2dp_d1_op_en))));
}
