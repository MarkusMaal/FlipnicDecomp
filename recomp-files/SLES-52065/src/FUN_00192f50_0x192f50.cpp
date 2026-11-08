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

// Function: FUN_00192f50
// Address: 0x192f50 - 0x192f70
void FUN_00192f50_0x192f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00192f50_0x192f50");
#endif

    switch (ctx->pc) {
        case 0x192f50u: goto label_192f50;
        case 0x192f54u: goto label_192f54;
        case 0x192f58u: goto label_192f58;
        case 0x192f5cu: goto label_192f5c;
        case 0x192f60u: goto label_192f60;
        case 0x192f64u: goto label_192f64;
        case 0x192f68u: goto label_192f68;
        case 0x192f6cu: goto label_192f6c;
        default: break;
    }

    ctx->pc = 0x192f50u;

label_192f50:
    // 0x192f50: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x192f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_192f54:
    // 0x192f54: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x192f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_192f58:
    // 0x192f58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x192f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_192f5c:
    // 0x192f5c: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x192f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_192f60:
    // 0x192f60: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x192f60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_192f64:
    // 0x192f64: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x192f64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_192f68:
    // 0x192f68: 0x3200008  jr          $t9
label_192f6c:
    if (ctx->pc == 0x192F6Cu) {
        ctx->pc = 0x192F70u;
        goto label_fallthrough_0x192f68;
    }
    ctx->pc = 0x192F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192F68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x192f68:
    ctx->pc = 0x192F70u;
}
