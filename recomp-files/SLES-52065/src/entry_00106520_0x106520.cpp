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

// Function: entry_00106520
// Address: 0x106520 - 0x106530
void entry_00106520_0x106520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106520_0x106520");
#endif

    ctx->pc = 0x106520u;

    // 0x106520: 0x3e00008  jr          $ra
    ctx->pc = 0x106520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106520u;
        // 0x106524: 0xac8501d4  sw          $a1, 0x1D4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 468), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106528u;
    // 0x106528: 0x0  nop
    ctx->pc = 0x106528u;
    // NOP
    // 0x10652c: 0x0  nop
    ctx->pc = 0x10652cu;
    // NOP
    ctx->pc = 0x106530u;
}
