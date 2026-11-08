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

// Function: FUN_001b4160
// Address: 0x1b4160 - 0x1b4170
void FUN_001b4160_0x1b4160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b4160_0x1b4160");
#endif

    ctx->pc = 0x1b4160u;

    // 0x1b4160: 0xaf808718  sw          $zero, -0x78E8($gp)
    ctx->pc = 0x1b4160u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936344), GPR_U32(ctx, 0));
    // 0x1b4164: 0xaf80871c  sw          $zero, -0x78E4($gp)
    ctx->pc = 0x1b4164u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936348), GPR_U32(ctx, 0));
    // 0x1b4168: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4168u;
        // 0x1b416c: 0xaf808720  sw          $zero, -0x78E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4170u;
}
