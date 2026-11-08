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

// Function: FUN_001935e0
// Address: 0x1935e0 - 0x193604
void FUN_001935e0_0x1935e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001935e0_0x1935e0");
#endif

    switch (ctx->pc) {
        case 0x1935e0u: goto label_1935e0;
        case 0x1935e4u: goto label_1935e4;
        case 0x1935e8u: goto label_1935e8;
        case 0x1935ecu: goto label_1935ec;
        case 0x1935f0u: goto label_1935f0;
        case 0x1935f4u: goto label_1935f4;
        case 0x1935f8u: goto label_1935f8;
        case 0x1935fcu: goto label_1935fc;
        case 0x193600u: goto label_193600;
        default: break;
    }

    ctx->pc = 0x1935e0u;

label_1935e0:
    // 0x1935e0: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1935e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1935e4:
    // 0x1935e4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1935e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1935e8:
    // 0x1935e8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1935e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1935ec:
    // 0x1935ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1935ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1935f0:
    // 0x1935f0: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1935f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1935f4:
    // 0x1935f4: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1935f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1935f8:
    // 0x1935f8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1935f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1935fc:
    // 0x1935fc: 0x3200008  jr          $t9
label_193600:
    if (ctx->pc == 0x193600u) {
        ctx->pc = 0x193604u;
        goto label_fallthrough_0x1935fc;
    }
    ctx->pc = 0x1935FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1935FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1935fc:
    ctx->pc = 0x193604u;
}
