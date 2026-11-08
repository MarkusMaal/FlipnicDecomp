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

// Function: entry_00125754
// Address: 0x125754 - 0x12575c
void entry_00125754_0x125754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125754_0x125754");
#endif

    ctx->pc = 0x125754u;

    // 0x125754: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x125754u;
    {
        const bool branch_taken_0x125754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125754u;
        // 0x125758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125754) {
            ctx->pc = 0x125BA4u;
            return;
        }
    }
    ctx->pc = 0x12575Cu;
}
