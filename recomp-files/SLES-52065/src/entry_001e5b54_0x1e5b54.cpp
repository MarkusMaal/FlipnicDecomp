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

// Function: entry_001e5b54
// Address: 0x1e5b54 - 0x1e5b70
void entry_001e5b54_0x1e5b54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5b54_0x1e5b54");
#endif

    ctx->pc = 0x1e5b54u;

    // 0x1e5b54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e5b54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e5b58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e5b58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5b5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e5b5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5b60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e5b60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5b64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5b64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5b68: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5B68u;
        // 0x1e5b6c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5B70u;
}
