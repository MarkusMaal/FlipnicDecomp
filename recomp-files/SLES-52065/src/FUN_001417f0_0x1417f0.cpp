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

// Function: FUN_001417f0
// Address: 0x1417f0 - 0x1418e4
void FUN_001417f0_0x1417f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001417f0_0x1417f0");
#endif

    switch (ctx->pc) {
        case 0x141838u: goto label_141838;
        case 0x141844u: goto label_141844;
        case 0x141874u: goto label_141874;
        case 0x141890u: goto label_141890;
        case 0x1418acu: goto label_1418ac;
        case 0x1418c4u: goto label_1418c4;
        default: break;
    }

    ctx->pc = 0x1417f0u;

    // 0x1417f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1417f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1417f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1417f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1417f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1417f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1417fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1417fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x141800: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x141800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x141804: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x141808: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x141808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14180c: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x14180Cu;
    {
        const bool branch_taken_0x14180c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x141810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14180Cu;
        // 0x141810: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14180c) {
            ctx->pc = 0x1418C4u;
            goto label_1418c4;
        }
    }
    ctx->pc = 0x141814u;
    // 0x141814: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x141814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x141818: 0x244291b0  addiu       $v0, $v0, -0x6E50
    ctx->pc = 0x141818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939056));
    // 0x14181c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14181cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x141820: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x141820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x141824: 0x8e120038  lw          $s2, 0x38($s0)
    ctx->pc = 0x141824u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x141828: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x141828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14182c: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x14182cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x141830: 0x12510008  beq         $s2, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x141830u;
    {
        const bool branch_taken_0x141830 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        if (branch_taken_0x141830) {
            ctx->pc = 0x141854u;
            goto label_141854;
        }
    }
    ctx->pc = 0x141838u;
label_141838:
    // 0x141838: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x141838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14183c: 0xc050668  jal         func_1419A0
    ctx->pc = 0x14183Cu;
    SET_GPR_U32(ctx, 31, 0x141844u);
    ctx->pc = 0x141840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14183Cu;
    // 0x141840: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1419A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1419A0u, 0x14183Cu, 0x141844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141844u;
label_141844:
    // 0x141844: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x141844u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x141848: 0x0  nop
    ctx->pc = 0x141848u;
    // NOP
    // 0x14184c: 0x1651fffa  bne         $s2, $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14184Cu;
    {
        const bool branch_taken_0x14184c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        if (branch_taken_0x14184c) {
            ctx->pc = 0x141838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141838;
        }
    }
    ctx->pc = 0x141854u;
label_141854:
    // 0x141854: 0x0  nop
    ctx->pc = 0x141854u;
    // NOP
    // 0x141858: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x141858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x14185c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14185Cu;
    {
        const bool branch_taken_0x14185c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14185c) {
            ctx->pc = 0x141874u;
            goto label_141874;
        }
    }
    ctx->pc = 0x141864u;
    // 0x141864: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x141864u;
    {
        const bool branch_taken_0x141864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x141868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141864u;
        // 0x141868: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141864) {
            ctx->pc = 0x141874u;
            goto label_141874;
        }
    }
    ctx->pc = 0x14186Cu;
    // 0x14186c: 0xc050ec4  jal         func_143B10
    ctx->pc = 0x14186Cu;
    SET_GPR_U32(ctx, 31, 0x141874u);
    ctx->pc = 0x143B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B10u, 0x14186Cu, 0x141874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141874u;
label_141874:
    // 0x141874: 0x2604003c  addiu       $a0, $s0, 0x3C
    ctx->pc = 0x141874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x141878: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x141878u;
    {
        const bool branch_taken_0x141878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x141878) {
            ctx->pc = 0x141890u;
            goto label_141890;
        }
    }
    ctx->pc = 0x141880u;
    // 0x141880: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x141880u;
    {
        const bool branch_taken_0x141880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x141884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141880u;
        // 0x141884: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141880) {
            ctx->pc = 0x141890u;
            goto label_141890;
        }
    }
    ctx->pc = 0x141888u;
    // 0x141888: 0xc048414  jal         func_121050
    ctx->pc = 0x141888u;
    SET_GPR_U32(ctx, 31, 0x141890u);
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x141888u, 0x141890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141890u;
label_141890:
    // 0x141890: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x141890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x141894: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x141894u;
    {
        const bool branch_taken_0x141894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x141898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141894u;
        // 0x141898: 0x13143c  dsll32      $v0, $s3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141894) {
            ctx->pc = 0x1418B0u;
            goto label_1418b0;
        }
    }
    ctx->pc = 0x14189Cu;
    // 0x14189c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14189Cu;
    {
        const bool branch_taken_0x14189c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1418A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14189Cu;
        // 0x1418a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14189c) {
            ctx->pc = 0x1418ACu;
            goto label_1418ac;
        }
    }
    ctx->pc = 0x1418A4u;
    // 0x1418a4: 0xc048414  jal         func_121050
    ctx->pc = 0x1418A4u;
    SET_GPR_U32(ctx, 31, 0x1418ACu);
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x1418A4u, 0x1418ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1418ACu;
label_1418ac:
    // 0x1418ac: 0x13143c  dsll32      $v0, $s3, 16
    ctx->pc = 0x1418acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
label_1418b0:
    // 0x1418b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1418b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1418b4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1418B4u;
    {
        const bool branch_taken_0x1418b4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1418B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1418B4u;
        // 0x1418b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1418b4) {
            ctx->pc = 0x1418C8u;
            goto label_1418c8;
        }
    }
    ctx->pc = 0x1418BCu;
    // 0x1418bc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1418BCu;
    SET_GPR_U32(ctx, 31, 0x1418C4u);
    ctx->pc = 0x1418C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1418BCu;
    // 0x1418c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1418BCu, 0x1418C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1418C4u;
label_1418c4:
    // 0x1418c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1418c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1418c8:
    // 0x1418c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1418c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1418cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1418ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1418d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1418d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1418d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1418d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1418d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1418d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1418dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1418DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1418E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1418DCu;
        // 0x1418e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1418DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1418E4u;
}
