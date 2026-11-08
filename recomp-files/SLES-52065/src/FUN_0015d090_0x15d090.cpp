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

// Function: FUN_0015d090
// Address: 0x15d090 - 0x15d0b4
void FUN_0015d090_0x15d090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015d090_0x15d090");
#endif

    ctx->pc = 0x15d090u;

    // 0x15d090: 0x8c823dd8  lw          $v0, 0x3DD8($a0)
    ctx->pc = 0x15d090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15832)));
    // 0x15d094: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15d094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15d098: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15d098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15d09c: 0xac453cd8  sw          $a1, 0x3CD8($v0)
    ctx->pc = 0x15d09cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15576), GPR_U32(ctx, 5));
    // 0x15d0a0: 0x8c823dd8  lw          $v0, 0x3DD8($a0)
    ctx->pc = 0x15d0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15832)));
    // 0x15d0a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15d0a8: 0xac823dd8  sw          $v0, 0x3DD8($a0)
    ctx->pc = 0x15d0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 15832), GPR_U32(ctx, 2));
    // 0x15d0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x15D0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D0ACu;
        // 0x15d0b0: 0x8c823dd8  lw          $v0, 0x3DD8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15832)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D0B4u;
}
