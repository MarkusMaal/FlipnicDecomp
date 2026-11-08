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

// Function: entry_001b0cf0
// Address: 0x1b0cf0 - 0x1b0d00
void entry_001b0cf0_0x1b0cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0cf0_0x1b0cf0");
#endif

    ctx->pc = 0x1b0cf0u;

    // 0x1b0cf0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0CF0u;
    {
        const bool branch_taken_0x1b0cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0cf0) {
            ctx->pc = 0x1B0D00u;
            return;
        }
    }
    ctx->pc = 0x1B0CF8u;
    // 0x1b0cf8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0CF8u;
    {
        const bool branch_taken_0x1b0cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CF8u;
        // 0x1b0cfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0cf8) {
            ctx->pc = 0x1B0D08u;
            return;
        }
    }
    ctx->pc = 0x1B0D00u;
}
