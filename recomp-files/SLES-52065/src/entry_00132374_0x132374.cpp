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

// Function: entry_00132374
// Address: 0x132374 - 0x1323a4
void entry_00132374_0x132374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132374_0x132374");
#endif

    switch (ctx->pc) {
        case 0x13238cu: goto label_13238c;
        default: break;
    }

    ctx->pc = 0x132374u;

label_132374:
    // 0x132374: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x132374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_132378:
    // 0x132378: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x132378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_13237c:
    // 0x13237c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13237cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_132380:
    // 0x132380: 0x8f3900b4  lw          $t9, 0xB4($t9)
    ctx->pc = 0x132380u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 180)));
label_132384:
    // 0x132384: 0x320f809  jalr        $t9
label_132388:
    if (ctx->pc == 0x132388u) {
        ctx->pc = 0x13238Cu;
        goto label_13238c;
    }
    ctx->pc = 0x132384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13238Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132384u, 0x13238Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13238Cu;
label_13238c:
    // 0x13238c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x13238cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_132390:
    // 0x132390: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x132390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_132394:
    // 0x132394: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x132394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_132398:
    // 0x132398: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x132398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_13239c:
    // 0x13239c: 0x1470fff5  bne         $v1, $s0, . + 4 + (-0xB << 2)
label_1323a0:
    if (ctx->pc == 0x1323A0u) {
        ctx->pc = 0x1323A4u;
        goto label_fallthrough_0x13239c;
    }
    ctx->pc = 0x13239Cu;
    {
        const bool branch_taken_0x13239c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x13239c) {
            ctx->pc = 0x132374u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132374;
        }
    }
label_fallthrough_0x13239c:
    ctx->pc = 0x1323A4u;
}
