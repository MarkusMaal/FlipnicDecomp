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

// Function: FUN_00105870
// Address: 0x105870 - 0x1058b0
void FUN_00105870_0x105870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00105870_0x105870");
#endif

    switch (ctx->pc) {
        case 0x105884u: goto label_105884;
        default: break;
    }

    ctx->pc = 0x105870u;

    // 0x105870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x105870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x105874: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x105874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x105878: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x105878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10587c: 0xc056360  jal         func_158D80
    ctx->pc = 0x10587Cu;
    SET_GPR_U32(ctx, 31, 0x105884u);
    ctx->pc = 0x105880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10587Cu;
    // 0x105880: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x10587Cu, 0x105884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105884u;
label_105884:
    // 0x105884: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105888: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x105888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x10588c: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x10588cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x105890: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x105890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x105894: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x105898: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x105898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x10589c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10589cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1058a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1058a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1058a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1058a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1058a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1058A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1058ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1058A8u;
        // 0x1058ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1058A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1058B0u;
}
