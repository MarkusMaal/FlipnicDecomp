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

// Function: FUN_001377e0
// Address: 0x1377e0 - 0x137884
void FUN_001377e0_0x1377e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001377e0_0x1377e0");
#endif

    switch (ctx->pc) {
        case 0x137818u: goto label_137818;
        case 0x137820u: goto label_137820;
        case 0x137828u: goto label_137828;
        case 0x137830u: goto label_137830;
        case 0x137838u: goto label_137838;
        case 0x137854u: goto label_137854;
        case 0x13786cu: goto label_13786c;
        default: break;
    }

    ctx->pc = 0x1377e0u;

    // 0x1377e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1377e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1377e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1377e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1377e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1377e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1377ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1377ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1377f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1377f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1377f4: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1377F4u;
    {
        const bool branch_taken_0x1377f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1377F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1377F4u;
        // 0x1377f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1377f4) {
            ctx->pc = 0x13786Cu;
            goto label_13786c;
        }
    }
    ctx->pc = 0x1377FCu;
    // 0x1377fc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1377fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x137800: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x137800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x137804: 0x24429070  addiu       $v0, $v0, -0x6F90
    ctx->pc = 0x137804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938736));
    // 0x137808: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x137808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x13780c: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x13780cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x137810: 0xc07a394  jal         func_1E8E50
    ctx->pc = 0x137810u;
    SET_GPR_U32(ctx, 31, 0x137818u);
    ctx->pc = 0x137814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137810u;
    // 0x137814: 0x24a57890  addiu       $a1, $a1, 0x7890 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8E50u, 0x137810u, 0x137818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137818u;
label_137818:
    // 0x137818: 0xc0401a4  jal         func_100690
    ctx->pc = 0x137818u;
    SET_GPR_U32(ctx, 31, 0x137820u);
    ctx->pc = 0x13781Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137818u;
    // 0x13781c: 0x8e240068  lw          $a0, 0x68($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x137818u, 0x137820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137820u;
label_137820:
    // 0x137820: 0xc0401a4  jal         func_100690
    ctx->pc = 0x137820u;
    SET_GPR_U32(ctx, 31, 0x137828u);
    ctx->pc = 0x137824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137820u;
    // 0x137824: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x137820u, 0x137828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137828u;
label_137828:
    // 0x137828: 0xc04018c  jal         func_100630
    ctx->pc = 0x137828u;
    SET_GPR_U32(ctx, 31, 0x137830u);
    ctx->pc = 0x13782Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137828u;
    // 0x13782c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x137828u, 0x137830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137830u;
label_137830:
    // 0x137830: 0xc04018c  jal         func_100630
    ctx->pc = 0x137830u;
    SET_GPR_U32(ctx, 31, 0x137838u);
    ctx->pc = 0x137834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137830u;
    // 0x137834: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x137830u, 0x137838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137838u;
label_137838:
    // 0x137838: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x137838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x13783c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13783Cu;
    {
        const bool branch_taken_0x13783c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x137840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13783Cu;
        // 0x137840: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13783c) {
            ctx->pc = 0x137858u;
            goto label_137858;
        }
    }
    ctx->pc = 0x137844u;
    // 0x137844: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137844u;
    {
        const bool branch_taken_0x137844 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x137848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137844u;
        // 0x137848: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137844) {
            ctx->pc = 0x137854u;
            goto label_137854;
        }
    }
    ctx->pc = 0x13784Cu;
    // 0x13784c: 0xc04ede4  jal         func_13B790
    ctx->pc = 0x13784Cu;
    SET_GPR_U32(ctx, 31, 0x137854u);
    ctx->pc = 0x13B790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B790u, 0x13784Cu, 0x137854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137854u;
label_137854:
    // 0x137854: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x137854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_137858:
    // 0x137858: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x137858u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13785c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13785Cu;
    {
        const bool branch_taken_0x13785c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x137860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13785Cu;
        // 0x137860: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13785c) {
            ctx->pc = 0x137870u;
            goto label_137870;
        }
    }
    ctx->pc = 0x137864u;
    // 0x137864: 0xc0401a4  jal         func_100690
    ctx->pc = 0x137864u;
    SET_GPR_U32(ctx, 31, 0x13786Cu);
    ctx->pc = 0x137868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137864u;
    // 0x137868: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x137864u, 0x13786Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13786Cu;
label_13786c:
    // 0x13786c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x13786cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_137870:
    // 0x137870: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x137870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137874: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x137874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137878: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x137878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13787c: 0x3e00008  jr          $ra
    ctx->pc = 0x13787Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13787Cu;
        // 0x137880: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13787Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137884u;
}
