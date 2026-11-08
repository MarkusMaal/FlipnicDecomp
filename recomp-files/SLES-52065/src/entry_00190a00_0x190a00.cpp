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

// Function: entry_00190a00
// Address: 0x190a00 - 0x190a10
void entry_00190a00_0x190a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190a00_0x190a00");
#endif

    ctx->pc = 0x190a00u;

    // 0x190a00: 0x3e00008  jr          $ra
    ctx->pc = 0x190A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A00u;
        // 0x190a04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190A08u;
    // 0x190a08: 0x0  nop
    ctx->pc = 0x190a08u;
    // NOP
    // 0x190a0c: 0x0  nop
    ctx->pc = 0x190a0cu;
    // NOP
    ctx->pc = 0x190a10u;
}
