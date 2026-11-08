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

// Function: entry_0014e06c
// Address: 0x14e06c - 0x14e084
void entry_0014e06c_0x14e06c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e06c_0x14e06c");
#endif

    ctx->pc = 0x14e06cu;

    // 0x14e06c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14E06Cu;
    {
        const bool branch_taken_0x14e06c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e06c) {
            ctx->pc = 0x14E084u;
            return;
        }
    }
    ctx->pc = 0x14E074u;
    // 0x14e074: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E074u;
    {
        const bool branch_taken_0x14e074 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E074u;
        // 0x14e078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e074) {
            ctx->pc = 0x14E084u;
            return;
        }
    }
    ctx->pc = 0x14E07Cu;
    // 0x14e07c: 0xc053a28  jal         func_14E8A0
    ctx->pc = 0x14E07Cu;
    SET_GPR_U32(ctx, 31, 0x14E084u);
    ctx->pc = 0x14E080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E07Cu;
    // 0x14e080: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E8A0u, 0x14E07Cu, 0x14E084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E084u;
}
