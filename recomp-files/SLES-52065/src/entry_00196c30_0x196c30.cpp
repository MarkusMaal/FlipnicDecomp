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

// Function: entry_00196c30
// Address: 0x196c30 - 0x196c60
void entry_00196c30_0x196c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196c30_0x196c30");
#endif

    ctx->pc = 0x196c30u;

label_196c30:
    // 0x196c30: 0x8ea20678  lw          $v0, 0x678($s5)
    ctx->pc = 0x196c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1656)));
label_196c34:
    // 0x196c34: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_196c38:
    if (ctx->pc == 0x196C38u) {
        ctx->pc = 0x196C3Cu;
        goto label_196c3c;
    }
    ctx->pc = 0x196C34u;
    {
        const bool branch_taken_0x196c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196c34) {
            ctx->pc = 0x196C60u;
            return;
        }
    }
    ctx->pc = 0x196C3Cu;
label_196c3c:
    // 0x196c3c: 0xf51021  addu        $v0, $a3, $s5
    ctx->pc = 0x196c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 21)));
label_196c40:
    // 0x196c40: 0x8c420450  lw          $v0, 0x450($v0)
    ctx->pc = 0x196c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
label_196c44:
    // 0x196c44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x196c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_196c48:
    // 0x196c48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x196c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_196c4c:
    // 0x196c4c: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x196c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_196c50:
    // 0x196c50: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x196c50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_196c54:
    // 0x196c54: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x196c54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_196c58:
    // 0x196c58: 0x320f809  jalr        $t9
label_196c5c:
    if (ctx->pc == 0x196C5Cu) {
        ctx->pc = 0x196C60u;
        goto label_fallthrough_0x196c58;
    }
    ctx->pc = 0x196C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x196C60u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196C58u, 0x196C60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x196c58:
    ctx->pc = 0x196C60u;
}
