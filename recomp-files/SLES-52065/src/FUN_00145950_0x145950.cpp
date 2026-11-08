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

// Function: FUN_00145950
// Address: 0x145950 - 0x14597c
void FUN_00145950_0x145950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00145950_0x145950");
#endif

    ctx->pc = 0x145950u;

    // 0x145950: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x145950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x145954: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x145954u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145958: 0x8c23f1b0  lw          $v1, -0xE50($at)
    ctx->pc = 0x145958u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21F1B0u));
    // 0x14595c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x14595cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x145960: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x145960u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x145964: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x145964u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x145968: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x145968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x14596c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x14596cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x145970: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x145970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x145974: 0x3e00008  jr          $ra
    ctx->pc = 0x145974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145974u;
        // 0x145978: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14597Cu;
}
