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

// Function: FUN_001249f0
// Address: 0x1249f0 - 0x124a38
void FUN_001249f0_0x1249f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001249f0_0x1249f0");
#endif

    switch (ctx->pc) {
        case 0x1249fcu: goto label_1249fc;
        default: break;
    }

    ctx->pc = 0x1249f0u;

    // 0x1249f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1249f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1249f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1249F4u;
    {
        const bool branch_taken_0x1249f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1249F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1249F4u;
        // 0x1249f8: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1249f4) {
            ctx->pc = 0x124A04u;
            goto label_124a04;
        }
    }
    ctx->pc = 0x1249FCu;
label_1249fc:
    // 0x1249fc: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x1249fcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x124a00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x124a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_124a04:
    // 0x124a04: 0x0  nop
    ctx->pc = 0x124a04u;
    // NOP
    // 0x124a08: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x124a08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x124a0c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x124A0Cu;
    {
        const bool branch_taken_0x124a0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x124a0c) {
            ctx->pc = 0x124A1Cu;
            goto label_124a1c;
        }
    }
    ctx->pc = 0x124A14u;
    // 0x124a14: 0x1443fff9  bne         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x124A14u;
    {
        const bool branch_taken_0x124a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x124a14) {
            ctx->pc = 0x1249FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1249fc;
        }
    }
    ctx->pc = 0x124A1Cu;
label_124a1c:
    // 0x124a1c: 0x0  nop
    ctx->pc = 0x124a1cu;
    // NOP
    // 0x124a20: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x124a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x124a24: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x124A24u;
    {
        const bool branch_taken_0x124a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x124a24) {
            ctx->pc = 0x124A30u;
            goto label_124a30;
        }
    }
    ctx->pc = 0x124A2Cu;
    // 0x124a2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x124a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_124a30:
    // 0x124a30: 0x3e00008  jr          $ra
    ctx->pc = 0x124A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124A38u;
}
