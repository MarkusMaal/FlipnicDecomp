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

// Function: entry_0013d950
// Address: 0x13d950 - 0x13d960
void entry_0013d950_0x13d950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d950_0x13d950");
#endif

    ctx->pc = 0x13d950u;

    // 0x13d950: 0x3e00008  jr          $ra
    ctx->pc = 0x13D950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D950u;
        // 0x13d954: 0x8c82016c  lw          $v0, 0x16C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 364)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D958u;
    // 0x13d958: 0x0  nop
    ctx->pc = 0x13d958u;
    // NOP
    // 0x13d95c: 0x0  nop
    ctx->pc = 0x13d95cu;
    // NOP
    ctx->pc = 0x13d960u;
}
