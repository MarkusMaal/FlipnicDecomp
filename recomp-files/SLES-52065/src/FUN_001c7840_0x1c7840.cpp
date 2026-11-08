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

// Function: FUN_001c7840
// Address: 0x1c7840 - 0x1c7870
void FUN_001c7840_0x1c7840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c7840_0x1c7840");
#endif

    switch (ctx->pc) {
        case 0x1c7854u: goto label_1c7854;
        case 0x1c7864u: goto label_1c7864;
        default: break;
    }

    ctx->pc = 0x1c7840u;

    // 0x1c7840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7844: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c7844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7848: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c784c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C784Cu;
    SET_GPR_U32(ctx, 31, 0x1C7854u);
    ctx->pc = 0x1C7850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C784Cu;
    // 0x1c7850: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C784Cu, 0x1C7854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7854u;
label_1c7854:
    // 0x1c7854: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c7854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c7858: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c785c: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C785Cu;
    SET_GPR_U32(ctx, 31, 0x1C7864u);
    ctx->pc = 0x1C7860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C785Cu;
    // 0x1c7860: 0x24a55990  addiu       $a1, $a1, 0x5990 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C785Cu, 0x1C7864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7864u;
label_1c7864:
    // 0x1c7864: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7868: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7868u;
        // 0x1c786c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7870u;
}
