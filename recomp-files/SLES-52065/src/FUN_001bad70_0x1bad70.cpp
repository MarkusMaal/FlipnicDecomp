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

// Function: FUN_001bad70
// Address: 0x1bad70 - 0x1bad9c
void FUN_001bad70_0x1bad70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bad70_0x1bad70");
#endif

    switch (ctx->pc) {
        case 0x1bad88u: goto label_1bad88;
        default: break;
    }

    ctx->pc = 0x1bad70u;

    // 0x1bad70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bad70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bad74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bad74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bad78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bad78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bad7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bad7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bad80: 0xc0485bc  jal         func_1216F0
    ctx->pc = 0x1BAD80u;
    SET_GPR_U32(ctx, 31, 0x1BAD88u);
    ctx->pc = 0x1BAD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAD80u;
    // 0x1bad84: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1216F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216F0u, 0x1BAD80u, 0x1BAD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAD88u;
label_1bad88:
    // 0x1bad88: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1bad88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1bad8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bad8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bad90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bad90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bad94: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD94u;
        // 0x1bad98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAD94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BAD9Cu;
}
