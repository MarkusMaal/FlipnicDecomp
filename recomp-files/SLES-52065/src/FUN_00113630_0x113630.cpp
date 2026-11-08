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

// Function: FUN_00113630
// Address: 0x113630 - 0x1136fc
void FUN_00113630_0x113630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00113630_0x113630");
#endif

    switch (ctx->pc) {
        case 0x113668u: goto label_113668;
        case 0x113690u: goto label_113690;
        case 0x1136b8u: goto label_1136b8;
        default: break;
    }

    ctx->pc = 0x113630u;

    // 0x113630: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x113630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x113634: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x113634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113638: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x113638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11363c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x11363cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113640: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x113640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x113644: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x113644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x113648: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x113648u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11364c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x11364cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113650: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x113650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x113654: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x113654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113658: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x113658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11365c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11365cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113660: 0xc043ea4  jal         func_10FA90
    ctx->pc = 0x113660u;
    SET_GPR_U32(ctx, 31, 0x113668u);
    ctx->pc = 0x113664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113660u;
    // 0x113664: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA90u, 0x113660u, 0x113668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113668u;
label_113668:
    // 0x113668: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x113668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11366c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11366cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113670: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x113670u;
    {
        const bool branch_taken_0x113670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x113670) {
            ctx->pc = 0x1136DCu;
            goto label_1136dc;
        }
    }
    ctx->pc = 0x113678u;
    // 0x113678: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x113678u;
    {
        const bool branch_taken_0x113678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113678u;
        // 0x11367c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113678) {
            ctx->pc = 0x113688u;
            goto label_113688;
        }
    }
    ctx->pc = 0x113680u;
    // 0x113680: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x113680u;
    {
        const bool branch_taken_0x113680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113680u;
        // 0x113684: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113680) {
            ctx->pc = 0x1136E0u;
            goto label_1136e0;
        }
    }
    ctx->pc = 0x113688u;
label_113688:
    // 0x113688: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x113688u;
    {
        const bool branch_taken_0x113688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113688u;
        // 0x11368c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113688) {
            ctx->pc = 0x1136C0u;
            goto label_1136c0;
        }
    }
    ctx->pc = 0x113690u;
label_113690:
    // 0x113690: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x113690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x113694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x113694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113698: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x113698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x11369c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x11369cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1136a0: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1136a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1136a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1136a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1136a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1136a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1136ac: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1136acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1136b0: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x1136B0u;
    SET_GPR_U32(ctx, 31, 0x1136B8u);
    ctx->pc = 0x1136B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1136B0u;
    // 0x1136b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x1136B0u, 0x1136B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1136B8u;
label_1136b8:
    // 0x1136b8: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x1136b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x1136bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1136bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1136c0:
    // 0x1136c0: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x1136c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x1136c4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1136c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1136c8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1136C8u;
    {
        const bool branch_taken_0x1136c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1136c8) {
            ctx->pc = 0x113690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113690;
        }
    }
    ctx->pc = 0x1136D0u;
    // 0x1136d0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1136d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1136d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1136d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1136d8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1136d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1136dc:
    // 0x1136dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1136dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1136e0:
    // 0x1136e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1136e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1136e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1136e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1136e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1136e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1136ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1136ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1136f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1136f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1136f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1136F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1136F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1136F4u;
        // 0x1136f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1136F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1136FCu;
}
