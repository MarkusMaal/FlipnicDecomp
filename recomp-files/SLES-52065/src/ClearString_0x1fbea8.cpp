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

// Function: ClearString
// Address: 0x1fbea8 - 0x1fbedc
void ClearString_0x1fbea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearString_0x1fbea8");
#endif

    switch (ctx->pc) {
        case 0x1fbeb8u: goto label_1fbeb8;
        default: break;
    }

    ctx->pc = 0x1fbea8u;

    // 0x1fbea8: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1FBEA8u;
    {
        const bool branch_taken_0x1fbea8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBEA8u;
        // 0x1fbeac: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbea8) {
            ctx->pc = 0x1FBED4u;
            goto label_1fbed4;
        }
    }
    ctx->pc = 0x1FBEB0u;
    // 0x1fbeb0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1fbeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1fbeb4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1fbeb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1fbeb8:
    // 0x1fbeb8: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1fbeb8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fbebc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fbebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fbec0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1fbec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fbec4: 0x0  nop
    ctx->pc = 0x1fbec4u;
    // NOP
    // 0x1fbec8: 0x0  nop
    ctx->pc = 0x1fbec8u;
    // NOP
    // 0x1fbecc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FBECCu;
    {
        const bool branch_taken_0x1fbecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fbecc) {
            ctx->pc = 0x1FBEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fbeb8;
        }
    }
    ctx->pc = 0x1FBED4u;
label_1fbed4:
    // 0x1fbed4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBEDCu;
}
