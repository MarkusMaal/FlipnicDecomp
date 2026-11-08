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

// Function: entry_00165400
// Address: 0x165400 - 0x165410
void entry_00165400_0x165400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165400_0x165400");
#endif

    ctx->pc = 0x165400u;

    // 0x165400: 0x3e00008  jr          $ra
    ctx->pc = 0x165400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165400u;
        // 0x165404: 0x8c820234  lw          $v0, 0x234($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 564)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165408u;
    // 0x165408: 0x0  nop
    ctx->pc = 0x165408u;
    // NOP
    // 0x16540c: 0x0  nop
    ctx->pc = 0x16540cu;
    // NOP
    ctx->pc = 0x165410u;
}
