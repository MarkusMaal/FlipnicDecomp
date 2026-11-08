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

// Function: FUN_001e73c0
// Address: 0x1e73c0 - 0x1e7428
void FUN_001e73c0_0x1e73c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e73c0_0x1e73c0");
#endif

    switch (ctx->pc) {
        case 0x1e73e4u: goto label_1e73e4;
        case 0x1e73f8u: goto label_1e73f8;
        case 0x1e7410u: goto label_1e7410;
        default: break;
    }

    ctx->pc = 0x1e73c0u;

    // 0x1e73c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e73c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e73c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e73c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e73c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e73c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e73cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e73ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e73d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e73d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e73d4: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1E73D4u;
    {
        const bool branch_taken_0x1e73d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E73D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E73D4u;
        // 0x1e73d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e73d4) {
            ctx->pc = 0x1E7410u;
            goto label_1e7410;
        }
    }
    ctx->pc = 0x1E73DCu;
    // 0x1e73dc: 0xc07a1a8  jal         func_1E86A0
    ctx->pc = 0x1E73DCu;
    SET_GPR_U32(ctx, 31, 0x1E73E4u);
    ctx->pc = 0x1E86A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E86A0u, 0x1E73DCu, 0x1E73E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E73E4u;
label_1e73e4:
    // 0x1e73e4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1e73e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e73e8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E73E8u;
    {
        const bool branch_taken_0x1e73e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E73ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E73E8u;
        // 0x1e73ec: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e73e8) {
            ctx->pc = 0x1E73FCu;
            goto label_1e73fc;
        }
    }
    ctx->pc = 0x1E73F0u;
    // 0x1e73f0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E73F0u;
    SET_GPR_U32(ctx, 31, 0x1E73F8u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E73F0u, 0x1E73F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E73F8u;
label_1e73f8:
    // 0x1e73f8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e73f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1e73fc:
    // 0x1e73fc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e73fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e7400: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7400u;
    {
        const bool branch_taken_0x1e7400 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E7404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7400u;
        // 0x1e7404: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7400) {
            ctx->pc = 0x1E7414u;
            goto label_1e7414;
        }
    }
    ctx->pc = 0x1E7408u;
    // 0x1e7408: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E7408u;
    SET_GPR_U32(ctx, 31, 0x1E7410u);
    ctx->pc = 0x1E740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7408u;
    // 0x1e740c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E7408u, 0x1E7410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7410u;
label_1e7410:
    // 0x1e7410: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e7410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e7414:
    // 0x1e7414: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e7414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7418: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e7418u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e741c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e741cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7420: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7420u;
        // 0x1e7424: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7428u;
}
