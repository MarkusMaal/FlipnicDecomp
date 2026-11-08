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

// Function: FUN_001f86e0
// Address: 0x1f86e0 - 0x1f87b8
void FUN_001f86e0_0x1f86e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f86e0_0x1f86e0");
#endif

    switch (ctx->pc) {
        case 0x1f872cu: goto label_1f872c;
        case 0x1f8774u: goto label_1f8774;
        case 0x1f8794u: goto label_1f8794;
        default: break;
    }

    ctx->pc = 0x1f86e0u;

    // 0x1f86e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f86e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f86e4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f86e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f86e8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1f86e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1f86ec: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f86ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f86f0: 0x24531600  addiu       $s3, $v0, 0x1600
    ctx->pc = 0x1f86f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x1f86f4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f86f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f86f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f86f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f86fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f86fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f8700: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f8700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8704: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1f8704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1f8708: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1f8708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1f870c: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x1f870cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x391624u));
    // 0x1f8710: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8710u;
    {
        const bool branch_taken_0x1f8710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8710u;
        // 0x1f8714: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8710) {
            ctx->pc = 0x1F8720u;
            goto label_1f8720;
        }
    }
    ctx->pc = 0x1F8718u;
    // 0x1f8718: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1F8718u;
    {
        const bool branch_taken_0x1f8718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8718u;
        // 0x1f871c: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8718) {
            ctx->pc = 0x1F8798u;
            goto label_1f8798;
        }
    }
    ctx->pc = 0x1F8720u;
label_1f8720:
    // 0x1f8720: 0x3c140022  lui         $s4, 0x22
    ctx->pc = 0x1f8720u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)34 << 16));
    // 0x1f8724: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F8724u;
    SET_GPR_U32(ctx, 31, 0x1F872Cu);
    ctx->pc = 0x1F8728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8724u;
    // 0x1f8728: 0x8e84d6bc  lw          $a0, -0x2944($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F8724u, 0x1F872Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F872Cu;
label_1f872c:
    // 0x1f872c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F872Cu;
    {
        const bool branch_taken_0x1f872c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F8730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F872Cu;
        // 0x1f8730: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f872c) {
            ctx->pc = 0x1F873Cu;
            goto label_1f873c;
        }
    }
    ctx->pc = 0x1F8734u;
    // 0x1f8734: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1F8734u;
    {
        const bool branch_taken_0x1f8734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8734u;
        // 0x1f8738: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8734) {
            ctx->pc = 0x1F8798u;
            goto label_1f8798;
        }
    }
    ctx->pc = 0x1F873Cu;
label_1f873c:
    // 0x1f873c: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1f873cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1f8740: 0x24471680  addiu       $a3, $v0, 0x1680
    ctx->pc = 0x1f8740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 5760));
    // 0x1f8744: 0xac521680  sw          $s2, 0x1680($v0)
    ctx->pc = 0x1f8744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5760), GPR_U32(ctx, 18));
    // 0x1f8748: 0xacf00010  sw          $s0, 0x10($a3)
    ctx->pc = 0x1f8748u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 16));
    // 0x1f874c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f874cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8750: 0xacf10014  sw          $s1, 0x14($a3)
    ctx->pc = 0x1f8750u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 17));
    // 0x1f8754: 0x25292bc0  addiu       $t1, $t1, 0x2BC0
    ctx->pc = 0x1f8754u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11200));
    // 0x1f8758: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f8758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f875c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1f875cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f8760: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f8760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8764: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1f8764u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1f8768: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f8768u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f876c: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F876Cu;
    SET_GPR_U32(ctx, 31, 0x1F8774u);
    ctx->pc = 0x1F8770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F876Cu;
    // 0x1f8770: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F876Cu, 0x1F8774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8774u;
label_1f8774:
    // 0x1f8774: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f8774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8778: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8778u;
    {
        const bool branch_taken_0x1f8778 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8778u;
        // 0x1f877c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8778) {
            ctx->pc = 0x1F878Cu;
            goto label_1f878c;
        }
    }
    ctx->pc = 0x1F8780u;
    // 0x1f8780: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f8780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f8784: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8784u;
    {
        const bool branch_taken_0x1f8784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8784u;
        // 0x1f8788: 0xac62d6b8  sw          $v0, -0x2948($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8784) {
            ctx->pc = 0x1F8794u;
            goto label_1f8794;
        }
    }
    ctx->pc = 0x1F878Cu;
label_1f878c:
    // 0x1f878c: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F878Cu;
    SET_GPR_U32(ctx, 31, 0x1F8794u);
    ctx->pc = 0x1F8790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F878Cu;
    // 0x1f8790: 0x8e84d6bc  lw          $a0, -0x2944($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F878Cu, 0x1F8794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8794u;
label_1f8794:
    // 0x1f8794: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f8794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f8798:
    // 0x1f8798: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1f8798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f879c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1f879cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f87a0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1f87a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f87a4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f87a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f87a8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f87a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f87ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f87acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f87b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F87B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F87B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F87B0u;
        // 0x1f87b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F87B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F87B8u;
}
