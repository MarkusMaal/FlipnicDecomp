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

// Function: FUN_0019a0b0
// Address: 0x19a0b0 - 0x19a0e8
void FUN_0019a0b0_0x19a0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019a0b0_0x19a0b0");
#endif

    switch (ctx->pc) {
        case 0x19a0bcu: goto label_19a0bc;
        default: break;
    }

    ctx->pc = 0x19a0b0u;

    // 0x19a0b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19a0b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a0b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19A0B4u;
    {
        const bool branch_taken_0x19a0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0B4u;
        // 0x19a0b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a0b4) {
            ctx->pc = 0x19A0C8u;
            goto label_19a0c8;
        }
    }
    ctx->pc = 0x19A0BCu;
label_19a0bc:
    // 0x19a0bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19a0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19a0c0: 0xac6004d0  sw          $zero, 0x4D0($v1)
    ctx->pc = 0x19a0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1232), GPR_U32(ctx, 0));
    // 0x19a0c4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x19a0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_19a0c8:
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
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a0bc;
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
