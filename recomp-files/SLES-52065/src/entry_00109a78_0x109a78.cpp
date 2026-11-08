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

// Function: entry_00109a78
// Address: 0x109a78 - 0x109abc
void entry_00109a78_0x109a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109a78_0x109a78");
#endif

    switch (ctx->pc) {
        case 0x109a90u: goto label_109a90;
        case 0x109aa8u: goto label_109aa8;
        default: break;
    }

    ctx->pc = 0x109a78u;

label_109a78:
    // 0x109a78: 0x2493023c  addiu       $s3, $a0, 0x23C
    ctx->pc = 0x109a78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 572));
label_109a7c:
    // 0x109a7c: 0x8c84023c  lw          $a0, 0x23C($a0)
    ctx->pc = 0x109a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 572)));
label_109a80:
    // 0x109a80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x109a80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_109a84:
    // 0x109a84: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x109a84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_109a88:
    // 0x109a88: 0x320f809  jalr        $t9
label_109a8c:
    if (ctx->pc == 0x109A8Cu) {
        ctx->pc = 0x109A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A88u;
        // 0x109a8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109A90u;
        goto label_109a90;
    }
    ctx->pc = 0x109A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x109A90u);
        ctx->pc = 0x109A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A88u;
        // 0x109a8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109A88u, 0x109A90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109A90u;
label_109a90:
    // 0x109a90: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x109a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_109a94:
    // 0x109a94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x109a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_109a98:
    // 0x109a98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x109a98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_109a9c:
    // 0x109a9c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x109a9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_109aa0:
    // 0x109aa0: 0x320f809  jalr        $t9
label_109aa4:
    if (ctx->pc == 0x109AA4u) {
        ctx->pc = 0x109AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AA0u;
        // 0x109aa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109AA8u;
        goto label_109aa8;
    }
    ctx->pc = 0x109AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x109AA8u);
        ctx->pc = 0x109AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AA0u;
        // 0x109aa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109AA0u, 0x109AA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109AA8u;
label_109aa8:
    // 0x109aa8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x109aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_109aac:
    // 0x109aac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x109aacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_109ab0:
    // 0x109ab0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x109ab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_109ab4:
    // 0x109ab4: 0x320f809  jalr        $t9
label_109ab8:
    if (ctx->pc == 0x109AB8u) {
        ctx->pc = 0x109AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AB4u;
        // 0x109ab8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109ABCu;
        goto label_fallthrough_0x109ab4;
    }
    ctx->pc = 0x109AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x109ABCu);
        ctx->pc = 0x109AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AB4u;
        // 0x109ab8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109AB4u, 0x109ABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x109ab4:
    ctx->pc = 0x109ABCu;
}
