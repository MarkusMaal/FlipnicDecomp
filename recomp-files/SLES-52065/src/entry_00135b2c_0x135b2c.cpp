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

// Function: entry_00135b2c
// Address: 0x135b2c - 0x135b5c
void entry_00135b2c_0x135b2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135b2c_0x135b2c");
#endif

    switch (ctx->pc) {
        case 0x135b44u: goto label_135b44;
        default: break;
    }

    ctx->pc = 0x135b2cu;

label_135b2c:
    // 0x135b2c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x135b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_135b30:
    // 0x135b30: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x135b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_135b34:
    // 0x135b34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x135b34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_135b38:
    // 0x135b38: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x135b38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_135b3c:
    // 0x135b3c: 0x320f809  jalr        $t9
label_135b40:
    if (ctx->pc == 0x135B40u) {
        ctx->pc = 0x135B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135B3Cu;
        // 0x135b40: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x135B44u;
        goto label_135b44;
    }
    ctx->pc = 0x135B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x135B44u);
        ctx->pc = 0x135B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135B3Cu;
        // 0x135b40: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135B3Cu, 0x135B44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135B44u;
label_135b44:
    // 0x135b44: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x135b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_135b48:
    // 0x135b48: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x135b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_135b4c:
    // 0x135b4c: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x135b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_135b50:
    // 0x135b50: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x135b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_135b54:
    // 0x135b54: 0x1470fff5  bne         $v1, $s0, . + 4 + (-0xB << 2)
label_135b58:
    if (ctx->pc == 0x135B58u) {
        ctx->pc = 0x135B5Cu;
        goto label_fallthrough_0x135b54;
    }
    ctx->pc = 0x135B54u;
    {
        const bool branch_taken_0x135b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x135b54) {
            ctx->pc = 0x135B2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_135b2c;
        }
    }
label_fallthrough_0x135b54:
    ctx->pc = 0x135B5Cu;
}
