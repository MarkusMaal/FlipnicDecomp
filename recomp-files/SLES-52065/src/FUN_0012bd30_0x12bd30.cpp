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

// Function: FUN_0012bd30
// Address: 0x12bd30 - 0x12bd68
void FUN_0012bd30_0x12bd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012bd30_0x12bd30");
#endif

    switch (ctx->pc) {
        case 0x12bd3cu: goto label_12bd3c;
        default: break;
    }

    ctx->pc = 0x12bd30u;

    // 0x12bd30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12bd30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bd34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12BD34u;
    {
        const bool branch_taken_0x12bd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD34u;
        // 0x12bd38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd34) {
            ctx->pc = 0x12BD50u;
            goto label_12bd50;
        }
    }
    ctx->pc = 0x12BD3Cu;
label_12bd3c:
    // 0x12bd3c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x12bd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12bd40: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12bd40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12bd44: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x12bd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x12bd48: 0xe46c0000  swc1        $f12, 0x0($v1)
    ctx->pc = 0x12bd48u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x12bd4c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x12bd4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_12bd50:
    // 0x12bd50: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x12bd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12bd54: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x12bd54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12bd58: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12BD58u;
    {
        const bool branch_taken_0x12bd58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12bd58) {
            ctx->pc = 0x12BD3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bd3c;
        }
    }
    ctx->pc = 0x12BD60u;
    // 0x12bd60: 0x3e00008  jr          $ra
    ctx->pc = 0x12BD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BD60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BD68u;
}
