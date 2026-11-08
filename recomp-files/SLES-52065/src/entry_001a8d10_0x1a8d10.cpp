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

// Function: entry_001a8d10
// Address: 0x1a8d10 - 0x1a8d1c
void entry_001a8d10_0x1a8d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8d10_0x1a8d10");
#endif

    ctx->pc = 0x1a8d10u;

    // 0x1a8d10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a8d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8d14: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1A8D14u;
    {
        const bool branch_taken_0x1a8d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D14u;
        // 0x1a8d18: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8d14) {
            ctx->pc = 0x1A8DC0u;
            return;
        }
    }
    ctx->pc = 0x1A8D1Cu;
}
