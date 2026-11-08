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

// Function: entry_001f2514
// Address: 0x1f2514 - 0x1f2538
void entry_001f2514_0x1f2514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2514_0x1f2514");
#endif

    switch (ctx->pc) {
        case 0x1f2520u: goto label_1f2520;
        case 0x1f2530u: goto label_1f2530;
        default: break;
    }

    ctx->pc = 0x1f2514u;

    // 0x1f2514: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1f2514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f2518: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F2518u;
    SET_GPR_U32(ctx, 31, 0x1F2520u);
    ctx->pc = 0x1F251Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2518u;
    // 0x1f251c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F2518u, 0x1F2520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2520u;
label_1f2520:
    // 0x1f2520: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2520u;
    {
        const bool branch_taken_0x1f2520 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2520) {
            ctx->pc = 0x1F2538u;
            return;
        }
    }
    ctx->pc = 0x1F2528u;
    // 0x1f2528: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F2528u;
    SET_GPR_U32(ctx, 31, 0x1F2530u);
    ctx->pc = 0x1F252Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2528u;
    // 0x1f252c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F2528u, 0x1F2530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2530u;
label_1f2530:
    // 0x1f2530: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F2530u;
    {
        const bool branch_taken_0x1f2530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2530u;
        // 0x1f2534: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2530) {
            ctx->pc = 0x1F254Cu;
            return;
        }
    }
    ctx->pc = 0x1F2538u;
}
