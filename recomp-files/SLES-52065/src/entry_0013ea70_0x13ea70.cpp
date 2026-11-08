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

// Function: entry_0013ea70
// Address: 0x13ea70 - 0x13eaa0
void entry_0013ea70_0x13ea70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ea70_0x13ea70");
#endif

    switch (ctx->pc) {
        case 0x13ea88u: goto label_13ea88;
        default: break;
    }

    ctx->pc = 0x13ea70u;

label_13ea70:
    // 0x13ea70: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x13ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_13ea74:
    // 0x13ea74: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x13ea74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_13ea78:
    // 0x13ea78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13ea78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13ea7c:
    // 0x13ea7c: 0x8f3900fc  lw          $t9, 0xFC($t9)
    ctx->pc = 0x13ea7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 252)));
label_13ea80:
    // 0x13ea80: 0x320f809  jalr        $t9
label_13ea84:
    if (ctx->pc == 0x13EA84u) {
        ctx->pc = 0x13EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EA80u;
        // 0x13ea84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EA88u;
        goto label_13ea88;
    }
    ctx->pc = 0x13EA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13EA88u);
        ctx->pc = 0x13EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EA80u;
        // 0x13ea84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EA80u, 0x13EA88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13EA88u;
label_13ea88:
    // 0x13ea88: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x13ea88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_13ea8c:
    // 0x13ea8c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x13ea8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_13ea90:
    // 0x13ea90: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x13ea90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_13ea94:
    // 0x13ea94: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x13ea94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_13ea98:
    // 0x13ea98: 0x1470fff5  bne         $v1, $s0, . + 4 + (-0xB << 2)
label_13ea9c:
    if (ctx->pc == 0x13EA9Cu) {
        ctx->pc = 0x13EAA0u;
        goto label_fallthrough_0x13ea98;
    }
    ctx->pc = 0x13EA98u;
    {
        const bool branch_taken_0x13ea98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x13ea98) {
            ctx->pc = 0x13EA70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ea70;
        }
    }
label_fallthrough_0x13ea98:
    ctx->pc = 0x13EAA0u;
}
