// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VNV_nvdla__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VNV_nvdla::VNV_nvdla(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VNV_nvdla__Syms(contextp(), _vcname__, this)}
    , dla_core_clk{vlSymsp->TOP.dla_core_clk}
    , dla_csb_clk{vlSymsp->TOP.dla_csb_clk}
    , nvdla_core2dbb_aw_awready{vlSymsp->TOP.nvdla_core2dbb_aw_awready}
    , nvdla_core2dbb_w_wready{vlSymsp->TOP.nvdla_core2dbb_w_wready}
    , global_clk_ovr_on{vlSymsp->TOP.global_clk_ovr_on}
    , tmc2slcg_disable_clock_gating{vlSymsp->TOP.tmc2slcg_disable_clock_gating}
    , dla_reset_rstn{vlSymsp->TOP.dla_reset_rstn}
    , direct_reset_{vlSymsp->TOP.direct_reset_}
    , test_mode{vlSymsp->TOP.test_mode}
    , csb2nvdla_valid{vlSymsp->TOP.csb2nvdla_valid}
    , csb2nvdla_ready{vlSymsp->TOP.csb2nvdla_ready}
    , csb2nvdla_write{vlSymsp->TOP.csb2nvdla_write}
    , csb2nvdla_nposted{vlSymsp->TOP.csb2nvdla_nposted}
    , nvdla2csb_valid{vlSymsp->TOP.nvdla2csb_valid}
    , nvdla2csb_wr_complete{vlSymsp->TOP.nvdla2csb_wr_complete}
    , nvdla_core2dbb_aw_awvalid{vlSymsp->TOP.nvdla_core2dbb_aw_awvalid}
    , nvdla_core2dbb_aw_awid{vlSymsp->TOP.nvdla_core2dbb_aw_awid}
    , nvdla_core2dbb_aw_awlen{vlSymsp->TOP.nvdla_core2dbb_aw_awlen}
    , nvdla_core2dbb_w_wvalid{vlSymsp->TOP.nvdla_core2dbb_w_wvalid}
    , nvdla_core2dbb_w_wstrb{vlSymsp->TOP.nvdla_core2dbb_w_wstrb}
    , nvdla_core2dbb_w_wlast{vlSymsp->TOP.nvdla_core2dbb_w_wlast}
    , nvdla_core2dbb_b_bvalid{vlSymsp->TOP.nvdla_core2dbb_b_bvalid}
    , nvdla_core2dbb_b_bready{vlSymsp->TOP.nvdla_core2dbb_b_bready}
    , nvdla_core2dbb_b_bid{vlSymsp->TOP.nvdla_core2dbb_b_bid}
    , nvdla_core2dbb_ar_arvalid{vlSymsp->TOP.nvdla_core2dbb_ar_arvalid}
    , nvdla_core2dbb_ar_arready{vlSymsp->TOP.nvdla_core2dbb_ar_arready}
    , nvdla_core2dbb_ar_arid{vlSymsp->TOP.nvdla_core2dbb_ar_arid}
    , nvdla_core2dbb_ar_arlen{vlSymsp->TOP.nvdla_core2dbb_ar_arlen}
    , nvdla_core2dbb_r_rvalid{vlSymsp->TOP.nvdla_core2dbb_r_rvalid}
    , nvdla_core2dbb_r_rready{vlSymsp->TOP.nvdla_core2dbb_r_rready}
    , nvdla_core2dbb_r_rid{vlSymsp->TOP.nvdla_core2dbb_r_rid}
    , nvdla_core2dbb_r_rlast{vlSymsp->TOP.nvdla_core2dbb_r_rlast}
    , dla_intr{vlSymsp->TOP.dla_intr}
    , csb2nvdla_addr{vlSymsp->TOP.csb2nvdla_addr}
    , csb2nvdla_wdat{vlSymsp->TOP.csb2nvdla_wdat}
    , nvdla2csb_data{vlSymsp->TOP.nvdla2csb_data}
    , nvdla_core2dbb_aw_awaddr{vlSymsp->TOP.nvdla_core2dbb_aw_awaddr}
    , nvdla_core2dbb_ar_araddr{vlSymsp->TOP.nvdla_core2dbb_ar_araddr}
    , nvdla_pwrbus_ram_c_pd{vlSymsp->TOP.nvdla_pwrbus_ram_c_pd}
    , nvdla_pwrbus_ram_ma_pd{vlSymsp->TOP.nvdla_pwrbus_ram_ma_pd}
    , nvdla_pwrbus_ram_mb_pd{vlSymsp->TOP.nvdla_pwrbus_ram_mb_pd}
    , nvdla_pwrbus_ram_p_pd{vlSymsp->TOP.nvdla_pwrbus_ram_p_pd}
    , nvdla_pwrbus_ram_o_pd{vlSymsp->TOP.nvdla_pwrbus_ram_o_pd}
    , nvdla_pwrbus_ram_a_pd{vlSymsp->TOP.nvdla_pwrbus_ram_a_pd}
    , nvdla_core2dbb_w_wdata{vlSymsp->TOP.nvdla_core2dbb_w_wdata}
    , nvdla_core2dbb_r_rdata{vlSymsp->TOP.nvdla_core2dbb_r_rdata}
    , __PVT__NV_nvdla__DOT__u_partition_ma{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_ma}
    , __PVT__NV_nvdla__DOT__u_partition_mb{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_mb}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt0{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt0}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt1{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt1}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt2{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt2}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt3{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt3}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt4{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt4}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt5{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt5}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt6{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt6}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo1{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo1}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo2{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo2}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo3{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo3}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo4{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo4}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo5{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo5}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo6{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo6}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo0{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo0}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo1{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo1}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo0{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo0}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo1{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo1}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo0{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo0}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo1{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo1}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo0{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo0}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo1{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo1}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo0{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo0}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo1{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo1}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo0{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo0}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo1{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo1}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt1{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt1}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt2{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt2}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro2_fifo{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro2_fifo}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro3_fifo{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro3_fifo}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro5_fifo{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro5_fifo}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro6_fifo{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro6_fifo}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro7_fifo{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro7_fifo}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo1{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo1}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo2{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo2}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo3{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo3}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo4{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo4}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo5{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo5}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo6{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo6}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo7{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo7}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro2_fifo{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro2_fifo}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro3_fifo{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro3_fifo}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro5_fifo{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro5_fifo}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro6_fifo{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro6_fifo}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro7_fifo{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro7_fifo}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo1{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo1}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo2{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo2}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo3{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo3}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo4{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo4}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo5{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo5}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo6{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo6}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo7{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo7}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_3{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_3}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_4{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_4}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_5{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_5}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_6{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_6}
    , __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7}
    , __PVT__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0}
    , __PVT__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1}
    , __PVT__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_0{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_0}
    , __PVT__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_1{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_1}
    , __PVT__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_2{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_2}
    , __PVT__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_3{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_3}
    , __PVT__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_4{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_4}
    , __PVT__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_5{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_5}
    , __PVT__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_6{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_6}
    , __PVT__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_7{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_7}
    , __PVT__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu}
    , __PVT__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_mul{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_mul}
    , __PVT__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu}
    , __PVT__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul}
    , __PVT__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0}
    , __PVT__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d1{vlSymsp->TOP.__PVT__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d1}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VNV_nvdla::VNV_nvdla(const char* _vcname__)
    : VNV_nvdla(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VNV_nvdla::~VNV_nvdla() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VNV_nvdla___024root___eval_debug_assertions(VNV_nvdla___024root* vlSelf);
#endif  // VL_DEBUG
void VNV_nvdla___024root___eval_static(VNV_nvdla___024root* vlSelf);
void VNV_nvdla___024root___eval_initial(VNV_nvdla___024root* vlSelf);
void VNV_nvdla___024root___eval_settle(VNV_nvdla___024root* vlSelf);
void VNV_nvdla___024root___eval(VNV_nvdla___024root* vlSelf);

void VNV_nvdla::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VNV_nvdla::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VNV_nvdla___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VNV_nvdla___024root___eval_static(&(vlSymsp->TOP));
        VNV_nvdla___024root___eval_initial(&(vlSymsp->TOP));
        VNV_nvdla___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VNV_nvdla___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VNV_nvdla::eventsPending() { return false; }

uint64_t VNV_nvdla::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VNV_nvdla::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VNV_nvdla___024root___eval_final(VNV_nvdla___024root* vlSelf);

VL_ATTR_COLD void VNV_nvdla::final() {
    VNV_nvdla___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VNV_nvdla::hierName() const { return vlSymsp->name(); }
const char* VNV_nvdla::modelName() const { return "VNV_nvdla"; }
unsigned VNV_nvdla::threads() const { return 1; }
void VNV_nvdla::prepareClone() const { contextp()->prepareClone(); }
void VNV_nvdla::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VNV_nvdla::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VNV_nvdla___024root__trace_decl_types(VerilatedVcd* tracep);

void VNV_nvdla___024root__trace_init_top(VNV_nvdla___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VNV_nvdla___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VNV_nvdla___024root*>(voidSelf);
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VNV_nvdla___024root__trace_decl_types(tracep);
    VNV_nvdla___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VNV_nvdla___024root__trace_register(VNV_nvdla___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VNV_nvdla::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VNV_nvdla::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VNV_nvdla___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
