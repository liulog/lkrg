/*
 * Linux Kernel Runtime Guard
 *
 * RISC-V per-CPU metadata. RISC-V does not currently expose an LKRG-managed
 * set of privileged registers analogous to x86 MSRs, so the baseline records
 * CPU identity and hotplug state only.
 */

#ifndef P_LKRG_RISCV_METADATA_H
#define P_LKRG_RISCV_METADATA_H

typedef struct p_CPU_metadata_hash_mem {
   int p_cpu_id;
   char p_cpu_online;

   /* Keep the common hash boundary used when MSR validation is disabled. */
   char p_MSR_marker;
} p_CPU_metadata_hash_mem;

void p_dump_riscv_metadata(void *_p_arg);

#endif
