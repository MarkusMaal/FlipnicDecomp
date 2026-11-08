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

// Function: entry_001b0dc0
// Address: 0x1b0dc0 - 0x1b0dd0
void entry_001b0dc0_0x1b0dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0dc0_0x1b0dc0");
#endif

    ctx->pc = 0x1b0dc0u;

    // 0x1b0dc0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0DC0u;
    {
        const bool branch_taken_0x1b0dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DC0u;
        // 0x1b0dc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0dc0) {
            ctx->pc = 0x1B0DD4u;
            return;
        }
    }
    ctx->pc = 0x1B0DC8u;
    // 0x1b0dc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B0DC8u;
    {
        const bool branch_taken_0x1b0dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DC8u;
        // 0x1b0dcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0dc8) {
            ctx->pc = 0x1B0DD4u;
            return;
        }
    }
    ctx->pc = 0x1B0DD0u;
}
