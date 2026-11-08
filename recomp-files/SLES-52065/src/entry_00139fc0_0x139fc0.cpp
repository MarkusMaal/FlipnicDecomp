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

// Function: entry_00139fc0
// Address: 0x139fc0 - 0x139fd0
void entry_00139fc0_0x139fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139fc0_0x139fc0");
#endif

    ctx->pc = 0x139fc0u;

    // 0x139fc0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x139fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x139fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x139FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139FC4u;
        // 0x139fc8: 0x8c420038  lw          $v0, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139FCCu;
    // 0x139fcc: 0x0  nop
    ctx->pc = 0x139fccu;
    // NOP
    ctx->pc = 0x139fd0u;
}
