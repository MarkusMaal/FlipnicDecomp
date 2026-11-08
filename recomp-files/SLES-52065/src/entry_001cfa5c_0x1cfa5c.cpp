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

// Function: entry_001cfa5c
// Address: 0x1cfa5c - 0x1cfaa8
void entry_001cfa5c_0x1cfa5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfa5c_0x1cfa5c");
#endif

    switch (ctx->pc) {
        case 0x1cfa64u: goto label_1cfa64;
        case 0x1cfa70u: goto label_1cfa70;
        case 0x1cfa9cu: goto label_1cfa9c;
        default: break;
    }

    ctx->pc = 0x1cfa5cu;

label_1cfa5c:
    // 0x1cfa5c: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1CFA5Cu;
    SET_GPR_U32(ctx, 31, 0x1CFA64u);
    ctx->pc = 0x1CFA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFA5Cu;
    // 0x1cfa60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1CFA5Cu, 0x1CFA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFA64u;
label_1cfa64:
    // 0x1cfa64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cfa64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfa68: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1CFA68u;
    SET_GPR_U32(ctx, 31, 0x1CFA70u);
    ctx->pc = 0x1CFA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFA68u;
    // 0x1cfa6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1CFA68u, 0x1CFA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFA70u;
label_1cfa70:
    // 0x1cfa70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1cfa70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1cfa74: 0x2a22001e  slti        $v0, $s1, 0x1E
    ctx->pc = 0x1cfa74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1cfa78: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1CFA78u;
    {
        const bool branch_taken_0x1cfa78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA78u;
        // 0x1cfa7c: 0x26250002  addiu       $a1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfa78) {
            ctx->pc = 0x1CFA5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cfa5c;
        }
    }
    ctx->pc = 0x1CFA80u;
    // 0x1cfa80: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x1cfa80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cfa84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cfa84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfa88: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CFA88u;
    {
        const bool branch_taken_0x1cfa88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cfa88) {
            ctx->pc = 0x1CFAA8u;
            return;
        }
    }
    ctx->pc = 0x1CFA90u;
    // 0x1cfa90: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x1cfa90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1cfa94: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1CFA94u;
    SET_GPR_U32(ctx, 31, 0x1CFA9Cu);
    ctx->pc = 0x1CFA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFA94u;
    // 0x1cfa98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1CFA94u, 0x1CFA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFA9Cu;
label_1cfa9c:
    // 0x1cfa9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cfa9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfaa0: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1CFAA0u;
    SET_GPR_U32(ctx, 31, 0x1CFAA8u);
    ctx->pc = 0x1CFAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFAA0u;
    // 0x1cfaa4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1CFAA0u, 0x1CFAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFAA8u;
}
