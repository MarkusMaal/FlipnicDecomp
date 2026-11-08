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

// Function: entry_001945e8
// Address: 0x1945e8 - 0x1945f0
void entry_001945e8_0x1945e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001945e8_0x1945e8");
#endif

    ctx->pc = 0x1945e8u;

    // 0x1945e8: 0x100005e2  b           . + 4 + (0x5E2 << 2)
    ctx->pc = 0x1945E8u;
    {
        const bool branch_taken_0x1945e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1945ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945E8u;
        // 0x1945ec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1945e8) {
            ctx->pc = 0x195D74u;
            return;
        }
    }
    ctx->pc = 0x1945F0u;
}
