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

// Function: AddTwelveToPointerDereferenceAndUseItAsAPointerAndGetTheResultingDereference
// Address: 0x1221f0 - 0x1221fc
void AddTwelveToPointerDereferenceAndUseItAsAPointerAndGetTheResultingDereference_0x1221f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddTwelveToPointerDereferenceAndUseItAsAPointerAndGetTheResultingDereference_0x1221f0");
#endif

    ctx->pc = 0x1221f0u;

    // 0x1221f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1221f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1221f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1221F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1221F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1221F4u;
        // 0x1221f8: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1221F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1221FCu;
}
