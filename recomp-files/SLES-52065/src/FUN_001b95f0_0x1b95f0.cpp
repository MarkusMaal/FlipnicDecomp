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

// Function: FUN_001b95f0
// Address: 0x1b95f0 - 0x1b965c
void FUN_001b95f0_0x1b95f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b95f0_0x1b95f0");
#endif

    switch (ctx->pc) {
        case 0x1b95f0u: goto label_1b95f0;
        case 0x1b95f4u: goto label_1b95f4;
        case 0x1b95f8u: goto label_1b95f8;
        case 0x1b95fcu: goto label_1b95fc;
        case 0x1b9600u: goto label_1b9600;
        case 0x1b9604u: goto label_1b9604;
        case 0x1b9608u: goto label_1b9608;
        case 0x1b960cu: goto label_1b960c;
        case 0x1b9610u: goto label_1b9610;
        case 0x1b9614u: goto label_1b9614;
        case 0x1b9618u: goto label_1b9618;
        case 0x1b961cu: goto label_1b961c;
        case 0x1b9620u: goto label_1b9620;
        case 0x1b9624u: goto label_1b9624;
        case 0x1b9628u: goto label_1b9628;
        case 0x1b962cu: goto label_1b962c;
        case 0x1b9630u: goto label_1b9630;
        case 0x1b9634u: goto label_1b9634;
        case 0x1b9638u: goto label_1b9638;
        case 0x1b963cu: goto label_1b963c;
        case 0x1b9640u: goto label_1b9640;
        case 0x1b9644u: goto label_1b9644;
        case 0x1b9648u: goto label_1b9648;
        case 0x1b964cu: goto label_1b964c;
        case 0x1b9650u: goto label_1b9650;
        case 0x1b9654u: goto label_1b9654;
        case 0x1b9658u: goto label_1b9658;
        default: break;
    }

    ctx->pc = 0x1b95f0u;

label_1b95f0:
    // 0x1b95f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b95f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1b95f4:
    // 0x1b95f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b95f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1b95f8:
    // 0x1b95f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b95f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b95fc:
    // 0x1b95fc: 0xc04c25c  jal         func_130970
label_1b9600:
    if (ctx->pc == 0x1B9600u) {
        ctx->pc = 0x1B9600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B95FCu;
        // 0x1b9600: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9604u;
        goto label_1b9604;
    }
    ctx->pc = 0x1B95FCu;
    SET_GPR_U32(ctx, 31, 0x1B9604u);
    ctx->pc = 0x1B9600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B95FCu;
    // 0x1b9600: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130970u, 0x1B95FCu, 0x1B9604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9604u;
label_1b9604:
    // 0x1b9604: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b9604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b9608:
    // 0x1b9608: 0xc080702  jal         func_201C08
label_1b960c:
    if (ctx->pc == 0x1B960Cu) {
        ctx->pc = 0x1B960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9608u;
        // 0x1b960c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9610u;
        goto label_1b9610;
    }
    ctx->pc = 0x1B9608u;
    SET_GPR_U32(ctx, 31, 0x1B9610u);
    ctx->pc = 0x1B960Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9608u;
    // 0x1b960c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1B9608u, 0x1B9610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9610u;
label_1b9610:
    // 0x1b9610: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1b9610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1b9614:
    // 0x1b9614: 0xc080664  jal         func_201990
label_1b9618:
    if (ctx->pc == 0x1B9618u) {
        ctx->pc = 0x1B9618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9614u;
        // 0x1b9618: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B961Cu;
        goto label_1b961c;
    }
    ctx->pc = 0x1B9614u;
    SET_GPR_U32(ctx, 31, 0x1B961Cu);
    ctx->pc = 0x1B9618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9614u;
    // 0x1b9618: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1B9614u, 0x1B961Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B961Cu;
label_1b961c:
    // 0x1b961c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1b961cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1b9620:
    // 0x1b9620: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b9620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9624:
    // 0x1b9624: 0xc0485b4  jal         func_1216D0
label_1b9628:
    if (ctx->pc == 0x1B9628u) {
        ctx->pc = 0x1B9628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9624u;
        // 0x1b9628: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B962Cu;
        goto label_1b962c;
    }
    ctx->pc = 0x1B9624u;
    SET_GPR_U32(ctx, 31, 0x1B962Cu);
    ctx->pc = 0x1B9628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9624u;
    // 0x1b9628: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1216D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216D0u, 0x1B9624u, 0x1B962Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B962Cu;
label_1b962c:
    // 0x1b962c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1b962cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1b9630:
    // 0x1b9630: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1b9630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b9634:
    // 0x1b9634: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b9634u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b9638:
    // 0x1b9638: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1b9638u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1b963c:
    // 0x1b963c: 0x320f809  jalr        $t9
label_1b9640:
    if (ctx->pc == 0x1B9640u) {
        ctx->pc = 0x1B9640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B963Cu;
        // 0x1b9640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9644u;
        goto label_1b9644;
    }
    ctx->pc = 0x1B963Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B9644u);
        ctx->pc = 0x1B9640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B963Cu;
        // 0x1b9640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B963Cu, 0x1B9644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B9644u;
label_1b9644:
    // 0x1b9644: 0xc06e280  jal         func_1B8A00
label_1b9648:
    if (ctx->pc == 0x1B9648u) {
        ctx->pc = 0x1B9648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9644u;
        // 0x1b9648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B964Cu;
        goto label_1b964c;
    }
    ctx->pc = 0x1B9644u;
    SET_GPR_U32(ctx, 31, 0x1B964Cu);
    ctx->pc = 0x1B9648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9644u;
    // 0x1b9648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8A00u, 0x1B9644u, 0x1B964Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B964Cu;
label_1b964c:
    // 0x1b964c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b964cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b9650:
    // 0x1b9650: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b9650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b9654:
    // 0x1b9654: 0x3e00008  jr          $ra
label_1b9658:
    if (ctx->pc == 0x1B9658u) {
        ctx->pc = 0x1B9658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9654u;
        // 0x1b9658: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B965Cu;
        goto label_fallthrough_0x1b9654;
    }
    ctx->pc = 0x1B9654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9654u;
        // 0x1b9658: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b9654:
    ctx->pc = 0x1B965Cu;
}
