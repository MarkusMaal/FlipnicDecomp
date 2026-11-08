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

// Function: entry_001b220c
// Address: 0x1b220c - 0x1b221c
void entry_001b220c_0x1b220c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b220c_0x1b220c");
#endif

    ctx->pc = 0x1b220cu;

    // 0x1b220c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B220Cu;
    {
        const bool branch_taken_0x1b220c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b220c) {
            ctx->pc = 0x1B221Cu;
            return;
        }
    }
    ctx->pc = 0x1B2214u;
    // 0x1b2214: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2214u;
    {
        const bool branch_taken_0x1b2214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2214u;
        // 0x1b2218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2214) {
            ctx->pc = 0x1B2224u;
            return;
        }
    }
    ctx->pc = 0x1B221Cu;
}
