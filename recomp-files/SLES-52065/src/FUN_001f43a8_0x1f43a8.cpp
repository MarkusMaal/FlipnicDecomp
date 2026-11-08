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

// Function: FUN_001f43a8
// Address: 0x1f43a8 - 0x1f43c0
void FUN_001f43a8_0x1f43a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f43a8_0x1f43a8");
#endif

    ctx->pc = 0x1f43a8u;

    // 0x1f43a8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x1f43a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x1f43ac: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1f43acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1f43b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f43b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f43b4: 0x42000038  ei
    ctx->pc = 0x1f43b4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1f43b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F43B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F43BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F43B8u;
        // 0x1f43bc: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F43B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F43C0u;
}
