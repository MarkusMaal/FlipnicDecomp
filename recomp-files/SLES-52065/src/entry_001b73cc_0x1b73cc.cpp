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

// Function: entry_001b73cc
// Address: 0x1b73cc - 0x1b73dc
void entry_001b73cc_0x1b73cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b73cc_0x1b73cc");
#endif

    ctx->pc = 0x1b73ccu;

    // 0x1b73cc: 0x11082b  sltu        $at, $zero, $s1
    ctx->pc = 0x1b73ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1b73d0: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x1B73D0u;
    {
        const bool branch_taken_0x1b73d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B73D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73D0u;
        // 0x1b73d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b73d0) {
            ctx->pc = 0x1B7470u;
            return;
        }
    }
    ctx->pc = 0x1B73D8u;
    // 0x1b73d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b73d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b73dcu;
}
