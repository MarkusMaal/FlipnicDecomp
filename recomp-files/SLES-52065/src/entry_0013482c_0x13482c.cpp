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

// Function: entry_0013482c
// Address: 0x13482c - 0x134890
void entry_0013482c_0x13482c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013482c_0x13482c");
#endif

    switch (ctx->pc) {
        case 0x134840u: goto label_134840;
        case 0x13485cu: goto label_13485c;
        case 0x134864u: goto label_134864;
        case 0x134874u: goto label_134874;
        case 0x134888u: goto label_134888;
        default: break;
    }

    ctx->pc = 0x13482cu;

label_13482c:
    // 0x13482c: 0x2332821  addu        $a1, $s1, $s3
    ctx->pc = 0x13482cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_134830:
    // 0x134830: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x134830u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_134834:
    // 0x134834: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x134834u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_134838:
    // 0x134838: 0x320f809  jalr        $t9
label_13483c:
    if (ctx->pc == 0x13483Cu) {
        ctx->pc = 0x13483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134838u;
        // 0x13483c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134840u;
        goto label_134840;
    }
    ctx->pc = 0x134838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x134840u);
        ctx->pc = 0x13483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134838u;
        // 0x13483c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134838u, 0x134840u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x134840u;
label_134840:
    // 0x134840: 0xae540080  sw          $s4, 0x80($s2)
    ctx->pc = 0x134840u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 20));
label_134844:
    // 0x134844: 0x12e00012  beqz        $s7, . + 4 + (0x12 << 2)
label_134848:
    if (ctx->pc == 0x134848u) {
        ctx->pc = 0x134848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134844u;
        // 0x134848: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13484Cu;
        goto label_13484c;
    }
    ctx->pc = 0x134844u;
    {
        const bool branch_taken_0x134844 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x134848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134844u;
        // 0x134848: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134844) {
            ctx->pc = 0x134890u;
            return;
        }
    }
    ctx->pc = 0x13484Cu;
label_13484c:
    // 0x13484c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13484cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_134850:
    // 0x134850: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x134850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_134854:
    // 0x134854: 0xc080702  jal         func_201C08
label_134858:
    if (ctx->pc == 0x134858u) {
        ctx->pc = 0x134858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134854u;
        // 0x134858: 0x24a5eec0  addiu       $a1, $a1, -0x1140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13485Cu;
        goto label_13485c;
    }
    ctx->pc = 0x134854u;
    SET_GPR_U32(ctx, 31, 0x13485Cu);
    ctx->pc = 0x134858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134854u;
    // 0x134858: 0x24a5eec0  addiu       $a1, $a1, -0x1140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x134854u, 0x13485Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13485Cu;
label_13485c:
    // 0x13485c: 0xc04d32c  jal         func_134CB0
label_134860:
    if (ctx->pc == 0x134860u) {
        ctx->pc = 0x134860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13485Cu;
        // 0x134860: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134864u;
        goto label_134864;
    }
    ctx->pc = 0x13485Cu;
    SET_GPR_U32(ctx, 31, 0x134864u);
    ctx->pc = 0x134860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13485Cu;
    // 0x134860: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CB0u, 0x13485Cu, 0x134864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134864u;
label_134864:
    // 0x134864: 0x2332821  addu        $a1, $s1, $s3
    ctx->pc = 0x134864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_134868:
    // 0x134868: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x134868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_13486c:
    // 0x13486c: 0xc07fdfe  jal         func_1FF7F8
label_134870:
    if (ctx->pc == 0x134870u) {
        ctx->pc = 0x134870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13486Cu;
        // 0x134870: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134874u;
        goto label_134874;
    }
    ctx->pc = 0x13486Cu;
    SET_GPR_U32(ctx, 31, 0x134874u);
    ctx->pc = 0x134870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13486Cu;
    // 0x134870: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x13486Cu, 0x134874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134874u;
label_134874:
    // 0x134874: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x134874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_134878:
    // 0x134878: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x134878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_13487c:
    // 0x13487c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13487cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_134880:
    // 0x134880: 0xc053fac  jal         func_14FEB0
label_134884:
    if (ctx->pc == 0x134884u) {
        ctx->pc = 0x134884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134880u;
        // 0x134884: 0x26730100  addiu       $s3, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134888u;
        goto label_134888;
    }
    ctx->pc = 0x134880u;
    SET_GPR_U32(ctx, 31, 0x134888u);
    ctx->pc = 0x134884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134880u;
    // 0x134884: 0x26730100  addiu       $s3, $s3, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FEB0u, 0x134880u, 0x134888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134888u;
label_134888:
    // 0x134888: 0x10000006  b           . + 4 + (0x6 << 2)
label_13488c:
    if (ctx->pc == 0x13488Cu) {
        ctx->pc = 0x13488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134888u;
        // 0x13488c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134890u;
        goto label_fallthrough_0x134888;
    }
    ctx->pc = 0x134888u;
    {
        const bool branch_taken_0x134888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134888u;
        // 0x13488c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134888) {
            ctx->pc = 0x1348A4u;
            return;
        }
    }
label_fallthrough_0x134888:
    ctx->pc = 0x134890u;
}
