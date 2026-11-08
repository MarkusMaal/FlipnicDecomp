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

// Function: FUN_00109610
// Address: 0x109610 - 0x109690
void FUN_00109610_0x109610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00109610_0x109610");
#endif

    switch (ctx->pc) {
        case 0x109610u: goto label_109610;
        case 0x109614u: goto label_109614;
        case 0x109618u: goto label_109618;
        case 0x10961cu: goto label_10961c;
        case 0x109620u: goto label_109620;
        case 0x109624u: goto label_109624;
        case 0x109628u: goto label_109628;
        case 0x10962cu: goto label_10962c;
        case 0x109630u: goto label_109630;
        case 0x109634u: goto label_109634;
        case 0x109638u: goto label_109638;
        case 0x10963cu: goto label_10963c;
        case 0x109640u: goto label_109640;
        case 0x109644u: goto label_109644;
        case 0x109648u: goto label_109648;
        case 0x10964cu: goto label_10964c;
        case 0x109650u: goto label_109650;
        case 0x109654u: goto label_109654;
        case 0x109658u: goto label_109658;
        case 0x10965cu: goto label_10965c;
        case 0x109660u: goto label_109660;
        case 0x109664u: goto label_109664;
        case 0x109668u: goto label_109668;
        case 0x10966cu: goto label_10966c;
        case 0x109670u: goto label_109670;
        case 0x109674u: goto label_109674;
        case 0x109678u: goto label_109678;
        case 0x10967cu: goto label_10967c;
        case 0x109680u: goto label_109680;
        case 0x109684u: goto label_109684;
        case 0x109688u: goto label_109688;
        case 0x10968cu: goto label_10968c;
        default: break;
    }

    ctx->pc = 0x109610u;

label_109610:
    // 0x109610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x109610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_109614:
    // 0x109614: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x109614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_109618:
    // 0x109618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x109618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10961c:
    // 0x10961c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x10961cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_109620:
    // 0x109620: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
label_109624:
    if (ctx->pc == 0x109624u) {
        ctx->pc = 0x109624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109620u;
        // 0x109624: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109628u;
        goto label_109628;
    }
    ctx->pc = 0x109620u;
    {
        const bool branch_taken_0x109620 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x109624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109620u;
        // 0x109624: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109620) {
            ctx->pc = 0x109630u;
            goto label_109630;
        }
    }
    ctx->pc = 0x109628u;
label_109628:
    // 0x109628: 0x10000016  b           . + 4 + (0x16 << 2)
label_10962c:
    if (ctx->pc == 0x10962Cu) {
        ctx->pc = 0x10962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109628u;
        // 0x10962c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109630u;
        goto label_109630;
    }
    ctx->pc = 0x109628u;
    {
        const bool branch_taken_0x109628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109628u;
        // 0x10962c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109628) {
            ctx->pc = 0x109684u;
            goto label_109684;
        }
    }
    ctx->pc = 0x109630u;
label_109630:
    // 0x109630: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x109630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_109634:
    // 0x109634: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_109638:
    if (ctx->pc == 0x109638u) {
        ctx->pc = 0x109638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109634u;
        // 0x109638: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10963Cu;
        goto label_10963c;
    }
    ctx->pc = 0x109634u;
    {
        const bool branch_taken_0x109634 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x109638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109634u;
        // 0x109638: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109634) {
            ctx->pc = 0x109644u;
            goto label_109644;
        }
    }
    ctx->pc = 0x10963Cu;
label_10963c:
    // 0x10963c: 0x10000010  b           . + 4 + (0x10 << 2)
label_109640:
    if (ctx->pc == 0x109640u) {
        ctx->pc = 0x109644u;
        goto label_109644;
    }
    ctx->pc = 0x10963Cu;
    {
        const bool branch_taken_0x10963c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10963c) {
            ctx->pc = 0x109680u;
            goto label_109680;
        }
    }
    ctx->pc = 0x109644u;
label_109644:
    // 0x109644: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x109644u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_109648:
    // 0x109648: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x109648u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_10964c:
    // 0x10964c: 0x320f809  jalr        $t9
label_109650:
    if (ctx->pc == 0x109650u) {
        ctx->pc = 0x109654u;
        goto label_109654;
    }
    ctx->pc = 0x10964Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x109654u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10964Cu, 0x109654u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109654u;
label_109654:
    // 0x109654: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_109658:
    if (ctx->pc == 0x109658u) {
        ctx->pc = 0x10965Cu;
        goto label_10965c;
    }
    ctx->pc = 0x109654u;
    {
        const bool branch_taken_0x109654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x109654) {
            ctx->pc = 0x109664u;
            goto label_109664;
        }
    }
    ctx->pc = 0x10965Cu;
label_10965c:
    // 0x10965c: 0x10000008  b           . + 4 + (0x8 << 2)
label_109660:
    if (ctx->pc == 0x109660u) {
        ctx->pc = 0x109660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10965Cu;
        // 0x109660: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109664u;
        goto label_109664;
    }
    ctx->pc = 0x10965Cu;
    {
        const bool branch_taken_0x10965c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10965Cu;
        // 0x109660: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10965c) {
            ctx->pc = 0x109680u;
            goto label_109680;
        }
    }
    ctx->pc = 0x109664u;
label_109664:
    // 0x109664: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x109664u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_109668:
    // 0x109668: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x109668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10966c:
    // 0x10966c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10966cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_109670:
    // 0x109670: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x109670u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_109674:
    // 0x109674: 0x320f809  jalr        $t9
label_109678:
    if (ctx->pc == 0x109678u) {
        ctx->pc = 0x109678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109674u;
        // 0x109678: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10967Cu;
        goto label_10967c;
    }
    ctx->pc = 0x109674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10967Cu);
        ctx->pc = 0x109678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109674u;
        // 0x109678: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109674u, 0x10967Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10967Cu;
label_10967c:
    // 0x10967c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10967cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_109680:
    // 0x109680: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x109680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_109684:
    // 0x109684: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x109684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_109688:
    // 0x109688: 0x3e00008  jr          $ra
label_10968c:
    if (ctx->pc == 0x10968Cu) {
        ctx->pc = 0x10968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109688u;
        // 0x10968c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109690u;
        goto label_fallthrough_0x109688;
    }
    ctx->pc = 0x109688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109688u;
        // 0x10968c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x109688:
    ctx->pc = 0x109690u;
}
