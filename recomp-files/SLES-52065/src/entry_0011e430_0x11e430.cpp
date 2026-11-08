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

// Function: entry_0011e430
// Address: 0x11e430 - 0x11e440
void entry_0011e430_0x11e430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e430_0x11e430");
#endif

    ctx->pc = 0x11e430u;

    // 0x11e430: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E430u;
    {
        const bool branch_taken_0x11e430 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E430u;
        // 0x11e434: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e430) {
            ctx->pc = 0x11E440u;
            return;
        }
    }
    ctx->pc = 0x11E438u;
    // 0x11e438: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x11E438u;
    {
        const bool branch_taken_0x11e438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E438u;
        // 0x11e43c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e438) {
            ctx->pc = 0x11E504u;
            return;
        }
    }
    ctx->pc = 0x11E440u;
}
