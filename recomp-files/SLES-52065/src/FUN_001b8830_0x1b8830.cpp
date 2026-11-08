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

// Function: FUN_001b8830
// Address: 0x1b8830 - 0x1b88fc
void FUN_001b8830_0x1b8830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b8830_0x1b8830");
#endif

    switch (ctx->pc) {
        case 0x1b8858u: goto label_1b8858;
        case 0x1b8864u: goto label_1b8864;
        case 0x1b8870u: goto label_1b8870;
        case 0x1b8878u: goto label_1b8878;
        case 0x1b8880u: goto label_1b8880;
        case 0x1b88a8u: goto label_1b88a8;
        case 0x1b88bcu: goto label_1b88bc;
        case 0x1b88c8u: goto label_1b88c8;
        case 0x1b88e0u: goto label_1b88e0;
        default: break;
    }

    ctx->pc = 0x1b8830u;

    // 0x1b8830: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b8830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b8834: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b8834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b8838: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b8838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b883c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b883cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b8840: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b8840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b8844: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b8844u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8848: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1B8848u;
    {
        const bool branch_taken_0x1b8848 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8848u;
        // 0x1b884c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8848) {
            ctx->pc = 0x1B88E0u;
            goto label_1b88e0;
        }
    }
    ctx->pc = 0x1B8850u;
    // 0x1b8850: 0xc06dd28  jal         func_1B74A0
    ctx->pc = 0x1B8850u;
    SET_GPR_U32(ctx, 31, 0x1B8858u);
    ctx->pc = 0x1B8854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8850u;
    // 0x1b8854: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74A0u, 0x1B8850u, 0x1B8858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8858u;
label_1b8858:
    // 0x1b8858: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b8858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b885c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B885Cu;
    {
        const bool branch_taken_0x1b885c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B885Cu;
        // 0x1b8860: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b885c) {
            ctx->pc = 0x1B8878u;
            goto label_1b8878;
        }
    }
    ctx->pc = 0x1B8864u;
label_1b8864:
    // 0x1b8864: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x1b8864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1b8868: 0xc06e26c  jal         func_1B89B0
    ctx->pc = 0x1B8868u;
    SET_GPR_U32(ctx, 31, 0x1B8870u);
    ctx->pc = 0x1B886Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8868u;
    // 0x1b886c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B89B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B89B0u, 0x1B8868u, 0x1B8870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8870u;
label_1b8870:
    // 0x1b8870: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1B8870u;
    SET_GPR_U32(ctx, 31, 0x1B8878u);
    ctx->pc = 0x1B8874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8870u;
    // 0x1b8874: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1B8870u, 0x1B8878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8878u;
label_1b8878:
    // 0x1b8878: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1B8878u;
    SET_GPR_U32(ctx, 31, 0x1B8880u);
    ctx->pc = 0x1B887Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8878u;
    // 0x1b887c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1B8878u, 0x1B8880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8880u;
label_1b8880:
    // 0x1b8880: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1b8880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1b8884: 0x1462fff7  bne         $v1, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B8884u;
    {
        const bool branch_taken_0x1b8884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b8884) {
            ctx->pc = 0x1B8864u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8864;
        }
    }
    ctx->pc = 0x1B888Cu;
    // 0x1b888c: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x1b888cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1b8890: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B8890u;
    {
        const bool branch_taken_0x1b8890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8890) {
            ctx->pc = 0x1B88C8u;
            goto label_1b88c8;
        }
    }
    ctx->pc = 0x1B8898u;
    // 0x1b8898: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B8898u;
    {
        const bool branch_taken_0x1b8898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8898u;
        // 0x1b889c: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8898) {
            ctx->pc = 0x1B88C8u;
            goto label_1b88c8;
        }
    }
    ctx->pc = 0x1B88A0u;
    // 0x1b88a0: 0xc06e240  jal         func_1B8900
    ctx->pc = 0x1B88A0u;
    SET_GPR_U32(ctx, 31, 0x1B88A8u);
    ctx->pc = 0x1B88A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B88A0u;
    // 0x1b88a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8900u, 0x1B88A0u, 0x1B88A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B88A8u;
label_1b88a8:
    // 0x1b88a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b88a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b88ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B88ACu;
    {
        const bool branch_taken_0x1b88ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B88B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B88ACu;
        // 0x1b88b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b88ac) {
            ctx->pc = 0x1B88C8u;
            goto label_1b88c8;
        }
    }
    ctx->pc = 0x1B88B4u;
    // 0x1b88b4: 0xc06e240  jal         func_1B8900
    ctx->pc = 0x1B88B4u;
    SET_GPR_U32(ctx, 31, 0x1B88BCu);
    ctx->pc = 0x1B8900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8900u, 0x1B88B4u, 0x1B88BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B88BCu;
label_1b88bc:
    // 0x1b88bc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b88bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b88c0: 0xc06ec9c  jal         func_1BB270
    ctx->pc = 0x1B88C0u;
    SET_GPR_U32(ctx, 31, 0x1B88C8u);
    ctx->pc = 0x1B88C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B88C0u;
    // 0x1b88c4: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB270u, 0x1B88C0u, 0x1B88C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B88C8u;
label_1b88c8:
    // 0x1b88c8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1b88c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1b88cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b88ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b88d0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B88D0u;
    {
        const bool branch_taken_0x1b88d0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B88D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B88D0u;
        // 0x1b88d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b88d0) {
            ctx->pc = 0x1B88E4u;
            goto label_1b88e4;
        }
    }
    ctx->pc = 0x1B88D8u;
    // 0x1b88d8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B88D8u;
    SET_GPR_U32(ctx, 31, 0x1B88E0u);
    ctx->pc = 0x1B88DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B88D8u;
    // 0x1b88dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B88D8u, 0x1B88E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B88E0u;
label_1b88e0:
    // 0x1b88e0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b88e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b88e4:
    // 0x1b88e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b88e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b88e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b88e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b88ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b88ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b88f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b88f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b88f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B88F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B88F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B88F4u;
        // 0x1b88f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B88F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B88FCu;
}
