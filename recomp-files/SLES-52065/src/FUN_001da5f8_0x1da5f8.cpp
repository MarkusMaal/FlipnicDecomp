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

// Function: FUN_001da5f8
// Address: 0x1da5f8 - 0x1da614
void FUN_001da5f8_0x1da5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001da5f8_0x1da5f8");
#endif

    ctx->pc = 0x1da5f8u;

    // 0x1da5f8: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1da5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1da5fc: 0x24637324  addiu       $v1, $v1, 0x7324
    ctx->pc = 0x1da5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29476));
    // 0x1da600: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1da600u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x387324u));
    // 0x1da604: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1da604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da608: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1da608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1da60c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA60Cu;
        // 0x1da610: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA614u;
}
