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

// Function: entry_001affe8
// Address: 0x1affe8 - 0x1afff8
void entry_001affe8_0x1affe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001affe8_0x1affe8");
#endif

    ctx->pc = 0x1affe8u;

    // 0x1affe8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AFFE8u;
    {
        const bool branch_taken_0x1affe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFFE8u;
        // 0x1affec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1affe8) {
            ctx->pc = 0x1AFFFCu;
            return;
        }
    }
    ctx->pc = 0x1AFFF0u;
    // 0x1afff0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFFF0u;
    {
        const bool branch_taken_0x1afff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFFF0u;
        // 0x1afff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afff0) {
            ctx->pc = 0x1AFFFCu;
            return;
        }
    }
    ctx->pc = 0x1AFFF8u;
}
