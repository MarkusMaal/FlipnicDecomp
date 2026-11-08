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

// Function: entry_0010f9f0
// Address: 0x10f9f0 - 0x10fa24
void entry_0010f9f0_0x10f9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f9f0_0x10f9f0");
#endif

    switch (ctx->pc) {
        case 0x10fa1cu: goto label_10fa1c;
        default: break;
    }

    ctx->pc = 0x10f9f0u;

label_10f9f0:
    // 0x10f9f0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x10f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_10f9f4:
    // 0x10f9f4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10f9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10f9f8:
    // 0x10f9f8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x10f9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_10f9fc:
    // 0x10f9fc: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x10f9fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_10fa00:
    // 0x10fa00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10fa04:
    // 0x10fa04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10fa08:
    // 0x10fa08: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x10fa08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10fa0c:
    // 0x10fa0c: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x10fa0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10fa10:
    // 0x10fa10: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x10fa10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_10fa14:
    // 0x10fa14: 0x320f809  jalr        $t9
label_10fa18:
    if (ctx->pc == 0x10FA18u) {
        ctx->pc = 0x10FA1Cu;
        goto label_10fa1c;
    }
    ctx->pc = 0x10FA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10FA1Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FA14u, 0x10FA1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10FA1Cu;
label_10fa1c:
    // 0x10fa1c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x10fa1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_10fa20:
    // 0x10fa20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10fa20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x10fa24u;
}
