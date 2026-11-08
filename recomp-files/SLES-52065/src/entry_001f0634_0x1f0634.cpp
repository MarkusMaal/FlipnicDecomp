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

// Function: entry_001f0634
// Address: 0x1f0634 - 0x1f0658
void entry_001f0634_0x1f0634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0634_0x1f0634");
#endif

    switch (ctx->pc) {
        case 0x1f0640u: goto label_1f0640;
        case 0x1f0650u: goto label_1f0650;
        default: break;
    }

    ctx->pc = 0x1f0634u;

    // 0x1f0634: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1f0634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1f0638: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F0638u;
    SET_GPR_U32(ctx, 31, 0x1F0640u);
    ctx->pc = 0x1F063Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0638u;
    // 0x1f063c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F0638u, 0x1F0640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0640u;
label_1f0640:
    // 0x1f0640: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0640u;
    {
        const bool branch_taken_0x1f0640 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0640) {
            ctx->pc = 0x1F0658u;
            return;
        }
    }
    ctx->pc = 0x1F0648u;
    // 0x1f0648: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F0648u;
    SET_GPR_U32(ctx, 31, 0x1F0650u);
    ctx->pc = 0x1F064Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0648u;
    // 0x1f064c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F0648u, 0x1F0650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0650u;
label_1f0650:
    // 0x1f0650: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0650u;
    {
        const bool branch_taken_0x1f0650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0650u;
        // 0x1f0654: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0650) {
            ctx->pc = 0x1F066Cu;
            return;
        }
    }
    ctx->pc = 0x1F0658u;
}
