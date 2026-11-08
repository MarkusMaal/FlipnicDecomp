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

// Function: FUN_001f9368
// Address: 0x1f9368 - 0x1f9420
void FUN_001f9368_0x1f9368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f9368_0x1f9368");
#endif

    switch (ctx->pc) {
        case 0x1f93a4u: goto label_1f93a4;
        case 0x1f93e4u: goto label_1f93e4;
        case 0x1f9404u: goto label_1f9404;
        default: break;
    }

    ctx->pc = 0x1f9368u;

    // 0x1f9368: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f9368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f936c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1f936cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1f9370: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f9370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f9374: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f9374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f9378: 0x24711600  addiu       $s1, $v1, 0x1600
    ctx->pc = 0x1f9378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
    // 0x1f937c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f937cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f9380: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f9380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f9384: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1f9384u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x391624u));
    // 0x1f9388: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9388u;
    {
        const bool branch_taken_0x1f9388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9388u;
        // 0x1f938c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9388) {
            ctx->pc = 0x1F9398u;
            goto label_1f9398;
        }
    }
    ctx->pc = 0x1F9390u;
    // 0x1f9390: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1F9390u;
    {
        const bool branch_taken_0x1f9390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9390u;
        // 0x1f9394: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9390) {
            ctx->pc = 0x1F9408u;
            goto label_1f9408;
        }
    }
    ctx->pc = 0x1F9398u;
label_1f9398:
    // 0x1f9398: 0x3c120022  lui         $s2, 0x22
    ctx->pc = 0x1f9398u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    // 0x1f939c: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F939Cu;
    SET_GPR_U32(ctx, 31, 0x1F93A4u);
    ctx->pc = 0x1F93A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F939Cu;
    // 0x1f93a0: 0x8e44d6bc  lw          $a0, -0x2944($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F939Cu, 0x1F93A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F93A4u;
label_1f93a4:
    // 0x1f93a4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F93A4u;
    {
        const bool branch_taken_0x1f93a4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F93A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F93A4u;
        // 0x1f93a8: 0x3c070039  lui         $a3, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f93a4) {
            ctx->pc = 0x1F93B4u;
            goto label_1f93b4;
        }
    }
    ctx->pc = 0x1F93ACu;
    // 0x1f93ac: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1F93ACu;
    {
        const bool branch_taken_0x1f93ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F93B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F93ACu;
        // 0x1f93b0: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f93ac) {
            ctx->pc = 0x1F9408u;
            goto label_1f9408;
        }
    }
    ctx->pc = 0x1F93B4u;
label_1f93b4:
    // 0x1f93b4: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1f93b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1f93b8: 0xacf01680  sw          $s0, 0x1680($a3)
    ctx->pc = 0x1f93b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 5760), GPR_U32(ctx, 16));
    // 0x1f93bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f93bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f93c0: 0x24e71680  addiu       $a3, $a3, 0x1680
    ctx->pc = 0x1f93c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5760));
    // 0x1f93c4: 0x25292bc0  addiu       $t1, $t1, 0x2BC0
    ctx->pc = 0x1f93c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11200));
    // 0x1f93c8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f93c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f93cc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1f93ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f93d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f93d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f93d4: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1f93d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1f93d8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f93d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f93dc: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F93DCu;
    SET_GPR_U32(ctx, 31, 0x1F93E4u);
    ctx->pc = 0x1F93E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F93DCu;
    // 0x1f93e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F93DCu, 0x1F93E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F93E4u;
label_1f93e4:
    // 0x1f93e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f93e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f93e8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F93E8u;
    {
        const bool branch_taken_0x1f93e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F93ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F93E8u;
        // 0x1f93ec: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f93e8) {
            ctx->pc = 0x1F93FCu;
            goto label_1f93fc;
        }
    }
    ctx->pc = 0x1F93F0u;
    // 0x1f93f0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1f93f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f93f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F93F4u;
    {
        const bool branch_taken_0x1f93f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F93F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F93F4u;
        // 0x1f93f8: 0xac62d6b8  sw          $v0, -0x2948($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f93f4) {
            ctx->pc = 0x1F9404u;
            goto label_1f9404;
        }
    }
    ctx->pc = 0x1F93FCu;
label_1f93fc:
    // 0x1f93fc: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F93FCu;
    SET_GPR_U32(ctx, 31, 0x1F9404u);
    ctx->pc = 0x1F9400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F93FCu;
    // 0x1f9400: 0x8e44d6bc  lw          $a0, -0x2944($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F93FCu, 0x1F9404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9404u;
label_1f9404:
    // 0x1f9404: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f9404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f9408:
    // 0x1f9408: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f9408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f940c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f940cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9410: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f9410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9414: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f9414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9418: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9418u;
        // 0x1f941c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9420u;
}
