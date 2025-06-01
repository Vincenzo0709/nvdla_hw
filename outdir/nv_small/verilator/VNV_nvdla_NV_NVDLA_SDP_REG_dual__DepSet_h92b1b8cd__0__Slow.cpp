// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "VNV_nvdla__pch.h"
#include "VNV_nvdla_NV_NVDLA_SDP_REG_dual.h"

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_SDP_REG_dual___eval_initial__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0(VNV_nvdla_NV_NVDLA_SDP_REG_dual* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_SDP_REG_dual___eval_initial__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<6>/*191:0*/ __Vtemp_2;
    VlWide<7>/*223:0*/ __Vtemp_3;
    // Body
    __Vtemp_1[0U] = 0x705f7772U;
    __Vtemp_1[1U] = 0x5f64756dU;
    __Vtemp_1[2U] = 0x6767656eU;
    __Vtemp_1[3U] = 0x61727265U;
    vlSelfRef.__PVT__arreggen_dump = (1U & VL_TESTPLUSARGS_I(
                                                             VL_CVT_PACK_STR_NW(4, __Vtemp_1)));
    __Vtemp_2[0U] = 0x726f7772U;
    __Vtemp_2[1U] = 0x5f6f6e5fU;
    __Vtemp_2[2U] = 0x626f7274U;
    __Vtemp_2[3U] = 0x656e5f61U;
    __Vtemp_2[4U] = 0x72656767U;
    __Vtemp_2[5U] = 0x6172U;
    vlSelfRef.__PVT__arreggen_abort_on_rowr = (1U & VL_TESTPLUSARGS_I(
                                                                      VL_CVT_PACK_STR_NW(6, __Vtemp_2)));
    __Vtemp_3[0U] = 0x645f7772U;
    __Vtemp_3[1U] = 0x76616c69U;
    __Vtemp_3[2U] = 0x6e5f696eU;
    __Vtemp_3[3U] = 0x72745f6fU;
    __Vtemp_3[4U] = 0x5f61626fU;
    __Vtemp_3[5U] = 0x6767656eU;
    __Vtemp_3[6U] = 0x61727265U;
    vlSelfRef.__PVT__arreggen_abort_on_invalid_wr = 
        (1U & VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(7, __Vtemp_3)));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_SDP_REG_dual___ctor_var_reset(VNV_nvdla_NV_NVDLA_SDP_REG_dual* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_SDP_REG_dual___ctor_var_reset\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->reg_rd_data = VL_RAND_RESET_I(32);
    vlSelf->reg_offset = VL_RAND_RESET_I(12);
    vlSelf->reg_wr_data = VL_RAND_RESET_I(32);
    vlSelf->reg_wr_en = VL_RAND_RESET_I(1);
    vlSelf->nvdla_core_clk = VL_RAND_RESET_I(1);
    vlSelf->nvdla_core_rstn = VL_RAND_RESET_I(1);
    vlSelf->cvt_offset = VL_RAND_RESET_I(32);
    vlSelf->cvt_scale = VL_RAND_RESET_I(16);
    vlSelf->cvt_shift = VL_RAND_RESET_I(6);
    vlSelf->channel = VL_RAND_RESET_I(13);
    vlSelf->height = VL_RAND_RESET_I(13);
    vlSelf->width = VL_RAND_RESET_I(13);
    vlSelf->out_precision = VL_RAND_RESET_I(2);
    vlSelf->proc_precision = VL_RAND_RESET_I(2);
    vlSelf->bn_alu_shift_value = VL_RAND_RESET_I(6);
    vlSelf->bn_alu_src = VL_RAND_RESET_I(1);
    vlSelf->bn_alu_operand = VL_RAND_RESET_I(16);
    vlSelf->bn_alu_algo = VL_RAND_RESET_I(2);
    vlSelf->bn_alu_bypass = VL_RAND_RESET_I(1);
    vlSelf->bn_bypass = VL_RAND_RESET_I(1);
    vlSelf->bn_mul_bypass = VL_RAND_RESET_I(1);
    vlSelf->bn_mul_prelu = VL_RAND_RESET_I(1);
    vlSelf->bn_relu_bypass = VL_RAND_RESET_I(1);
    vlSelf->bn_mul_shift_value = VL_RAND_RESET_I(8);
    vlSelf->bn_mul_src = VL_RAND_RESET_I(1);
    vlSelf->bn_mul_operand = VL_RAND_RESET_I(16);
    vlSelf->bs_alu_shift_value = VL_RAND_RESET_I(6);
    vlSelf->bs_alu_src = VL_RAND_RESET_I(1);
    vlSelf->bs_alu_operand = VL_RAND_RESET_I(16);
    vlSelf->bs_alu_algo = VL_RAND_RESET_I(2);
    vlSelf->bs_alu_bypass = VL_RAND_RESET_I(1);
    vlSelf->bs_bypass = VL_RAND_RESET_I(1);
    vlSelf->bs_mul_bypass = VL_RAND_RESET_I(1);
    vlSelf->bs_mul_prelu = VL_RAND_RESET_I(1);
    vlSelf->bs_relu_bypass = VL_RAND_RESET_I(1);
    vlSelf->bs_mul_shift_value = VL_RAND_RESET_I(8);
    vlSelf->bs_mul_src = VL_RAND_RESET_I(1);
    vlSelf->bs_mul_operand = VL_RAND_RESET_I(16);
    vlSelf->ew_alu_cvt_bypass = VL_RAND_RESET_I(1);
    vlSelf->ew_alu_src = VL_RAND_RESET_I(1);
    vlSelf->ew_alu_cvt_offset = VL_RAND_RESET_I(32);
    vlSelf->ew_alu_cvt_scale = VL_RAND_RESET_I(16);
    vlSelf->ew_alu_cvt_truncate = VL_RAND_RESET_I(6);
    vlSelf->ew_alu_operand = VL_RAND_RESET_I(32);
    vlSelf->ew_alu_algo = VL_RAND_RESET_I(2);
    vlSelf->ew_alu_bypass = VL_RAND_RESET_I(1);
    vlSelf->ew_bypass = VL_RAND_RESET_I(1);
    vlSelf->ew_lut_bypass = VL_RAND_RESET_I(1);
    vlSelf->ew_mul_bypass = VL_RAND_RESET_I(1);
    vlSelf->ew_mul_prelu = VL_RAND_RESET_I(1);
    vlSelf->ew_mul_cvt_bypass = VL_RAND_RESET_I(1);
    vlSelf->ew_mul_src = VL_RAND_RESET_I(1);
    vlSelf->ew_mul_cvt_offset = VL_RAND_RESET_I(32);
    vlSelf->ew_mul_cvt_scale = VL_RAND_RESET_I(16);
    vlSelf->ew_mul_cvt_truncate = VL_RAND_RESET_I(6);
    vlSelf->ew_mul_operand = VL_RAND_RESET_I(32);
    vlSelf->ew_truncate = VL_RAND_RESET_I(10);
    vlSelf->dst_base_addr_high = VL_RAND_RESET_I(32);
    vlSelf->dst_base_addr_low = VL_RAND_RESET_I(32);
    vlSelf->dst_batch_stride = VL_RAND_RESET_I(32);
    vlSelf->dst_ram_type = VL_RAND_RESET_I(1);
    vlSelf->dst_line_stride = VL_RAND_RESET_I(32);
    vlSelf->dst_surface_stride = VL_RAND_RESET_I(32);
    vlSelf->batch_number = VL_RAND_RESET_I(5);
    vlSelf->flying_mode = VL_RAND_RESET_I(1);
    vlSelf->nan_to_zero = VL_RAND_RESET_I(1);
    vlSelf->output_dst = VL_RAND_RESET_I(1);
    vlSelf->winograd = VL_RAND_RESET_I(1);
    vlSelf->op_en_trigger = VL_RAND_RESET_I(1);
    vlSelf->perf_dma_en = VL_RAND_RESET_I(1);
    vlSelf->perf_lut_en = VL_RAND_RESET_I(1);
    vlSelf->perf_nan_inf_count_en = VL_RAND_RESET_I(1);
    vlSelf->perf_sat_en = VL_RAND_RESET_I(1);
    vlSelf->op_en = VL_RAND_RESET_I(1);
    vlSelf->lut_hybrid = VL_RAND_RESET_I(32);
    vlSelf->lut_le_hit = VL_RAND_RESET_I(32);
    vlSelf->lut_lo_hit = VL_RAND_RESET_I(32);
    vlSelf->lut_oflow = VL_RAND_RESET_I(32);
    vlSelf->lut_uflow = VL_RAND_RESET_I(32);
    vlSelf->out_saturation = VL_RAND_RESET_I(32);
    vlSelf->wdma_stall = VL_RAND_RESET_I(32);
    vlSelf->status_unequal = VL_RAND_RESET_I(1);
    vlSelf->status_inf_input_num = VL_RAND_RESET_I(32);
    vlSelf->status_nan_input_num = VL_RAND_RESET_I(32);
    vlSelf->status_nan_output_num = VL_RAND_RESET_I(32);
    vlSelf->__PVT__arreggen_abort_on_invalid_wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__arreggen_abort_on_rowr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__arreggen_dump = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_sdp_d_data_format_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_sdp_d_dp_bn_alu_cfg_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_sdp_d_dp_bn_cfg_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_sdp_d_dp_bn_mul_cfg_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_sdp_d_dp_bs_alu_cfg_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_sdp_d_dp_bs_cfg_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_sdp_d_dp_bs_mul_cfg_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_sdp_d_dp_ew_alu_cfg_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_sdp_d_dp_ew_cfg_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_sdp_d_dp_ew_mul_cfg_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_sdp_d_feature_mode_cfg_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_sdp_d_perf_enable_0_wren = VL_RAND_RESET_I(1);
}
