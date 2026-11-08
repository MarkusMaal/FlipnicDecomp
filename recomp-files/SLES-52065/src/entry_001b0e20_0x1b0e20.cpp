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

// Function: entry_001b0e20
// Address: 0x1b0e20 - 0x1b0e30
void entry_001b0e20_0x1b0e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0e20_0x1b0e20");
#endif

    ctx->pc = 0x1b0e20u;

    // 0x1b0e20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0E20u;
    {
        const bool branch_taken_0x1b0e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0e20) {
            ctx->pc = 0x1B0E30u;
            return;
        }
    }
    ctx->pc = 0x1B0E28u;
    // 0x1b0e28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0E28u;
    {
        const bool branch_taken_0x1b0e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E28u;
        // 0x1b0e2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0e28) {
            ctx->pc = 0x1B0E38u;
            return;
        }
    }
    ctx->pc = 0x1B0E30u;
}
