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

// Function: entry_001f1cd4
// Address: 0x1f1cd4 - 0x1f1cf8
void entry_001f1cd4_0x1f1cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1cd4_0x1f1cd4");
#endif

    switch (ctx->pc) {
        case 0x1f1ce0u: goto label_1f1ce0;
        case 0x1f1cf0u: goto label_1f1cf0;
        default: break;
    }

    ctx->pc = 0x1f1cd4u;

    // 0x1f1cd4: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1f1cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1f1cd8: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F1CD8u;
    SET_GPR_U32(ctx, 31, 0x1F1CE0u);
    ctx->pc = 0x1F1CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1CD8u;
    // 0x1f1cdc: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F1CD8u, 0x1F1CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1CE0u;
label_1f1ce0:
    // 0x1f1ce0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1CE0u;
    {
        const bool branch_taken_0x1f1ce0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1ce0) {
            ctx->pc = 0x1F1CF8u;
            return;
        }
    }
    ctx->pc = 0x1F1CE8u;
    // 0x1f1ce8: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F1CE8u;
    SET_GPR_U32(ctx, 31, 0x1F1CF0u);
    ctx->pc = 0x1F1CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1CE8u;
    // 0x1f1cec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F1CE8u, 0x1F1CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1CF0u;
label_1f1cf0:
    // 0x1f1cf0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1CF0u;
    {
        const bool branch_taken_0x1f1cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1CF0u;
        // 0x1f1cf4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1cf0) {
            ctx->pc = 0x1F1D0Cu;
            return;
        }
    }
    ctx->pc = 0x1F1CF8u;
}
