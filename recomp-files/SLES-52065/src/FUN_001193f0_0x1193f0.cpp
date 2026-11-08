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

// Function: FUN_001193f0
// Address: 0x1193f0 - 0x119460
void FUN_001193f0_0x1193f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001193f0_0x1193f0");
#endif

    switch (ctx->pc) {
        case 0x119414u: goto label_119414;
        case 0x119420u: goto label_119420;
        case 0x119444u: goto label_119444;
        case 0x11944cu: goto label_11944c;
        default: break;
    }

    ctx->pc = 0x1193f0u;

    // 0x1193f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1193f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1193f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1193f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1193f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1193f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1193fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1193fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x119400: 0x878283a4  lh          $v0, -0x7C5C($gp)
    ctx->pc = 0x119400u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935460)));
    // 0x119404: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x119404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x119408: 0x6000009  bltz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x119408u;
    {
        const bool branch_taken_0x119408 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x119408) {
            ctx->pc = 0x119430u;
            goto label_119430;
        }
    }
    ctx->pc = 0x119410u;
    // 0x119410: 0x108900  sll         $s1, $s0, 4
    ctx->pc = 0x119410u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_119414:
    // 0x119414: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x119414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x119418: 0xc046558  jal         func_119560
    ctx->pc = 0x119418u;
    SET_GPR_U32(ctx, 31, 0x119420u);
    ctx->pc = 0x11941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119418u;
    // 0x11941c: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119560u, 0x119418u, 0x119420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119420u;
label_119420:
    // 0x119420: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x119420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x119424: 0x2631fff0  addiu       $s1, $s1, -0x10
    ctx->pc = 0x119424u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x119428: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x119428u;
    {
        const bool branch_taken_0x119428 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x119428) {
            ctx->pc = 0x119414u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119414;
        }
    }
    ctx->pc = 0x119430u;
label_119430:
    // 0x119430: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x119430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x119434: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119434u;
    {
        const bool branch_taken_0x119434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119434u;
        // 0x119438: 0x2444fff0  addiu       $a0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119434) {
            ctx->pc = 0x119444u;
            goto label_119444;
        }
    }
    ctx->pc = 0x11943Cu;
    // 0x11943c: 0xc04018c  jal         func_100630
    ctx->pc = 0x11943Cu;
    SET_GPR_U32(ctx, 31, 0x119444u);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x11943Cu, 0x119444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119444u;
label_119444:
    // 0x119444: 0xc04be6c  jal         func_12F9B0
    ctx->pc = 0x119444u;
    SET_GPR_U32(ctx, 31, 0x11944Cu);
    ctx->pc = 0x12F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F9B0u, 0x119444u, 0x11944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11944Cu;
label_11944c:
    // 0x11944c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11944cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119450: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x119450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x119454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119458: 0x3e00008  jr          $ra
    ctx->pc = 0x119458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119458u;
        // 0x11945c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119460u;
}
