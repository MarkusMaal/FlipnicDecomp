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

// Function: FUN_00128160
// Address: 0x128160 - 0x128174
void FUN_00128160_0x128160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00128160_0x128160");
#endif

    switch (ctx->pc) {
        case 0x128160u: goto label_128160;
        case 0x128164u: goto label_128164;
        case 0x128168u: goto label_128168;
        case 0x12816cu: goto label_12816c;
        case 0x128170u: goto label_128170;
        default: break;
    }

    ctx->pc = 0x128160u;

label_128160:
    // 0x128160: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x128160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_128164:
    // 0x128164: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x128164u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_128168:
    // 0x128168: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x128168u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_12816c:
    // 0x12816c: 0x3200008  jr          $t9
label_128170:
    if (ctx->pc == 0x128170u) {
        ctx->pc = 0x128174u;
        goto label_fallthrough_0x12816c;
    }
    ctx->pc = 0x12816Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12816Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x12816c:
    ctx->pc = 0x128174u;
}
