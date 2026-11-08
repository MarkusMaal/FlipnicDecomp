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

// Function: entry_001e87c8
// Address: 0x1e87c8 - 0x1e87d0
void entry_001e87c8_0x1e87c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e87c8_0x1e87c8");
#endif

    ctx->pc = 0x1e87c8u;

    // 0x1e87c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E87C8u;
    {
        const bool branch_taken_0x1e87c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E87CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E87C8u;
        // 0x1e87cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e87c8) {
            ctx->pc = 0x1E87E4u;
            return;
        }
    }
    ctx->pc = 0x1E87D0u;
}
