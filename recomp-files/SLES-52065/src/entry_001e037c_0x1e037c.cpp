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

// Function: entry_001e037c
// Address: 0x1e037c - 0x1e03a8
void entry_001e037c_0x1e037c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e037c_0x1e037c");
#endif

    ctx->pc = 0x1e037cu;

    // 0x1e037c: 0x24a5ab10  addiu       $a1, $a1, -0x54F0
    ctx->pc = 0x1e037cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945552));
    // 0x1e0380: 0x24c3a310  addiu       $v1, $a2, -0x5CF0
    ctx->pc = 0x1e0380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943504));
    // 0x1e0384: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e0384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e0388: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1e0388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e038c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e038cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e0390: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1e0390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0394: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e0398: 0xa0890000  sb          $t1, 0x0($a0)
    ctx->pc = 0x1e0398u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x1e039c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1e039cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1e03a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E03A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E03A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E03A0u;
        // 0x1e03a4: 0xa0680000  sb          $t0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E03A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E03A8u;
}
