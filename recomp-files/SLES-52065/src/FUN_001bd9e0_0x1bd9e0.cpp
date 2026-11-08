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

// Function: FUN_001bd9e0
// Address: 0x1bd9e0 - 0x1bda0c
void FUN_001bd9e0_0x1bd9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bd9e0_0x1bd9e0");
#endif

    ctx->pc = 0x1bd9e0u;

    // 0x1bd9e0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1bd9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1bd9e4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1bd9e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd9e8: 0x8c231240  lw          $v1, 0x1240($at)
    ctx->pc = 0x1bd9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x221240u));
    // 0x1bd9ec: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1bd9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1bd9f0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1bd9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1bd9f4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1bd9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1bd9f8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1bd9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1bd9fc: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1bd9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1bda00: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1bda00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1bda04: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDA04u;
        // 0x1bda08: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDA0Cu;
}
