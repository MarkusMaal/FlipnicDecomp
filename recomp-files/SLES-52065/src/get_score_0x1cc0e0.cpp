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

// Function: get_score
// Address: 0x1cc0e0 - 0x1cc118
void get_score_0x1cc0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("get_score_0x1cc0e0");
#endif

    ctx->pc = 0x1cc0e0u;

    // 0x1cc0e0: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cc0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cc0e4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1cc0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1cc0e8: 0x8c26ca84  lw          $a2, -0x357C($at)
    ctx->pc = 0x1cc0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
    // 0x1cc0ec: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x1cc0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cc0f0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1cc0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cc0f4: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1cc0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1cc0f8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1cc0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1cc0fc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1cc0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cc100: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1cc100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1cc104: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1cc104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1cc108: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1cc108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1cc10c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cc10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cc110: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC110u;
        // 0x1cc114: 0xdc420060  ld          $v0, 0x60($v0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC118u;
}
