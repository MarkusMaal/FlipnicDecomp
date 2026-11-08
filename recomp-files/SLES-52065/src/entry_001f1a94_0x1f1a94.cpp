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

// Function: entry_001f1a94
// Address: 0x1f1a94 - 0x1f1aa8
void entry_001f1a94_0x1f1a94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1a94_0x1f1a94");
#endif

    switch (ctx->pc) {
        case 0x1f1a9cu: goto label_1f1a9c;
        case 0x1f1aa4u: goto label_1f1aa4;
        default: break;
    }

    ctx->pc = 0x1f1a94u;

    // 0x1f1a94: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F1A94u;
    SET_GPR_U32(ctx, 31, 0x1F1A9Cu);
    ctx->pc = 0x1F1A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1A94u;
    // 0x1f1a98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F1A94u, 0x1F1A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A9Cu;
label_1f1a9c:
    // 0x1f1a9c: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F1A9Cu;
    SET_GPR_U32(ctx, 31, 0x1F1AA4u);
    ctx->pc = 0x1F1AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1A9Cu;
    // 0x1f1aa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F1A9Cu, 0x1F1AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1AA4u;
label_1f1aa4:
    // 0x1f1aa4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f1aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1f1aa8u;
}
