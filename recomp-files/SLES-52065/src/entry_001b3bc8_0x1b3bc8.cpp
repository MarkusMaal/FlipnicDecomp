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

// Function: entry_001b3bc8
// Address: 0x1b3bc8 - 0x1b3be0
void entry_001b3bc8_0x1b3bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3bc8_0x1b3bc8");
#endif

    ctx->pc = 0x1b3bc8u;

    // 0x1b3bc8: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x1b3bc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b3bcc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B3BCCu;
    {
        const bool branch_taken_0x1b3bcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3bcc) {
            ctx->pc = 0x1B3BB8u;
            return;
        }
    }
    ctx->pc = 0x1B3BD4u;
    // 0x1b3bd4: 0xac802834  sw          $zero, 0x2834($a0)
    ctx->pc = 0x1b3bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10292), GPR_U32(ctx, 0));
    // 0x1b3bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3BE0u;
}
