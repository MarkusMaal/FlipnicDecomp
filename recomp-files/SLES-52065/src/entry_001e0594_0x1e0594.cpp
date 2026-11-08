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

// Function: entry_001e0594
// Address: 0x1e0594 - 0x1e05b8
void entry_001e0594_0x1e0594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0594_0x1e0594");
#endif

    ctx->pc = 0x1e0594u;

    // 0x1e0594: 0x2484ab10  addiu       $a0, $a0, -0x54F0
    ctx->pc = 0x1e0594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945552));
    // 0x1e0598: 0x24c3a310  addiu       $v1, $a2, -0x5CF0
    ctx->pc = 0x1e0598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943504));
    // 0x1e059c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e059cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e05a0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1e05a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e05a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e05a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e05a8: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x1e05a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1e05ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1E05ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E05B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E05ACu;
        // 0x1e05b0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E05ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E05B4u;
    // 0x1e05b4: 0x0  nop
    ctx->pc = 0x1e05b4u;
    // NOP
    ctx->pc = 0x1e05b8u;
}
