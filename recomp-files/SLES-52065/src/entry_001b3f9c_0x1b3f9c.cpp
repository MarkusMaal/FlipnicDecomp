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

// Function: entry_001b3f9c
// Address: 0x1b3f9c - 0x1b3fb8
void entry_001b3f9c_0x1b3f9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3f9c_0x1b3f9c");
#endif

    ctx->pc = 0x1b3f9cu;

    // 0x1b3f9c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1b3f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b3fa0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b3fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3fa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b3fa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3fa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b3fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3fac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b3facu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b3fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3FB8u;
}
