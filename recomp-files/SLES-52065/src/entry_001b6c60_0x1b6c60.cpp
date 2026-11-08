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

// Function: entry_001b6c60
// Address: 0x1b6c60 - 0x1b6c84
void entry_001b6c60_0x1b6c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6c60_0x1b6c60");
#endif

    switch (ctx->pc) {
        case 0x1b6c68u: goto label_1b6c68;
        default: break;
    }

    ctx->pc = 0x1b6c60u;

    // 0x1b6c60: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B6C60u;
    SET_GPR_U32(ctx, 31, 0x1B6C68u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B6C60u, 0x1B6C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6C68u;
label_1b6c68:
    // 0x1b6c68: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b6c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6c6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b6c6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6c70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b6c70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6c74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b6c74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6c78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b6c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C7Cu;
        // 0x1b6c80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6C84u;
}
