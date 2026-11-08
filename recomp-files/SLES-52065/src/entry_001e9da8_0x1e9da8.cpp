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

// Function: entry_001e9da8
// Address: 0x1e9da8 - 0x1e9dd4
void entry_001e9da8_0x1e9da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9da8_0x1e9da8");
#endif

    switch (ctx->pc) {
        case 0x1e9db0u: goto label_1e9db0;
        default: break;
    }

    ctx->pc = 0x1e9da8u;

    // 0x1e9da8: 0xc07a520  jal         func_1E9480
    ctx->pc = 0x1E9DA8u;
    SET_GPR_U32(ctx, 31, 0x1E9DB0u);
    ctx->pc = 0x1E9480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9480u, 0x1E9DA8u, 0x1E9DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9DB0u;
label_1e9db0:
    // 0x1e9db0: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e9db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
    // 0x1e9db4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e9db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9db8: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x1e9db8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e9dbc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e9dbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e9dc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e9dc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9dc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e9dc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9dc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9dc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9DCCu;
        // 0x1e9dd0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9DD4u;
}
