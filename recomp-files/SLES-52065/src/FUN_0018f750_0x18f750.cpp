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

// Function: FUN_0018f750
// Address: 0x18f750 - 0x18f778
void FUN_0018f750_0x18f750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018f750_0x18f750");
#endif

    ctx->pc = 0x18f750u;

    // 0x18f750: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x18f750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x18f754: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18f754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18f758: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18f758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18f75c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x18f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18f760: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x18f760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x18f764: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18f764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18f768: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18f768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18f76c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18f770: 0x3e00008  jr          $ra
    ctx->pc = 0x18F770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F770u;
        // 0x18f774: 0x8c420054  lw          $v0, 0x54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F778u;
}
