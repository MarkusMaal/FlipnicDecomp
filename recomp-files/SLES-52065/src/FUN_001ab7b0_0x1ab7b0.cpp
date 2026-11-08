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

// Function: FUN_001ab7b0
// Address: 0x1ab7b0 - 0x1ab7d4
void FUN_001ab7b0_0x1ab7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ab7b0_0x1ab7b0");
#endif

    switch (ctx->pc) {
        case 0x1ab7b0u: goto label_1ab7b0;
        case 0x1ab7b4u: goto label_1ab7b4;
        case 0x1ab7b8u: goto label_1ab7b8;
        case 0x1ab7bcu: goto label_1ab7bc;
        case 0x1ab7c0u: goto label_1ab7c0;
        case 0x1ab7c4u: goto label_1ab7c4;
        case 0x1ab7c8u: goto label_1ab7c8;
        case 0x1ab7ccu: goto label_1ab7cc;
        case 0x1ab7d0u: goto label_1ab7d0;
        default: break;
    }

    ctx->pc = 0x1ab7b0u;

label_1ab7b0:
    // 0x1ab7b0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1ab7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1ab7b4:
    // 0x1ab7b4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1ab7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1ab7b8:
    // 0x1ab7b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ab7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ab7bc:
    // 0x1ab7bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ab7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ab7c0:
    // 0x1ab7c0: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1ab7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1ab7c4:
    // 0x1ab7c4: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1ab7c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1ab7c8:
    // 0x1ab7c8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1ab7c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1ab7cc:
    // 0x1ab7cc: 0x3200008  jr          $t9
label_1ab7d0:
    if (ctx->pc == 0x1AB7D0u) {
        ctx->pc = 0x1AB7D4u;
        goto label_fallthrough_0x1ab7cc;
    }
    ctx->pc = 0x1AB7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB7CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1ab7cc:
    ctx->pc = 0x1AB7D4u;
}
