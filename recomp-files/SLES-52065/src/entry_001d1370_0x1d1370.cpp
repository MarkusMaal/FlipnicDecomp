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

// Function: entry_001d1370
// Address: 0x1d1370 - 0x1d1380
void entry_001d1370_0x1d1370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1370_0x1d1370");
#endif

    ctx->pc = 0x1d1370u;

    // 0x1d1370: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1370u;
        // 0x1d1374: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1378u;
    // 0x1d1378: 0x0  nop
    ctx->pc = 0x1d1378u;
    // NOP
    // 0x1d137c: 0x0  nop
    ctx->pc = 0x1d137cu;
    // NOP
    ctx->pc = 0x1d1380u;
}
