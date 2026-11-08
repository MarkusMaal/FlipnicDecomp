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

// Function: FUN_001d3de8
// Address: 0x1d3de8 - 0x1d3df4
void FUN_001d3de8_0x1d3de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d3de8_0x1d3de8");
#endif

    ctx->pc = 0x1d3de8u;

    // 0x1d3de8: 0xac8502dc  sw          $a1, 0x2DC($a0)
    ctx->pc = 0x1d3de8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 732), GPR_U32(ctx, 5));
    // 0x1d3dec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DECu;
        // 0x1d3df0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3DF4u;
}
