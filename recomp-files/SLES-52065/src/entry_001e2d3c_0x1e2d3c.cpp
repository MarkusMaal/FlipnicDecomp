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

// Function: entry_001e2d3c
// Address: 0x1e2d3c - 0x1e2d60
void entry_001e2d3c_0x1e2d3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2d3c_0x1e2d3c");
#endif

    ctx->pc = 0x1e2d3cu;

    // 0x1e2d3c: 0xa2130044  sb          $s3, 0x44($s0)
    ctx->pc = 0x1e2d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 19));
    // 0x1e2d40: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e2d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e2d44: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e2d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e2d48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e2d48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e2d4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e2d4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2d50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e2d50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2d54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2d58: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D58u;
        // 0x1e2d5c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2D60u;
}
