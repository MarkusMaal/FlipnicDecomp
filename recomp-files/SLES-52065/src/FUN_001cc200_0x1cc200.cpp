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

// Function: FUN_001cc200
// Address: 0x1cc200 - 0x1cc20c
void FUN_001cc200_0x1cc200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cc200_0x1cc200");
#endif

    ctx->pc = 0x1cc200u;

    // 0x1cc200: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cc200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cc204: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC204u;
        // 0x1cc208: 0xac24f950  sw          $a0, -0x6B0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294965584), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC20Cu;
}
