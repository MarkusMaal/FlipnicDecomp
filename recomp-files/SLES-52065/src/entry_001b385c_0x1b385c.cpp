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

// Function: entry_001b385c
// Address: 0x1b385c - 0x1b3874
void entry_001b385c_0x1b385c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b385c_0x1b385c");
#endif

    ctx->pc = 0x1b385cu;

    // 0x1b385c: 0x0  nop
    ctx->pc = 0x1b385cu;
    // NOP
    // 0x1b3860: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x1b3860u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1b3864: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B3864u;
    {
        const bool branch_taken_0x1b3864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3864) {
            ctx->pc = 0x1B384Cu;
            return;
        }
    }
    ctx->pc = 0x1B386Cu;
    // 0x1b386c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B386Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B386Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3874u;
}
