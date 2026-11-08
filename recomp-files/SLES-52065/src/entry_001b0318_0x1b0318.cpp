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

// Function: entry_001b0318
// Address: 0x1b0318 - 0x1b0328
void entry_001b0318_0x1b0318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0318_0x1b0318");
#endif

    ctx->pc = 0x1b0318u;

    // 0x1b0318: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0318u;
    {
        const bool branch_taken_0x1b0318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0318u;
        // 0x1b031c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0318) {
            ctx->pc = 0x1B0328u;
            return;
        }
    }
    ctx->pc = 0x1B0320u;
    // 0x1b0320: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B0320u;
    {
        const bool branch_taken_0x1b0320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0320) {
            ctx->pc = 0x1B032Cu;
            return;
        }
    }
    ctx->pc = 0x1B0328u;
}
