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

// Function: entry_001ee84c
// Address: 0x1ee84c - 0x1ee85c
void entry_001ee84c_0x1ee84c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee84c_0x1ee84c");
#endif

    ctx->pc = 0x1ee84cu;

    // 0x1ee84c: 0x1a600003  blez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE84Cu;
    {
        const bool branch_taken_0x1ee84c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1EE850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE84Cu;
        // 0x1ee850: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee84c) {
            ctx->pc = 0x1EE85Cu;
            return;
        }
    }
    ctx->pc = 0x1EE854u;
    // 0x1ee854: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1EE854u;
    SET_GPR_U32(ctx, 31, 0x1EE85Cu);
    ctx->pc = 0x1EE858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE854u;
    // 0x1ee858: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1EE854u, 0x1EE85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE85Cu;
}
