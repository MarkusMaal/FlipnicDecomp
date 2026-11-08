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

// Function: FUN_00203170
// Address: 0x203170 - 0x203194
void FUN_00203170_0x203170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00203170_0x203170");
#endif

    switch (ctx->pc) {
        case 0x203180u: goto label_203180;
        case 0x203188u: goto label_203188;
        default: break;
    }

    ctx->pc = 0x203170u;

    // 0x203170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x203170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x203174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x203174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x203178: 0xc080c50  jal         func_203140
    ctx->pc = 0x203178u;
    SET_GPR_U32(ctx, 31, 0x203180u);
    ctx->pc = 0x203140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203140u, 0x203178u, 0x203180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203180u;
label_203180:
    // 0x203180: 0xc082222  jal         func_208888
    ctx->pc = 0x203180u;
    SET_GPR_U32(ctx, 31, 0x203188u);
    ctx->pc = 0x203184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203180u;
    // 0x203184: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208888u, 0x203180u, 0x203188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203188u;
label_203188:
    // 0x203188: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x203188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20318c: 0x3e00008  jr          $ra
    ctx->pc = 0x20318Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20318Cu;
        // 0x203190: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20318Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203194u;
}
