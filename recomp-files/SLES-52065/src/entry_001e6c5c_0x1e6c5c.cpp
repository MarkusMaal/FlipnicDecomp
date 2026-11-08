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

// Function: entry_001e6c5c
// Address: 0x1e6c5c - 0x1e6c70
void entry_001e6c5c_0x1e6c5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6c5c_0x1e6c5c");
#endif

    ctx->pc = 0x1e6c5cu;

    // 0x1e6c5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e6c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6c60: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1e6c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1e6c64: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6C64u;
        // 0x1e6c68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6C6Cu;
    // 0x1e6c6c: 0x0  nop
    ctx->pc = 0x1e6c6cu;
    // NOP
    ctx->pc = 0x1e6c70u;
}
