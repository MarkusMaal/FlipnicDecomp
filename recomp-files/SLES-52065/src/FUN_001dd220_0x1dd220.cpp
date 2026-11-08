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

// Function: FUN_001dd220
// Address: 0x1dd220 - 0x1dd248
void FUN_001dd220_0x1dd220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dd220_0x1dd220");
#endif

    ctx->pc = 0x1dd220u;

    // 0x1dd220: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1dd220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1dd224: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1dd224u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dd228: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dd228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dd22c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dd22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dd230: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dd230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dd234: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1dd234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1dd238: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1dd238u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1dd23c: 0xac25738c  sw          $a1, 0x738C($at)
    ctx->pc = 0x1dd23cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29580), GPR_U32(ctx, 5));
    // 0x1dd240: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD248u;
}
