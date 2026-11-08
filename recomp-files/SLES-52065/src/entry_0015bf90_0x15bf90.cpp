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

// Function: entry_0015bf90
// Address: 0x15bf90 - 0x15bfa0
void entry_0015bf90_0x15bf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bf90_0x15bf90");
#endif

    ctx->pc = 0x15bf90u;

    // 0x15bf90: 0x3e00008  jr          $ra
    ctx->pc = 0x15BF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF90u;
        // 0x15bf94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BF98u;
    // 0x15bf98: 0x0  nop
    ctx->pc = 0x15bf98u;
    // NOP
    // 0x15bf9c: 0x0  nop
    ctx->pc = 0x15bf9cu;
    // NOP
    ctx->pc = 0x15bfa0u;
}
