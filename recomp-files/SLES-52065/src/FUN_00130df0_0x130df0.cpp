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

// Function: FUN_00130df0
// Address: 0x130df0 - 0x130e10
void FUN_00130df0_0x130df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00130df0_0x130df0");
#endif

    ctx->pc = 0x130df0u;

    // 0x130df0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x130df0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x130df4: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x130df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x130df8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x130df8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x130dfc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x130dfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e00: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x130e00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x130e04: 0xa0850008  sb          $a1, 0x8($a0)
    ctx->pc = 0x130e04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 5));
    // 0x130e08: 0x3e00008  jr          $ra
    ctx->pc = 0x130E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E08u;
        // 0x130e0c: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130E10u;
}
