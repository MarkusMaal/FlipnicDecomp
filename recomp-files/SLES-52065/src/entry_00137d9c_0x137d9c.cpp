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

// Function: entry_00137d9c
// Address: 0x137d9c - 0x137da8
void entry_00137d9c_0x137d9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137d9c_0x137d9c");
#endif

    ctx->pc = 0x137d9cu;

    // 0x137d9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x137d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137da0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x137DA0u;
    {
        const bool branch_taken_0x137da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137DA0u;
        // 0x137da4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137da0) {
            ctx->pc = 0x137EB0u;
            return;
        }
    }
    ctx->pc = 0x137DA8u;
}
