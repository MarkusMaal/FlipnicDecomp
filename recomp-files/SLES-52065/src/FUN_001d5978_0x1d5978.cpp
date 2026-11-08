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

// Function: FUN_001d5978
// Address: 0x1d5978 - 0x1d59a8
void FUN_001d5978_0x1d5978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d5978_0x1d5978");
#endif

    ctx->pc = 0x1d5978u;

    // 0x1d5978: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D5978u;
    {
        const bool branch_taken_0x1d5978 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1D597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5978u;
        // 0x1d597c: 0x240309e4  addiu       $v1, $zero, 0x9E4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5978) {
            ctx->pc = 0x1D59A0u;
            goto label_1d59a0;
        }
    }
    ctx->pc = 0x1D5980u;
    // 0x1d5980: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1d5980u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d5984: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d5984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d5988: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d598c: 0x8c420558  lw          $v0, 0x558($v0)
    ctx->pc = 0x1d598cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1368)));
    // 0x1d5990: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1d5990u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1d5994: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5994u;
        // 0x1d5998: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D599Cu;
    // 0x1d599c: 0x0  nop
    ctx->pc = 0x1d599cu;
    // NOP
label_1d59a0:
    // 0x1d59a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D59A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D59A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D59A0u;
        // 0x1d59a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D59A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D59A8u;
}
