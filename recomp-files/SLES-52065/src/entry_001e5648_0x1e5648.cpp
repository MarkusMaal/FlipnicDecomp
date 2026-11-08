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

// Function: entry_001e5648
// Address: 0x1e5648 - 0x1e5650
void entry_001e5648_0x1e5648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5648_0x1e5648");
#endif

    ctx->pc = 0x1e5648u;

    // 0x1e5648: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1E5648u;
    {
        const bool branch_taken_0x1e5648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5648u;
        // 0x1e564c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5648) {
            ctx->pc = 0x1E5750u;
            return;
        }
    }
    ctx->pc = 0x1E5650u;
}
