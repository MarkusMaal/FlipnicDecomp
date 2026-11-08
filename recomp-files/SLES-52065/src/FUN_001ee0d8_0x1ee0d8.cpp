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

// Function: FUN_001ee0d8
// Address: 0x1ee0d8 - 0x1ee0f4
void FUN_001ee0d8_0x1ee0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ee0d8_0x1ee0d8");
#endif

    ctx->pc = 0x1ee0d8u;

    // 0x1ee0d8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1ee0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ee0dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ee0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ee0e0: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x1ee0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x1ee0e4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1ee0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1ee0e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1ee0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ee0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE0ECu;
        // 0x1ee0f0: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE0F4u;
}
