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

// Function: FUN_001061d0
// Address: 0x1061d0 - 0x1061e4
void FUN_001061d0_0x1061d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001061d0_0x1061d0");
#endif

    ctx->pc = 0x1061d0u;

    // 0x1061d0: 0xa4800010  sh          $zero, 0x10($a0)
    ctx->pc = 0x1061d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x1061d4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1061d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1061d8: 0xa080000c  sb          $zero, 0xC($a0)
    ctx->pc = 0x1061d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x1061dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1061DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1061E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1061DCu;
        // 0x1061e0: 0xa080000f  sb          $zero, 0xF($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1061DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1061E4u;
}
