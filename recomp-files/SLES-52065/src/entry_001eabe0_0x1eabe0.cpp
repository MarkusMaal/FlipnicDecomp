#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001eabe0
// Address: 0x1eabe0 - 0x1eac0c
void entry_001eabe0_0x1eabe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eabe0_0x1eabe0");
#endif

    ctx->pc = 0x1eabe0u;

    // 0x1eabe0: 0x44043  sra         $t0, $a0, 1
    ctx->pc = 0x1eabe0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1eabe4: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x1eabe4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1eabe8: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x1eabe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1eabec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1eabecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1eabf0: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1eabf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1eabf4: 0x8caa0000  lw          $t2, 0x0($a1)
    ctx->pc = 0x1eabf4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1eabf8: 0x20a082b  sltu        $at, $s0, $t2
    ctx->pc = 0x1eabf8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1eabfc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EABFCu;
    {
        const bool branch_taken_0x1eabfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eabfc) {
            ctx->pc = 0x1EAC0Cu;
            return;
        }
    }
    ctx->pc = 0x1EAC04u;
    // 0x1eac04: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EAC04u;
    {
        const bool branch_taken_0x1eac04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC04u;
        // 0x1eac08: 0x2507ffff  addiu       $a3, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac04) {
            ctx->pc = 0x1EAC38u;
            return;
        }
    }
    ctx->pc = 0x1EAC0Cu;
}
