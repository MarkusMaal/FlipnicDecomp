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

// Function: set_score
// Address: 0x1cbfb0 - 0x1cbfe8
void set_score_0x1cbfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_score_0x1cbfb0");
#endif

    ctx->pc = 0x1cbfb0u;

    // 0x1cbfb0: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cbfb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cbfb4: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x1cbfb4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1cbfb8: 0x8c28ca84  lw          $t0, -0x357C($at)
    ctx->pc = 0x1cbfb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
    // 0x1cbfbc: 0xe43823  subu        $a3, $a3, $a0
    ctx->pc = 0x1cbfbcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1cbfc0: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x1cbfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cbfc4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1cbfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1cbfc8: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x1cbfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1cbfcc: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1cbfccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1cbfd0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1cbfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1cbfd4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1cbfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1cbfd8: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x1cbfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1cbfdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cbfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cbfe0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBFE0u;
        // 0x1cbfe4: 0xfc660060  sd          $a2, 0x60($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 96), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBFE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBFE8u;
}
