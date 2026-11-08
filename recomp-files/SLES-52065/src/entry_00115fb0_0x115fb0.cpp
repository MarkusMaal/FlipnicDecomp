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

// Function: entry_00115fb0
// Address: 0x115fb0 - 0x115fc0
void entry_00115fb0_0x115fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115fb0_0x115fb0");
#endif

    ctx->pc = 0x115fb0u;

    // 0x115fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x115FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115FB0u;
        // 0x115fb4: 0x8c820228  lw          $v0, 0x228($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 552)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115FB8u;
    // 0x115fb8: 0x0  nop
    ctx->pc = 0x115fb8u;
    // NOP
    // 0x115fbc: 0x0  nop
    ctx->pc = 0x115fbcu;
    // NOP
    ctx->pc = 0x115fc0u;
}
