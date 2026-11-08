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

// Function: entry_0019a0c8
// Address: 0x19a0c8 - 0x19a0e8
void entry_0019a0c8_0x19a0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a0c8_0x19a0c8");
#endif

    ctx->pc = 0x19a0c8u;

    // 0x19a0c8: 0x8c830340  lw          $v1, 0x340($a0)
    ctx->pc = 0x19a0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 832)));
    // 0x19a0cc: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x19a0ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19a0d0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19A0D0u;
    {
        const bool branch_taken_0x19a0d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0D0u;
        // 0x19a0d4: 0x861821  addu        $v1, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a0d0) {
            ctx->pc = 0x19A0BCu;
            return;
        }
    }
    ctx->pc = 0x19A0D8u;
    // 0x19a0d8: 0xac80032c  sw          $zero, 0x32C($a0)
    ctx->pc = 0x19a0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 812), GPR_U32(ctx, 0));
    // 0x19a0dc: 0xac800344  sw          $zero, 0x344($a0)
    ctx->pc = 0x19a0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 836), GPR_U32(ctx, 0));
    // 0x19a0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x19A0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0E0u;
        // 0x19a0e4: 0xac800670  sw          $zero, 0x670($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1648), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A0E8u;
}
