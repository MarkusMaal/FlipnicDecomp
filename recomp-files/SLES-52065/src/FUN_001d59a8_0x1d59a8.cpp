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

// Function: FUN_001d59a8
// Address: 0x1d59a8 - 0x1d59cc
void FUN_001d59a8_0x1d59a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d59a8_0x1d59a8");
#endif

    ctx->pc = 0x1d59a8u;

    // 0x1d59a8: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D59A8u;
    {
        const bool branch_taken_0x1d59a8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1D59ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D59A8u;
        // 0x1d59ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d59a8) {
            ctx->pc = 0x1D59C4u;
            goto label_1d59c4;
        }
    }
    ctx->pc = 0x1D59B0u;
    // 0x1d59b0: 0x240209e4  addiu       $v0, $zero, 0x9E4
    ctx->pc = 0x1d59b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d59b4: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x1d59b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d59b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d59b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d59bc: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1d59bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1d59c0: 0xac230568  sw          $v1, 0x568($at)
    ctx->pc = 0x1d59c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1384), GPR_U32(ctx, 3));
label_1d59c4:
    // 0x1d59c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D59C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D59C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D59C4u;
        // 0x1d59c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D59C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D59CCu;
}
