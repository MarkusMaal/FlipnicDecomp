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

// Function: entry_00202884
// Address: 0x202884 - 0x20289c
void entry_00202884_0x202884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202884_0x202884");
#endif

    ctx->pc = 0x202884u;

    // 0x202884: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x202884u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x202888: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x202888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20288c: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x20288Cu;
    {
        const bool branch_taken_0x20288c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20288Cu;
        // 0x202890: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20288c) {
            ctx->pc = 0x202860u;
            return;
        }
    }
    ctx->pc = 0x202894u;
    // 0x202894: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x202894u;
    {
        const bool branch_taken_0x202894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202894u;
        // 0x202898: 0x26445060  addiu       $a0, $s2, 0x5060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202894) {
            ctx->pc = 0x2028A4u;
            return;
        }
    }
    ctx->pc = 0x20289Cu;
}
