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

// Function: entry_001c8fd8
// Address: 0x1c8fd8 - 0x1c8ff8
void entry_001c8fd8_0x1c8fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8fd8_0x1c8fd8");
#endif

    ctx->pc = 0x1c8fd8u;

    // 0x1c8fd8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c8fd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c8fdc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c8fdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c8fe0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c8fe0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c8fe4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c8fe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8fe8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c8fe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8fec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c8fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8FF0u;
        // 0x1c8ff4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8FF8u;
}
