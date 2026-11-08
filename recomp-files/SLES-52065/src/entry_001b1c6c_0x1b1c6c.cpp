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

// Function: entry_001b1c6c
// Address: 0x1b1c6c - 0x1b1c7c
void entry_001b1c6c_0x1b1c6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1c6c_0x1b1c6c");
#endif

    ctx->pc = 0x1b1c6cu;

    // 0x1b1c6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1C6Cu;
    {
        const bool branch_taken_0x1b1c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1c6c) {
            ctx->pc = 0x1B1C7Cu;
            return;
        }
    }
    ctx->pc = 0x1B1C74u;
    // 0x1b1c74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1C74u;
    {
        const bool branch_taken_0x1b1c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C74u;
        // 0x1b1c78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c74) {
            ctx->pc = 0x1B1C84u;
            return;
        }
    }
    ctx->pc = 0x1B1C7Cu;
}
