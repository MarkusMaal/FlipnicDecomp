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

// Function: FUN_001f47a8
// Address: 0x1f47a8 - 0x1f47b8
void FUN_001f47a8_0x1f47a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f47a8_0x1f47a8");
#endif

    switch (ctx->pc) {
        case 0x1f47b0u: goto label_1f47b0;
        default: break;
    }

    ctx->pc = 0x1f47a8u;

    // 0x1f47a8: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x1f47a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1f47ac: 0xc  syscall     0
    ctx->pc = 0x1f47acu;
    ctx->pc = 0x1F47B0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1f47b0:
    // 0x1f47b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F47B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F47B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F47B8u;
}
