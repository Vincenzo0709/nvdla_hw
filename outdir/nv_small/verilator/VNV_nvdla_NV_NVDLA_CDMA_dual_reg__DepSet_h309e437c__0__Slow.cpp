// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "VNV_nvdla__pch.h"
#include "VNV_nvdla_NV_NVDLA_CDMA_dual_reg.h"

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDMA_dual_reg___eval_initial__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0(VNV_nvdla_NV_NVDLA_CDMA_dual_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_dual_reg___eval_initial__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0\n"); );
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

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDMA_dual_reg___ctor_var_reset(VNV_nvdla_NV_NVDLA_CDMA_dual_reg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_dual_reg___ctor_var_reset\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->reg_rd_data = VL_RAND_RESET_I(32);
    vlSelf->reg_offset = VL_RAND_RESET_I(12);
    vlSelf->reg_wr_data = VL_RAND_RESET_I(32);
    vlSelf->reg_wr_en = VL_RAND_RESET_I(1);
    vlSelf->nvdla_core_clk = VL_RAND_RESET_I(1);
    vlSelf->nvdla_core_rstn = VL_RAND_RESET_I(1);
    vlSelf->data_bank = VL_RAND_RESET_I(5);
    vlSelf->weight_bank = VL_RAND_RESET_I(5);
    vlSelf->batches = VL_RAND_RESET_I(5);
    vlSelf->batch_stride = VL_RAND_RESET_I(32);
    vlSelf->conv_x_stride = VL_RAND_RESET_I(3);
    vlSelf->conv_y_stride = VL_RAND_RESET_I(3);
    vlSelf->cvt_en = VL_RAND_RESET_I(1);
    vlSelf->cvt_truncate = VL_RAND_RESET_I(6);
    vlSelf->cvt_offset = VL_RAND_RESET_I(16);
    vlSelf->cvt_scale = VL_RAND_RESET_I(16);
    vlSelf->cya = VL_RAND_RESET_I(32);
    vlSelf->datain_addr_high_0 = VL_RAND_RESET_I(32);
    vlSelf->datain_addr_high_1 = VL_RAND_RESET_I(32);
    vlSelf->datain_addr_low_0 = VL_RAND_RESET_I(32);
    vlSelf->datain_addr_low_1 = VL_RAND_RESET_I(32);
    vlSelf->line_packed = VL_RAND_RESET_I(1);
    vlSelf->surf_packed = VL_RAND_RESET_I(1);
    vlSelf->datain_ram_type = VL_RAND_RESET_I(1);
    vlSelf->datain_format = VL_RAND_RESET_I(1);
    vlSelf->pixel_format = VL_RAND_RESET_I(6);
    vlSelf->pixel_mapping = VL_RAND_RESET_I(1);
    vlSelf->pixel_sign_override = VL_RAND_RESET_I(1);
    vlSelf->datain_height = VL_RAND_RESET_I(13);
    vlSelf->datain_width = VL_RAND_RESET_I(13);
    vlSelf->datain_channel = VL_RAND_RESET_I(13);
    vlSelf->datain_height_ext = VL_RAND_RESET_I(13);
    vlSelf->datain_width_ext = VL_RAND_RESET_I(13);
    vlSelf->entries = VL_RAND_RESET_I(14);
    vlSelf->grains = VL_RAND_RESET_I(12);
    vlSelf->line_stride = VL_RAND_RESET_I(32);
    vlSelf->uv_line_stride = VL_RAND_RESET_I(32);
    vlSelf->mean_format = VL_RAND_RESET_I(1);
    vlSelf->mean_gu = VL_RAND_RESET_I(16);
    vlSelf->mean_ry = VL_RAND_RESET_I(16);
    vlSelf->mean_ax = VL_RAND_RESET_I(16);
    vlSelf->mean_bv = VL_RAND_RESET_I(16);
    vlSelf->conv_mode = VL_RAND_RESET_I(1);
    vlSelf->data_reuse = VL_RAND_RESET_I(1);
    vlSelf->in_precision = VL_RAND_RESET_I(2);
    vlSelf->proc_precision = VL_RAND_RESET_I(2);
    vlSelf->skip_data_rls = VL_RAND_RESET_I(1);
    vlSelf->skip_weight_rls = VL_RAND_RESET_I(1);
    vlSelf->weight_reuse = VL_RAND_RESET_I(1);
    vlSelf->nan_to_zero = VL_RAND_RESET_I(1);
    vlSelf->op_en_trigger = VL_RAND_RESET_I(1);
    vlSelf->dma_en = VL_RAND_RESET_I(1);
    vlSelf->pixel_x_offset = VL_RAND_RESET_I(5);
    vlSelf->pixel_y_offset = VL_RAND_RESET_I(3);
    vlSelf->rsv_per_line = VL_RAND_RESET_I(10);
    vlSelf->rsv_per_uv_line = VL_RAND_RESET_I(10);
    vlSelf->rsv_height = VL_RAND_RESET_I(3);
    vlSelf->rsv_y_index = VL_RAND_RESET_I(5);
    vlSelf->surf_stride = VL_RAND_RESET_I(32);
    vlSelf->weight_addr_high = VL_RAND_RESET_I(32);
    vlSelf->weight_addr_low = VL_RAND_RESET_I(32);
    vlSelf->weight_bytes = VL_RAND_RESET_I(32);
    vlSelf->weight_format = VL_RAND_RESET_I(1);
    vlSelf->weight_ram_type = VL_RAND_RESET_I(1);
    vlSelf->byte_per_kernel = VL_RAND_RESET_I(18);
    vlSelf->weight_kernel = VL_RAND_RESET_I(13);
    vlSelf->wgs_addr_high = VL_RAND_RESET_I(32);
    vlSelf->wgs_addr_low = VL_RAND_RESET_I(32);
    vlSelf->wmb_addr_high = VL_RAND_RESET_I(32);
    vlSelf->wmb_addr_low = VL_RAND_RESET_I(32);
    vlSelf->wmb_bytes = VL_RAND_RESET_I(28);
    vlSelf->pad_bottom = VL_RAND_RESET_I(6);
    vlSelf->pad_left = VL_RAND_RESET_I(5);
    vlSelf->pad_right = VL_RAND_RESET_I(6);
    vlSelf->pad_top = VL_RAND_RESET_I(5);
    vlSelf->pad_value = VL_RAND_RESET_I(16);
    vlSelf->inf_data_num = VL_RAND_RESET_I(32);
    vlSelf->inf_weight_num = VL_RAND_RESET_I(32);
    vlSelf->nan_data_num = VL_RAND_RESET_I(32);
    vlSelf->nan_weight_num = VL_RAND_RESET_I(32);
    vlSelf->op_en = VL_RAND_RESET_I(1);
    vlSelf->dat_rd_latency = VL_RAND_RESET_I(32);
    vlSelf->dat_rd_stall = VL_RAND_RESET_I(32);
    vlSelf->wt_rd_latency = VL_RAND_RESET_I(32);
    vlSelf->wt_rd_stall = VL_RAND_RESET_I(32);
    vlSelf->__PVT__arreggen_abort_on_invalid_wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__arreggen_abort_on_rowr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__arreggen_dump = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_cdma_d_bank_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_cdma_d_conv_stride_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_cdma_d_cvt_cfg_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_cdma_d_dain_map_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_cdma_d_datain_format_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_cdma_d_datain_size_0_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_cdma_d_datain_size_ext_0_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_cdma_d_mean_global_0_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_cdma_d_mean_global_1_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_cdma_d_misc_cfg_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_cdma_d_pixel_offset_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_cdma_d_reserved_x_cfg_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_cdma_d_reserved_y_cfg_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_cdma_d_zero_padding_0_wren = VL_RAND_RESET_I(1);
}
