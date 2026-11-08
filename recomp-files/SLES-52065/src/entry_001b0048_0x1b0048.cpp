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

// Function: entry_001b0048
// Address: 0x1b0048 - 0x1b0058
void entry_001b0048_0x1b0048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0048_0x1b0048");
#endif

    ctx->pc = 0x1b0048u;

    // 0x1b0048: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0048u;
    {
        const bool branch_taken_0x1b0048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0048) {
            ctx->pc = 0x1B0058u;
            return;
        }
    }
    ctx->pc = 0x1B0050u;
    // 0x1b0050: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0050u;
    {
        const bool branch_taken_0x1b0050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0050u;
        // 0x1b0054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0050) {
            ctx->pc = 0x1B0060u;
            return;
        }
    }
    ctx->pc = 0x1B0058u;
}
