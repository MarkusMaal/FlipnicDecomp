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

// Function: entry_00170560
// Address: 0x170560 - 0x170570
void entry_00170560_0x170560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170560_0x170560");
#endif

    ctx->pc = 0x170560u;

    // 0x170560: 0x3e00008  jr          $ra
    ctx->pc = 0x170560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170560u;
        // 0x170564: 0xac8501d4  sw          $a1, 0x1D4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 468), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170568u;
    // 0x170568: 0x0  nop
    ctx->pc = 0x170568u;
    // NOP
    // 0x17056c: 0x0  nop
    ctx->pc = 0x17056cu;
    // NOP
    ctx->pc = 0x170570u;
}
