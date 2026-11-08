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

// Function: FUN_001f8628
// Address: 0x1f8628 - 0x1f86e0
void FUN_001f8628_0x1f8628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f8628_0x1f8628");
#endif

    switch (ctx->pc) {
        case 0x1f8664u: goto label_1f8664;
        case 0x1f86a4u: goto label_1f86a4;
        case 0x1f86c4u: goto label_1f86c4;
        default: break;
    }

    ctx->pc = 0x1f8628u;

    // 0x1f8628: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f8628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f862c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1f862cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1f8630: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f8630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f8634: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f8634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f8638: 0x24711600  addiu       $s1, $v1, 0x1600
    ctx->pc = 0x1f8638u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
    // 0x1f863c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f863cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f8640: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f8640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f8644: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1f8644u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x391624u));
    // 0x1f8648: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8648u;
    {
        const bool branch_taken_0x1f8648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8648u;
        // 0x1f864c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8648) {
            ctx->pc = 0x1F8658u;
            goto label_1f8658;
        }
    }
    ctx->pc = 0x1F8650u;
    // 0x1f8650: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1F8650u;
    {
        const bool branch_taken_0x1f8650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8650u;
        // 0x1f8654: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8650) {
            ctx->pc = 0x1F86C8u;
            goto label_1f86c8;
        }
    }
    ctx->pc = 0x1F8658u;
label_1f8658:
    // 0x1f8658: 0x3c120022  lui         $s2, 0x22
    ctx->pc = 0x1f8658u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    // 0x1f865c: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F865Cu;
    SET_GPR_U32(ctx, 31, 0x1F8664u);
    ctx->pc = 0x1F8660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F865Cu;
    // 0x1f8660: 0x8e44d6bc  lw          $a0, -0x2944($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F865Cu, 0x1F8664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8664u;
label_1f8664:
    // 0x1f8664: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8664u;
    {
        const bool branch_taken_0x1f8664 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F8668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8664u;
        // 0x1f8668: 0x3c070039  lui         $a3, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8664) {
            ctx->pc = 0x1F8674u;
            goto label_1f8674;
        }
    }
    ctx->pc = 0x1F866Cu;
    // 0x1f866c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1F866Cu;
    {
        const bool branch_taken_0x1f866c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F866Cu;
        // 0x1f8670: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f866c) {
            ctx->pc = 0x1F86C8u;
            goto label_1f86c8;
        }
    }
    ctx->pc = 0x1F8674u;
label_1f8674:
    // 0x1f8674: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1f8674u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1f8678: 0xacf01680  sw          $s0, 0x1680($a3)
    ctx->pc = 0x1f8678u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 5760), GPR_U32(ctx, 16));
    // 0x1f867c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f867cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8680: 0x24e71680  addiu       $a3, $a3, 0x1680
    ctx->pc = 0x1f8680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5760));
    // 0x1f8684: 0x25292bc0  addiu       $t1, $t1, 0x2BC0
    ctx->pc = 0x1f8684u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11200));
    // 0x1f8688: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f8688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f868c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1f868cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f8690: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f8690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8694: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1f8694u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1f8698: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f8698u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f869c: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F869Cu;
    SET_GPR_U32(ctx, 31, 0x1F86A4u);
    ctx->pc = 0x1F86A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F869Cu;
    // 0x1f86a0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F869Cu, 0x1F86A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F86A4u;
label_1f86a4:
    // 0x1f86a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f86a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f86a8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F86A8u;
    {
        const bool branch_taken_0x1f86a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F86ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86A8u;
        // 0x1f86ac: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f86a8) {
            ctx->pc = 0x1F86BCu;
            goto label_1f86bc;
        }
    }
    ctx->pc = 0x1F86B0u;
    // 0x1f86b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f86b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f86b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F86B4u;
    {
        const bool branch_taken_0x1f86b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F86B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86B4u;
        // 0x1f86b8: 0xac62d6b8  sw          $v0, -0x2948($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f86b4) {
            ctx->pc = 0x1F86C4u;
            goto label_1f86c4;
        }
    }
    ctx->pc = 0x1F86BCu;
label_1f86bc:
    // 0x1f86bc: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F86BCu;
    SET_GPR_U32(ctx, 31, 0x1F86C4u);
    ctx->pc = 0x1F86C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F86BCu;
    // 0x1f86c0: 0x8e44d6bc  lw          $a0, -0x2944($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F86BCu, 0x1F86C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F86C4u;
label_1f86c4:
    // 0x1f86c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f86c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f86c8:
    // 0x1f86c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f86c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f86cc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f86ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f86d0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f86d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f86d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f86d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f86d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F86D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F86DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86D8u;
        // 0x1f86dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F86D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F86E0u;
}
