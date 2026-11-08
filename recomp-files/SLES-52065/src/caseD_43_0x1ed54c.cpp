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

// Function: caseD_43
// Address: 0x1ed54c - 0x1ed5b8
void caseD_43_0x1ed54c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_43_0x1ed54c");
#endif

    switch (ctx->pc) {
        case 0x1ed54cu: goto label_1ed54c;
        case 0x1ed550u: goto label_1ed550;
        case 0x1ed554u: goto label_1ed554;
        case 0x1ed558u: goto label_1ed558;
        case 0x1ed55cu: goto label_1ed55c;
        case 0x1ed560u: goto label_1ed560;
        case 0x1ed564u: goto label_1ed564;
        case 0x1ed568u: goto label_1ed568;
        case 0x1ed56cu: goto label_1ed56c;
        case 0x1ed570u: goto label_1ed570;
        case 0x1ed574u: goto label_1ed574;
        case 0x1ed578u: goto label_1ed578;
        case 0x1ed57cu: goto label_1ed57c;
        case 0x1ed580u: goto label_1ed580;
        case 0x1ed584u: goto label_1ed584;
        case 0x1ed588u: goto label_1ed588;
        case 0x1ed58cu: goto label_1ed58c;
        case 0x1ed590u: goto label_1ed590;
        case 0x1ed594u: goto label_1ed594;
        case 0x1ed598u: goto label_1ed598;
        case 0x1ed59cu: goto label_1ed59c;
        case 0x1ed5a0u: goto label_1ed5a0;
        case 0x1ed5a4u: goto label_1ed5a4;
        case 0x1ed5a8u: goto label_1ed5a8;
        case 0x1ed5acu: goto label_1ed5ac;
        case 0x1ed5b0u: goto label_1ed5b0;
        case 0x1ed5b4u: goto label_1ed5b4;
        default: break;
    }

    ctx->pc = 0x1ed54cu;

label_1ed54c:
    // 0x1ed54c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1ed54cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1ed550:
    // 0x1ed550: 0x8e63fff8  lw          $v1, -0x8($s3)
    ctx->pc = 0x1ed550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_1ed554:
    // 0x1ed554: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1ed554u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1ed558:
    // 0x1ed558: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_1ed55c:
    if (ctx->pc == 0x1ED55Cu) {
        ctx->pc = 0x1ED55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED558u;
        // 0x1ed55c: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED560u;
        goto label_1ed560;
    }
    ctx->pc = 0x1ED558u;
    {
        const bool branch_taken_0x1ed558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED558u;
        // 0x1ed55c: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed558) {
            ctx->pc = 0x1ED5B8u;
            return;
        }
    }
    ctx->pc = 0x1ED560u;
label_1ed560:
    // 0x1ed560: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x1ed560u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
label_1ed564:
    // 0x1ed564: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1ed564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1ed568:
    // 0x1ed568: 0x8ea2a3c4  lw          $v0, -0x5C3C($s5)
    ctx->pc = 0x1ed568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943684)));
label_1ed56c:
    // 0x1ed56c: 0x40f809  jalr        $v0
label_1ed570:
    if (ctx->pc == 0x1ED570u) {
        ctx->pc = 0x1ED570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED56Cu;
        // 0x1ed570: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED574u;
        goto label_1ed574;
    }
    ctx->pc = 0x1ED56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED574u);
        ctx->pc = 0x1ED570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED56Cu;
        // 0x1ed570: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED56Cu, 0x1ED574u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED574u;
label_1ed574:
    // 0x1ed574: 0x8ea3a3c4  lw          $v1, -0x5C3C($s5)
    ctx->pc = 0x1ed574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943684)));
label_1ed578:
    // 0x1ed578: 0x60f809  jalr        $v1
