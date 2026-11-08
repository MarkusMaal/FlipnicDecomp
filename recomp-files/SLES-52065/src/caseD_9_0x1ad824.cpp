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

// Function: caseD_9
// Address: 0x1ad824 - 0x1ad86c
void caseD_9_0x1ad824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x1ad824");
#endif

    switch (ctx->pc) {
        case 0x1ad824u: goto label_1ad824;
        case 0x1ad828u: goto label_1ad828;
        case 0x1ad82cu: goto label_1ad82c;
        case 0x1ad830u: goto label_1ad830;
        case 0x1ad834u: goto label_1ad834;
        case 0x1ad838u: goto label_1ad838;
        case 0x1ad83cu: goto label_1ad83c;
        case 0x1ad840u: goto label_1ad840;
        case 0x1ad844u: goto label_1ad844;
        case 0x1ad848u: goto label_1ad848;
        case 0x1ad84cu: goto label_1ad84c;
        case 0x1ad850u: goto label_1ad850;
        case 0x1ad854u: goto label_1ad854;
        case 0x1ad858u: goto label_1ad858;
        case 0x1ad85cu: goto label_1ad85c;
        case 0x1ad860u: goto label_1ad860;
        case 0x1ad864u: goto label_1ad864;
        case 0x1ad868u: goto label_1ad868;
        default: break;
    }

    ctx->pc = 0x1ad824u;

label_1ad824:
    // 0x1ad824: 0x8e2407f4  lw          $a0, 0x7F4($s1)
    ctx->pc = 0x1ad824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2036)));
label_1ad828:
    // 0x1ad828: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1ad828u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ad82c:
    // 0x1ad82c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1ad82cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1ad830:
    // 0x1ad830: 0x320f809  jalr        $t9
label_1ad834:
    if (ctx->pc == 0x1AD834u) {
        ctx->pc = 0x1AD838u;
        goto label_1ad838;
    }
    ctx->pc = 0x1AD830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AD838u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD830u, 0x1AD838u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AD838u;
label_1ad838:
    // 0x1ad838: 0xc069afc  jal         func_1A6BF0
label_1ad83c:
    if (ctx->pc == 0x1AD83Cu) {
        ctx->pc = 0x1AD83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD838u;
        // 0x1ad83c: 0x262406dc  addiu       $a0, $s1, 0x6DC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD840u;
        goto label_1ad840;
    }
    ctx->pc = 0x1AD838u;
    SET_GPR_U32(ctx, 31, 0x1AD840u);
    ctx->pc = 0x1AD83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD838u;
    // 0x1ad83c: 0x262406dc  addiu       $a0, $s1, 0x6DC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BF0u, 0x1AD838u, 0x1AD840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD840u;
label_1ad840:
    // 0x1ad840: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1ad844:
    if (ctx->pc == 0x1AD844u) {
        ctx->pc = 0x1AD844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD840u;
        // 0x1ad844: 0x262406dc  addiu       $a0, $s1, 0x6DC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD848u;
        goto label_1ad848;
    }
    ctx->pc = 0x1AD840u;
    {
        const bool branch_taken_0x1ad840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD840u;
        // 0x1ad844: 0x262406dc  addiu       $a0, $s1, 0x6DC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad840) {
            ctx->pc = 0x1AD86Cu;
            return;
        }
    }
    ctx->pc = 0x1AD848u;
label_1ad848:
    // 0x1ad848: 0xc069ae8  jal         func_1A6BA0
label_1ad84c:
    if (ctx->pc == 0x1AD84Cu) {
        ctx->pc = 0x1AD850u;
        goto label_1ad850;
    }
    ctx->pc = 0x1AD848u;
    SET_GPR_U32(ctx, 31, 0x1AD850u);
    ctx->pc = 0x1A6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BA0u, 0x1AD848u, 0x1AD850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD850u;
label_1ad850:
    // 0x1ad850: 0x8e2307f4  lw          $v1, 0x7F4($s1)
    ctx->pc = 0x1ad850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2036)));
label_1ad854:
    // 0x1ad854: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad858:
    // 0x1ad858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ad85c:
    // 0x1ad85c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ad85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ad860:
    // 0x1ad860: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1ad860u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1ad864:
    // 0x1ad864: 0xc063e08  jal         func_18F820
label_1ad868:
    if (ctx->pc == 0x1AD868u) {
        ctx->pc = 0x1AD868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD864u;
        // 0x1ad868: 0xa22206c1  sb          $v0, 0x6C1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1729), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD86Cu;
        goto label_fallthrough_0x1ad864;
    }
    ctx->pc = 0x1AD864u;
    SET_GPR_U32(ctx, 31, 0x1AD86Cu);
    ctx->pc = 0x1AD868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD864u;
    // 0x1ad868: 0xa22206c1  sb          $v0, 0x6C1($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1729), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AD864u, 0x1AD86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x1ad864:
    ctx->pc = 0x1AD86Cu;
}
