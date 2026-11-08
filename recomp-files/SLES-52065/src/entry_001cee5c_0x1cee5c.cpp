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

// Function: entry_001cee5c
// Address: 0x1cee5c - 0x1cee78
void entry_001cee5c_0x1cee5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cee5c_0x1cee5c");
#endif

    ctx->pc = 0x1cee5cu;

    // 0x1cee5c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1cee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cee60: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x1cee60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
    // 0x1cee64: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1cee64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cee68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cee68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cee6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cee6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cee70: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE70u;
        // 0x1cee74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEE78u;
}
