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

// Function: FUN_001416c0
// Address: 0x1416c0 - 0x1416e0
void FUN_001416c0_0x1416c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001416c0_0x1416c0");
#endif

    ctx->pc = 0x1416c0u;

    // 0x1416c0: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x1416c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x1416c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1416c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1416c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1416c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1416cc: 0x27a3000c  addiu       $v1, $sp, 0xC
    ctx->pc = 0x1416ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1416d0: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x1416d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x1416d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1416d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1416d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1416D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1416DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1416D8u;
        // 0x1416dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1416D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1416E0u;
}
