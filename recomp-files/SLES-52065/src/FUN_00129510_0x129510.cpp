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

// Function: FUN_00129510
// Address: 0x129510 - 0x12951c
void FUN_00129510_0x129510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00129510_0x129510");
#endif

    ctx->pc = 0x129510u;

    // 0x129510: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x129510u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x129514: 0x3e00008  jr          $ra
    ctx->pc = 0x129514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129514u;
        // 0x129518: 0x7c8300a0  sq          $v1, 0xA0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12951Cu;
}
