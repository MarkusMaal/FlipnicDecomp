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

// Function: entry_001248b0
// Address: 0x1248b0 - 0x1248c0
void entry_001248b0_0x1248b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001248b0_0x1248b0");
#endif

    ctx->pc = 0x1248b0u;

    // 0x1248b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1248B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1248B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1248B0u;
        // 0x1248b4: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1248B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1248B8u;
    // 0x1248b8: 0x0  nop
    ctx->pc = 0x1248b8u;
    // NOP
    // 0x1248bc: 0x0  nop
    ctx->pc = 0x1248bcu;
    // NOP
    ctx->pc = 0x1248c0u;
}
