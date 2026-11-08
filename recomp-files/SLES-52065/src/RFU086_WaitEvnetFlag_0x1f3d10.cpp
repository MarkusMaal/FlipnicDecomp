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

// Function: RFU086_WaitEvnetFlag
// Address: 0x1f3d10 - 0x1f3d20
void RFU086_WaitEvnetFlag_0x1f3d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RFU086_WaitEvnetFlag_0x1f3d10");
#endif

    switch (ctx->pc) {
        case 0x1f3d18u: goto label_1f3d18;
        default: break;
    }

    ctx->pc = 0x1f3d10u;

    // 0x1f3d10: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x1f3d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x1f3d14: 0xc  syscall     0
    ctx->pc = 0x1f3d14u;
    ctx->pc = 0x1F3D18u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1f3d18:
    // 0x1f3d18: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3D20u;
}
