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

// Function: FUN_001f4408
// Address: 0x1f4408 - 0x1f4418
void FUN_001f4408_0x1f4408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f4408_0x1f4408");
#endif

    switch (ctx->pc) {
        case 0x1f4410u: goto label_1f4410;
        default: break;
    }

    ctx->pc = 0x1f4408u;

    // 0x1f4408: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x1f4408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1f440c: 0xc  syscall     0
    ctx->pc = 0x1f440cu;
    ctx->pc = 0x1F4410u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1f4410:
    // 0x1f4410: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4418u;
}
