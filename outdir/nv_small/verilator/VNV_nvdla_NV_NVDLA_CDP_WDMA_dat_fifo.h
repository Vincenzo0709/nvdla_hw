// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNV_nvdla.h for the primary calling header

#ifndef VERILATED_VNV_NVDLA_NV_NVDLA_CDP_WDMA_DAT_FIFO_H_
#define VERILATED_VNV_NVDLA_NV_NVDLA_CDP_WDMA_DAT_FIFO_H_  // guard

#include "verilated.h"


class VNV_nvdla__Syms;

class alignas(VL_CACHE_LINE_BYTES) VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(nvdla_core_clk,0,0);
    VL_IN8(nvdla_core_rstn,0,0);
    CData/*0:0*/ __PVT__nvdla_core_clk_mgated;
    VL_OUT8(dat_fifo_wr_prdy,0,0);
    VL_IN8(dat_fifo_wr_pvld,0,0);
    VL_IN8(dat_fifo_wr_pd,7,0);
    VL_IN8(dat_fifo_rd_prdy,0,0);
    VL_OUT8(dat_fifo_rd_pvld,0,0);
    VL_OUT8(dat_fifo_rd_pd,7,0);
    CData/*0:0*/ __PVT__wr_reserving;
    CData/*0:0*/ __PVT__dat_fifo_wr_busy_int;
    CData/*0:0*/ __PVT__wr_popping;
    CData/*3:0*/ __PVT__dat_fifo_wr_count;
    CData/*3:0*/ __PVT__wr_count_next_no_wr_popping;
    CData/*3:0*/ __PVT__wr_count_next;
    CData/*0:0*/ __PVT__wr_count_next_is_8;
    CData/*2:0*/ __PVT__dat_fifo_wr_adr;
    CData/*2:0*/ __PVT__dat_fifo_rd_adr;
    CData/*0:0*/ __PVT__ram_we;
    CData/*3:0*/ __Vcellinp__ram__ra;
    CData/*2:0*/ __PVT__rd_adr_next_popping;
    CData/*0:0*/ __PVT__dat_fifo_rd_pvld_p;
    CData/*0:0*/ __PVT__dat_fifo_rd_pvld_int;
    CData/*3:0*/ __PVT__dat_fifo_rd_count_p;
    CData/*3:0*/ __PVT__rd_count_p_next;
    CData/*0:0*/ __VdfgRegularize_hfb9d5854_0_2;
    CData/*0:0*/ __PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd;
    CData/*7:0*/ __PVT__ram__DOT__ram_ff0;
    CData/*7:0*/ __PVT__ram__DOT__ram_ff1;
    CData/*7:0*/ __PVT__ram__DOT__ram_ff2;
    CData/*7:0*/ __PVT__ram__DOT__ram_ff3;
    CData/*7:0*/ __PVT__ram__DOT__ram_ff4;
    CData/*7:0*/ __PVT__ram__DOT__ram_ff5;
    CData/*7:0*/ __PVT__ram__DOT__ram_ff6;
    CData/*7:0*/ __PVT__ram__DOT__ram_ff7;
    CData/*2:0*/ __Vdly__dat_fifo_wr_adr;
    VL_IN(pwrbus_ram_pd,31,0);
    QData/*32:0*/ __PVT__prand_inst0__Vstatic__diff;
    QData/*32:0*/ __PVT__prand_inst1__Vstatic__diff;

    // INTERNAL VARIABLES
    VNV_nvdla__Syms* const vlSymsp;

    // CONSTRUCTORS
    VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo(VNV_nvdla__Syms* symsp, const char* v__name);
    ~VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo();
    VL_UNCOPYABLE(VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
