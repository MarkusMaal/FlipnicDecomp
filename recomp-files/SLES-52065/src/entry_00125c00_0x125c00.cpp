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

// Function: entry_00125c00
// Address: 0x125c00 - 0x125c10
void entry_00125c00_0x125c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125c00_0x125c00");
#endif

    ctx->pc = 0x125c00u;

    // 0x125c00: 0x3e00008  jr          $ra
    ctx->pc = 0x125C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C00u;
        // 0x125c04: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125C08u;
    // 0x125c08: 0x0  nop
    ctx->pc = 0x125c08u;
    // NOP
    // 0x125c0c: 0x0  nop
    ctx->pc = 0x125c0cu;
    // NOP
    ctx->pc = 0x125c10u;
}
