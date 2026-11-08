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

// Function: entry_0010db00
// Address: 0x10db00 - 0x10db10
void entry_0010db00_0x10db00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010db00_0x10db00");
#endif

    ctx->pc = 0x10db00u;

    // 0x10db00: 0x3e00008  jr          $ra
    ctx->pc = 0x10DB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB00u;
        // 0x10db04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DB08u;
    // 0x10db08: 0x0  nop
    ctx->pc = 0x10db08u;
    // NOP
    // 0x10db0c: 0x0  nop
    ctx->pc = 0x10db0cu;
    // NOP
    ctx->pc = 0x10db10u;
}
