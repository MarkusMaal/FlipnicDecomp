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

// Function: FUN_001281c0
// Address: 0x1281c0 - 0x1281d8
void FUN_001281c0_0x1281c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001281c0_0x1281c0");
#endif

    switch (ctx->pc) {
        case 0x1281c0u: goto label_1281c0;
        case 0x1281c4u: goto label_1281c4;
        case 0x1281c8u: goto label_1281c8;
        case 0x1281ccu: goto label_1281cc;
        case 0x1281d0u: goto label_1281d0;
        case 0x1281d4u: goto label_1281d4;
        default: break;
    }

    ctx->pc = 0x1281c0u;

label_1281c0:
    // 0x1281c0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1281c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1281c4:
    // 0x1281c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1281c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1281c8:
    // 0x1281c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1281c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1281cc:
    // 0x1281cc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1281ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1281d0:
    // 0x1281d0: 0x3200008  jr          $t9
label_1281d4:
    if (ctx->pc == 0x1281D4u) {
        ctx->pc = 0x1281D8u;
        goto label_fallthrough_0x1281d0;
    }
    ctx->pc = 0x1281D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1281D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1281d0:
    ctx->pc = 0x1281D8u;
}
