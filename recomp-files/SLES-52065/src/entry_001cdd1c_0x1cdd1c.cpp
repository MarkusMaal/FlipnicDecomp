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

// Function: entry_001cdd1c
// Address: 0x1cdd1c - 0x1cdd38
void entry_001cdd1c_0x1cdd1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdd1c_0x1cdd1c");
#endif

    ctx->pc = 0x1cdd1cu;

    // 0x1cdd1c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1cdd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cdd20: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x1cdd20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
    // 0x1cdd24: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1cdd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cdd28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cdd28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdd2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cdd2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdd30: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD30u;
        // 0x1cdd34: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDD38u;
}
