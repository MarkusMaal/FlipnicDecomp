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

// Function: entry_001f1a70
// Address: 0x1f1a70 - 0x1f1a94
void entry_001f1a70_0x1f1a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1a70_0x1f1a70");
#endif

    switch (ctx->pc) {
        case 0x1f1a7cu: goto label_1f1a7c;
        case 0x1f1a8cu: goto label_1f1a8c;
        default: break;
    }

    ctx->pc = 0x1f1a70u;

    // 0x1f1a70: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x1f1a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1f1a74: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F1A74u;
    SET_GPR_U32(ctx, 31, 0x1F1A7Cu);
    ctx->pc = 0x1F1A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1A74u;
    // 0x1f1a78: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F1A74u, 0x1F1A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A7Cu;
label_1f1a7c:
    // 0x1f1a7c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1A7Cu;
    {
        const bool branch_taken_0x1f1a7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1a7c) {
            ctx->pc = 0x1F1A94u;
            return;
        }
    }
    ctx->pc = 0x1F1A84u;
    // 0x1f1a84: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F1A84u;
    SET_GPR_U32(ctx, 31, 0x1F1A8Cu);
    ctx->pc = 0x1F1A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1A84u;
    // 0x1f1a88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F1A84u, 0x1F1A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A8Cu;
label_1f1a8c:
    // 0x1f1a8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1A8Cu;
    {
        const bool branch_taken_0x1f1a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A8Cu;
        // 0x1f1a90: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a8c) {
            ctx->pc = 0x1F1AA8u;
            return;
        }
    }
    ctx->pc = 0x1F1A94u;
}
