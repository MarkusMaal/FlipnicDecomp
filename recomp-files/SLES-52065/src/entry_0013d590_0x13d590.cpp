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

// Function: entry_0013d590
// Address: 0x13d590 - 0x13d5a0
void entry_0013d590_0x13d590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d590_0x13d590");
#endif

    ctx->pc = 0x13d590u;

    // 0x13d590: 0x3e00008  jr          $ra
    ctx->pc = 0x13D590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D590u;
        // 0x13d594: 0x8c82017c  lw          $v0, 0x17C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D598u;
    // 0x13d598: 0x0  nop
    ctx->pc = 0x13d598u;
    // NOP
    // 0x13d59c: 0x0  nop
    ctx->pc = 0x13d59cu;
    // NOP
    ctx->pc = 0x13d5a0u;
}
