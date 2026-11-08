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

// Function: FUN_001bb4e0
// Address: 0x1bb4e0 - 0x1bb500
void FUN_001bb4e0_0x1bb4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bb4e0_0x1bb4e0");
#endif

    ctx->pc = 0x1bb4e0u;

    // 0x1bb4e0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1bb4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1bb4e4: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x1bb4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1bb4e8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1bb4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1bb4ec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1bb4ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb4f0: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1bb4f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bb4f4: 0xa0850008  sb          $a1, 0x8($a0)
    ctx->pc = 0x1bb4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 5));
    // 0x1bb4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB4F8u;
        // 0x1bb4fc: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB500u;
}
