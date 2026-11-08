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

// Function: entry_0019da3c
// Address: 0x19da3c - 0x19da88
void entry_0019da3c_0x19da3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019da3c_0x19da3c");
#endif

    switch (ctx->pc) {
        case 0x19da60u: goto label_19da60;
        case 0x19da68u: goto label_19da68;
        case 0x19da80u: goto label_19da80;
        default: break;
    }

    ctx->pc = 0x19da3cu;

label_19da3c:
    // 0x19da3c: 0x0  nop
    ctx->pc = 0x19da3cu;
    // NOP
label_19da40:
    // 0x19da40: 0xaeb20998  sw          $s2, 0x998($s5)
    ctx->pc = 0x19da40u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2456), GPR_U32(ctx, 18));
label_19da44:
    // 0x19da44: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x19da44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_19da48:
    // 0x19da48: 0x26b60998  addiu       $s6, $s5, 0x998
    ctx->pc = 0x19da48u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 2456));
label_19da4c:
    // 0x19da4c: 0x8e460028  lw          $a2, 0x28($s2)
    ctx->pc = 0x19da4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_19da50:
    // 0x19da50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19da50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19da54:
    // 0x19da54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19da54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19da58:
    // 0x19da58: 0xc064f7c  jal         func_193DF0
label_19da5c:
    if (ctx->pc == 0x19DA5Cu) {
        ctx->pc = 0x19DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DA58u;
        // 0x19da5c: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DA60u;
        goto label_19da60;
    }
    ctx->pc = 0x19DA58u;
    SET_GPR_U32(ctx, 31, 0x19DA60u);
    ctx->pc = 0x19DA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DA58u;
    // 0x19da5c: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193DF0u, 0x19DA58u, 0x19DA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DA60u;
label_19da60:
    // 0x19da60: 0xc04bf44  jal         func_12FD10
label_19da64:
    if (ctx->pc == 0x19DA64u) {
        ctx->pc = 0x19DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DA60u;
        // 0x19da64: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DA68u;
        goto label_19da68;
    }
    ctx->pc = 0x19DA60u;
    SET_GPR_U32(ctx, 31, 0x19DA68u);
    ctx->pc = 0x19DA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DA60u;
    // 0x19da64: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FD10u, 0x19DA60u, 0x19DA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DA68u;
label_19da68:
    // 0x19da68: 0xaea2099c  sw          $v0, 0x99C($s5)
    ctx->pc = 0x19da68u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2460), GPR_U32(ctx, 2));
label_19da6c:
    // 0x19da6c: 0x8ea4099c  lw          $a0, 0x99C($s5)
    ctx->pc = 0x19da6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2460)));
label_19da70:
    // 0x19da70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19da70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19da74:
    // 0x19da74: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x19da74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_19da78:
    // 0x19da78: 0x320f809  jalr        $t9
label_19da7c:
    if (ctx->pc == 0x19DA7Cu) {
        ctx->pc = 0x19DA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DA78u;
        // 0x19da7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DA80u;
        goto label_19da80;
    }
    ctx->pc = 0x19DA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19DA80u);
        ctx->pc = 0x19DA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DA78u;
        // 0x19da7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DA78u, 0x19DA80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19DA80u;
label_19da80:
    // 0x19da80: 0x1000001d  b           . + 4 + (0x1D << 2)
label_19da84:
    if (ctx->pc == 0x19DA84u) {
        ctx->pc = 0x19DA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DA80u;
        // 0x19da84: 0xaea00994  sw          $zero, 0x994($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 2452), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DA88u;
        goto label_fallthrough_0x19da80;
    }
    ctx->pc = 0x19DA80u;
    {
        const bool branch_taken_0x19da80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DA80u;
        // 0x19da84: 0xaea00994  sw          $zero, 0x994($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 2452), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19da80) {
            ctx->pc = 0x19DAF8u;
            return;
        }
    }
label_fallthrough_0x19da80:
    ctx->pc = 0x19DA88u;
}
