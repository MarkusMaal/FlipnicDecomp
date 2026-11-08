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

// Function: entry_00115f10
// Address: 0x115f10 - 0x115f20
void entry_00115f10_0x115f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115f10_0x115f10");
#endif

    ctx->pc = 0x115f10u;

    // 0x115f10: 0x3e00008  jr          $ra
    ctx->pc = 0x115F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F10u;
        // 0x115f14: 0x8c820230  lw          $v0, 0x230($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115F18u;
    // 0x115f18: 0x0  nop
    ctx->pc = 0x115f18u;
    // NOP
    // 0x115f1c: 0x0  nop
    ctx->pc = 0x115f1cu;
    // NOP
    ctx->pc = 0x115f20u;
}
