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

// Function: entry_001cd7c8
// Address: 0x1cd7c8 - 0x1cd7dc
void entry_001cd7c8_0x1cd7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd7c8_0x1cd7c8");
#endif

    ctx->pc = 0x1cd7c8u;

    // 0x1cd7c8: 0x2e420006  sltiu       $v0, $s2, 0x6
    ctx->pc = 0x1cd7c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1cd7cc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1CD7CCu;
    {
        const bool branch_taken_0x1cd7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD7CCu;
        // 0x1cd7d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd7cc) {
            ctx->pc = 0x1CD788u;
            return;
        }
    }
    ctx->pc = 0x1CD7D4u;
    // 0x1cd7d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cd7d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd7d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cd7dcu;
}
