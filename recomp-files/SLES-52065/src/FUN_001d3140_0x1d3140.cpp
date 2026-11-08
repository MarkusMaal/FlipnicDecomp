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

// Function: FUN_001d3140
// Address: 0x1d3140 - 0x1d3154
void FUN_001d3140_0x1d3140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d3140_0x1d3140");
#endif

    ctx->pc = 0x1d3140u;

    // 0x1d3140: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1d3140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1d3144: 0x24630440  addiu       $v1, $v1, 0x440
    ctx->pc = 0x1d3144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1088));
    // 0x1d3148: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d3148u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x370440u));
    // 0x1d314c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D314Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D314Cu;
        // 0x1d3150: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D314Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3154u;
}
