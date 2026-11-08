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

// Function: entry_0011c49c
// Address: 0x11c49c - 0x11c4b0
void entry_0011c49c_0x11c49c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c49c_0x11c49c");
#endif

    ctx->pc = 0x11c49cu;

    // 0x11c49c: 0x2a0103ff  slti        $at, $s0, 0x3FF
    ctx->pc = 0x11c49cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1023) ? 1 : 0);
    // 0x11c4a0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C4A0u;
    {
        const bool branch_taken_0x11c4a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C4A0u;
        // 0x11c4a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c4a0) {
            ctx->pc = 0x11C4B0u;
            return;
        }
    }
    ctx->pc = 0x11C4A8u;
    // 0x11c4a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11C4A8u;
    {
        const bool branch_taken_0x11c4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c4a8) {
            ctx->pc = 0x11C4B4u;
            return;
        }
    }
    ctx->pc = 0x11C4B0u;
}
