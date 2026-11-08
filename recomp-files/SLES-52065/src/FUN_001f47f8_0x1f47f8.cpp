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

// Function: FUN_001f47f8
// Address: 0x1f47f8 - 0x1f4910
void FUN_001f47f8_0x1f47f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f47f8_0x1f47f8");
#endif

    switch (ctx->pc) {
        case 0x1f484cu: goto label_1f484c;
        case 0x1f4868u: goto label_1f4868;
        case 0x1f4874u: goto label_1f4874;
        case 0x1f4888u: goto label_1f4888;
        case 0x1f48a0u: goto label_1f48a0;
        case 0x1f48b4u: goto label_1f48b4;
        case 0x1f48c0u: goto label_1f48c0;
        case 0x1f48d8u: goto label_1f48d8;
        default: break;
    }

    ctx->pc = 0x1f47f8u;

    // 0x1f47f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f47f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1f47fc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f47fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f4800: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1f4800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1f4804: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f4804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f4808: 0x8c53a800  lw          $s3, -0x5800($v0)
    ctx->pc = 0x1f4808u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x21A800u));
    // 0x1f480c: 0x2467b2b8  addiu       $a3, $v1, -0x4D48
    ctx->pc = 0x1f480cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947512));
    // 0x1f4810: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1f4810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1f4814: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1f4814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1f4818: 0x26620040  addiu       $v0, $s3, 0x40
    ctx->pc = 0x1f4818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1f481c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f481cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f4820: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1f4820u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4824: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f4824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f4828: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f4828u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f482c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f482cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f4830: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1f4830u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4834: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1f4834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1f4838: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f4838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f483c: 0x8c64b2b8  lw          $a0, -0x4D48($v1)
    ctx->pc = 0x1f483cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x21B2B8u));
    // 0x1f4840: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x1f4840u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x21B2BCu));
    // 0x1f4844: 0xc07d1fa  jal         func_1F47E8
    ctx->pc = 0x1F4844u;
    SET_GPR_U32(ctx, 31, 0x1F484Cu);
    ctx->pc = 0x1F4848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4844u;
    // 0x1f4848: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F47E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F47E8u, 0x1F4844u, 0x1F484Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F484Cu;
label_1f484c:
    // 0x1f484c: 0x2a430010  slti        $v1, $s2, 0x10
    ctx->pc = 0x1f484cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1f4850: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1f4850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f4854: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f4854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4858: 0x43900a  movz        $s2, $v0, $v1
    ctx->pc = 0x1f4858u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x1f485c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f485cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4860: 0xc07d1ea  jal         func_1F47A8
    ctx->pc = 0x1F4860u;
    SET_GPR_U32(ctx, 31, 0x1F4868u);
    ctx->pc = 0x1F4864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4860u;
    // 0x1f4864: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F47A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F47A8u, 0x1F4860u, 0x1F4868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4868u;
label_1f4868:
    // 0x1f4868: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1f4868u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1f486c: 0xc080748  jal         func_201D20
    ctx->pc = 0x1F486Cu;
    SET_GPR_U32(ctx, 31, 0x1F4874u);
    ctx->pc = 0x1F4870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F486Cu;
    // 0x1f4870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x1F486Cu, 0x1F4874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4874u;
label_1f4874:
    // 0x1f4874: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x1f4874u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f4878: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1f4878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f487c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f487cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4880: 0xc07d1ea  jal         func_1F47A8
    ctx->pc = 0x1F4880u;
    SET_GPR_U32(ctx, 31, 0x1F4888u);
    ctx->pc = 0x1F4884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4880u;
    // 0x1f4884: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F47A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F47A8u, 0x1F4880u, 0x1F4888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4888u;
label_1f4888:
    // 0x1f4888: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f4888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f488c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1f488cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1f4890: 0x1a400015  blez        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F4890u;
    {
        const bool branch_taken_0x1f4890 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1F4894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4890u;
        // 0x1f4894: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4890) {
            ctx->pc = 0x1F48E8u;
            goto label_1f48e8;
        }
    }
    ctx->pc = 0x1F4898u;
    // 0x1f4898: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1f4898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f489c: 0x0  nop
    ctx->pc = 0x1f489cu;
    // NOP
label_1f48a0:
    // 0x1f48a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f48a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f48a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f48a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f48a8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1f48a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f48ac: 0xc07d1ea  jal         func_1F47A8
    ctx->pc = 0x1F48ACu;
    SET_GPR_U32(ctx, 31, 0x1F48B4u);
    ctx->pc = 0x1F48B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F48ACu;
    // 0x1f48b0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F47A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F47A8u, 0x1F48ACu, 0x1F48B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F48B4u;
label_1f48b4:
    // 0x1f48b4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1f48b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1f48b8: 0xc080748  jal         func_201D20
    ctx->pc = 0x1F48B8u;
    SET_GPR_U32(ctx, 31, 0x1F48C0u);
    ctx->pc = 0x1F48BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F48B8u;
    // 0x1f48bc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x1F48B8u, 0x1F48C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F48C0u;
label_1f48c0:
    // 0x1f48c0: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x1f48c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f48c4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1f48c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f48c8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1f48c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f48cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f48ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f48d0: 0xc07d1ea  jal         func_1F47A8
    ctx->pc = 0x1F48D0u;
    SET_GPR_U32(ctx, 31, 0x1F48D8u);
    ctx->pc = 0x1F48D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F48D0u;
    // 0x1f48d4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F47A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F47A8u, 0x1F48D0u, 0x1F48D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F48D8u;
label_1f48d8:
    // 0x1f48d8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f48d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f48dc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1f48dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1f48e0: 0x1640ffef  bnez        $s2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1F48E0u;
    {
        const bool branch_taken_0x1f48e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F48E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F48E0u;
        // 0x1f48e4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f48e0) {
            ctx->pc = 0x1F48A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f48a0;
        }
    }
    ctx->pc = 0x1F48E8u;
label_1f48e8:
    // 0x1f48e8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1f48e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f48ec: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1f48ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f48f0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1f48f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f48f4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1f48f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f48f8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1f48f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f48fc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f48fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f4900: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f4900u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4904: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f4904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4908: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4908u;
        // 0x1f490c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4910u;
}
