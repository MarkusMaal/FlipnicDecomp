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

// Function: entry_001b2a28
// Address: 0x1b2a28 - 0x1b2a38
void entry_001b2a28_0x1b2a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2a28_0x1b2a28");
#endif

    ctx->pc = 0x1b2a28u;

    // 0x1b2a28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2A28u;
    {
        const bool branch_taken_0x1b2a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2A28u;
        // 0x1b2a2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2a28) {
            ctx->pc = 0x1B2A3Cu;
            return;
        }
    }
    ctx->pc = 0x1B2A30u;
    // 0x1b2a30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B2A30u;
    {
        const bool branch_taken_0x1b2a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2A30u;
        // 0x1b2a34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2a30) {
            ctx->pc = 0x1B2A3Cu;
            return;
        }
    }
    ctx->pc = 0x1B2A38u;
}
