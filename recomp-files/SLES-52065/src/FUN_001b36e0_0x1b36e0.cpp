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

// Function: FUN_001b36e0
// Address: 0x1b36e0 - 0x1b3710
void FUN_001b36e0_0x1b36e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b36e0_0x1b36e0");
#endif

    ctx->pc = 0x1b36e0u;

    // 0x1b36e0: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1b36e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1b36e4: 0x8c432c1c  lw          $v1, 0x2C1C($v0)
    ctx->pc = 0x1b36e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11292)));
    // 0x1b36e8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1b36e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b36ec: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b36ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b36f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b36f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b36f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b36f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b36f8: 0x9042003f  lbu         $v0, 0x3F($v0)
    ctx->pc = 0x1b36f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 63)));
    // 0x1b36fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b36fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b3700: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b3700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b3704: 0x8c422858  lw          $v0, 0x2858($v0)
    ctx->pc = 0x1b3704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10328)));
    // 0x1b3708: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3710u;
}
