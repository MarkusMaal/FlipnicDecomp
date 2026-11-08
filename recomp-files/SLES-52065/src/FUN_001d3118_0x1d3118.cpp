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

// Function: FUN_001d3118
// Address: 0x1d3118 - 0x1d312c
void FUN_001d3118_0x1d3118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d3118_0x1d3118");
#endif

    ctx->pc = 0x1d3118u;

    // 0x1d3118: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1d3118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1d311c: 0x24630444  addiu       $v1, $v1, 0x444
    ctx->pc = 0x1d311cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1092));
    // 0x1d3120: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d3120u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x370444u));
    // 0x1d3124: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3124u;
        // 0x1d3128: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D312Cu;
}
