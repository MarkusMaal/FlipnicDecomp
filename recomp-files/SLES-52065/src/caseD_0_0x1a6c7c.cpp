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

// Function: caseD_0
// Address: 0x1a6c7c - 0x1a6cb4
void caseD_0_0x1a6c7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1a6c7c");
#endif

    switch (ctx->pc) {
        case 0x1a6c7cu: goto label_1a6c7c;
        case 0x1a6c80u: goto label_1a6c80;
        case 0x1a6c84u: goto label_1a6c84;
        case 0x1a6c88u: goto label_1a6c88;
        case 0x1a6c8cu: goto label_1a6c8c;
        case 0x1a6c90u: goto label_1a6c90;
        case 0x1a6c94u: goto label_1a6c94;
        case 0x1a6c98u: goto label_1a6c98;
        case 0x1a6c9cu: goto label_1a6c9c;
        case 0x1a6ca0u: goto label_1a6ca0;
        case 0x1a6ca4u: goto label_1a6ca4;
        case 0x1a6ca8u: goto label_1a6ca8;
        case 0x1a6cacu: goto label_1a6cac;
        case 0x1a6cb0u: goto label_1a6cb0;
        default: break;
    }

    ctx->pc = 0x1a6c7cu;

label_1a6c7c:
    // 0x1a6c7c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a6c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6c80:
    // 0x1a6c80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6c80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6c84:
    // 0x1a6c84: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a6c84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a6c88:
    // 0x1a6c88: 0x320f809  jalr        $t9
label_1a6c8c:
    if (ctx->pc == 0x1A6C8Cu) {
        ctx->pc = 0x1A6C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C88u;
        // 0x1a6c8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6C90u;
        goto label_1a6c90;
    }
    ctx->pc = 0x1A6C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6C90u);
        ctx->pc = 0x1A6C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C88u;
        // 0x1a6c8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6C88u, 0x1A6C90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6C90u;
label_1a6c90:
    // 0x1a6c90: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a6c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6c94:
    // 0x1a6c94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a6c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6c98:
    // 0x1a6c98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6c98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6c9c:
    // 0x1a6c9c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a6c9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a6ca0:
    // 0x1a6ca0: 0x320f809  jalr        $t9
label_1a6ca4:
    if (ctx->pc == 0x1A6CA4u) {
        ctx->pc = 0x1A6CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CA0u;
        // 0x1a6ca4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6CA8u;
        goto label_1a6ca8;
    }
    ctx->pc = 0x1A6CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6CA8u);
        ctx->pc = 0x1A6CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CA0u;
        // 0x1a6ca4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6CA0u, 0x1A6CA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6CA8u;
label_1a6ca8:
    // 0x1a6ca8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a6ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a6cac:
    // 0x1a6cac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a6cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a6cb0:
    // 0x1a6cb0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1a6cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x1a6cb4u;
}
