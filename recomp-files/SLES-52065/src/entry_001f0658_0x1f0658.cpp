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

// Function: entry_001f0658
// Address: 0x1f0658 - 0x1f066c
void entry_001f0658_0x1f0658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0658_0x1f0658");
#endif

    switch (ctx->pc) {
        case 0x1f0660u: goto label_1f0660;
        case 0x1f0668u: goto label_1f0668;
        default: break;
    }

    ctx->pc = 0x1f0658u;

    // 0x1f0658: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F0658u;
    SET_GPR_U32(ctx, 31, 0x1F0660u);
    ctx->pc = 0x1F065Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0658u;
    // 0x1f065c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F0658u, 0x1F0660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0660u;
label_1f0660:
    // 0x1f0660: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F0660u;
    SET_GPR_U32(ctx, 31, 0x1F0668u);
    ctx->pc = 0x1F0664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0660u;
    // 0x1f0664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F0660u, 0x1F0668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0668u;
label_1f0668:
    // 0x1f0668: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f0668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1f066cu;
}
