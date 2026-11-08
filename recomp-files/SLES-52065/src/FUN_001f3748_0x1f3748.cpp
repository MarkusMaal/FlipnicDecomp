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

// Function: FUN_001f3748
// Address: 0x1f3748 - 0x1f3824
void FUN_001f3748_0x1f3748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f3748_0x1f3748");
#endif

    switch (ctx->pc) {
        case 0x1f376cu: goto label_1f376c;
        case 0x1f37f4u: goto label_1f37f4;
        default: break;
    }

    ctx->pc = 0x1f3748u;

    // 0x1f3748: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f3748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f374c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f374cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f3750: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f3750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f3754: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f3754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3758: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f3758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f375c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f375cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3760: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f3760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f3764: 0xc07cab2  jal         func_1F2AC8
    ctx->pc = 0x1F3764u;
    SET_GPR_U32(ctx, 31, 0x1F376Cu);
    ctx->pc = 0x1F3768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3764u;
    // 0x1f3768: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2AC8u, 0x1F3764u, 0x1F376Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F376Cu;
label_1f376c:
    // 0x1f376c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F376Cu;
    {
        const bool branch_taken_0x1f376c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F3770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F376Cu;
        // 0x1f3770: 0x3c070039  lui         $a3, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f376c) {
            ctx->pc = 0x1F377Cu;
            goto label_1f377c;
        }
    }
    ctx->pc = 0x1F3774u;
    // 0x1f3774: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1F3774u;
    {
        const bool branch_taken_0x1f3774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3774u;
        // 0x1f3778: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3774) {
            ctx->pc = 0x1F380Cu;
            goto label_1f380c;
        }
    }
    ctx->pc = 0x1F377Cu;
label_1f377c:
    // 0x1f377c: 0x24e3fb80  addiu       $v1, $a3, -0x480
    ctx->pc = 0x1f377cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966144));
    // 0x1f3780: 0xacf2fb80  sw          $s2, -0x480($a3)
    ctx->pc = 0x1f3780u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294966144), GPR_U32(ctx, 18));
    // 0x1f3784: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3784u;
    {
        const bool branch_taken_0x1f3784 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3784u;
        // 0x1f3788: 0xac700004  sw          $s0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3784) {
            ctx->pc = 0x1F3798u;
            goto label_1f3798;
        }
    }
    ctx->pc = 0x1F378Cu;
    // 0x1f378c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f378cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f3790: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1F3790u;
    {
        const bool branch_taken_0x1f3790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3790u;
        // 0x1f3794: 0xa0620008  sb          $v0, 0x8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3790) {
            ctx->pc = 0x1F37C8u;
            goto label_1f37c8;
        }
    }
    ctx->pc = 0x1F3798u;
label_1f3798:
    // 0x1f3798: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f3798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f379c: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F379Cu;
    {
        const bool branch_taken_0x1f379c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F37A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F379Cu;
        // 0x1f37a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f379c) {
            ctx->pc = 0x1F37B0u;
            goto label_1f37b0;
        }
    }
    ctx->pc = 0x1F37A4u;
    // 0x1f37a4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1f37a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f37a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F37A8u;
    {
        const bool branch_taken_0x1f37a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F37ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F37A8u;
        // 0x1f37ac: 0xa4620008  sh          $v0, 0x8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f37a8) {
            ctx->pc = 0x1F37C8u;
            goto label_1f37c8;
        }
    }
    ctx->pc = 0x1F37B0u;
label_1f37b0:
    // 0x1f37b0: 0x52020004  beql        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F37B0u;
    {
        const bool branch_taken_0x1f37b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f37b0) {
            ctx->pc = 0x1F37B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F37B0u;
            // 0x1f37b4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F37C4u;
            goto label_1f37c4;
        }
    }
    ctx->pc = 0x1F37B8u;
    // 0x1f37b8: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1f37b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1f37bc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1F37BCu;
    {
        const bool branch_taken_0x1f37bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F37C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F37BCu;
        // 0x1f37c0: 0x3442fffe  ori         $v0, $v0, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f37bc) {
            ctx->pc = 0x1F380Cu;
            goto label_1f380c;
        }
    }
    ctx->pc = 0x1F37C4u;
label_1f37c4:
    // 0x1f37c4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1f37c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1f37c8:
    // 0x1f37c8: 0x24e7fb80  addiu       $a3, $a3, -0x480
    ctx->pc = 0x1f37c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966144));
    // 0x1f37cc: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f37ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f37d0: 0x2484fd80  addiu       $a0, $a0, -0x280
    ctx->pc = 0x1f37d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966656));
    // 0x1f37d4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f37d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f37d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f37d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f37dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f37dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f37e0: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1f37e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f37e4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1f37e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f37e8: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1f37e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f37ec: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F37ECu;
    SET_GPR_U32(ctx, 31, 0x1F37F4u);
    ctx->pc = 0x1F37F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F37ECu;
    // 0x1f37f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F37ECu, 0x1F37F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F37F4u;
label_1f37f4:
    // 0x1f37f4: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x1f37f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x1f37f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f37f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f37fc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1f37fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f3800: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1f3800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1f3804: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f3804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3808: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1f3808u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1f380c:
    // 0x1f380c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f380cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f3810: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f3810u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f3814: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f3814u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3818: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f3818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f381c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F381Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F381Cu;
        // 0x1f3820: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F381Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3824u;
}
