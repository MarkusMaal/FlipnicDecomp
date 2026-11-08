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

// Function: FUN_00128180
// Address: 0x128180 - 0x128194
void FUN_00128180_0x128180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00128180_0x128180");
#endif

    switch (ctx->pc) {
        case 0x128180u: goto label_128180;
        case 0x128184u: goto label_128184;
        case 0x128188u: goto label_128188;
        case 0x12818cu: goto label_12818c;
        case 0x128190u: goto label_128190;
        default: break;
    }

    ctx->pc = 0x128180u;

label_128180:
    // 0x128180: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x128180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_128184:
    // 0x128184: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x128184u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_128188:
    // 0x128188: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x128188u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_12818c:
    // 0x12818c: 0x3200008  jr          $t9
label_128190:
    if (ctx->pc == 0x128190u) {
        ctx->pc = 0x128194u;
        goto label_fallthrough_0x12818c;
    }
    ctx->pc = 0x12818Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12818Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x12818c:
    ctx->pc = 0x128194u;
}
