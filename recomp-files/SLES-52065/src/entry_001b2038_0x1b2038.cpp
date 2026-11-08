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

// Function: entry_001b2038
// Address: 0x1b2038 - 0x1b2048
void entry_001b2038_0x1b2038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2038_0x1b2038");
#endif

    ctx->pc = 0x1b2038u;

    // 0x1b2038: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2038u;
    {
        const bool branch_taken_0x1b2038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2038) {
            ctx->pc = 0x1B2048u;
            return;
        }
    }
    ctx->pc = 0x1B2040u;
    // 0x1b2040: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2040u;
    {
        const bool branch_taken_0x1b2040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2040u;
        // 0x1b2044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2040) {
            ctx->pc = 0x1B2050u;
            return;
        }
    }
    ctx->pc = 0x1B2048u;
}
