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

// Function: entry_001654b0
// Address: 0x1654b0 - 0x1654c0
void entry_001654b0_0x1654b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001654b0_0x1654b0");
#endif

    ctx->pc = 0x1654b0u;

    // 0x1654b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1654B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1654B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1654B0u;
        // 0x1654b4: 0x84820242  lh          $v0, 0x242($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 578)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1654B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1654B8u;
    // 0x1654b8: 0x0  nop
    ctx->pc = 0x1654b8u;
    // NOP
    // 0x1654bc: 0x0  nop
    ctx->pc = 0x1654bcu;
    // NOP
    ctx->pc = 0x1654c0u;
}
