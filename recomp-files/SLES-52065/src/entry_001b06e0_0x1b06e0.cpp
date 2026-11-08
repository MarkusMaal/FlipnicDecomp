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

// Function: entry_001b06e0
// Address: 0x1b06e0 - 0x1b06f0
void entry_001b06e0_0x1b06e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b06e0_0x1b06e0");
#endif

    ctx->pc = 0x1b06e0u;

    // 0x1b06e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B06E0u;
    {
        const bool branch_taken_0x1b06e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B06E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06E0u;
        // 0x1b06e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b06e0) {
            ctx->pc = 0x1B06F0u;
            return;
        }
    }
    ctx->pc = 0x1B06E8u;
    // 0x1b06e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B06E8u;
    {
        const bool branch_taken_0x1b06e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b06e8) {
            ctx->pc = 0x1B06F4u;
            return;
        }
    }
    ctx->pc = 0x1B06F0u;
}
