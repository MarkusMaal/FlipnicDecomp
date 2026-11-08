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

// Function: FUN_001434b0
// Address: 0x1434b0 - 0x1434d8
void FUN_001434b0_0x1434b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001434b0_0x1434b0");
#endif

    ctx->pc = 0x1434b0u;

    // 0x1434b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1434b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1434b4: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x1434b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x1434b8: 0xa0830005  sb          $v1, 0x5($a0)
    ctx->pc = 0x1434b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x1434bc: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x1434bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x1434c0: 0xa0830007  sb          $v1, 0x7($a0)
    ctx->pc = 0x1434c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x1434c4: 0xa0830008  sb          $v1, 0x8($a0)
    ctx->pc = 0x1434c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x1434c8: 0xa0830009  sb          $v1, 0x9($a0)
    ctx->pc = 0x1434c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x1434cc: 0xa083000a  sb          $v1, 0xA($a0)
    ctx->pc = 0x1434ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x1434d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1434D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1434D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1434D0u;
        // 0x1434d4: 0xa083000b  sb          $v1, 0xB($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1434D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1434D8u;
}
