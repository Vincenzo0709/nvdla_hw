# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VNV_nvdla.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VNV_nvdla \
	VNV_nvdla___024root__DepSet_h50c1b64a__0 \
	VNV_nvdla___024root__DepSet_h8875eadb__0 \
	VNV_nvdla_NV_NVDLA_partition_m__DepSet_h2a785ae9__0 \
	VNV_nvdla_NV_NVDLA_partition_m__DepSet_h6f510329__0 \
	VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo__DepSet_h75f87255__0 \
	VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo__DepSet_h4df748ce__0 \
	VNV_nvdla_NV_NVDLA_CDMA_dual_reg__DepSet_he0b2bbd9__0 \
	VNV_nvdla_NV_NVDLA_CDMA_CVT_cell__DepSet_h539bb5a9__0 \
	VNV_nvdla_NV_NVDLA_CDMA_CVT_cell__DepSet_hcbd355d9__0 \
	VNV_nvdla_NV_NVDLA_SDP_REG_dual__DepSet_hff3e92f4__0 \
	VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo__DepSet_h580a4bd2__0 \
	VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo__DepSet_hed005be8__0 \
	VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo__DepSet_h76404f0f__0 \
	VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo__DepSet_h3c582f46__0 \
	VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo__DepSet_h66492d1c__0 \
	VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo__DepSet_h33c77109__0 \
	VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo__DepSet_h5d2297ed__0 \
	VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt__DepSet_h1343e695__0 \
	VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt__DepSet_h617cc13e__0 \
	VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt__DepSet_h6eab6d0b__0 \
	VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt__DepSet_h0c51cbc3__0 \
	VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d__DepSet_h54ef193c__0 \
	VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro__DepSet_h7dafe83e__0 \
	VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro__DepSet_h5a757a6b__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VNV_nvdla__ConstPool_0 \
	VNV_nvdla___024root__Slow \
	VNV_nvdla___024root__DepSet_h50c1b64a__0__Slow \
	VNV_nvdla___024root__DepSet_h8875eadb__0__Slow \
	VNV_nvdla_NV_NVDLA_partition_m__Slow \
	VNV_nvdla_NV_NVDLA_partition_m__DepSet_h2a785ae9__0__Slow \
	VNV_nvdla_NV_NVDLA_partition_m__DepSet_h6f510329__0__Slow \
	VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo__Slow \
	VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo__DepSet_h75f87255__0__Slow \
	VNV_nvdla_NV_NVDLA_CDP_WDMA_dat_fifo__DepSet_h4df748ce__0__Slow \
	VNV_nvdla_NV_NVDLA_CDMA_dual_reg__Slow \
	VNV_nvdla_NV_NVDLA_CDMA_dual_reg__DepSet_h309e437c__0__Slow \
	VNV_nvdla_NV_NVDLA_CDMA_CVT_cell__Slow \
	VNV_nvdla_NV_NVDLA_CDMA_CVT_cell__DepSet_h539bb5a9__0__Slow \
	VNV_nvdla_NV_NVDLA_CDMA_CVT_cell__DepSet_hcbd355d9__0__Slow \
	VNV_nvdla_NV_NVDLA_SDP_REG_dual__Slow \
	VNV_nvdla_NV_NVDLA_SDP_REG_dual__DepSet_h92b1b8cd__0__Slow \
	VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo__Slow \
	VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo__DepSet_h580a4bd2__0__Slow \
	VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_lat_fifo__DepSet_hed005be8__0__Slow \
	VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo__Slow \
	VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo__DepSet_h76404f0f__0__Slow \
	VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_EG_ro_fifo__DepSet_h3c582f46__0__Slow \
	VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo__Slow \
	VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo__DepSet_h2e82dae2__0__Slow \
	VNV_nvdla_NV_NVDLA_CDP_RDMA_ro_fifo__DepSet_h66492d1c__0__Slow \
	VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo__Slow \
	VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo__DepSet_h8c014569__0__Slow \
	VNV_nvdla_NV_NVDLA_PDP_RDMA_ro_fifo__DepSet_h33c77109__0__Slow \
	VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo__Slow \
	VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo__DepSet_h941f0523__0__Slow \
	VNV_nvdla_NV_NVDLA_PDP_WDMA_DAT_fifo__DepSet_h5d2297ed__0__Slow \
	VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt__Slow \
	VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt__DepSet_h1343e695__0__Slow \
	VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt__DepSet_h617cc13e__0__Slow \
	VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt__Slow \
	VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt__DepSet_h6eab6d0b__0__Slow \
	VNV_nvdla_NV_NVDLA_NOCIF_DRAM_WRITE_IG_bpt__DepSet_h0c51cbc3__0__Slow \
	VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d__Slow \
	VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d__DepSet_h27365c97__0__Slow \
	VNV_nvdla_NV_NVDLA_PDP_CORE_unit1d__DepSet_h54ef193c__0__Slow \
	VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro__Slow \
	VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro__DepSet_h7dafe83e__0__Slow \
	VNV_nvdla_NV_NVDLA_SDP_RDMA_EG_ro__DepSet_h5a757a6b__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VNV_nvdla__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VNV_nvdla__Syms \
	VNV_nvdla__Trace__0__Slow \
	VNV_nvdla__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
