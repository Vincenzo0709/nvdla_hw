// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "VNV_nvdla__pch.h"
#include "VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo.h"
#include "VNV_nvdla__Syms.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___ico_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___ico_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
}

extern const VlUnpacked<CData/*2:0*/, 128> VNV_nvdla__ConstPool__TABLE_h6bd4e4bd_0;
extern const VlUnpacked<CData/*2:0*/, 128> VNV_nvdla__ConstPool__TABLE_h7ee00e86_0;
extern const VlUnpacked<CData/*0:0*/, 128> VNV_nvdla__ConstPool__TABLE_h0ce45ed0_0;

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.__Vdly__rq_wr_adr = vlSelfRef.__PVT__rq_wr_adr;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__Vdly__rq_wr_adr = (3U & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__rq_wr_adr)));
        }
        if (((IData)(vlSelfRef.__PVT__wr_reserving) 
             ^ (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__rq_wr_count = vlSelfRef.__PVT__wr_count_next;
        } else if (((IData)(vlSelfRef.__PVT__wr_reserving) 
                    ^ (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__rq_wr_count = 0U;
        }
        if (vlSelfRef.__PVT__wr_popping) {
            vlSelfRef.__PVT__rq_rd_adr = vlSelfRef.__PVT__rd_adr_next_popping;
        } else if (vlSelfRef.__PVT__wr_popping) {
            vlSelfRef.__PVT__rq_rd_adr = 0U;
        }
    } else {
        vlSelfRef.__Vdly__rq_wr_adr = 0U;
        vlSelfRef.__PVT__rq_wr_count = 0U;
        vlSelfRef.__PVT__rq_rd_adr = 0U;
    }
    vlSelfRef.__PVT__rq_wr_busy_int = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
                                       && (IData)(vlSelfRef.__PVT__wr_count_next_is_4));
    __Vtableidx1 = (((((IData)(vlSelfRef.__PVT__wr_popping)
                        ? (0U != (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping))
                        : (0U != (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping))) 
                      << 6U) | (((IData)(vlSelfRef.__PVT__wr_popping)
                                  ? (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping)
                                  : (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping)) 
                                << 3U)) | (((IData)(vlSelfRef.__PVT__wr_popping) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.__PVT__wr_reserving) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn))));
    if ((1U & VNV_nvdla__ConstPool__TABLE_h6bd4e4bd_0
         [__Vtableidx1])) {
        vlSelfRef.__PVT__rq_rd_count = VNV_nvdla__ConstPool__TABLE_h7ee00e86_0
            [__Vtableidx1];
    }
    if ((2U & VNV_nvdla__ConstPool__TABLE_h6bd4e4bd_0
         [__Vtableidx1])) {
        vlSelfRef.rq_rd_pvld = VNV_nvdla__ConstPool__TABLE_h0ce45ed0_0
            [__Vtableidx1];
    }
    if ((4U & VNV_nvdla__ConstPool__TABLE_h6bd4e4bd_0
         [__Vtableidx1])) {
        vlSelfRef.__PVT__rq_rd_pvld_int = VNV_nvdla__ConstPool__TABLE_h0ce45ed0_0
            [__Vtableidx1];
    }
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__rq_rd_adr)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__1(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = vlSelfRef.__PVT__nvdla_core_clk_mgated_enable;
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.dla_core_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__2(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.__PVT__wr_reserving) & (0U 
                                                   == (IData)(vlSelfRef.__PVT__rq_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff0 = (((QData)((IData)(
                                                               vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_skid_data[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_skid_data[0U])));
    }
    if (((IData)(vlSelfRef.__PVT__wr_reserving) & (3U 
                                                   == (IData)(vlSelfRef.__PVT__rq_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff3 = (((QData)((IData)(
                                                               vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_skid_data[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_skid_data[0U])));
    }
    if (((IData)(vlSelfRef.__PVT__wr_reserving) & (1U 
                                                   == (IData)(vlSelfRef.__PVT__rq_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff1 = (((QData)((IData)(
                                                               vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_skid_data[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_skid_data[0U])));
    }
    if (((IData)(vlSelfRef.__PVT__wr_reserving) & (2U 
                                                   == (IData)(vlSelfRef.__PVT__rq_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff2 = (((QData)((IData)(
                                                               vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_skid_data[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__pipe_p1__DOT__p1_pipe_skid_data[0U])));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq0_wr_pvld));
    vlSelfRef.__PVT__rd_count_next_rd_popping = (7U 
                                                 & ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                     ? (IData)(vlSelfRef.__PVT__rq_rd_count)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__rq_rd_count) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT__rd_count_next_no_rd_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_rd_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__1(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo0__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_popping = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                   & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
    vlSelfRef.__PVT__wr_count_next = (7U & ((IData)(vlSelfRef.__PVT__wr_popping)
                                             ? ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                 ? (IData)(vlSelfRef.__PVT__rq_wr_count)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__rq_wr_count) 
                                                 - (IData)(1U)))
                                             : (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated_enable = 
        (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                | (IData)(vlSelfRef.__PVT__wr_popping)) 
               | (((IData)(vlSelfRef.__PVT__rq_wr_busy_int) 
                   != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                  | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                     & (IData)(vlSelfRef.rq_rd_pvld)))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo1__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo1__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.__Vdly__rq_wr_adr = vlSelfRef.__PVT__rq_wr_adr;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__Vdly__rq_wr_adr = (3U & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__rq_wr_adr)));
        }
        if (((IData)(vlSelfRef.__PVT__wr_reserving) 
             ^ (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__rq_wr_count = vlSelfRef.__PVT__wr_count_next;
        } else if (((IData)(vlSelfRef.__PVT__wr_reserving) 
                    ^ (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__rq_wr_count = 0U;
        }
        if (vlSelfRef.__PVT__wr_popping) {
            vlSelfRef.__PVT__rq_rd_adr = vlSelfRef.__PVT__rd_adr_next_popping;
        } else if (vlSelfRef.__PVT__wr_popping) {
            vlSelfRef.__PVT__rq_rd_adr = 0U;
        }
    } else {
        vlSelfRef.__Vdly__rq_wr_adr = 0U;
        vlSelfRef.__PVT__rq_wr_count = 0U;
        vlSelfRef.__PVT__rq_rd_adr = 0U;
    }
    vlSelfRef.__PVT__rq_wr_busy_int = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
                                       && (IData)(vlSelfRef.__PVT__wr_count_next_is_4));
    __Vtableidx2 = (((((IData)(vlSelfRef.__PVT__wr_popping)
                        ? (0U != (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping))
                        : (0U != (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping))) 
                      << 6U) | (((IData)(vlSelfRef.__PVT__wr_popping)
                                  ? (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping)
                                  : (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping)) 
                                << 3U)) | (((IData)(vlSelfRef.__PVT__wr_popping) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.__PVT__wr_reserving) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn))));
    if ((1U & VNV_nvdla__ConstPool__TABLE_h6bd4e4bd_0
         [__Vtableidx2])) {
        vlSelfRef.__PVT__rq_rd_count = VNV_nvdla__ConstPool__TABLE_h7ee00e86_0
            [__Vtableidx2];
    }
    if ((2U & VNV_nvdla__ConstPool__TABLE_h6bd4e4bd_0
         [__Vtableidx2])) {
        vlSelfRef.rq_rd_pvld = VNV_nvdla__ConstPool__TABLE_h0ce45ed0_0
            [__Vtableidx2];
    }
    if ((4U & VNV_nvdla__ConstPool__TABLE_h6bd4e4bd_0
         [__Vtableidx2])) {
        vlSelfRef.__PVT__rq_rd_pvld_int = VNV_nvdla__ConstPool__TABLE_h0ce45ed0_0
            [__Vtableidx2];
    }
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__rq_rd_adr)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo1__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo1__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq1_wr_pvld));
    vlSelfRef.__PVT__rd_count_next_rd_popping = (7U 
                                                 & ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                     ? (IData)(vlSelfRef.__PVT__rq_rd_count)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__rq_rd_count) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT__rd_count_next_no_rd_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_rd_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo1__1(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo1__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 1U) & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
    vlSelfRef.__PVT__wr_count_next = (7U & ((IData)(vlSelfRef.__PVT__wr_popping)
                                             ? ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                 ? (IData)(vlSelfRef.__PVT__rq_wr_count)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__rq_wr_count) 
                                                 - (IData)(1U)))
                                             : (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated_enable = 
        (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                | (IData)(vlSelfRef.__PVT__wr_popping)) 
               | (((IData)(vlSelfRef.__PVT__rq_wr_busy_int) 
                   != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                  | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                      >> 1U) & (IData)(vlSelfRef.rq_rd_pvld)))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo2__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo2__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelfRef.__Vdly__rq_wr_adr = vlSelfRef.__PVT__rq_wr_adr;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__Vdly__rq_wr_adr = (3U & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__rq_wr_adr)));
        }
        if (((IData)(vlSelfRef.__PVT__wr_reserving) 
             ^ (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__rq_wr_count = vlSelfRef.__PVT__wr_count_next;
        } else if (((IData)(vlSelfRef.__PVT__wr_reserving) 
                    ^ (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__rq_wr_count = 0U;
        }
        if (vlSelfRef.__PVT__wr_popping) {
            vlSelfRef.__PVT__rq_rd_adr = vlSelfRef.__PVT__rd_adr_next_popping;
        } else if (vlSelfRef.__PVT__wr_popping) {
            vlSelfRef.__PVT__rq_rd_adr = 0U;
        }
    } else {
        vlSelfRef.__Vdly__rq_wr_adr = 0U;
        vlSelfRef.__PVT__rq_wr_count = 0U;
        vlSelfRef.__PVT__rq_rd_adr = 0U;
    }
    vlSelfRef.__PVT__rq_wr_busy_int = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
                                       && (IData)(vlSelfRef.__PVT__wr_count_next_is_4));
    __Vtableidx3 = (((((IData)(vlSelfRef.__PVT__wr_popping)
                        ? (0U != (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping))
                        : (0U != (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping))) 
                      << 6U) | (((IData)(vlSelfRef.__PVT__wr_popping)
                                  ? (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping)
                                  : (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping)) 
                                << 3U)) | (((IData)(vlSelfRef.__PVT__wr_popping) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.__PVT__wr_reserving) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn))));
    if ((1U & VNV_nvdla__ConstPool__TABLE_h6bd4e4bd_0
         [__Vtableidx3])) {
        vlSelfRef.__PVT__rq_rd_count = VNV_nvdla__ConstPool__TABLE_h7ee00e86_0
            [__Vtableidx3];
    }
    if ((2U & VNV_nvdla__ConstPool__TABLE_h6bd4e4bd_0
         [__Vtableidx3])) {
        vlSelfRef.rq_rd_pvld = VNV_nvdla__ConstPool__TABLE_h0ce45ed0_0
            [__Vtableidx3];
    }
    if ((4U & VNV_nvdla__ConstPool__TABLE_h6bd4e4bd_0
         [__Vtableidx3])) {
        vlSelfRef.__PVT__rq_rd_pvld_int = VNV_nvdla__ConstPool__TABLE_h0ce45ed0_0
            [__Vtableidx3];
    }
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__rq_rd_adr)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo2__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo2__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq2_wr_pvld));
    vlSelfRef.__PVT__rd_count_next_rd_popping = (7U 
                                                 & ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                     ? (IData)(vlSelfRef.__PVT__rq_rd_count)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__rq_rd_count) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT__rd_count_next_no_rd_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_rd_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo2__1(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo2__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 2U) & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
    vlSelfRef.__PVT__wr_count_next = (7U & ((IData)(vlSelfRef.__PVT__wr_popping)
                                             ? ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                 ? (IData)(vlSelfRef.__PVT__rq_wr_count)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__rq_wr_count) 
                                                 - (IData)(1U)))
                                             : (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated_enable = 
        (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                | (IData)(vlSelfRef.__PVT__wr_popping)) 
               | (((IData)(vlSelfRef.__PVT__rq_wr_busy_int) 
                   != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                  | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                      >> 2U) & (IData)(vlSelfRef.rq_rd_pvld)))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo3__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo3__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelfRef.__Vdly__rq_wr_adr = vlSelfRef.__PVT__rq_wr_adr;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__Vdly__rq_wr_adr = (3U & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__rq_wr_adr)));
        }
        if (((IData)(vlSelfRef.__PVT__wr_reserving) 
             ^ (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__rq_wr_count = vlSelfRef.__PVT__wr_count_next;
        } else if (((IData)(vlSelfRef.__PVT__wr_reserving) 
                    ^ (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__rq_wr_count = 0U;
        }
        if (vlSelfRef.__PVT__wr_popping) {
            vlSelfRef.__PVT__rq_rd_adr = vlSelfRef.__PVT__rd_adr_next_popping;
        } else if (vlSelfRef.__PVT__wr_popping) {
            vlSelfRef.__PVT__rq_rd_adr = 0U;
        }
    } else {
        vlSelfRef.__Vdly__rq_wr_adr = 0U;
        vlSelfRef.__PVT__rq_wr_count = 0U;
        vlSelfRef.__PVT__rq_rd_adr = 0U;
    }
    vlSelfRef.__PVT__rq_wr_busy_int = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
                                       && (IData)(vlSelfRef.__PVT__wr_count_next_is_4));
    __Vtableidx4 = (((((IData)(vlSelfRef.__PVT__wr_popping)
                        ? (0U != (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping))
                        : (0U != (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping))) 
                      << 6U) | (((IData)(vlSelfRef.__PVT__wr_popping)
                                  ? (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping)
                                  : (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping)) 
                                << 3U)) | (((IData)(vlSelfRef.__PVT__wr_popping) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.__PVT__wr_reserving) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn))));
    if ((1U & VNV_nvdla__ConstPool__TABLE_h6bd4e4bd_0
         [__Vtableidx4])) {
        vlSelfRef.__PVT__rq_rd_count = VNV_nvdla__ConstPool__TABLE_h7ee00e86_0
            [__Vtableidx4];
    }
    if ((2U & VNV_nvdla__ConstPool__TABLE_h6bd4e4bd_0
         [__Vtableidx4])) {
        vlSelfRef.rq_rd_pvld = VNV_nvdla__ConstPool__TABLE_h0ce45ed0_0
            [__Vtableidx4];
    }
    if ((4U & VNV_nvdla__ConstPool__TABLE_h6bd4e4bd_0
         [__Vtableidx4])) {
        vlSelfRef.__PVT__rq_rd_pvld_int = VNV_nvdla__ConstPool__TABLE_h0ce45ed0_0
            [__Vtableidx4];
    }
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__rq_rd_adr)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo3__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo3__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq3_wr_pvld));
    vlSelfRef.__PVT__rd_count_next_rd_popping = (7U 
                                                 & ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                     ? (IData)(vlSelfRef.__PVT__rq_rd_count)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__rq_rd_count) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT__rd_count_next_no_rd_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_rd_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo3__1(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo3__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 3U) & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
    vlSelfRef.__PVT__wr_count_next = (7U & ((IData)(vlSelfRef.__PVT__wr_popping)
                                             ? ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                 ? (IData)(vlSelfRef.__PVT__rq_wr_count)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__rq_wr_count) 
                                                 - (IData)(1U)))
                                             : (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated_enable = 
        (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                | (IData)(vlSelfRef.__PVT__wr_popping)) 
               | (((IData)(vlSelfRef.__PVT__rq_wr_busy_int) 
                   != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                  | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                      >> 3U) & (IData)(vlSelfRef.rq_rd_pvld)))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo4__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo4__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelfRef.__Vdly__rq_wr_adr = vlSelfRef.__PVT__rq_wr_adr;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__Vdly__rq_wr_adr = (3U & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__rq_wr_adr)));
        }
        if (((IData)(vlSelfRef.__PVT__wr_reserving) 
             ^ (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__rq_wr_count = vlSelfRef.__PVT__wr_count_next;
        } else if (((IData)(vlSelfRef.__PVT__wr_reserving) 
                    ^ (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__rq_wr_count = 0U;
        }
        if (vlSelfRef.__PVT__wr_popping) {
            vlSelfRef.__PVT__rq_rd_adr = vlSelfRef.__PVT__rd_adr_next_popping;
        } else if (vlSelfRef.__PVT__wr_popping) {
            vlSelfRef.__PVT__rq_rd_adr = 0U;
        }
    } else {
        vlSelfRef.__Vdly__rq_wr_adr = 0U;
        vlSelfRef.__PVT__rq_wr_count = 0U;
        vlSelfRef.__PVT__rq_rd_adr = 0U;
    }
    vlSelfRef.__PVT__rq_wr_busy_int = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
                                       && (IData)(vlSelfRef.__PVT__wr_count_next_is_4));
    __Vtableidx5 = (((((IData)(vlSelfRef.__PVT__wr_popping)
                        ? (0U != (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping))
                        : (0U != (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping))) 
                      << 6U) | (((IData)(vlSelfRef.__PVT__wr_popping)
                                  ? (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping)
                                  : (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping)) 
                                << 3U)) | (((IData)(vlSelfRef.__PVT__wr_popping) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.__PVT__wr_reserving) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn))));
    if ((1U & VNV_nvdla__ConstPool__TABLE_h6bd4e4bd_0
         [__Vtableidx5])) {
        vlSelfRef.__PVT__rq_rd_count = VNV_nvdla__ConstPool__TABLE_h7ee00e86_0
            [__Vtableidx5];
    }
    if ((2U & VNV_nvdla__ConstPool__TABLE_h6bd4e4bd_0
         [__Vtableidx5])) {
        vlSelfRef.rq_rd_pvld = VNV_nvdla__ConstPool__TABLE_h0ce45ed0_0
            [__Vtableidx5];
    }
    if ((4U & VNV_nvdla__ConstPool__TABLE_h6bd4e4bd_0
         [__Vtableidx5])) {
        vlSelfRef.__PVT__rq_rd_pvld_int = VNV_nvdla__ConstPool__TABLE_h0ce45ed0_0
            [__Vtableidx5];
    }
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__rq_rd_adr)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo4__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo4__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq4_wr_pvld));
    vlSelfRef.__PVT__rd_count_next_rd_popping = (7U 
                                                 & ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                     ? (IData)(vlSelfRef.__PVT__rq_rd_count)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__rq_rd_count) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT__rd_count_next_no_rd_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_rd_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo4__1(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo4__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 4U) & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
    vlSelfRef.__PVT__wr_count_next = (7U & ((IData)(vlSelfRef.__PVT__wr_popping)
                                             ? ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                 ? (IData)(vlSelfRef.__PVT__rq_wr_count)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__rq_wr_count) 
                                                 - (IData)(1U)))
                                             : (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated_enable = 
        (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                | (IData)(vlSelfRef.__PVT__wr_popping)) 
               | (((IData)(vlSelfRef.__PVT__rq_wr_busy_int) 
                   != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                  | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                      >> 4U) & (IData)(vlSelfRef.rq_rd_pvld)))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo5__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo5__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelfRef.__Vdly__rq_wr_adr = vlSelfRef.__PVT__rq_wr_adr;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__Vdly__rq_wr_adr = (3U & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__rq_wr_adr)));
        }
        if (((IData)(vlSelfRef.__PVT__wr_reserving) 
             ^ (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__rq_wr_count = vlSelfRef.__PVT__wr_count_next;
        } else if (((IData)(vlSelfRef.__PVT__wr_reserving) 
                    ^ (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__rq_wr_count = 0U;
        }
        if (vlSelfRef.__PVT__wr_popping) {
            vlSelfRef.__PVT__rq_rd_adr = vlSelfRef.__PVT__rd_adr_next_popping;
        } else if (vlSelfRef.__PVT__wr_popping) {
            vlSelfRef.__PVT__rq_rd_adr = 0U;
        }
    } else {
        vlSelfRef.__Vdly__rq_wr_adr = 0U;
        vlSelfRef.__PVT__rq_wr_count = 0U;
        vlSelfRef.__PVT__rq_rd_adr = 0U;
    }
    vlSelfRef.__PVT__rq_wr_busy_int = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
                                       && (IData)(vlSelfRef.__PVT__wr_count_next_is_4));
    __Vtableidx6 = (((((IData)(vlSelfRef.__PVT__wr_popping)
                        ? (0U != (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping))
                        : (0U != (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping))) 
                      << 6U) | (((IData)(vlSelfRef.__PVT__wr_popping)
                                  ? (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping)
                                  : (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping)) 
                                << 3U)) | (((IData)(vlSelfRef.__PVT__wr_popping) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.__PVT__wr_reserving) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn))));
    if ((1U & VNV_nvdla__ConstPool__TABLE_h6bd4e4bd_0
         [__Vtableidx6])) {
        vlSelfRef.__PVT__rq_rd_count = VNV_nvdla__ConstPool__TABLE_h7ee00e86_0
            [__Vtableidx6];
    }
    if ((2U & VNV_nvdla__ConstPool__TABLE_h6bd4e4bd_0
         [__Vtableidx6])) {
        vlSelfRef.rq_rd_pvld = VNV_nvdla__ConstPool__TABLE_h0ce45ed0_0
            [__Vtableidx6];
    }
    if ((4U & VNV_nvdla__ConstPool__TABLE_h6bd4e4bd_0
         [__Vtableidx6])) {
        vlSelfRef.__PVT__rq_rd_pvld_int = VNV_nvdla__ConstPool__TABLE_h0ce45ed0_0
            [__Vtableidx6];
    }
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__rq_rd_adr)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo5__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo5__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq5_wr_pvld));
    vlSelfRef.__PVT__rd_count_next_rd_popping = (7U 
                                                 & ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                     ? (IData)(vlSelfRef.__PVT__rq_rd_count)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__rq_rd_count) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT__rd_count_next_no_rd_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_rd_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo5__1(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo5__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 5U) & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
    vlSelfRef.__PVT__wr_count_next = (7U & ((IData)(vlSelfRef.__PVT__wr_popping)
                                             ? ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                 ? (IData)(vlSelfRef.__PVT__rq_wr_count)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__rq_wr_count) 
                                                 - (IData)(1U)))
                                             : (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated_enable = 
        (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                | (IData)(vlSelfRef.__PVT__wr_popping)) 
               | (((IData)(vlSelfRef.__PVT__rq_wr_busy_int) 
                   != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                  | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                      >> 5U) & (IData)(vlSelfRef.rq_rd_pvld)))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo6__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo6__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    vlSelfRef.__Vdly__rq_wr_adr = vlSelfRef.__PVT__rq_wr_adr;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__Vdly__rq_wr_adr = (3U & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__rq_wr_adr)));
        }
        if (((IData)(vlSelfRef.__PVT__wr_reserving) 
             ^ (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__rq_wr_count = vlSelfRef.__PVT__wr_count_next;
        } else if (((IData)(vlSelfRef.__PVT__wr_reserving) 
                    ^ (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__rq_wr_count = 0U;
        }
        if (vlSelfRef.__PVT__wr_popping) {
            vlSelfRef.__PVT__rq_rd_adr = vlSelfRef.__PVT__rd_adr_next_popping;
        } else if (vlSelfRef.__PVT__wr_popping) {
            vlSelfRef.__PVT__rq_rd_adr = 0U;
        }
    } else {
        vlSelfRef.__Vdly__rq_wr_adr = 0U;
        vlSelfRef.__PVT__rq_wr_count = 0U;
        vlSelfRef.__PVT__rq_rd_adr = 0U;
    }
    vlSelfRef.__PVT__rq_wr_busy_int = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
                                       && (IData)(vlSelfRef.__PVT__wr_count_next_is_4));
    __Vtableidx7 = (((((IData)(vlSelfRef.__PVT__wr_popping)
                        ? (0U != (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping))
                        : (0U != (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping))) 
                      << 6U) | (((IData)(vlSelfRef.__PVT__wr_popping)
                                  ? (IData)(vlSelfRef.__PVT__rd_count_next_rd_popping)
                                  : (IData)(vlSelfRef.__PVT__rd_count_next_no_rd_popping)) 
                                << 3U)) | (((IData)(vlSelfRef.__PVT__wr_popping) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.__PVT__wr_reserving) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn))));
    if ((1U & VNV_nvdla__ConstPool__TABLE_h6bd4e4bd_0
         [__Vtableidx7])) {
        vlSelfRef.__PVT__rq_rd_count = VNV_nvdla__ConstPool__TABLE_h7ee00e86_0
            [__Vtableidx7];
    }
    if ((2U & VNV_nvdla__ConstPool__TABLE_h6bd4e4bd_0
         [__Vtableidx7])) {
        vlSelfRef.rq_rd_pvld = VNV_nvdla__ConstPool__TABLE_h0ce45ed0_0
            [__Vtableidx7];
    }
    if ((4U & VNV_nvdla__ConstPool__TABLE_h6bd4e4bd_0
         [__Vtableidx7])) {
        vlSelfRef.__PVT__rq_rd_pvld_int = VNV_nvdla__ConstPool__TABLE_h0ce45ed0_0
            [__Vtableidx7];
    }
    vlSelfRef.__PVT__rd_adr_next_popping = (3U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__rq_rd_adr)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo6__0(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo6__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__rq_wr_busy_int)) 
                                     & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__rq6_wr_pvld));
    vlSelfRef.__PVT__rd_count_next_rd_popping = (7U 
                                                 & ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                     ? (IData)(vlSelfRef.__PVT__rq_rd_count)
                                                     : 
                                                    ((IData)(vlSelfRef.__PVT__rq_rd_count) 
                                                     - (IData)(1U))));
    vlSelfRef.__PVT__rd_count_next_no_rd_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_rd_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (7U & ((IData)(vlSelfRef.__PVT__rq_wr_count) 
               + (IData)(vlSelfRef.__PVT__wr_reserving)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo6__1(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__lat_fifo6__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_popping = (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                                    >> 6U) & (IData)(vlSelfRef.__PVT__rq_rd_pvld_int));
    vlSelfRef.__PVT__wr_count_next = (7U & ((IData)(vlSelfRef.__PVT__wr_popping)
                                             ? ((IData)(vlSelfRef.__PVT__wr_reserving)
                                                 ? (IData)(vlSelfRef.__PVT__rq_wr_count)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__rq_wr_count) 
                                                 - (IData)(1U)))
                                             : (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__wr_count_next_is_4 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (4U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    vlSelfRef.__PVT__nvdla_core_clk_mgated_enable = 
        (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                | (IData)(vlSelfRef.__PVT__wr_popping)) 
               | (((IData)(vlSelfRef.__PVT__rq_wr_busy_int) 
                   != (IData)(vlSelfRef.__PVT__wr_count_next_is_4)) 
                  | (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_eg__DOT__u_read_eg_arb__DOT__gnt_pre) 
                      >> 6U) & (IData)(vlSelfRef.rq_rd_pvld)))));
}
