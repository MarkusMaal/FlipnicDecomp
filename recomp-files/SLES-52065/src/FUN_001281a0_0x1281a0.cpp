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

// Function: FUN_001281a0
// Address: 0x1281a0 - 0x1281b4
void FUN_001281a0_0x1281a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001281a0_0x1281a0");
#endif

    switch (ctx->pc) {
        case 0x1281a0u: goto label_1281a0;
        case 0x1281a4u: goto label_1281a4;
        case 0x1281a8u: goto label_1281a8;
        case 0x1281acu: goto label_1281ac;
        case 0x1281b0u: goto label_1281b0;
        default: break;
    }

    ctx->pc = 0x1281a0u;

label_1281a0:
    // 0x1281a0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1281a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1281a4:
    // 0x1281a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1281a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1281a8:
    // 0x1281a8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1281a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1281ac:
    // 0x1281ac: 0x3200008  jr          $t9
label_1281b0:
    if (ctx->pc == 0x1281B0u) {
        ctx->pc = 0x1281B4u;
        goto label_fallthrough_0x1281ac;
    }
    ctx->pc = 0x1281ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1281ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1281ac:
    ctx->pc = 0x1281B4u;
}
