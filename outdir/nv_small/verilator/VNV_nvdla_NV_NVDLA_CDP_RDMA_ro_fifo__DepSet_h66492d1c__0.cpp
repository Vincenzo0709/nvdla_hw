// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "VNV_nvdla__pch.h"
#include "VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo.h"
#include "VNV_nvdla__Syms.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___ico_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__0(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___ico_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgated = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__nvdla_op_gated_clk) 
                                              & (IData)(vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__0(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__0\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__ro_wr_adr = vlSelfRef.__PVT__ro_wr_adr;
    if (vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__Vdly__ro_wr_adr = (7U & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__ro_wr_adr)));
        }
        if (vlSelfRef.__PVT__wr_popping) {
            vlSelfRef.__PVT__ro_rd_adr = vlSelfRef.__PVT__rd_adr_next_popping;
        } else if (vlSelfRef.__PVT__wr_popping) {
            vlSelfRef.__PVT__ro_rd_adr = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__wr_reserving) 
             ^ (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__ro_wr_count = vlSelfRef.__PVT__wr_count_next;
        } else if (((IData)(vlSelfRef.__PVT__wr_reserving) 
                    ^ (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__ro_wr_count = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__wr_reserving) 
             | (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__ro_rd_count_p = vlSelfRef.__PVT__rd_count_p_next;
        } else if (((IData)(vlSelfRef.__PVT__wr_reserving) 
                    | (IData)(vlSelfRef.__PVT__wr_popping))) {
            vlSelfRef.__PVT__ro_rd_count_p = 0U;
        }
    } else {
        vlSelfRef.__Vdly__ro_wr_adr = 0U;
        vlSelfRef.__PVT__ro_rd_adr = 0U;
        vlSelfRef.__PVT__ro_wr_count = 0U;
        vlSelfRef.__PVT__ro_rd_count_p = 0U;
    }
    vlSelfRef.__PVT__rd_adr_next_popping = (7U & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__ro_rd_adr)));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__1(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__ro_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_8)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_rd_prdy) 
                       & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__2(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__wr_popping) {
        vlSelfRef.ro_rd_pd = (0xffU & ((8U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? ((4U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? 0U : 
                                           ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                              ? 0U : 
                                             vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U])))
                                        : ((4U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff7)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff6))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff5)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff4)))
                                            : ((2U 
                                                & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff3)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff2))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff1)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff0))))));
    } else if (vlSelfRef.__PVT__wr_popping) {
        vlSelfRef.ro_rd_pd = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (7U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff7 = (0xffU 
                                              & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U]);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (6U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff6 = (0xffU 
                                              & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U]);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (5U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff5 = (0xffU 
                                              & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U]);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (4U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff4 = (0xffU 
                                              & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U]);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (3U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff3 = (0xffU 
                                              & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U]);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (2U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff2 = (0xffU 
                                              & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U]);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (1U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff1 = (0xffU 
                                              & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U]);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (0U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff0 = (0xffU 
                                              & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U]);
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__3(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__3\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellinp__ram__ra = ((0U == (IData)(vlSelfRef.__PVT__ro_wr_count))
                                      ? 8U : (IData)(vlSelfRef.__PVT__ro_rd_adr));
    vlSelfRef.__PVT__ro_wr_adr = vlSelfRef.__Vdly__ro_wr_adr;
    vlSelfRef.__PVT__ro_rd_pvld_int = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
                                       && ((IData)(vlSelfRef.__PVT__ro_rd_pvld_p) 
                                           | (IData)(vlSelfRef.__VdfgRegularize_ha95992ea_0_2)));
    vlSelfRef.__PVT__ro_wr_busy_int = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__nvdla_core_rstn) 
                                       && (IData)(vlSelfRef.__PVT__wr_count_next_is_8));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__1(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_ha95992ea_0_2 = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__2(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro0_fifo__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__wr_reserving = ((~ (IData)(vlSelfRef.__PVT__ro_wr_busy_int)) 
                                     & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro0_wr_pvld));
    vlSelfRef.__PVT__wr_count_next_no_wr_popping = 
        (0xfU & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                 + (IData)(vlSelfRef.__PVT__wr_reserving)));
    vlSelfRef.__PVT__ro_rd_pvld_p = ((0U != (IData)(vlSelfRef.__PVT__ro_rd_count_p)) 
                                     | (IData)(vlSelfRef.__PVT__wr_reserving));
    vlSelfRef.__PVT__wr_popping = ((~ (IData)(vlSelfRef.__VdfgRegularize_ha95992ea_0_2)) 
                                   & (IData)(vlSelfRef.__PVT__ro_rd_pvld_p));
    vlSelfRef.__PVT__wr_count_next_is_8 = ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                           & (8U == (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping)));
    if (vlSelfRef.__PVT__wr_popping) {
        if (vlSelfRef.__PVT__wr_reserving) {
            vlSelfRef.__PVT__rd_count_p_next = (0xfU 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_count_p));
            vlSelfRef.__PVT__wr_count_next = (0xfU 
                                              & (IData)(vlSelfRef.__PVT__ro_wr_count));
        } else {
            vlSelfRef.__PVT__rd_count_p_next = (0xfU 
                                                & ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                                   - (IData)(1U)));
            vlSelfRef.__PVT__wr_count_next = (0xfU 
                                              & ((IData)(vlSelfRef.__PVT__ro_wr_count) 
                                                 - (IData)(1U)));
        }
    } else {
        vlSelfRef.__PVT__rd_count_p_next = (0xfU & 
                                            ((IData)(vlSelfRef.__PVT__ro_rd_count_p) 
                                             + (IData)(vlSelfRef.__PVT__wr_reserving)));
        vlSelfRef.__PVT__wr_count_next = (0xfU & (IData)(vlSelfRef.__PVT__wr_count_next_no_wr_popping));
    }
    vlSelfRef.__PVT__ram_we = ((IData)(vlSelfRef.__PVT__wr_reserving) 
                               & ((~ (IData)(vlSelfRef.__PVT__wr_popping)) 
                                  | (0U < (IData)(vlSelfRef.__PVT__ro_wr_count))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo__1(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__ro_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_8)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro1_rd_prdy) 
                       & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo__2(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__wr_popping) {
        vlSelfRef.ro_rd_pd = (0xffU & ((8U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? ((4U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? 0U : 
                                           ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                              ? 0U : 
                                             ((vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U] 
                                               << 0x18U) 
                                              | (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U] 
                                                 >> 8U)))))
                                        : ((4U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff7)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff6))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff5)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff4)))
                                            : ((2U 
                                                & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff3)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff2))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff1)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff0))))));
    } else if (vlSelfRef.__PVT__wr_popping) {
        vlSelfRef.ro_rd_pd = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (7U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff7 = (0xffU 
                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U] 
                                                 >> 8U));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (6U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff6 = (0xffU 
                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U] 
                                                 >> 8U));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (5U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff5 = (0xffU 
                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U] 
                                                 >> 8U));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (4U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff4 = (0xffU 
                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U] 
                                                 >> 8U));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (3U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff3 = (0xffU 
                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U] 
                                                 >> 8U));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (2U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff2 = (0xffU 
                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U] 
                                                 >> 8U));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (1U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff1 = (0xffU 
                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U] 
                                                 >> 8U));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (0U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff0 = (0xffU 
                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U] 
                                                 >> 8U));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo__1(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro1_fifo__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_ha95992ea_0_2 = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro1_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro2_fifo__1(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro2_fifo__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__ro_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_8)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro2_rd_prdy) 
                       & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro2_fifo__2(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro2_fifo__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__wr_popping) {
        vlSelfRef.ro_rd_pd = (0xffU & ((8U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? ((4U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? 0U : 
                                           ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                              ? 0U : 
                                             ((vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U] 
                                                 >> 0x10U)))))
                                        : ((4U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff7)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff6))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff5)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff4)))
                                            : ((2U 
                                                & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff3)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff2))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff1)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff0))))));
    } else if (vlSelfRef.__PVT__wr_popping) {
        vlSelfRef.ro_rd_pd = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (7U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff7 = (0xffU 
                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U] 
                                                 >> 0x10U));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (6U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff6 = (0xffU 
                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U] 
                                                 >> 0x10U));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (5U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff5 = (0xffU 
                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U] 
                                                 >> 0x10U));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (4U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff4 = (0xffU 
                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U] 
                                                 >> 0x10U));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (3U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff3 = (0xffU 
                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U] 
                                                 >> 0x10U));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (2U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff2 = (0xffU 
                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U] 
                                                 >> 0x10U));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (1U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff1 = (0xffU 
                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U] 
                                                 >> 0x10U));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (0U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff0 = (0xffU 
                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U] 
                                                 >> 0x10U));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro2_fifo__1(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro2_fifo__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_ha95992ea_0_2 = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro2_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro3_fifo__1(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro3_fifo__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__ro_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_8)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro3_rd_prdy) 
                       & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro3_fifo__2(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro3_fifo__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__wr_popping) {
        vlSelfRef.ro_rd_pd = (0xffU & ((8U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? ((4U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? 0U : 
                                           ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                              ? 0U : 
                                             ((vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U] 
                                               << 8U) 
                                              | (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U] 
                                                 >> 0x18U)))))
                                        : ((4U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff7)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff6))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff5)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff4)))
                                            : ((2U 
                                                & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff3)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff2))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff1)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff0))))));
    } else if (vlSelfRef.__PVT__wr_popping) {
        vlSelfRef.ro_rd_pd = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (7U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff7 = (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U] 
                                              >> 0x18U);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (6U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff6 = (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U] 
                                              >> 0x18U);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (5U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff5 = (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U] 
                                              >> 0x18U);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (4U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff4 = (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U] 
                                              >> 0x18U);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (3U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff3 = (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U] 
                                              >> 0x18U);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (2U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff2 = (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U] 
                                              >> 0x18U);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (1U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff1 = (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U] 
                                              >> 0x18U);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (0U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff0 = (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[0U] 
                                              >> 0x18U);
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro3_fifo__1(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro3_fifo__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_ha95992ea_0_2 = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro3_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo__1(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__ro_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_8)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro4_rd_prdy) 
                       & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo__2(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__wr_popping) {
        vlSelfRef.ro_rd_pd = (0xffU & ((8U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? ((4U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? 0U : 
                                           ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                              ? 0U : 
                                             vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U])))
                                        : ((4U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff7)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff6))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff5)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff4)))
                                            : ((2U 
                                                & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff3)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff2))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff1)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff0))))));
    } else if (vlSelfRef.__PVT__wr_popping) {
        vlSelfRef.ro_rd_pd = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (7U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff7 = (0xffU 
                                              & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U]);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (6U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff6 = (0xffU 
                                              & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U]);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (5U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff5 = (0xffU 
                                              & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U]);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (4U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff4 = (0xffU 
                                              & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U]);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (3U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff3 = (0xffU 
                                              & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U]);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (2U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff2 = (0xffU 
                                              & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U]);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (1U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff1 = (0xffU 
                                              & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U]);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (0U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff0 = (0xffU 
                                              & vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U]);
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo__1(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro4_fifo__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_ha95992ea_0_2 = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro4_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro5_fifo__1(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro5_fifo__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__ro_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_8)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro5_rd_prdy) 
                       & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro5_fifo__2(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro5_fifo__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__wr_popping) {
        vlSelfRef.ro_rd_pd = (0xffU & ((8U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? ((4U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? 0U : 
                                           ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                              ? 0U : 
                                             ((vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U] 
                                               << 0x18U) 
                                              | (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U] 
                                                 >> 8U)))))
                                        : ((4U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff7)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff6))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff5)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff4)))
                                            : ((2U 
                                                & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff3)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff2))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff1)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff0))))));
    } else if (vlSelfRef.__PVT__wr_popping) {
        vlSelfRef.ro_rd_pd = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (7U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff7 = (0xffU 
                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U] 
                                                 >> 8U));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (6U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff6 = (0xffU 
                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U] 
                                                 >> 8U));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (5U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff5 = (0xffU 
                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U] 
                                                 >> 8U));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (4U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff4 = (0xffU 
                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U] 
                                                 >> 8U));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (3U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff3 = (0xffU 
                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U] 
                                                 >> 8U));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (2U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff2 = (0xffU 
                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U] 
                                                 >> 8U));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (1U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff1 = (0xffU 
                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U] 
                                                 >> 8U));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (0U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff0 = (0xffU 
                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U] 
                                                 >> 8U));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro5_fifo__1(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro5_fifo__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_ha95992ea_0_2 = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro5_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro6_fifo__1(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro6_fifo__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__ro_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_8)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro6_rd_prdy) 
                       & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro6_fifo__2(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro6_fifo__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__wr_popping) {
        vlSelfRef.ro_rd_pd = (0xffU & ((8U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? ((4U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? 0U : 
                                           ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                              ? 0U : 
                                             ((vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U] 
                                                 >> 0x10U)))))
                                        : ((4U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff7)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff6))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff5)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff4)))
                                            : ((2U 
                                                & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff3)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff2))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff1)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff0))))));
    } else if (vlSelfRef.__PVT__wr_popping) {
        vlSelfRef.ro_rd_pd = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (7U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff7 = (0xffU 
                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U] 
                                                 >> 0x10U));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (6U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff6 = (0xffU 
                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U] 
                                                 >> 0x10U));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (5U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff5 = (0xffU 
                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U] 
                                                 >> 0x10U));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (4U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff4 = (0xffU 
                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U] 
                                                 >> 0x10U));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (3U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff3 = (0xffU 
                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U] 
                                                 >> 0x10U));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (2U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff2 = (0xffU 
                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U] 
                                                 >> 0x10U));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (1U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff1 = (0xffU 
                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U] 
                                                 >> 0x10U));
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (0U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff0 = (0xffU 
                                              & (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U] 
                                                 >> 0x10U));
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro6_fifo__1(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro6_fifo__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_ha95992ea_0_2 = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro6_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro7_fifo__1(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro7_fifo__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.__PVT__wr_reserving) 
                  | (IData)(vlSelfRef.__PVT__wr_popping)) 
                 | (((IData)(vlSelfRef.__PVT__ro_wr_busy_int) 
                     != (IData)(vlSelfRef.__PVT__wr_count_next_is_8)) 
                    | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro7_rd_prdy) 
                       & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int)))));
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro7_fifo__2(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro7_fifo__2\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__wr_popping) {
        vlSelfRef.ro_rd_pd = (0xffU & ((8U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                        ? ((4U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? 0U : 
                                           ((2U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                              ? 0U : 
                                             ((vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U] 
                                               << 8U) 
                                              | (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U] 
                                                 >> 0x18U)))))
                                        : ((4U & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff7)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff6))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff5)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff4)))
                                            : ((2U 
                                                & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff3)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff2))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__Vcellinp__ram__ra))
                                                    ? (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff1)
                                                    : (IData)(vlSelfRef.__PVT__ram__DOT__ram_ff0))))));
    } else if (vlSelfRef.__PVT__wr_popping) {
        vlSelfRef.ro_rd_pd = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (7U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff7 = (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U] 
                                              >> 0x18U);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (6U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff6 = (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U] 
                                              >> 0x18U);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (5U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff5 = (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U] 
                                              >> 0x18U);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (4U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff4 = (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U] 
                                              >> 0x18U);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (3U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff3 = (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U] 
                                              >> 0x18U);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (2U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff2 = (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U] 
                                              >> 0x18U);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (1U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff1 = (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U] 
                                              >> 0x18U);
    }
    if (((IData)(vlSelfRef.__PVT__ram_we) & (0U == (IData)(vlSelfRef.__PVT__ro_wr_adr)))) {
        vlSelfRef.__PVT__ram__DOT__ram_ff0 = (vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__DOT__dout_r[1U] 
                                              >> 0x18U);
    }
}

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro7_fifo__1(VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo___nba_comb__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_ro7_fifo__1\n"); );
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_ha95992ea_0_2 = ((~ (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__ro7_rd_prdy)) 
                                                & (IData)(vlSelfRef.__PVT__ro_rd_pvld_int));
}
