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

// Function: entry_001e2ea0
// Address: 0x1e2ea0 - 0x1e2eb0
void entry_001e2ea0_0x1e2ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2ea0_0x1e2ea0");
#endif

    ctx->pc = 0x1e2ea0u;

    // 0x1e2ea0: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x1e2ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
    // 0x1e2ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2EA4u;
        // 0x1e2ea8: 0x2163f  dsra32      $v0, $v0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2EACu;
    // 0x1e2eac: 0x0  nop
    ctx->pc = 0x1e2eacu;
    // NOP
    ctx->pc = 0x1e2eb0u;
}
