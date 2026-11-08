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

// Function: FUN_001af600
// Address: 0x1af600 - 0x1af670
void FUN_001af600_0x1af600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001af600_0x1af600");
#endif

    switch (ctx->pc) {
        case 0x1af600u: goto label_1af600;
        case 0x1af604u: goto label_1af604;
        case 0x1af608u: goto label_1af608;
        case 0x1af60cu: goto label_1af60c;
        case 0x1af610u: goto label_1af610;
        case 0x1af614u: goto label_1af614;
        case 0x1af618u: goto label_1af618;
        case 0x1af61cu: goto label_1af61c;
        case 0x1af620u: goto label_1af620;
        case 0x1af624u: goto label_1af624;
        case 0x1af628u: goto label_1af628;
        case 0x1af62cu: goto label_1af62c;
        case 0x1af630u: goto label_1af630;
        case 0x1af634u: goto label_1af634;
        case 0x1af638u: goto label_1af638;
        case 0x1af63cu: goto label_1af63c;
        case 0x1af640u: goto label_1af640;
        case 0x1af644u: goto label_1af644;
        case 0x1af648u: goto label_1af648;
        case 0x1af64cu: goto label_1af64c;
        case 0x1af650u: goto label_1af650;
        case 0x1af654u: goto label_1af654;
        case 0x1af658u: goto label_1af658;
        case 0x1af65cu: goto label_1af65c;
        case 0x1af660u: goto label_1af660;
        case 0x1af664u: goto label_1af664;
        case 0x1af668u: goto label_1af668;
        case 0x1af66cu: goto label_1af66c;
        default: break;
    }

    ctx->pc = 0x1af600u;

label_1af600:
    // 0x1af600: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1af600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1af604:
    // 0x1af604: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1af604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1af608:
    // 0x1af608: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1af608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1af60c:
    // 0x1af60c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1af60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1af610:
    // 0x1af610: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1af610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1af614:
    // 0x1af614: 0xa08502ec  sb          $a1, 0x2EC($a0)
    ctx->pc = 0x1af614u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 748), (uint8_t)GPR_U32(ctx, 5));
label_1af618:
    // 0x1af618: 0x908302ec  lbu         $v1, 0x2EC($a0)
    ctx->pc = 0x1af618u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 748)));
label_1af61c:
    // 0x1af61c: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_1af620:
    if (ctx->pc == 0x1AF620u) {
        ctx->pc = 0x1AF620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF61Cu;
        // 0x1af620: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF624u;
        goto label_1af624;
    }
    ctx->pc = 0x1AF61Cu;
    {
        const bool branch_taken_0x1af61c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF61Cu;
        // 0x1af620: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af61c) {
            ctx->pc = 0x1AF654u;
            goto label_1af654;
        }
    }
    ctx->pc = 0x1AF624u;
label_1af624:
    // 0x1af624: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1af624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af628:
    // 0x1af628: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1af628u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af62c:
    // 0x1af62c: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x1af62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_1af630:
    // 0x1af630: 0x8c440100  lw          $a0, 0x100($v0)
    ctx->pc = 0x1af630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
label_1af634:
    // 0x1af634: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1af634u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1af638:
    // 0x1af638: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1af638u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1af63c:
    // 0x1af63c: 0x320f809  jalr        $t9
label_1af640:
    if (ctx->pc == 0x1AF640u) {
        ctx->pc = 0x1AF640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF63Cu;
        // 0x1af640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF644u;
        goto label_1af644;
    }
    ctx->pc = 0x1AF63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AF644u);
        ctx->pc = 0x1AF640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF63Cu;
        // 0x1af640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF63Cu, 0x1AF644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF644u;
label_1af644:
    // 0x1af644: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1af644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1af648:
    // 0x1af648: 0x2a030006  slti        $v1, $s0, 0x6
    ctx->pc = 0x1af648u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_1af64c:
    // 0x1af64c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_1af650:
    if (ctx->pc == 0x1AF650u) {
        ctx->pc = 0x1AF650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF64Cu;
        // 0x1af650: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF654u;
        goto label_1af654;
    }
    ctx->pc = 0x1AF64Cu;
    {
        const bool branch_taken_0x1af64c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF64Cu;
        // 0x1af650: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af64c) {
            ctx->pc = 0x1AF62Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af62c;
        }
    }
    ctx->pc = 0x1AF654u;
label_1af654:
    // 0x1af654: 0x0  nop
    ctx->pc = 0x1af654u;
    // NOP
label_1af658:
    // 0x1af658: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1af658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1af65c:
    // 0x1af65c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1af65cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1af660:
    // 0x1af660: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1af660u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1af664:
    // 0x1af664: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1af664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1af668:
    // 0x1af668: 0x3e00008  jr          $ra
label_1af66c:
    if (ctx->pc == 0x1AF66Cu) {
        ctx->pc = 0x1AF66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF668u;
        // 0x1af66c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF670u;
        goto label_fallthrough_0x1af668;
    }
    ctx->pc = 0x1AF668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF668u;
        // 0x1af66c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1af668:
    ctx->pc = 0x1AF670u;
}
