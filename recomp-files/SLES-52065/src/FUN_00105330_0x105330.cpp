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

// Function: FUN_00105330
// Address: 0x105330 - 0x1053b0
void FUN_00105330_0x105330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00105330_0x105330");
#endif

    switch (ctx->pc) {
        case 0x10536cu: goto label_10536c;
        case 0x105398u: goto label_105398;
        default: break;
    }

    ctx->pc = 0x105330u;

    // 0x105330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x105330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x105334: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x105334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x105338: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x105338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10533c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10533cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x105340: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x105340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105344: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x105344u;
    {
        const bool branch_taken_0x105344 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x105348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105344u;
        // 0x105348: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105344) {
            ctx->pc = 0x105398u;
            goto label_105398;
        }
    }
    ctx->pc = 0x10534Cu;
    // 0x10534c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x10534cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x105350: 0x24427a50  addiu       $v0, $v0, 0x7A50
    ctx->pc = 0x105350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31312));
    // 0x105354: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x105354u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x105358: 0x8e240210  lw          $a0, 0x210($s1)
    ctx->pc = 0x105358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x10535c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10535Cu;
    {
        const bool branch_taken_0x10535c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10535c) {
            ctx->pc = 0x10536Cu;
            goto label_10536c;
        }
    }
    ctx->pc = 0x105364u;
    // 0x105364: 0xc04018c  jal         func_100630
    ctx->pc = 0x105364u;
    SET_GPR_U32(ctx, 31, 0x10536Cu);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x105364u, 0x10536Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10536Cu;
label_10536c:
    // 0x10536c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10536Cu;
    {
        const bool branch_taken_0x10536c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x105370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10536Cu;
        // 0x105370: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10536c) {
            ctx->pc = 0x105384u;
            goto label_105384;
        }
    }
    ctx->pc = 0x105374u;
    // 0x105374: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105378: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x105378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x10537c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x10537cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x105380: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x105380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_105384:
    // 0x105384: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x105384u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x105388: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105388u;
    {
        const bool branch_taken_0x105388 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105388u;
        // 0x10538c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105388) {
            ctx->pc = 0x10539Cu;
            goto label_10539c;
        }
    }
    ctx->pc = 0x105390u;
    // 0x105390: 0xc0401a4  jal         func_100690
    ctx->pc = 0x105390u;
    SET_GPR_U32(ctx, 31, 0x105398u);
    ctx->pc = 0x105394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105390u;
    // 0x105394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x105390u, 0x105398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105398u;
label_105398:
    // 0x105398: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x105398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10539c:
    // 0x10539c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10539cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1053a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1053a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1053a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1053a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1053a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1053A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1053ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1053A8u;
        // 0x1053ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1053A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1053B0u;
}
