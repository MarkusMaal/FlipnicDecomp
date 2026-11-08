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

// Function: entry_001cbc44
// Address: 0x1cbc44 - 0x1cbc5c
void entry_001cbc44_0x1cbc44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbc44_0x1cbc44");
#endif

    ctx->pc = 0x1cbc44u;

    // 0x1cbc44: 0x0  nop
    ctx->pc = 0x1cbc44u;
    // NOP
    // 0x1cbc48: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x1cbc48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1cbc4c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CBC4Cu;
    {
        const bool branch_taken_0x1cbc4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC4Cu;
        // 0x1cbc50: 0xc51821  addu        $v1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbc4c) {
            ctx->pc = 0x1CBC2Cu;
            return;
        }
    }
    ctx->pc = 0x1CBC54u;
    // 0x1cbc54: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBC5Cu;
}
