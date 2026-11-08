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

// Function: FUN_00143470
// Address: 0x143470 - 0x1434b0
void FUN_00143470_0x143470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00143470_0x143470");
#endif

    switch (ctx->pc) {
        case 0x14347cu: goto label_14347c;
        default: break;
    }

    ctx->pc = 0x143470u;

    // 0x143470: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x143470u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143474: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x143474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x143478: 0x883821  addu        $a3, $a0, $t0
    ctx->pc = 0x143478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_14347c:
    // 0x14347c: 0x80e30004  lb          $v1, 0x4($a3)
    ctx->pc = 0x14347cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x143480: 0x0  nop
    ctx->pc = 0x143480u;
    // NOP
    // 0x143484: 0x14660004  bne         $v1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x143484u;
    {
        const bool branch_taken_0x143484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x143484) {
            ctx->pc = 0x143498u;
            goto label_143498;
        }
    }
    ctx->pc = 0x14348Cu;
    // 0x14348c: 0xa0e50004  sb          $a1, 0x4($a3)
    ctx->pc = 0x14348cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 5));
    // 0x143490: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x143490u;
    {
        const bool branch_taken_0x143490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143490u;
        // 0x143494: 0xa0e60005  sb          $a2, 0x5($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 5), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143490) {
            ctx->pc = 0x1434A8u;
            goto label_1434a8;
        }
    }
    ctx->pc = 0x143498u;
label_143498:
    // 0x143498: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x143498u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x14349c: 0x29030007  slti        $v1, $t0, 0x7
    ctx->pc = 0x14349cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1434a0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1434A0u;
    {
        const bool branch_taken_0x1434a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1434A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1434A0u;
        // 0x1434a4: 0x883821  addu        $a3, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1434a0) {
            ctx->pc = 0x14347Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14347c;
        }
    }
    ctx->pc = 0x1434A8u;
label_1434a8:
    // 0x1434a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1434A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1434A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1434B0u;
}
