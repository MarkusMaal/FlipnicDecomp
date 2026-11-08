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

// Function: FUN_0013f2f0
// Address: 0x13f2f0 - 0x13f310
void FUN_0013f2f0_0x13f2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013f2f0_0x13f2f0");
#endif

    ctx->pc = 0x13f2f0u;

    // 0x13f2f0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x13f2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13f2f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x13f2f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f2f8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x13f2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x13f2fc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x13f2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x13f300: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x13f300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x13f304: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x13f304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x13f308: 0x3e00008  jr          $ra
    ctx->pc = 0x13F308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F308u;
        // 0x13f30c: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F310u;
}
