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

// Function: entry_001b152c
// Address: 0x1b152c - 0x1b1550
void entry_001b152c_0x1b152c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b152c_0x1b152c");
#endif

    ctx->pc = 0x1b152cu;

    // 0x1b152c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1b152cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b1530: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1b1530u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b1534: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1b1534u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b1538: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1b1538u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b153c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1b153cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1540: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b1540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1544: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b1544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1548: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1548u;
        // 0x1b154c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1550u;
}
