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

// Function: FUN_001acad0
// Address: 0x1acad0 - 0x1acaf4
void FUN_001acad0_0x1acad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001acad0_0x1acad0");
#endif

    switch (ctx->pc) {
        case 0x1acad0u: goto label_1acad0;
        case 0x1acad4u: goto label_1acad4;
        case 0x1acad8u: goto label_1acad8;
        case 0x1acadcu: goto label_1acadc;
        case 0x1acae0u: goto label_1acae0;
        case 0x1acae4u: goto label_1acae4;
        case 0x1acae8u: goto label_1acae8;
        case 0x1acaecu: goto label_1acaec;
        case 0x1acaf0u: goto label_1acaf0;
        default: break;
    }

    ctx->pc = 0x1acad0u;

label_1acad0:
    // 0x1acad0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1acad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1acad4:
    // 0x1acad4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1acad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1acad8:
    // 0x1acad8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1acad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1acadc:
    // 0x1acadc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1acadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1acae0:
    // 0x1acae0: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1acae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1acae4:
    // 0x1acae4: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1acae4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1acae8:
    // 0x1acae8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1acae8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1acaec:
    // 0x1acaec: 0x3200008  jr          $t9
label_1acaf0:
    if (ctx->pc == 0x1ACAF0u) {
        ctx->pc = 0x1ACAF4u;
        goto label_fallthrough_0x1acaec;
    }
    ctx->pc = 0x1ACAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACAECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1acaec:
    ctx->pc = 0x1ACAF4u;
}
