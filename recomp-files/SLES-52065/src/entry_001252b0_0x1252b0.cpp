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

// Function: entry_001252b0
// Address: 0x1252b0 - 0x1252c0
void entry_001252b0_0x1252b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001252b0_0x1252b0");
#endif

    ctx->pc = 0x1252b0u;

    // 0x1252b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1252B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1252B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1252B0u;
        // 0x1252b4: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1252B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1252B8u;
    // 0x1252b8: 0x0  nop
    ctx->pc = 0x1252b8u;
    // NOP
    // 0x1252bc: 0x0  nop
    ctx->pc = 0x1252bcu;
    // NOP
    ctx->pc = 0x1252c0u;
}
