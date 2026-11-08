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

// Function: default
// Address: 0x1c7788 - 0x1c77a8
void ps2_default_0x1c7788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1c7788");
#endif

    switch (ctx->pc) {
        case 0x1c7790u: goto label_1c7790;
        case 0x1c7798u: goto label_1c7798;
        default: break;
    }

    ctx->pc = 0x1c7788u;

    // 0x1c7788: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1C7788u;
    SET_GPR_U32(ctx, 31, 0x1C7790u);
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1C7788u, 0x1C7790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7790u;
label_1c7790:
    // 0x1c7790: 0xc07460c  jal         func_1D1830
    ctx->pc = 0x1C7790u;
    SET_GPR_U32(ctx, 31, 0x1C7798u);
    ctx->pc = 0x1C7794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7790u;
    // 0x1c7794: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1830u, 0x1C7790u, 0x1C7798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7798u;
label_1c7798:
    // 0x1c7798: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c7798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c779c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c779cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c77a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C77A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C77A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77A0u;
        // 0x1c77a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C77A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C77A8u;
}
