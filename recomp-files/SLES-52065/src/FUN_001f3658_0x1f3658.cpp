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

// Function: FUN_001f3658
// Address: 0x1f3658 - 0x1f3744
void FUN_001f3658_0x1f3658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f3658_0x1f3658");
#endif

    switch (ctx->pc) {
        case 0x1f3680u: goto label_1f3680;
        case 0x1f36d0u: goto label_1f36d0;
        default: break;
    }

    ctx->pc = 0x1f3658u;

    // 0x1f3658: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f3658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f365c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1f365cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1f3660: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f3660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f3664: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f3664u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3668: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f3668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f366c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f366cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3670: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f3670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1f3674: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1f3674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3678: 0xc07cab2  jal         func_1F2AC8
    ctx->pc = 0x1F3678u;
    SET_GPR_U32(ctx, 31, 0x1F3680u);
    ctx->pc = 0x1F367Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3678u;
    // 0x1f367c: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2AC8u, 0x1F3678u, 0x1F3680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3680u;
label_1f3680:
    // 0x1f3680: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3680u;
    {
        const bool branch_taken_0x1f3680 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F3684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3680u;
        // 0x1f3684: 0x2e020003  sltiu       $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3680) {
            ctx->pc = 0x1F3690u;
            goto label_1f3690;
        }
    }
    ctx->pc = 0x1F3688u;
    // 0x1f3688: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1F3688u;
    {
        const bool branch_taken_0x1f3688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3688u;
        // 0x1f368c: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3688) {
            ctx->pc = 0x1F3728u;
            goto label_1f3728;
        }
    }
    ctx->pc = 0x1F3690u;
label_1f3690:
    // 0x1f3690: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1F3690u;
    {
        const bool branch_taken_0x1f3690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3690u;
        // 0x1f3694: 0x3c110039  lui         $s1, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3690) {
            ctx->pc = 0x1F3714u;
            goto label_1f3714;
        }
    }
    ctx->pc = 0x1F3698u;
    // 0x1f3698: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f3698u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f369c: 0x2622fb80  addiu       $v0, $s1, -0x480
    ctx->pc = 0x1f369cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966144));
    // 0x1f36a0: 0xae33fb80  sw          $s3, -0x480($s1)
    ctx->pc = 0x1f36a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294966144), GPR_U32(ctx, 19));
    // 0x1f36a4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f36a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f36a8: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1f36a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1f36ac: 0x2484fd80  addiu       $a0, $a0, -0x280
    ctx->pc = 0x1f36acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966656));
    // 0x1f36b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1f36b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f36b4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f36b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f36b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f36b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f36bc: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1f36bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f36c0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1f36c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f36c4: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x1f36c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f36c8: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F36C8u;
    SET_GPR_U32(ctx, 31, 0x1F36D0u);
    ctx->pc = 0x1F36CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F36C8u;
    // 0x1f36cc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F36C8u, 0x1F36D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F36D0u;
label_1f36d0:
    // 0x1f36d0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F36D0u;
    {
        const bool branch_taken_0x1f36d0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f36d0) {
            ctx->pc = 0x1F36E4u;
            goto label_1f36e4;
        }
    }
    ctx->pc = 0x1F36D8u;
    // 0x1f36d8: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1f36d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1f36dc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F36DCu;
    {
        const bool branch_taken_0x1f36dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F36E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F36DCu;
        // 0x1f36e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f36dc) {
            ctx->pc = 0x1F3728u;
            goto label_1f3728;
        }
    }
    ctx->pc = 0x1F36E4u;
label_1f36e4:
    // 0x1f36e4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F36E4u;
    {
        const bool branch_taken_0x1f36e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F36E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F36E4u;
        // 0x1f36e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f36e4) {
            ctx->pc = 0x1F36F8u;
            goto label_1f36f8;
        }
    }
    ctx->pc = 0x1F36ECu;
    // 0x1f36ec: 0x9222fb80  lbu         $v0, -0x480($s1)
    ctx->pc = 0x1f36ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294966144)));
    // 0x1f36f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F36F0u;
    {
        const bool branch_taken_0x1f36f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F36F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F36F0u;
        // 0x1f36f4: 0xa2420000  sb          $v0, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f36f0) {
            ctx->pc = 0x1F3724u;
            goto label_1f3724;
        }
    }
    ctx->pc = 0x1F36F8u;
label_1f36f8:
    // 0x1f36f8: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F36F8u;
    {
        const bool branch_taken_0x1f36f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F36FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F36F8u;
        // 0x1f36fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f36f8) {
            ctx->pc = 0x1F370Cu;
            goto label_1f370c;
        }
    }
    ctx->pc = 0x1F3700u;
    // 0x1f3700: 0x9622fb80  lhu         $v0, -0x480($s1)
    ctx->pc = 0x1f3700u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294966144)));
    // 0x1f3704: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F3704u;
    {
        const bool branch_taken_0x1f3704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3704u;
        // 0x1f3708: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3704) {
            ctx->pc = 0x1F3724u;
            goto label_1f3724;
        }
    }
    ctx->pc = 0x1F370Cu;
label_1f370c:
    // 0x1f370c: 0x52020004  beql        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F370Cu;
    {
        const bool branch_taken_0x1f370c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f370c) {
            ctx->pc = 0x1F3710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F370Cu;
            // 0x1f3710: 0x8e22fb80  lw          $v0, -0x480($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294966144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3720u;
            goto label_1f3720;
        }
    }
    ctx->pc = 0x1F3714u;
label_1f3714:
    // 0x1f3714: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1f3714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1f3718: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3718u;
    {
        const bool branch_taken_0x1f3718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3718u;
        // 0x1f371c: 0x3442fffe  ori         $v0, $v0, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3718) {
            ctx->pc = 0x1F3728u;
            goto label_1f3728;
        }
    }
    ctx->pc = 0x1F3720u;
label_1f3720:
    // 0x1f3720: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1f3720u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1f3724:
    // 0x1f3724: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f3724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3728:
    // 0x1f3728: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f3728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f372c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1f372cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f3730: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f3730u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f3734: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f3734u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3738: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f3738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f373c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F373Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F373Cu;
        // 0x1f3740: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F373Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3744u;
}
