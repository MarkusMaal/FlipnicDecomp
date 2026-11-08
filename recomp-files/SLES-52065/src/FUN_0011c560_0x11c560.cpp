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

// Function: FUN_0011c560
// Address: 0x11c560 - 0x11c668
void FUN_0011c560_0x11c560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011c560_0x11c560");
#endif

    switch (ctx->pc) {
        case 0x11c5a0u: goto label_11c5a0;
        case 0x11c5bcu: goto label_11c5bc;
        case 0x11c630u: goto label_11c630;
        default: break;
    }

    ctx->pc = 0x11c560u;

    // 0x11c560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11c560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11c564: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x11c564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x11c568: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11c568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11c56c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11c56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11c570: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11c570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11c574: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x11c574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x11c578: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C578u;
    {
        const bool branch_taken_0x11c578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C578u;
        // 0x11c57c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c578) {
            ctx->pc = 0x11C588u;
            goto label_11c588;
        }
    }
    ctx->pc = 0x11C580u;
    // 0x11c580: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11C580u;
    {
        const bool branch_taken_0x11c580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C580u;
        // 0x11c584: 0x3c100001  lui         $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c580) {
            ctx->pc = 0x11C58Cu;
            goto label_11c58c;
        }
    }
    ctx->pc = 0x11C588u;
label_11c588:
    // 0x11c588: 0x3c100002  lui         $s0, 0x2
    ctx->pc = 0x11c588u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)2 << 16));
label_11c58c:
    // 0x11c58c: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x11c58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x11c590: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x11c590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x11c594: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11C594u;
    {
        const bool branch_taken_0x11c594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c594) {
            ctx->pc = 0x11C5E0u;
            goto label_11c5e0;
        }
    }
    ctx->pc = 0x11C59Cu;
    // 0x11c59c: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x11c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_11c5a0:
    // 0x11c5a0: 0x26240424  addiu       $a0, $s1, 0x424
    ctx->pc = 0x11c5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1060));
    // 0x11c5a4: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x11c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x11c5a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11c5a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c5ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11c5acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c5b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11c5b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c5b4: 0xc047bec  jal         func_11EFB0
    ctx->pc = 0x11C5B4u;
    SET_GPR_U32(ctx, 31, 0x11C5BCu);
    ctx->pc = 0x11C5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C5B4u;
    // 0x11c5b8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EFB0u, 0x11C5B4u, 0x11C5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C5BCu;
label_11c5bc:
    // 0x11c5bc: 0x8e2400ac  lw          $a0, 0xAC($s1)
    ctx->pc = 0x11c5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x11c5c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11c5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c5c4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x11c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11c5c8: 0xae2200ac  sw          $v0, 0xAC($s1)
    ctx->pc = 0x11c5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 2));
    // 0x11c5cc: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x11c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x11c5d0: 0x1043001f  beq         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x11C5D0u;
    {
        const bool branch_taken_0x11c5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x11c5d0) {
            ctx->pc = 0x11C650u;
            goto label_11c650;
        }
    }
    ctx->pc = 0x11C5D8u;
    // 0x11c5d8: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x11C5D8u;
    {
        const bool branch_taken_0x11c5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C5D8u;
        // 0x11c5dc: 0x8e230094  lw          $v1, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c5d8) {
            ctx->pc = 0x11C5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c5a0;
        }
    }
    ctx->pc = 0x11C5E0u;
label_11c5e0:
    // 0x11c5e0: 0x8e2400ac  lw          $a0, 0xAC($s1)
    ctx->pc = 0x11c5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x11c5e4: 0x3c01000f  lui         $at, 0xF
    ctx->pc = 0x11c5e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15 << 16));
    // 0x11c5e8: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x11c5e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x11c5ec: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11C5ECu;
    {
        const bool branch_taken_0x11c5ec = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x11C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C5ECu;
        // 0x11c5f0: 0x811824  and         $v1, $a0, $at (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c5ec) {
            ctx->pc = 0x11C600u;
            goto label_11c600;
        }
    }
    ctx->pc = 0x11C5F4u;
    // 0x11c5f4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x11C5F4u;
    {
        const bool branch_taken_0x11c5f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c5f4) {
            ctx->pc = 0x11C600u;
            goto label_11c600;
        }
    }
    ctx->pc = 0x11C5FCu;
    // 0x11c5fc: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x11c5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_11c600:
    // 0x11c600: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x11c600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x11c604: 0x8e270094  lw          $a3, 0x94($s1)
    ctx->pc = 0x11c604u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x11c608: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x11c608u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11c60c: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x11c60cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11c610: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x11c610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x11c614: 0x41800a  movz        $s0, $v0, $at
    ctx->pc = 0x11c614u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x11c618: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11C618u;
    {
        const bool branch_taken_0x11c618 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c618) {
            ctx->pc = 0x11C63Cu;
            goto label_11c63c;
        }
    }
    ctx->pc = 0x11C620u;
    // 0x11c620: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11c620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c624: 0x26240424  addiu       $a0, $s1, 0x424
    ctx->pc = 0x11c624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1060));
    // 0x11c628: 0xc047bec  jal         func_11EFB0
    ctx->pc = 0x11C628u;
    SET_GPR_U32(ctx, 31, 0x11C630u);
    ctx->pc = 0x11C62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C628u;
    // 0x11c62c: 0x3c080010  lui         $t0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EFB0u, 0x11C628u, 0x11C630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C630u;
label_11c630:
    // 0x11c630: 0x8e2300ac  lw          $v1, 0xAC($s1)
    ctx->pc = 0x11c630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x11c634: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x11c634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11c638: 0xae2200ac  sw          $v0, 0xAC($s1)
    ctx->pc = 0x11c638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 2));
label_11c63c:
    // 0x11c63c: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x11c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x11c640: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11C640u;
    {
        const bool branch_taken_0x11c640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C640u;
        // 0x11c644: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c640) {
            ctx->pc = 0x11C654u;
            goto label_11c654;
        }
    }
    ctx->pc = 0x11C648u;
    // 0x11c648: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11C648u;
    {
        const bool branch_taken_0x11c648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C648u;
        // 0x11c64c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c648) {
            ctx->pc = 0x11C654u;
            goto label_11c654;
        }
    }
    ctx->pc = 0x11C650u;
label_11c650:
    // 0x11c650: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11c650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11c654:
    // 0x11c654: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11c654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c658: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11c658u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c65c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11c65cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c660: 0x3e00008  jr          $ra
    ctx->pc = 0x11C660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C660u;
        // 0x11c664: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C668u;
}
