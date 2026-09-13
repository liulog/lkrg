/*
 * Linux Kernel Runtime Guard
 *
 * Minimal RISC-V per-CPU metadata collection.
 */

#include "../../../../p_lkrg_main.h"

#if defined(CONFIG_RISCV)

void p_dump_riscv_metadata(void *_p_arg) {

   p_CPU_metadata_hash_mem *p_arg = _p_arg;
   int p_curr_cpu = smp_processor_id();

   p_arg[p_curr_cpu].p_cpu_id = p_curr_cpu;
   p_arg[p_curr_cpu].p_cpu_online = P_CPU_ONLINE;
}

#endif
