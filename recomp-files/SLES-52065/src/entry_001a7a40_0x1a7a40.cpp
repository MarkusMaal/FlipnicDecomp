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

// Function: entry_001a7a40
// Address: 0x1a7a40 - 0x1a7adc
void entry_001a7a40_0x1a7a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7a40_0x1a7a40");
#endif

    switch (ctx->pc) {
        case 0x1a7a50u: goto label_1a7a50;
        case 0x1a7a88u: goto label_1a7a88;
        case 0x1a7aa0u: goto label_1a7aa0;
        case 0x1a7aacu: goto label_1a7aac;
        default: break;
    }

    ctx->pc = 0x1a7a40u;

label_1a7a40:
    // 0x1a7a40: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x1a7a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1a7a44:
    // 0x1a7a44: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1a7a44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a7a48:
    // 0x1a7a48: 0xc057040  jal         func_15C100
label_1a7a4c:
    if (ctx->pc == 0x1A7A4Cu) {
        ctx->pc = 0x1A7A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A48u;
        // 0x1a7a4c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7A50u;
        goto label_1a7a50;
    }
    ctx->pc = 0x1A7A48u;
    SET_GPR_U32(ctx, 31, 0x1A7A50u);
    ctx->pc = 0x1A7A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A48u;
    // 0x1a7a4c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A7A48u, 0x1A7A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7A50u;
label_1a7a50:
    // 0x1a7a50: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x1a7a50u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a7a54:
    // 0x1a7a54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a7a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7a58:
    // 0x1a7a58: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a7a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a7a5c:
    // 0x1a7a5c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a7a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1a7a60:
    // 0x1a7a60: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1a7a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a7a64:
    // 0x1a7a64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a7a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a7a68:
    // 0x1a7a68: 0xa0430028  sb          $v1, 0x28($v0)
    ctx->pc = 0x1a7a68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 3));
label_1a7a6c:
    // 0x1a7a6c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a7a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a7a70:
    // 0x1a7a70: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a7a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1a7a74:
    // 0x1a7a74: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a7a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a7a78:
    // 0x1a7a78: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1a7a78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a7a7c:
    // 0x1a7a7c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1a7a7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1a7a80:
    // 0x1a7a80: 0x320f809  jalr        $t9
label_1a7a84:
    if (ctx->pc == 0x1A7A84u) {
        ctx->pc = 0x1A7A88u;
        goto label_1a7a88;
    }
    ctx->pc = 0x1A7A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A7A88u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7A80u, 0x1A7A88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A7A88u;
label_1a7a88:
    // 0x1a7a88: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a7a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a7a8c:
    // 0x1a7a8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a7a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7a90:
    // 0x1a7a90: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a7a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1a7a94:
    // 0x1a7a94: 0x8c512cd8  lw          $s1, 0x2CD8($v0)
    ctx->pc = 0x1a7a94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a7a98:
    // 0x1a7a98: 0xc05ee1c  jal         func_17B870
label_1a7a9c:
    if (ctx->pc == 0x1A7A9Cu) {
        ctx->pc = 0x1A7A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A98u;
        // 0x1a7a9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7AA0u;
        goto label_1a7aa0;
    }
    ctx->pc = 0x1A7A98u;
    SET_GPR_U32(ctx, 31, 0x1A7AA0u);
    ctx->pc = 0x1A7A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A98u;
    // 0x1a7a9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B870u, 0x1A7A98u, 0x1A7AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7AA0u;
label_1a7aa0:
    // 0x1a7aa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a7aa4:
    // 0x1a7aa4: 0xc05ee30  jal         func_17B8C0
label_1a7aa8:
    if (ctx->pc == 0x1A7AA8u) {
        ctx->pc = 0x1A7AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7AA4u;
        // 0x1a7aa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7AACu;
        goto label_1a7aac;
    }
    ctx->pc = 0x1A7AA4u;
    SET_GPR_U32(ctx, 31, 0x1A7AACu);
    ctx->pc = 0x1A7AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7AA4u;
    // 0x1a7aa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B8C0u, 0x1A7AA4u, 0x1A7AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7AACu;
label_1a7aac:
    // 0x1a7aac: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1a7aacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1a7ab0:
    // 0x1a7ab0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1a7ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a7ab4:
    // 0x1a7ab4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a7ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a7ab8:
    // 0x1a7ab8: 0x1083ffe1  beq         $a0, $v1, . + 4 + (-0x1F << 2)
label_1a7abc:
    if (ctx->pc == 0x1A7ABCu) {
        ctx->pc = 0x1A7AC0u;
        goto label_1a7ac0;
    }
    ctx->pc = 0x1A7AB8u;
    {
        const bool branch_taken_0x1a7ab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a7ab8) {
            ctx->pc = 0x1A7A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7a40;
        }
    }
    ctx->pc = 0x1A7AC0u;
label_1a7ac0:
    // 0x1a7ac0: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_1a7ac4:
    if (ctx->pc == 0x1A7AC4u) {
        ctx->pc = 0x1A7AC8u;
        goto label_1a7ac8;
    }
    ctx->pc = 0x1A7AC0u;
    {
        const bool branch_taken_0x1a7ac0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7ac0) {
            ctx->pc = 0x1A7ADCu;
            return;
        }
    }
    ctx->pc = 0x1A7AC8u;
label_1a7ac8:
    // 0x1a7ac8: 0x8e59031c  lw          $t9, 0x31C($s2)
    ctx->pc = 0x1a7ac8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 796)));
label_1a7acc:
    // 0x1a7acc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a7accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a7ad0:
    // 0x1a7ad0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a7ad0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a7ad4:
    // 0x1a7ad4: 0x320f809  jalr        $t9
label_1a7ad8:
    if (ctx->pc == 0x1A7AD8u) {
        ctx->pc = 0x1A7AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7AD4u;
        // 0x1a7ad8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7ADCu;
        goto label_fallthrough_0x1a7ad4;
    }
    ctx->pc = 0x1A7AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A7ADCu);
        ctx->pc = 0x1A7AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7AD4u;
        // 0x1a7ad8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7AD4u, 0x1A7ADCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1a7ad4:
    ctx->pc = 0x1A7ADCu;
}
