// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VNV_NVDLA_H_
#define VERILATED_VNV_NVDLA_H_  // guard

#include "verilated.h"

class VNV_nvdla__Syms;
class VNV_nvdla___024root;
class VerilatedVcdC;
class VNV_nvdla_NV_NVDLA_CDMA_CVT_cell;
class VNV_nvdla_NV_NVDLA_CDMA_dual_reg;
class VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo;
class VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo;
class VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo;
class VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo;
class VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt;
class VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt;
class VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d;
class VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo;
class VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo;
class VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro;
class VNV_nvdla_NV_NVDLA_SDP_REG_dual;
class VNV_nvdla_NV_NVDLA_partition_m;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VNV_nvdla VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VNV_nvdla__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&dla_core_clk,0,0);
    VL_IN8(&dla_csb_clk,0,0);
    VL_IN8(&nvdla_core2dbb_aw_awready,0,0);
    VL_IN8(&nvdla_core2dbb_w_wready,0,0);
    VL_IN8(&global_clk_ovr_on,0,0);
    VL_IN8(&tmc2slcg_disable_clock_gating,0,0);
    VL_IN8(&dla_reset_rstn,0,0);
    VL_IN8(&direct_reset_,0,0);
    VL_IN8(&test_mode,0,0);
    VL_IN8(&csb2nvdla_valid,0,0);
    VL_OUT8(&csb2nvdla_ready,0,0);
    VL_IN8(&csb2nvdla_write,0,0);
    VL_IN8(&csb2nvdla_nposted,0,0);
    VL_OUT8(&nvdla2csb_valid,0,0);
    VL_OUT8(&nvdla2csb_wr_complete,0,0);
    VL_OUT8(&nvdla_core2dbb_aw_awvalid,0,0);
    VL_OUT8(&nvdla_core2dbb_aw_awid,7,0);
    VL_OUT8(&nvdla_core2dbb_aw_awlen,3,0);
    VL_OUT8(&nvdla_core2dbb_w_wvalid,0,0);
    VL_OUT8(&nvdla_core2dbb_w_wstrb,7,0);
    VL_OUT8(&nvdla_core2dbb_w_wlast,0,0);
    VL_IN8(&nvdla_core2dbb_b_bvalid,0,0);
    VL_OUT8(&nvdla_core2dbb_b_bready,0,0);
    VL_IN8(&nvdla_core2dbb_b_bid,7,0);
    VL_OUT8(&nvdla_core2dbb_ar_arvalid,0,0);
    VL_IN8(&nvdla_core2dbb_ar_arready,0,0);
    VL_OUT8(&nvdla_core2dbb_ar_arid,7,0);
    VL_OUT8(&nvdla_core2dbb_ar_arlen,3,0);
    VL_IN8(&nvdla_core2dbb_r_rvalid,0,0);
    VL_OUT8(&nvdla_core2dbb_r_rready,0,0);
    VL_IN8(&nvdla_core2dbb_r_rid,7,0);
    VL_IN8(&nvdla_core2dbb_r_rlast,0,0);
    VL_OUT8(&dla_intr,0,0);
    VL_IN16(&csb2nvdla_addr,15,0);
    VL_IN(&csb2nvdla_wdat,31,0);
    VL_OUT(&nvdla2csb_data,31,0);
    VL_OUT(&nvdla_core2dbb_aw_awaddr,31,0);
    VL_OUT(&nvdla_core2dbb_ar_araddr,31,0);
    VL_IN(&nvdla_pwrbus_ram_c_pd,31,0);
    VL_IN(&nvdla_pwrbus_ram_ma_pd,31,0);
    VL_IN(&nvdla_pwrbus_ram_mb_pd,31,0);
    VL_IN(&nvdla_pwrbus_ram_p_pd,31,0);
    VL_IN(&nvdla_pwrbus_ram_o_pd,31,0);
    VL_IN(&nvdla_pwrbus_ram_a_pd,31,0);
    VL_OUT64(&nvdla_core2dbb_w_wdata,63,0);
    VL_IN64(&nvdla_core2dbb_r_rdata,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VNV_nvdla_NV_NVDLA_partition_m* const __PVT__NV_nvdla__DOT__u_partition_ma;
    VNV_nvdla_NV_NVDLA_partition_m* const __PVT__NV_nvdla__DOT__u_partition_mb;
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt0;
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt1;
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt2;
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt3;
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt4;
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt5;
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt6;
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0;
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo1;
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo2;
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo3;
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo4;
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo5;
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo6;
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo0;
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro0_fifo1;
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo0;
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro1_fifo1;
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo0;
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro2_fifo1;
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo0;
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro3_fifo1;
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo0;
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro4_fifo1;
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo0;
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro5_fifo1;
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo0;
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__ro6_fifo1;
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt0;
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt1;
    VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_ig__DOT__u_bpt2;
    VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo;
    VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo;
    VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro2_fifo;
    VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro3_fifo;
    VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo;
    VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro5_fifo;
    VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro6_fifo;
    VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro7_fifo;
    VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo0;
    VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo1;
    VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo2;
    VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo3;
    VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo4;
    VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo5;
    VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo6;
    VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_wdma__DOT__u_dat0_fifo7;
    VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo;
    VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo;
    VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro2_fifo;
    VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro3_fifo;
    VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo;
    VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro5_fifo;
    VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro6_fifo;
    VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro7_fifo;
    VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo0;
    VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo1;
    VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo2;
    VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo3;
    VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo4;
    VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo5;
    VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo6;
    VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_wdma__DOT__u_dat__DOT__u_dat0_fifo7;
    VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_0;
    VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_1;
    VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_2;
    VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_3;
    VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_4;
    VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_5;
    VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_6;
    VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d* const __PVT__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__unit1d_7;
    VNV_nvdla_NV_NVDLA_CDMA_dual_reg* const __PVT__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0;
    VNV_nvdla_NV_NVDLA_CDMA_dual_reg* const __PVT__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1;
    VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* const __PVT__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_0;
    VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* const __PVT__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_1;
    VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* const __PVT__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_2;
    VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* const __PVT__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_3;
    VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* const __PVT__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_4;
    VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* const __PVT__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_5;
    VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* const __PVT__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_6;
    VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* const __PVT__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_7;
    VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* const __PVT__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_alu;
    VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* const __PVT__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_mul;
    VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* const __PVT__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_alu;
    VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro* const __PVT__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_mul;
    VNV_nvdla_NV_NVDLA_SDP_REG_dual* const __PVT__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d0;
    VNV_nvdla_NV_NVDLA_SDP_REG_dual* const __PVT__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_reg__DOT__u_dual_reg_d1;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VNV_nvdla___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VNV_nvdla(VerilatedContext* contextp, const char* name = "TOP");
    explicit VNV_nvdla(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VNV_nvdla();
  private:
    VL_UNCOPYABLE(VNV_nvdla);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
