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

// Function: FUN_001b4130
// Address: 0x1b4130 - 0x1b4150
void FUN_001b4130_0x1b4130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b4130_0x1b4130");
#endif

    switch (ctx->pc) {
        case 0x1b4140u: goto label_1b4140;
        default: break;
    }

    ctx->pc = 0x1b4130u;

    // 0x1b4130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4138: 0xc06d054  jal         func_1B4150
    ctx->pc = 0x1B4138u;
    SET_GPR_U32(ctx, 31, 0x1B4140u);
    ctx->pc = 0x1B4150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4150u, 0x1B4138u, 0x1B4140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4140u;
label_1b4140:
    // 0x1b4140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4144: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1b4144u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b4148: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4150u;
}
