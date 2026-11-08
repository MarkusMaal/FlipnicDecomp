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

// Function: FUN_001ac9c0
// Address: 0x1ac9c0 - 0x1ac9e4
void FUN_001ac9c0_0x1ac9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ac9c0_0x1ac9c0");
#endif

    switch (ctx->pc) {
        case 0x1ac9c0u: goto label_1ac9c0;
        case 0x1ac9c4u: goto label_1ac9c4;
        case 0x1ac9c8u: goto label_1ac9c8;
        case 0x1ac9ccu: goto label_1ac9cc;
        case 0x1ac9d0u: goto label_1ac9d0;
        case 0x1ac9d4u: goto label_1ac9d4;
        case 0x1ac9d8u: goto label_1ac9d8;
        case 0x1ac9dcu: goto label_1ac9dc;
        case 0x1ac9e0u: goto label_1ac9e0;
        default: break;
    }

    ctx->pc = 0x1ac9c0u;

label_1ac9c0:
    // 0x1ac9c0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1ac9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1ac9c4:
    // 0x1ac9c4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1ac9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1ac9c8:
    // 0x1ac9c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ac9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ac9cc:
    // 0x1ac9cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ac9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ac9d0:
    // 0x1ac9d0: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1ac9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1ac9d4:
    // 0x1ac9d4: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1ac9d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1ac9d8:
    // 0x1ac9d8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1ac9d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1ac9dc:
    // 0x1ac9dc: 0x3200008  jr          $t9
label_1ac9e0:
    if (ctx->pc == 0x1AC9E0u) {
        ctx->pc = 0x1AC9E4u;
        goto label_fallthrough_0x1ac9dc;
    }
    ctx->pc = 0x1AC9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC9DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1ac9dc:
    ctx->pc = 0x1AC9E4u;
}
