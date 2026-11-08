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

// Function: entry_001321d0
// Address: 0x1321d0 - 0x1321e0
void entry_001321d0_0x1321d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001321d0_0x1321d0");
#endif

    ctx->pc = 0x1321d0u;

    // 0x1321d0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1321d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1321d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1321D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1321D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1321D4u;
        // 0x1321d8: 0x2442ee00  addiu       $v0, $v0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1321D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1321DCu;
    // 0x1321dc: 0x0  nop
    ctx->pc = 0x1321dcu;
    // NOP
    ctx->pc = 0x1321e0u;
}
