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

// Function: FUN_001af090
// Address: 0x1af090 - 0x1af0b4
void FUN_001af090_0x1af090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001af090_0x1af090");
#endif

    switch (ctx->pc) {
        case 0x1af090u: goto label_1af090;
        case 0x1af094u: goto label_1af094;
        case 0x1af098u: goto label_1af098;
        case 0x1af09cu: goto label_1af09c;
        case 0x1af0a0u: goto label_1af0a0;
        case 0x1af0a4u: goto label_1af0a4;
        case 0x1af0a8u: goto label_1af0a8;
        case 0x1af0acu: goto label_1af0ac;
        case 0x1af0b0u: goto label_1af0b0;
        default: break;
    }

    ctx->pc = 0x1af090u;

label_1af090:
    // 0x1af090: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1af090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1af094:
    // 0x1af094: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1af094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1af098:
    // 0x1af098: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1af098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1af09c:
    // 0x1af09c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1af09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1af0a0:
    // 0x1af0a0: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1af0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1af0a4:
    // 0x1af0a4: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1af0a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1af0a8:
    // 0x1af0a8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1af0a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1af0ac:
    // 0x1af0ac: 0x3200008  jr          $t9
label_1af0b0:
    if (ctx->pc == 0x1AF0B0u) {
        ctx->pc = 0x1AF0B4u;
        goto label_fallthrough_0x1af0ac;
    }
    ctx->pc = 0x1AF0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF0ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1af0ac:
    ctx->pc = 0x1AF0B4u;
}
