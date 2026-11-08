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

// Function: FUN_001433d0
// Address: 0x1433d0 - 0x14341c
void FUN_001433d0_0x1433d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001433d0_0x1433d0");
#endif

    switch (ctx->pc) {
        case 0x1433e8u: goto label_1433e8;
        default: break;
    }

    ctx->pc = 0x1433d0u;

    // 0x1433d0: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x1433d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1433d4: 0x8c850038  lw          $a1, 0x38($a0)
    ctx->pc = 0x1433d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1433d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1433d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1433dc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1433dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1433e0: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1433E0u;
    {
        const bool branch_taken_0x1433e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1433e0) {
            ctx->pc = 0x14340Cu;
            goto label_14340c;
        }
    }
    ctx->pc = 0x1433E8u;
label_1433e8:
    // 0x1433e8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1433e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1433ec: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1433ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1433f0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1433F0u;
    {
        const bool branch_taken_0x1433f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1433f0) {
            ctx->pc = 0x143400u;
            goto label_143400;
        }
    }
    ctx->pc = 0x1433F8u;
    // 0x1433f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1433F8u;
    {
        const bool branch_taken_0x1433f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1433FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1433F8u;
        // 0x1433fc: 0x8c820028  lw          $v0, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1433f8) {
            ctx->pc = 0x143414u;
            goto label_143414;
        }
    }
    ctx->pc = 0x143400u;
label_143400:
    // 0x143400: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x143400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x143404: 0x14a2fff8  bne         $a1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x143404u;
    {
        const bool branch_taken_0x143404 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x143404) {
            ctx->pc = 0x1433E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1433e8;
        }
    }
    ctx->pc = 0x14340Cu;
label_14340c:
    // 0x14340c: 0x0  nop
    ctx->pc = 0x14340cu;
    // NOP
    // 0x143410: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_143414:
    // 0x143414: 0x3e00008  jr          $ra
    ctx->pc = 0x143414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14341Cu;
}
