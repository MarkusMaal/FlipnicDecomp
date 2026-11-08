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

// Function: entry_001e8d80
// Address: 0x1e8d80 - 0x1e8d90
void entry_001e8d80_0x1e8d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8d80_0x1e8d80");
#endif

    ctx->pc = 0x1e8d80u;

    // 0x1e8d80: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D80u;
        // 0x1e8d84: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8D88u;
    // 0x1e8d88: 0x0  nop
    ctx->pc = 0x1e8d88u;
    // NOP
    // 0x1e8d8c: 0x0  nop
    ctx->pc = 0x1e8d8cu;
    // NOP
    ctx->pc = 0x1e8d90u;
}
