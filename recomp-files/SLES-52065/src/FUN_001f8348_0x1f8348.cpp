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

// Function: FUN_001f8348
// Address: 0x1f8348 - 0x1f8400
void FUN_001f8348_0x1f8348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f8348_0x1f8348");
#endif

    switch (ctx->pc) {
        case 0x1f8384u: goto label_1f8384;
        case 0x1f83c4u: goto label_1f83c4;
        case 0x1f83e4u: goto label_1f83e4;
        default: break;
    }

    ctx->pc = 0x1f8348u;

    // 0x1f8348: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f8348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f834c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1f834cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1f8350: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f8350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f8354: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f8354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f8358: 0x24711600  addiu       $s1, $v1, 0x1600
    ctx->pc = 0x1f8358u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
    // 0x1f835c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f835cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f8360: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f8360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f8364: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1f8364u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x391624u));
    // 0x1f8368: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8368u;
    {
        const bool branch_taken_0x1f8368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8368u;
        // 0x1f836c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8368) {
            ctx->pc = 0x1F8378u;
            goto label_1f8378;
        }
    }
    ctx->pc = 0x1F8370u;
    // 0x1f8370: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1F8370u;
    {
        const bool branch_taken_0x1f8370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8370u;
        // 0x1f8374: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8370) {
            ctx->pc = 0x1F83E8u;
            goto label_1f83e8;
        }
    }
    ctx->pc = 0x1F8378u;
label_1f8378:
    // 0x1f8378: 0x3c120022  lui         $s2, 0x22
    ctx->pc = 0x1f8378u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    // 0x1f837c: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F837Cu;
    SET_GPR_U32(ctx, 31, 0x1F8384u);
    ctx->pc = 0x1F8380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F837Cu;
    // 0x1f8380: 0x8e44d6bc  lw          $a0, -0x2944($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F837Cu, 0x1F8384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8384u;
label_1f8384:
    // 0x1f8384: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8384u;
    {
        const bool branch_taken_0x1f8384 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F8388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8384u;
        // 0x1f8388: 0x3c070039  lui         $a3, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8384) {
            ctx->pc = 0x1F8394u;
            goto label_1f8394;
        }
    }
    ctx->pc = 0x1F838Cu;
    // 0x1f838c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1F838Cu;
    {
        const bool branch_taken_0x1f838c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F838Cu;
        // 0x1f8390: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f838c) {
            ctx->pc = 0x1F83E8u;
            goto label_1f83e8;
        }
    }
    ctx->pc = 0x1F8394u;
label_1f8394:
    // 0x1f8394: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1f8394u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1f8398: 0x24e71680  addiu       $a3, $a3, 0x1680
    ctx->pc = 0x1f8398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5760));
    // 0x1f839c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f839cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f83a0: 0xacf00014  sw          $s0, 0x14($a3)
    ctx->pc = 0x1f83a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 16));
    // 0x1f83a4: 0x25292bc0  addiu       $t1, $t1, 0x2BC0
    ctx->pc = 0x1f83a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11200));
    // 0x1f83a8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f83a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f83ac: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1f83acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1f83b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f83b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f83b4: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1f83b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1f83b8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f83b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f83bc: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F83BCu;
    SET_GPR_U32(ctx, 31, 0x1F83C4u);
    ctx->pc = 0x1F83C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F83BCu;
    // 0x1f83c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F83BCu, 0x1F83C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F83C4u;
label_1f83c4:
    // 0x1f83c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f83c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f83c8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F83C8u;
    {
        const bool branch_taken_0x1f83c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F83CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F83C8u;
        // 0x1f83cc: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f83c8) {
            ctx->pc = 0x1F83DCu;
            goto label_1f83dc;
        }
    }
    ctx->pc = 0x1F83D0u;
    // 0x1f83d0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1f83d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1f83d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F83D4u;
    {
        const bool branch_taken_0x1f83d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F83D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F83D4u;
        // 0x1f83d8: 0xac62d6b8  sw          $v0, -0x2948($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f83d4) {
            ctx->pc = 0x1F83E4u;
            goto label_1f83e4;
        }
    }
    ctx->pc = 0x1F83DCu;
label_1f83dc:
    // 0x1f83dc: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F83DCu;
    SET_GPR_U32(ctx, 31, 0x1F83E4u);
    ctx->pc = 0x1F83E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F83DCu;
    // 0x1f83e0: 0x8e44d6bc  lw          $a0, -0x2944($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F83DCu, 0x1F83E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F83E4u;
label_1f83e4:
    // 0x1f83e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f83e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f83e8:
    // 0x1f83e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f83e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f83ec: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f83ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f83f0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f83f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f83f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f83f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f83f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F83F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F83FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F83F8u;
        // 0x1f83fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F83F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8400u;
}
