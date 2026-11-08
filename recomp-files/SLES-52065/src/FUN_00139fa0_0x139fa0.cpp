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

// Function: FUN_00139fa0
// Address: 0x139fa0 - 0x139fb8
void FUN_00139fa0_0x139fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00139fa0_0x139fa0");
#endif

    ctx->pc = 0x139fa0u;

    // 0x139fa0: 0x8f838594  lw          $v1, -0x7A6C($gp)
    ctx->pc = 0x139fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935956)));
    // 0x139fa4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x139fa4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x139fa8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x139fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x139fac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x139facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x139fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x139FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139FB0u;
        // 0x139fb4: 0xaf838594  sw          $v1, -0x7A6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935956), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139FB8u;
}
