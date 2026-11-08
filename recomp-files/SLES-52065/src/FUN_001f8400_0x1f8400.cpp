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

// Function: FUN_001f8400
// Address: 0x1f8400 - 0x1f84c4
void FUN_001f8400_0x1f8400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f8400_0x1f8400");
#endif

    switch (ctx->pc) {
        case 0x1f8440u: goto label_1f8440;
        case 0x1f8480u: goto label_1f8480;
        case 0x1f8494u: goto label_1f8494;
        case 0x1f84a4u: goto label_1f84a4;
        default: break;
    }

    ctx->pc = 0x1f8400u;

    // 0x1f8400: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f8400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f8404: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1f8404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1f8408: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f8408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f840c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f840cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f8410: 0x24721600  addiu       $s2, $v1, 0x1600
    ctx->pc = 0x1f8410u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
    // 0x1f8414: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f8414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1f8418: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1f8418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1f841c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f841cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f8420: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1f8420u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x391624u));
    // 0x1f8424: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8424u;
    {
        const bool branch_taken_0x1f8424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8424u;
        // 0x1f8428: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8424) {
            ctx->pc = 0x1F8434u;
            goto label_1f8434;
        }
    }
    ctx->pc = 0x1F842Cu;
    // 0x1f842c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1F842Cu;
    {
        const bool branch_taken_0x1f842c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F842Cu;
        // 0x1f8430: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f842c) {
            ctx->pc = 0x1F84A8u;
            goto label_1f84a8;
        }
    }
    ctx->pc = 0x1F8434u;
label_1f8434:
    // 0x1f8434: 0x3c110022  lui         $s1, 0x22
    ctx->pc = 0x1f8434u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    // 0x1f8438: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F8438u;
    SET_GPR_U32(ctx, 31, 0x1F8440u);
    ctx->pc = 0x1F843Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8438u;
    // 0x1f843c: 0x8e24d6bc  lw          $a0, -0x2944($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F8438u, 0x1F8440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8440u;
label_1f8440:
    // 0x1f8440: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8440u;
    {
        const bool branch_taken_0x1f8440 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F8444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8440u;
        // 0x1f8444: 0x3c070039  lui         $a3, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8440) {
            ctx->pc = 0x1F8450u;
            goto label_1f8450;
        }
    }
    ctx->pc = 0x1F8448u;
    // 0x1f8448: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F8448u;
    {
        const bool branch_taken_0x1f8448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8448u;
        // 0x1f844c: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8448) {
            ctx->pc = 0x1F84A8u;
            goto label_1f84a8;
        }
    }
    ctx->pc = 0x1F8450u;
label_1f8450:
    // 0x1f8450: 0x3c130039  lui         $s3, 0x39
    ctx->pc = 0x1f8450u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)57 << 16));
    // 0x1f8454: 0x24e71680  addiu       $a3, $a3, 0x1680
    ctx->pc = 0x1f8454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5760));
    // 0x1f8458: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f8458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f845c: 0xacf00004  sw          $s0, 0x4($a3)
    ctx->pc = 0x1f845cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
    // 0x1f8460: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1f8460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1f8464: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f8464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f8468: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f8468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f846c: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1f846cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1f8470: 0x26692bc0  addiu       $t1, $s3, 0x2BC0
    ctx->pc = 0x1f8470u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 11200));
    // 0x1f8474: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f8474u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f8478: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F8478u;
    SET_GPR_U32(ctx, 31, 0x1F8480u);
    ctx->pc = 0x1F847Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8478u;
    // 0x1f847c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F8478u, 0x1F8480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8480u;
label_1f8480:
    // 0x1f8480: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f8480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8484: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8484u;
    {
        const bool branch_taken_0x1f8484 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8484) {
            ctx->pc = 0x1F849Cu;
            goto label_1f849c;
        }
    }
    ctx->pc = 0x1F848Cu;
    // 0x1f848c: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F848Cu;
    SET_GPR_U32(ctx, 31, 0x1F8494u);
    ctx->pc = 0x1F8490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F848Cu;
    // 0x1f8490: 0x8e24d6bc  lw          $a0, -0x2944($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F848Cu, 0x1F8494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8494u;
label_1f8494:
    // 0x1f8494: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8494u;
    {
        const bool branch_taken_0x1f8494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8494u;
        // 0x1f8498: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8494) {
            ctx->pc = 0x1F84A8u;
            goto label_1f84a8;
        }
    }
    ctx->pc = 0x1F849Cu;
label_1f849c:
    // 0x1f849c: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F849Cu;
    SET_GPR_U32(ctx, 31, 0x1F84A4u);
    ctx->pc = 0x1F84A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F849Cu;
    // 0x1f84a0: 0x8e24d6bc  lw          $a0, -0x2944($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F849Cu, 0x1F84A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F84A4u;
label_1f84a4:
    // 0x1f84a4: 0x8e622bc0  lw          $v0, 0x2BC0($s3)
    ctx->pc = 0x1f84a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11200)));
label_1f84a8:
    // 0x1f84a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f84a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f84ac: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1f84acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f84b0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f84b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f84b4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f84b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f84b8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f84b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f84bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F84BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F84C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F84BCu;
        // 0x1f84c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F84BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F84C4u;
}