label_1ed57c:
    if (ctx->pc == 0x1ED57Cu) {
        ctx->pc = 0x1ED57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED578u;
        // 0x1ed57c: 0x2404006e  addiu       $a0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED580u;
        goto label_1ed580;
    }
    ctx->pc = 0x1ED578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1ED580u);
        ctx->pc = 0x1ED57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED578u;
        // 0x1ed57c: 0x2404006e  addiu       $a0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED578u, 0x1ED580u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED580u;
label_1ed580:
    // 0x1ed580: 0x8ea2a3c4  lw          $v0, -0x5C3C($s5)
    ctx->pc = 0x1ed580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943684)));
label_1ed584:
    // 0x1ed584: 0x40f809  jalr        $v0
label_1ed588:
    if (ctx->pc == 0x1ED588u) {
        ctx->pc = 0x1ED588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED584u;
        // 0x1ed588: 0x24040075  addiu       $a0, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED58Cu;
        goto label_1ed58c;
    }
    ctx->pc = 0x1ED584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED58Cu);
        ctx->pc = 0x1ED588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED584u;
        // 0x1ed588: 0x24040075  addiu       $a0, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED584u, 0x1ED58Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED58Cu;
label_1ed58c:
    // 0x1ed58c: 0x8ea3a3c4  lw          $v1, -0x5C3C($s5)
    ctx->pc = 0x1ed58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943684)));
label_1ed590:
    // 0x1ed590: 0x60f809  jalr        $v1
label_1ed594:
    if (ctx->pc == 0x1ED594u) {
        ctx->pc = 0x1ED594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED590u;
        // 0x1ed594: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED598u;
        goto label_1ed598;
    }
    ctx->pc = 0x1ED590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1ED598u);
        ctx->pc = 0x1ED594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED590u;
        // 0x1ed594: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED590u, 0x1ED598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED598u;
label_1ed598:
    // 0x1ed598: 0x8ea2a3c4  lw          $v0, -0x5C3C($s5)
    ctx->pc = 0x1ed598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943684)));
label_1ed59c:
    // 0x1ed59c: 0x40f809  jalr        $v0
label_1ed5a0:
    if (ctx->pc == 0x1ED5A0u) {
        ctx->pc = 0x1ED5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED59Cu;
        // 0x1ed5a0: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED5A4u;
        goto label_1ed5a4;
    }
    ctx->pc = 0x1ED59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED5A4u);
        ctx->pc = 0x1ED5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED59Cu;
        // 0x1ed5a0: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED59Cu, 0x1ED5A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED5A4u;
label_1ed5a4:
    // 0x1ed5a4: 0x8ea3a3c4  lw          $v1, -0x5C3C($s5)
    ctx->pc = 0x1ed5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943684)));
label_1ed5a8:
    // 0x1ed5a8: 0x60f809  jalr        $v1
label_1ed5ac:
    if (ctx->pc == 0x1ED5ACu) {
        ctx->pc = 0x1ED5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED5A8u;
        // 0x1ed5ac: 0x24040029  addiu       $a0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED5B0u;
        goto label_1ed5b0;
    }
    ctx->pc = 0x1ED5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1ED5B0u);
        ctx->pc = 0x1ED5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED5A8u;
        // 0x1ed5ac: 0x24040029  addiu       $a0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED5A8u, 0x1ED5B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED5B0u;
label_1ed5b0:
    // 0x1ed5b0: 0x10000023  b           . + 4 + (0x23 << 2)
label_1ed5b4:
    if (ctx->pc == 0x1ED5B4u) {
        ctx->pc = 0x1ED5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED5B0u;
        // 0x1ed5b4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED5B8u;
        goto label_fallthrough_0x1ed5b0;
    }
    ctx->pc = 0x1ED5B0u;
    {
        const bool branch_taken_0x1ed5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED5B0u;
        // 0x1ed5b4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed5b0) {
            ctx->pc = 0x1ED640u;
            return;
        }
    }
label_fallthrough_0x1ed5b0:
    ctx->pc = 0x1ED5B8u;
}
