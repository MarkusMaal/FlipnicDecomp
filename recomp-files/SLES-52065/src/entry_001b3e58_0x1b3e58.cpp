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

// Function: entry_001b3e58
// Address: 0x1b3e58 - 0x1b3e80
void entry_001b3e58_0x1b3e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3e58_0x1b3e58");
#endif

    switch (ctx->pc) {
        case 0x1b3e68u: goto label_1b3e68;
        case 0x1b3e70u: goto label_1b3e70;
        default: break;
    }

    ctx->pc = 0x1b3e58u;

    // 0x1b3e58: 0xaf828714  sw          $v0, -0x78EC($gp)
    ctx->pc = 0x1b3e58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936340), GPR_U32(ctx, 2));
    // 0x1b3e5c: 0x8f848714  lw          $a0, -0x78EC($gp)
    ctx->pc = 0x1b3e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1b3e60: 0xc06ce38  jal         func_1B38E0
    ctx->pc = 0x1B3E60u;
    SET_GPR_U32(ctx, 31, 0x1B3E68u);
    ctx->pc = 0x1B38E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B38E0u, 0x1B3E60u, 0x1B3E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3E68u;
label_1b3e68:
    // 0x1b3e68: 0xc064148  jal         func_190520
    ctx->pc = 0x1B3E68u;
    SET_GPR_U32(ctx, 31, 0x1B3E70u);
    ctx->pc = 0x190520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190520u, 0x1B3E68u, 0x1B3E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3E70u;
label_1b3e70:
    // 0x1b3e70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3e74: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1b3e74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b3e78: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3E80u;
}
