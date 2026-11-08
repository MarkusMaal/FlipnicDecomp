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

// Function: entry_0013e82c
// Address: 0x13e82c - 0x13e8d4
void entry_0013e82c_0x13e82c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e82c_0x13e82c");
#endif

    switch (ctx->pc) {
        case 0x13e844u: goto label_13e844;
        case 0x13e884u: goto label_13e884;
        case 0x13e8b4u: goto label_13e8b4;
        case 0x13e8ccu: goto label_13e8cc;
        default: break;
    }

    ctx->pc = 0x13e82cu;

label_13e82c:
    // 0x13e82c: 0x8e220124  lw          $v0, 0x124($s1)
    ctx->pc = 0x13e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_13e830:
    // 0x13e830: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x13e830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_13e834:
    // 0x13e834: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13e834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13e838:
    // 0x13e838: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x13e838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13e83c:
    // 0x13e83c: 0xc05ff20  jal         func_17FC80
label_13e840:
    if (ctx->pc == 0x13E840u) {
        ctx->pc = 0x13E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E83Cu;
        // 0x13e840: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E844u;
        goto label_13e844;
    }
    ctx->pc = 0x13E83Cu;
    SET_GPR_U32(ctx, 31, 0x13E844u);
    ctx->pc = 0x13E840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E83Cu;
    // 0x13e840: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FC80u, 0x13E83Cu, 0x13E844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E844u;
label_13e844:
    // 0x13e844: 0x8e230124  lw          $v1, 0x124($s1)
    ctx->pc = 0x13e844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_13e848:
    // 0x13e848: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x13e848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e84c:
    // 0x13e84c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x13e84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_13e850:
    // 0x13e850: 0x1470004a  bne         $v1, $s0, . + 4 + (0x4A << 2)
label_13e854:
    if (ctx->pc == 0x13E854u) {
        ctx->pc = 0x13E858u;
        goto label_13e858;
    }
    ctx->pc = 0x13E850u;
    {
        const bool branch_taken_0x13e850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x13e850) {
            ctx->pc = 0x13E97Cu;
            return;
        }
    }
    ctx->pc = 0x13E858u;
label_13e858:
    // 0x13e858: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x13e858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
label_13e85c:
    // 0x13e85c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_13e860:
    if (ctx->pc == 0x13E860u) {
        ctx->pc = 0x13E864u;
        goto label_13e864;
    }
    ctx->pc = 0x13E85Cu;
    {
        const bool branch_taken_0x13e85c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e85c) {
            ctx->pc = 0x13E8D4u;
            return;
        }
    }
    ctx->pc = 0x13E864u;
label_13e864:
    // 0x13e864: 0x8e2301b0  lw          $v1, 0x1B0($s1)
    ctx->pc = 0x13e864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
label_13e868:
    // 0x13e868: 0x8e22019c  lw          $v0, 0x19C($s1)
    ctx->pc = 0x13e868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 412)));
label_13e86c:
    // 0x13e86c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x13e86cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_13e870:
    // 0x13e870: 0x0  nop
    ctx->pc = 0x13e870u;
    // NOP
label_13e874:
    // 0x13e874: 0x0  nop
    ctx->pc = 0x13e874u;
    // NOP
label_13e878:
    // 0x13e878: 0x2812  mflo        $a1
    ctx->pc = 0x13e878u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_13e87c:
    // 0x13e87c: 0xc04fc44  jal         func_13F110
label_13e880:
    if (ctx->pc == 0x13E880u) {
        ctx->pc = 0x13E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E87Cu;
        // 0x13e880: 0x262401a0  addiu       $a0, $s1, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E884u;
        goto label_13e884;
    }
    ctx->pc = 0x13E87Cu;
    SET_GPR_U32(ctx, 31, 0x13E884u);
    ctx->pc = 0x13E880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E87Cu;
    // 0x13e880: 0x262401a0  addiu       $a0, $s1, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F110u, 0x13E87Cu, 0x13E884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E884u;
label_13e884:
    // 0x13e884: 0x8e2501b0  lw          $a1, 0x1B0($s1)
    ctx->pc = 0x13e884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
label_13e888:
    // 0x13e888: 0x8e23019c  lw          $v1, 0x19C($s1)
    ctx->pc = 0x13e888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 412)));
label_13e88c:
    // 0x13e88c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13e890:
    // 0x13e890: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x13e890u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_13e894:
    // 0x13e894: 0x0  nop
    ctx->pc = 0x13e894u;
    // NOP
label_13e898:
    // 0x13e898: 0x0  nop
    ctx->pc = 0x13e898u;
    // NOP
label_13e89c:
    // 0x13e89c: 0x1810  mfhi        $v1
    ctx->pc = 0x13e89cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_13e8a0:
    // 0x13e8a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13e8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_13e8a4:
    // 0x13e8a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13e8a8:
    // 0x13e8a8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x13e8a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13e8ac:
    // 0x13e8ac: 0xc04fccc  jal         func_13F330
label_13e8b0:
    if (ctx->pc == 0x13E8B0u) {
        ctx->pc = 0x13E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E8ACu;
        // 0x13e8b0: 0x2624019c  addiu       $a0, $s1, 0x19C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 412));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E8B4u;
        goto label_13e8b4;
    }
    ctx->pc = 0x13E8ACu;
    SET_GPR_U32(ctx, 31, 0x13E8B4u);
    ctx->pc = 0x13E8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E8ACu;
    // 0x13e8b0: 0x2624019c  addiu       $a0, $s1, 0x19C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 412));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F330u, 0x13E8ACu, 0x13E8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E8B4u;
label_13e8b4:
    // 0x13e8b4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x13e8b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13e8b8:
    // 0x13e8b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13e8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13e8bc:
    // 0x13e8bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13e8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13e8c0:
    // 0x13e8c0: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x13e8c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_13e8c4:
    // 0x13e8c4: 0x320f809  jalr        $t9
label_13e8c8:
    if (ctx->pc == 0x13E8C8u) {
        ctx->pc = 0x13E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E8C4u;
        // 0x13e8c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E8CCu;
        goto label_13e8cc;
    }
    ctx->pc = 0x13E8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E8CCu);
        ctx->pc = 0x13E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E8C4u;
        // 0x13e8c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E8C4u, 0x13E8CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E8CCu;
label_13e8cc:
    // 0x13e8cc: 0x10000029  b           . + 4 + (0x29 << 2)
label_13e8d0:
    if (ctx->pc == 0x13E8D0u) {
        ctx->pc = 0x13E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E8CCu;
        // 0x13e8d0: 0x8e230124  lw          $v1, 0x124($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E8D4u;
        goto label_fallthrough_0x13e8cc;
    }
    ctx->pc = 0x13E8CCu;
    {
        const bool branch_taken_0x13e8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E8CCu;
        // 0x13e8d0: 0x8e230124  lw          $v1, 0x124($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e8cc) {
            ctx->pc = 0x13E974u;
            return;
        }
    }
label_fallthrough_0x13e8cc:
    ctx->pc = 0x13E8D4u;
}
