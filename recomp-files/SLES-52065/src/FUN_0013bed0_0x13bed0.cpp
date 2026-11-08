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

// Function: FUN_0013bed0
// Address: 0x13bed0 - 0x13bef0
void FUN_0013bed0_0x13bed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013bed0_0x13bed0");
#endif

    ctx->pc = 0x13bed0u;

    // 0x13bed0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x13bed0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x13bed4: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x13bed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x13bed8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x13bed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x13bedc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x13bedcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bee0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x13bee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13bee4: 0xa0830008  sb          $v1, 0x8($a0)
    ctx->pc = 0x13bee4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x13bee8: 0x3e00008  jr          $ra
    ctx->pc = 0x13BEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BEE8u;
        // 0x13beec: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BEF0u;
}
