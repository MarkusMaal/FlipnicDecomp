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

// Function: FUN_001f8318
// Address: 0x1f8318 - 0x1f8348
void FUN_001f8318_0x1f8318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f8318_0x1f8318");
#endif

    ctx->pc = 0x1f8318u;

    // 0x1f8318: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1f8318u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x1f831c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f831cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f8320: 0x24c62bc0  addiu       $a2, $a2, 0x2BC0
    ctx->pc = 0x1f8320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11200));
    // 0x1f8324: 0x2442d6b8  addiu       $v0, $v0, -0x2948
    ctx->pc = 0x1f8324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956728));
    // 0x1f8328: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1f8328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x1f832c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1f832cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1f8330: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f8330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f8334: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f8334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f8338: 0x8c83d6bc  lw          $v1, -0x2944($a0)
    ctx->pc = 0x1f8338u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21D6BCu));
    // 0x1f833c: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x1f833cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x1f8340: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8340u;
        // 0x1f8344: 0xacc3003c  sw          $v1, 0x3C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8348u;
}
