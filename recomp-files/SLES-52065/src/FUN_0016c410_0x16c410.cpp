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

// Function: FUN_0016c410
// Address: 0x16c410 - 0x16c45c
void FUN_0016c410_0x16c410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016c410_0x16c410");
#endif

    switch (ctx->pc) {
        case 0x16c424u: goto label_16c424;
        case 0x16c438u: goto label_16c438;
        default: break;
    }

    ctx->pc = 0x16c410u;

    // 0x16c410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16c410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16c414: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16c414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16c418: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16c418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16c41c: 0xc05af84  jal         func_16BE10
    ctx->pc = 0x16C41Cu;
    SET_GPR_U32(ctx, 31, 0x16C424u);
    ctx->pc = 0x16C420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C41Cu;
    // 0x16c420: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BE10u, 0x16C41Cu, 0x16C424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C424u;
label_16c424:
    // 0x16c424: 0x8e030230  lw          $v1, 0x230($s0)
    ctx->pc = 0x16c424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x16c428: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16C428u;
    {
        const bool branch_taken_0x16c428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C428u;
        // 0x16c42c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c428) {
            ctx->pc = 0x16C438u;
            goto label_16c438;
        }
    }
    ctx->pc = 0x16C430u;
    // 0x16c430: 0xc042118  jal         func_108460
    ctx->pc = 0x16C430u;
    SET_GPR_U32(ctx, 31, 0x16C438u);
    ctx->pc = 0x16C434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C430u;
    // 0x16c434: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16C430u, 0x16C438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C438u;
label_16c438:
    // 0x16c438: 0x8e030240  lw          $v1, 0x240($s0)
    ctx->pc = 0x16c438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
    // 0x16c43c: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16C43Cu;
    {
        const bool branch_taken_0x16c43c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x16c43c) {
            ctx->pc = 0x16C44Cu;
            goto label_16c44c;
        }
    }
    ctx->pc = 0x16C444u;
    // 0x16c444: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16c444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16c448: 0xae030240  sw          $v1, 0x240($s0)
    ctx->pc = 0x16c448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 3));
label_16c44c:
    // 0x16c44c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16c44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c450: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16c450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c454: 0x3e00008  jr          $ra
    ctx->pc = 0x16C454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C454u;
        // 0x16c458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C45Cu;
}
