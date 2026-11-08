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

// Function: FUN_001b3710
// Address: 0x1b3710 - 0x1b3744
void FUN_001b3710_0x1b3710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b3710_0x1b3710");
#endif

    ctx->pc = 0x1b3710u;

    // 0x1b3710: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1b3710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1b3714: 0x8c452c10  lw          $a1, 0x2C10($v0)
    ctx->pc = 0x1b3714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11280)));
    // 0x1b3718: 0x8c432c1c  lw          $v1, 0x2C1C($v0)
    ctx->pc = 0x1b3718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11292)));
    // 0x1b371c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1b371cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b3720: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b3720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b3724: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b3724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b3728: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b3728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b372c: 0x9042003f  lbu         $v0, 0x3F($v0)
    ctx->pc = 0x1b372cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 63)));
    // 0x1b3730: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b3730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b3734: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b3734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b3738: 0x8c422858  lw          $v0, 0x2858($v0)
    ctx->pc = 0x1b3738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10328)));
    // 0x1b373c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B373Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B373Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3744u;
}
