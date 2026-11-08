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

// Function: FUN_0014b200
// Address: 0x14b200 - 0x14b22c
void FUN_0014b200_0x14b200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014b200_0x14b200");
#endif

    ctx->pc = 0x14b200u;

    // 0x14b200: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14b200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14b204: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x14b204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b208: 0x8c23f220  lw          $v1, -0xDE0($at)
    ctx->pc = 0x14b208u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21F220u));
    // 0x14b20c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x14b20cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x14b210: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x14b210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x14b214: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x14b214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x14b218: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x14b218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x14b21c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x14b21cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x14b220: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x14b220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x14b224: 0x3e00008  jr          $ra
    ctx->pc = 0x14B224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B224u;
        // 0x14b228: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B22Cu;
}
