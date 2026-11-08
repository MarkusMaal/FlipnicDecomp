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

// Function: entry_001e52fc
// Address: 0x1e52fc - 0x1e5310
void entry_001e52fc_0x1e52fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e52fc_0x1e52fc");
#endif

    ctx->pc = 0x1e52fcu;

    // 0x1e52fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1e52fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e5300: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5300u;
        // 0x1e5304: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5308u;
    // 0x1e5308: 0x0  nop
    ctx->pc = 0x1e5308u;
    // NOP
    // 0x1e530c: 0x0  nop
    ctx->pc = 0x1e530cu;
    // NOP
    ctx->pc = 0x1e5310u;
}
