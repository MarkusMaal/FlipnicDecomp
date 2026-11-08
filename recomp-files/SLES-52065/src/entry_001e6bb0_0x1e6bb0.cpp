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

// Function: entry_001e6bb0
// Address: 0x1e6bb0 - 0x1e6bb8
void entry_001e6bb0_0x1e6bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6bb0_0x1e6bb0");
#endif

    ctx->pc = 0x1e6bb0u;

    // 0x1e6bb0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6BB0u;
    {
        const bool branch_taken_0x1e6bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6BB0u;
        // 0x1e6bb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6bb0) {
            ctx->pc = 0x1E6BD0u;
            return;
        }
    }
    ctx->pc = 0x1E6BB8u;
}
