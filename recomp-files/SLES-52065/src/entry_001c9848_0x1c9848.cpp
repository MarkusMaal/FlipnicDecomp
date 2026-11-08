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

// Function: entry_001c9848
// Address: 0x1c9848 - 0x1c9868
void entry_001c9848_0x1c9848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9848_0x1c9848");
#endif

    ctx->pc = 0x1c9848u;

    // 0x1c9848: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x1c9848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c984c: 0xac620078  sw          $v0, 0x78($v1)
    ctx->pc = 0x1c984cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 2));
    // 0x1c9850: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1c9850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c9854: 0xa040000c  sb          $zero, 0xC($v0)
    ctx->pc = 0x1c9854u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c9858: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1c9858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1c985c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c985cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9860: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9860u;
        // 0x1c9864: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9868u;
}
