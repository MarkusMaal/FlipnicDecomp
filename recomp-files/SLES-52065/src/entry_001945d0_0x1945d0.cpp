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

// Function: entry_001945d0
// Address: 0x1945d0 - 0x1945d8
void entry_001945d0_0x1945d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001945d0_0x1945d0");
#endif

    ctx->pc = 0x1945d0u;

    // 0x1945d0: 0x100005e8  b           . + 4 + (0x5E8 << 2)
    ctx->pc = 0x1945D0u;
    {
        const bool branch_taken_0x1945d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1945D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945D0u;
        // 0x1945d4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1945d0) {
            ctx->pc = 0x195D74u;
            return;
        }
    }
    ctx->pc = 0x1945D8u;
}
