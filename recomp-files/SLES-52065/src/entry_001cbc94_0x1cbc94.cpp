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

// Function: entry_001cbc94
// Address: 0x1cbc94 - 0x1cbcac
void entry_001cbc94_0x1cbc94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbc94_0x1cbc94");
#endif

    ctx->pc = 0x1cbc94u;

    // 0x1cbc94: 0x0  nop
    ctx->pc = 0x1cbc94u;
    // NOP
    // 0x1cbc98: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x1cbc98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1cbc9c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CBC9Cu;
    {
        const bool branch_taken_0x1cbc9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC9Cu;
        // 0x1cbca0: 0xc51821  addu        $v1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbc9c) {
            ctx->pc = 0x1CBC7Cu;
            return;
        }
    }
    ctx->pc = 0x1CBCA4u;
    // 0x1cbca4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBCA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBCA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBCACu;
}
