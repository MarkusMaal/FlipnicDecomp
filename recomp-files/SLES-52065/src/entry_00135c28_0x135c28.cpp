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

// Function: entry_00135c28
// Address: 0x135c28 - 0x135c58
void entry_00135c28_0x135c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135c28_0x135c28");
#endif

    switch (ctx->pc) {
        case 0x135c40u: goto label_135c40;
        default: break;
    }

    ctx->pc = 0x135c28u;

label_135c28:
    // 0x135c28: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x135c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_135c2c:
    // 0x135c2c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x135c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_135c30:
    // 0x135c30: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x135c30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_135c34:
    // 0x135c34: 0x8f3900cc  lw          $t9, 0xCC($t9)
    ctx->pc = 0x135c34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 204)));
label_135c38:
    // 0x135c38: 0x320f809  jalr        $t9
label_135c3c:
    if (ctx->pc == 0x135C3Cu) {
        ctx->pc = 0x135C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135C38u;
        // 0x135c3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135C40u;
        goto label_135c40;
    }
    ctx->pc = 0x135C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x135C40u);
        ctx->pc = 0x135C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135C38u;
        // 0x135c3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135C38u, 0x135C40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135C40u;
label_135c40:
    // 0x135c40: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x135c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_135c44:
    // 0x135c44: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x135c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_135c48:
    // 0x135c48: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x135c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_135c4c:
    // 0x135c4c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x135c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_135c50:
    // 0x135c50: 0x1470fff5  bne         $v1, $s0, . + 4 + (-0xB << 2)
label_135c54:
    if (ctx->pc == 0x135C54u) {
        ctx->pc = 0x135C58u;
        goto label_fallthrough_0x135c50;
    }
    ctx->pc = 0x135C50u;
    {
        const bool branch_taken_0x135c50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x135c50) {
            ctx->pc = 0x135C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_135c28;
        }
    }
label_fallthrough_0x135c50:
    ctx->pc = 0x135C58u;
}
