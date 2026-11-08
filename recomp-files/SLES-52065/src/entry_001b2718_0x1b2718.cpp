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

// Function: entry_001b2718
// Address: 0x1b2718 - 0x1b2728
void entry_001b2718_0x1b2718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2718_0x1b2718");
#endif

    ctx->pc = 0x1b2718u;

    // 0x1b2718: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2718u;
    {
        const bool branch_taken_0x1b2718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2718u;
        // 0x1b271c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2718) {
            ctx->pc = 0x1B272Cu;
            return;
        }
    }
    ctx->pc = 0x1B2720u;
    // 0x1b2720: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B2720u;
    {
        const bool branch_taken_0x1b2720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2720u;
        // 0x1b2724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2720) {
            ctx->pc = 0x1B272Cu;
            return;
        }
    }
    ctx->pc = 0x1B2728u;
}
