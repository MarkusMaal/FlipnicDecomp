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

// Function: FUN_001f9810
// Address: 0x1f9810 - 0x1f9918
void FUN_001f9810_0x1f9810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f9810_0x1f9810");
#endif

    switch (ctx->pc) {
        case 0x1f985cu: goto label_1f985c;
        case 0x1f9880u: goto label_1f9880;
        case 0x1f98a4u: goto label_1f98a4;
        case 0x1f98d4u: goto label_1f98d4;
        case 0x1f98f4u: goto label_1f98f4;
        default: break;
    }

    ctx->pc = 0x1f9810u;

    // 0x1f9810: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f9810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f9814: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f9814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f9818: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1f9818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1f981c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1f981cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1f9820: 0x24541600  addiu       $s4, $v0, 0x1600
    ctx->pc = 0x1f9820u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x1f9824: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f9824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f9828: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f9828u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f982c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f982cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f9830: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f9830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9834: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1f9834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1f9838: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f9838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f983c: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x1f983cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x391624u));
    // 0x1f9840: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9840u;
    {
        const bool branch_taken_0x1f9840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9840u;
        // 0x1f9844: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9840) {
            ctx->pc = 0x1F9850u;
            goto label_1f9850;
        }
    }
    ctx->pc = 0x1F9848u;
    // 0x1f9848: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1F9848u;
    {
        const bool branch_taken_0x1f9848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9848u;
        // 0x1f984c: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9848) {
            ctx->pc = 0x1F98F8u;
            goto label_1f98f8;
        }
    }
    ctx->pc = 0x1F9850u;
label_1f9850:
    // 0x1f9850: 0x3c110022  lui         $s1, 0x22
    ctx->pc = 0x1f9850u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    // 0x1f9854: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F9854u;
    SET_GPR_U32(ctx, 31, 0x1F985Cu);
    ctx->pc = 0x1F9858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9854u;
    // 0x1f9858: 0x8e24d6bc  lw          $a0, -0x2944($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F9854u, 0x1F985Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F985Cu;
label_1f985c:
    // 0x1f985c: 0x4400026  bltz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1F985Cu;
    {
        const bool branch_taken_0x1f985c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F9860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F985Cu;
        // 0x1f9860: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f985c) {
            ctx->pc = 0x1F98F8u;
            goto label_1f98f8;
        }
    }
    ctx->pc = 0x1F9864u;
    // 0x1f9864: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9864u;
    {
        const bool branch_taken_0x1f9864 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9864) {
            ctx->pc = 0x1F9878u;
            goto label_1f9878;
        }
    }
    ctx->pc = 0x1F986Cu;
    // 0x1f986c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1f986cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f9870: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9870u;
    {
        const bool branch_taken_0x1f9870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9870u;
        // 0x1f9874: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9870) {
            ctx->pc = 0x1F9888u;
            goto label_1f9888;
        }
    }
    ctx->pc = 0x1F9878u;
label_1f9878:
    // 0x1f9878: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F9878u;
    SET_GPR_U32(ctx, 31, 0x1F9880u);
    ctx->pc = 0x1F987Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9878u;
    // 0x1f987c: 0x8e24d6bc  lw          $a0, -0x2944($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F9878u, 0x1F9880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9880u;
label_1f9880:
    // 0x1f9880: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1F9880u;
    {
        const bool branch_taken_0x1f9880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9880u;
        // 0x1f9884: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9880) {
            ctx->pc = 0x1F98F8u;
            goto label_1f98f8;
        }
    }
    ctx->pc = 0x1F9888u;
label_1f9888:
    // 0x1f9888: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f9888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f988c: 0x245016b0  addiu       $s0, $v0, 0x16B0
    ctx->pc = 0x1f988cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5808));
    // 0x1f9890: 0xac5316b0  sw          $s3, 0x16B0($v0)
    ctx->pc = 0x1f9890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5808), GPR_U32(ctx, 19));
    // 0x1f9894: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1f9894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x1f9898: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x1f9898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1f989c: 0xc080804  jal         func_202010
    ctx->pc = 0x1F989Cu;
    SET_GPR_U32(ctx, 31, 0x1F98A4u);
    ctx->pc = 0x1F98A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F989Cu;
    // 0x1f98a0: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202010u, 0x1F989Cu, 0x1F98A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F98A4u;
label_1f98a4:
    // 0x1f98a4: 0xa2000413  sb          $zero, 0x413($s0)
    ctx->pc = 0x1f98a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f98a8: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1f98a8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1f98ac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f98acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f98b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f98b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f98b4: 0x25292bc0  addiu       $t1, $t1, 0x2BC0
    ctx->pc = 0x1f98b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11200));
    // 0x1f98b8: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1f98b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1f98bc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f98bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f98c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f98c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f98c4: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1f98c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1f98c8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f98c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f98cc: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F98CCu;
    SET_GPR_U32(ctx, 31, 0x1F98D4u);
    ctx->pc = 0x1F98D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F98CCu;
    // 0x1f98d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F98CCu, 0x1F98D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F98D4u;
label_1f98d4:
    // 0x1f98d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f98d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f98d8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F98D8u;
    {
        const bool branch_taken_0x1f98d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F98DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F98D8u;
        // 0x1f98dc: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f98d8) {
            ctx->pc = 0x1F98ECu;
            goto label_1f98ec;
        }
    }
    ctx->pc = 0x1F98E0u;
    // 0x1f98e0: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1f98e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1f98e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F98E4u;
    {
        const bool branch_taken_0x1f98e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F98E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F98E4u;
        // 0x1f98e8: 0xac62d6b8  sw          $v0, -0x2948($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f98e4) {
            ctx->pc = 0x1F98F4u;
            goto label_1f98f4;
        }
    }
    ctx->pc = 0x1F98ECu;
label_1f98ec:
    // 0x1f98ec: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F98ECu;
    SET_GPR_U32(ctx, 31, 0x1F98F4u);
    ctx->pc = 0x1F98F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F98ECu;
    // 0x1f98f0: 0x8e24d6bc  lw          $a0, -0x2944($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F98ECu, 0x1F98F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F98F4u;
label_1f98f4:
    // 0x1f98f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f98f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f98f8:
    // 0x1f98f8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1f98f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f98fc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1f98fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f9900: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1f9900u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f9904: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f9904u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9908: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f9908u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f990c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f990cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9910: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9910u;
        // 0x1f9914: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9918u;
}
