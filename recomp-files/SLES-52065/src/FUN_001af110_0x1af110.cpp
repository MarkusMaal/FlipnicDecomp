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

// Function: FUN_001af110
// Address: 0x1af110 - 0x1af134
void FUN_001af110_0x1af110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001af110_0x1af110");
#endif

    switch (ctx->pc) {
        case 0x1af110u: goto label_1af110;
        case 0x1af114u: goto label_1af114;
        case 0x1af118u: goto label_1af118;
        case 0x1af11cu: goto label_1af11c;
        case 0x1af120u: goto label_1af120;
        case 0x1af124u: goto label_1af124;
        case 0x1af128u: goto label_1af128;
        case 0x1af12cu: goto label_1af12c;
        case 0x1af130u: goto label_1af130;
        default: break;
    }

    ctx->pc = 0x1af110u;

label_1af110:
    // 0x1af110: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1af110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1af114:
    // 0x1af114: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1af114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1af118:
    // 0x1af118: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1af118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1af11c:
    // 0x1af11c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1af11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1af120:
    // 0x1af120: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1af120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1af124:
    // 0x1af124: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1af124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1af128:
    // 0x1af128: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1af128u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1af12c:
    // 0x1af12c: 0x3200008  jr          $t9
label_1af130:
    if (ctx->pc == 0x1AF130u) {
        ctx->pc = 0x1AF134u;
        goto label_fallthrough_0x1af12c;
    }
    ctx->pc = 0x1AF12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF12Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1af12c:
    ctx->pc = 0x1AF134u;
}
