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

// Function: FUN_001f9740
// Address: 0x1f9740 - 0x1f980c
void FUN_001f9740_0x1f9740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f9740_0x1f9740");
#endif

    switch (ctx->pc) {
        case 0x1f9784u: goto label_1f9784;
        case 0x1f97ccu: goto label_1f97cc;
        case 0x1f97ecu: goto label_1f97ec;
        default: break;
    }

    ctx->pc = 0x1f9740u;

    // 0x1f9740: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f9740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f9744: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f9744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f9748: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f9748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f974c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f974cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f9750: 0x24521600  addiu       $s2, $v0, 0x1600
    ctx->pc = 0x1f9750u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x1f9754: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f9754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f9758: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f9758u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f975c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f975cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1f9760: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1f9760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1f9764: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1f9764u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x391624u));
    // 0x1f9768: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9768u;
    {
        const bool branch_taken_0x1f9768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9768u;
        // 0x1f976c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9768) {
            ctx->pc = 0x1F9778u;
            goto label_1f9778;
        }
    }
    ctx->pc = 0x1F9770u;
    // 0x1f9770: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1F9770u;
    {
        const bool branch_taken_0x1f9770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9770u;
        // 0x1f9774: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9770) {
            ctx->pc = 0x1F97F0u;
            goto label_1f97f0;
        }
    }
    ctx->pc = 0x1F9778u;
label_1f9778:
    // 0x1f9778: 0x3c130022  lui         $s3, 0x22
    ctx->pc = 0x1f9778u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)34 << 16));
    // 0x1f977c: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F977Cu;
    SET_GPR_U32(ctx, 31, 0x1F9784u);
    ctx->pc = 0x1F9780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F977Cu;
    // 0x1f9780: 0x8e64d6bc  lw          $a0, -0x2944($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F977Cu, 0x1F9784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9784u;
label_1f9784:
    // 0x1f9784: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9784u;
    {
        const bool branch_taken_0x1f9784 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F9788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9784u;
        // 0x1f9788: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9784) {
            ctx->pc = 0x1F9794u;
            goto label_1f9794;
        }
    }
    ctx->pc = 0x1F978Cu;
    // 0x1f978c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1F978Cu;
    {
        const bool branch_taken_0x1f978c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F978Cu;
        // 0x1f9790: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f978c) {
            ctx->pc = 0x1F97F0u;
            goto label_1f97f0;
        }
    }
    ctx->pc = 0x1F9794u;
label_1f9794:
    // 0x1f9794: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1f9794u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1f9798: 0x24421680  addiu       $v0, $v0, 0x1680
    ctx->pc = 0x1f9798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5760));
    // 0x1f979c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f979cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f97a0: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1f97a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1f97a4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f97a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f97a8: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x1f97a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x1f97ac: 0x25292bc0  addiu       $t1, $t1, 0x2BC0
    ctx->pc = 0x1f97acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11200));
    // 0x1f97b0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f97b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f97b4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1f97b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1f97b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f97b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f97bc: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1f97bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1f97c0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f97c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f97c4: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F97C4u;
    SET_GPR_U32(ctx, 31, 0x1F97CCu);
    ctx->pc = 0x1F97C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F97C4u;
    // 0x1f97c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F97C4u, 0x1F97CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F97CCu;
label_1f97cc:
    // 0x1f97cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f97ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f97d0: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F97D0u;
    {
        const bool branch_taken_0x1f97d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F97D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97D0u;
        // 0x1f97d4: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f97d0) {
            ctx->pc = 0x1F97E4u;
            goto label_1f97e4;
        }
    }
    ctx->pc = 0x1F97D8u;
    // 0x1f97d8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1f97d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1f97dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F97DCu;
    {
        const bool branch_taken_0x1f97dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F97E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97DCu;
        // 0x1f97e0: 0xac62d6b8  sw          $v0, -0x2948($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f97dc) {
            ctx->pc = 0x1F97ECu;
            goto label_1f97ec;
        }
    }
    ctx->pc = 0x1F97E4u;
label_1f97e4:
    // 0x1f97e4: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F97E4u;
    SET_GPR_U32(ctx, 31, 0x1F97ECu);
    ctx->pc = 0x1F97E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F97E4u;
    // 0x1f97e8: 0x8e64d6bc  lw          $a0, -0x2944($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F97E4u, 0x1F97ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F97ECu;
label_1f97ec:
    // 0x1f97ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f97ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f97f0:
    // 0x1f97f0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f97f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f97f4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1f97f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f97f8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f97f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f97fc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f97fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9800: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f9800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9804: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9804u;
        // 0x1f9808: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F980Cu;
}
