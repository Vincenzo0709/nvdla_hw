// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNV_nvdla.h for the primary calling header

#ifndef VERILATED_VNV_NVDLA_NV_NVDLA_PDP_CORE_UNIT1D_H_
#define VERILATED_VNV_NVDLA_NV_NVDLA_PDP_CORE_UNIT1D_H_  // guard

#include "verilated.h"


class VNV_nvdla__Syms;

class alignas(VL_CACHE_LINE_BYTES) VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(nvdla_core_clk,0,0);
        VL_IN8(nvdla_core_rstn,0,0);
        VL_IN8(average_pooling_en,0,0);
        VL_IN8(cur_datin_disable,0,0);
        VL_IN8(last_out_en,0,0);
        VL_IN8(pdma2pdp_pvld,0,0);
        VL_IN8(pdp_din_lc_f,0,0);
        VL_IN8(pooling_din_1st,0,0);
        VL_IN8(pooling_din_last,0,0);
        VL_IN8(pooling_out_prdy,0,0);
        VL_IN8(pooling_type_cfg,1,0);
        VL_IN8(pooling_unit_en,0,0);
        VL_OUT8(pdma2pdp_prdy,0,0);
        VL_OUT8(pooling_out_pvld,0,0);
        CData/*0:0*/ __PVT__add_out_rdy;
        CData/*0:0*/ __PVT__load_din;
        CData/*4:0*/ __PVT__pooling_cnt;
        CData/*2:0*/ __PVT__pooling_size;
        CData/*0:0*/ __PVT__pooling_MIN__Vstatic__min_int_ff;
        CData/*0:0*/ __PVT__pooling_MAX__Vstatic__max_int_ff;
        CData/*0:0*/ __PVT__pooling_fun__Vstatic__min_pooling;
        CData/*0:0*/ __PVT__pooling_fun__Vstatic__max_pooling;
        CData/*0:0*/ __PVT__pooling_fun__Vstatic__mean_pooling;
        CData/*0:0*/ __PVT__pipe_rdy_0;
        CData/*0:0*/ __PVT__pipe_vld_1;
        CData/*0:0*/ __PVT__pipe_rdy_1;
        CData/*0:0*/ __PVT__pipe_vld_2;
        CData/*0:0*/ __PVT__pipe_rdy_2;
        CData/*0:0*/ __PVT__pipe_vld_3;
        CData/*0:0*/ __PVT__pipe_rdy_3;
        CData/*0:0*/ __PVT__pipe_vld_4;
        VL_OUT16(pooling_out,14,0);
        SData/*10:0*/ __PVT__int_pooling;
        SData/*10:0*/ __PVT__pooling_result;
        SData/*10:0*/ __PVT__latch_result0_d3;
        SData/*14:0*/ __PVT__flush_out0;
        SData/*10:0*/ __PVT__data_buf0;
        SData/*10:0*/ __PVT__latch_result1_d3;
        SData/*14:0*/ __PVT__flush_out1;
        SData/*10:0*/ __PVT__data_buf1;
        SData/*10:0*/ __PVT__latch_result2_d3;
        SData/*14:0*/ __PVT__flush_out2;
        SData/*10:0*/ __PVT__data_buf2;
        SData/*10:0*/ __PVT__latch_result3_d3;
        SData/*14:0*/ __PVT__flush_out3;
        SData/*10:0*/ __PVT__data_buf3;
        SData/*10:0*/ __PVT__latch_result4_d3;
        SData/*14:0*/ __PVT__flush_out4;
        SData/*10:0*/ __PVT__data_buf4;
        SData/*10:0*/ __PVT__latch_result5_d3;
        SData/*14:0*/ __PVT__flush_out5;
        SData/*10:0*/ __PVT__data_buf5;
        SData/*10:0*/ __PVT__latch_result6_d3;
        SData/*14:0*/ __PVT__flush_out6;
        SData/*10:0*/ __PVT__data_buf6;
        SData/*10:0*/ __PVT__latch_result7_d3;
        SData/*14:0*/ __PVT__flush_out7;
        SData/*10:0*/ __PVT__data_buf7;
        SData/*10:0*/ __Vfunc_pooling_SUM__1__Vfuncout;
        SData/*10:0*/ __Vfunc_pooling_SUM__1__data0;
        SData/*10:0*/ __Vfunc_pooling_SUM__1__data1;
        SData/*10:0*/ __Vfunc_pooling_MIN__2__Vfuncout;
        SData/*10:0*/ __Vfunc_pooling_MIN__2__data0;
        SData/*10:0*/ __Vfunc_pooling_MIN__2__data1;
    };
    struct {
        SData/*10:0*/ __Vfunc_pooling_MAX__3__Vfuncout;
        SData/*10:0*/ __Vfunc_pooling_MAX__3__data0;
        SData/*10:0*/ __Vfunc_pooling_MAX__3__data1;
        SData/*10:0*/ __Vfunc_pooling_SUM__5__Vfuncout;
        SData/*10:0*/ __Vfunc_pooling_SUM__5__data0;
        SData/*10:0*/ __Vfunc_pooling_SUM__5__data1;
        SData/*10:0*/ __Vfunc_pooling_MIN__6__Vfuncout;
        SData/*10:0*/ __Vfunc_pooling_MIN__6__data0;
        SData/*10:0*/ __Vfunc_pooling_MIN__6__data1;
        SData/*10:0*/ __Vfunc_pooling_MAX__7__Vfuncout;
        SData/*10:0*/ __Vfunc_pooling_MAX__7__data0;
        SData/*10:0*/ __Vfunc_pooling_MAX__7__data1;
        SData/*10:0*/ __Vfunc_pooling_SUM__9__Vfuncout;
        SData/*10:0*/ __Vfunc_pooling_SUM__9__data0;
        SData/*10:0*/ __Vfunc_pooling_SUM__9__data1;
        SData/*10:0*/ __Vfunc_pooling_MIN__10__Vfuncout;
        SData/*10:0*/ __Vfunc_pooling_MIN__10__data0;
        SData/*10:0*/ __Vfunc_pooling_MIN__10__data1;
        SData/*10:0*/ __Vfunc_pooling_MAX__11__Vfuncout;
        SData/*10:0*/ __Vfunc_pooling_MAX__11__data0;
        SData/*10:0*/ __Vfunc_pooling_MAX__11__data1;
        SData/*10:0*/ __Vfunc_pooling_SUM__13__Vfuncout;
        SData/*10:0*/ __Vfunc_pooling_SUM__13__data0;
        SData/*10:0*/ __Vfunc_pooling_SUM__13__data1;
        SData/*10:0*/ __Vfunc_pooling_MIN__14__Vfuncout;
        SData/*10:0*/ __Vfunc_pooling_MIN__14__data0;
        SData/*10:0*/ __Vfunc_pooling_MIN__14__data1;
        SData/*10:0*/ __Vfunc_pooling_MAX__15__Vfuncout;
        SData/*10:0*/ __Vfunc_pooling_MAX__15__data0;
        SData/*10:0*/ __Vfunc_pooling_MAX__15__data1;
        SData/*10:0*/ __Vfunc_pooling_SUM__17__Vfuncout;
        SData/*10:0*/ __Vfunc_pooling_SUM__17__data0;
        SData/*10:0*/ __Vfunc_pooling_SUM__17__data1;
        SData/*10:0*/ __Vfunc_pooling_MIN__18__Vfuncout;
        SData/*10:0*/ __Vfunc_pooling_MIN__18__data0;
        SData/*10:0*/ __Vfunc_pooling_MIN__18__data1;
        SData/*10:0*/ __Vfunc_pooling_MAX__19__Vfuncout;
        SData/*10:0*/ __Vfunc_pooling_MAX__19__data0;
        SData/*10:0*/ __Vfunc_pooling_MAX__19__data1;
        SData/*10:0*/ __Vfunc_pooling_SUM__21__Vfuncout;
        SData/*10:0*/ __Vfunc_pooling_SUM__21__data0;
        SData/*10:0*/ __Vfunc_pooling_SUM__21__data1;
        SData/*10:0*/ __Vfunc_pooling_MIN__22__Vfuncout;
        SData/*10:0*/ __Vfunc_pooling_MIN__22__data0;
        SData/*10:0*/ __Vfunc_pooling_MIN__22__data1;
        SData/*10:0*/ __Vfunc_pooling_MAX__23__Vfuncout;
        SData/*10:0*/ __Vfunc_pooling_MAX__23__data0;
        SData/*10:0*/ __Vfunc_pooling_MAX__23__data1;
        SData/*10:0*/ __Vfunc_pooling_SUM__25__Vfuncout;
        SData/*10:0*/ __Vfunc_pooling_SUM__25__data0;
        SData/*10:0*/ __Vfunc_pooling_SUM__25__data1;
        SData/*10:0*/ __Vfunc_pooling_MIN__26__Vfuncout;
        SData/*10:0*/ __Vfunc_pooling_MIN__26__data0;
        SData/*10:0*/ __Vfunc_pooling_MIN__26__data1;
        SData/*10:0*/ __Vfunc_pooling_MAX__27__Vfuncout;
        SData/*10:0*/ __Vfunc_pooling_MAX__27__data0;
        SData/*10:0*/ __Vfunc_pooling_MAX__27__data1;
        SData/*10:0*/ __Vfunc_pooling_SUM__29__Vfuncout;
        SData/*10:0*/ __Vfunc_pooling_SUM__29__data0;
        SData/*10:0*/ __Vfunc_pooling_SUM__29__data1;
        SData/*10:0*/ __Vfunc_pooling_MIN__30__Vfuncout;
        SData/*10:0*/ __Vfunc_pooling_MIN__30__data0;
        SData/*10:0*/ __Vfunc_pooling_MIN__30__data1;
        SData/*10:0*/ __Vfunc_pooling_MAX__31__Vfuncout;
    };
    struct {
        SData/*10:0*/ __Vfunc_pooling_MAX__31__data0;
        SData/*10:0*/ __Vfunc_pooling_MAX__31__data1;
        VL_IN(pdma2pdp_pd,17,0);
        QData/*33:0*/ __PVT__pipe_dp_1;
        QData/*33:0*/ __PVT__pipe_dp_2;
        QData/*33:0*/ __PVT__pipe_dp_3;
        QData/*33:0*/ __PVT__pipe_dp_4;
    };

    // INTERNAL VARIABLES
    VNV_nvdla__Syms* const vlSymsp;

    // CONSTRUCTORS
    VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d(VNV_nvdla__Syms* symsp, const char* v__name);
    ~VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d();
    VL_UNCOPYABLE(VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
