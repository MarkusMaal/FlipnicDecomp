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

// Function: FUN_00101420
// Address: 0x101420 - 0x101490
void FUN_00101420_0x101420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00101420_0x101420");
#endif

    switch (ctx->pc) {
        case 0x101460u: goto label_101460;
        case 0x101478u: goto label_101478;
        default: break;
    }

    ctx->pc = 0x101420u;

    // 0x101420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x101420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x101424: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x101424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x101428: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x101428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10142c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10142cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x101430: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x101430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101434: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x101434u;
    {
        const bool branch_taken_0x101434 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x101438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101434u;
        // 0x101438: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101434) {
            ctx->pc = 0x101478u;
            goto label_101478;
        }
    }
    ctx->pc = 0x10143Cu;
    // 0x10143c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x10143cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x101440: 0x244278b0  addiu       $v0, $v0, 0x78B0
    ctx->pc = 0x101440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30896));
    // 0x101444: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x101444u;
    {
        const bool branch_taken_0x101444 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x101448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101444u;
        // 0x101448: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101444) {
            ctx->pc = 0x101460u;
            goto label_101460;
        }
    }
    ctx->pc = 0x10144Cu;
    // 0x10144c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10144cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x101450: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101454: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x101454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x101458: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x101458u;
    SET_GPR_U32(ctx, 31, 0x101460u);
    ctx->pc = 0x10145Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101458u;
    // 0x10145c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x101458u, 0x101460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101460u;
label_101460:
    // 0x101460: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x101460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x101464: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x101464u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x101468: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x101468u;
    {
        const bool branch_taken_0x101468 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101468u;
        // 0x10146c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101468) {
            ctx->pc = 0x10147Cu;
            goto label_10147c;
        }
    }
    ctx->pc = 0x101470u;
    // 0x101470: 0xc0401a4  jal         func_100690
    ctx->pc = 0x101470u;
    SET_GPR_U32(ctx, 31, 0x101478u);
    ctx->pc = 0x101474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101470u;
    // 0x101474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x101470u, 0x101478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101478u;
label_101478:
    // 0x101478: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x101478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10147c:
    // 0x10147c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10147cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101480: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x101480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101484: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101488: 0x3e00008  jr          $ra
    ctx->pc = 0x101488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101488u;
        // 0x10148c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101490u;
}
