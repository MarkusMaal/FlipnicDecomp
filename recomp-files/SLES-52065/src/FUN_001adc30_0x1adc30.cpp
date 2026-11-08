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

// Function: FUN_001adc30
// Address: 0x1adc30 - 0x1adc54
void FUN_001adc30_0x1adc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001adc30_0x1adc30");
#endif

    switch (ctx->pc) {
        case 0x1adc30u: goto label_1adc30;
        case 0x1adc34u: goto label_1adc34;
        case 0x1adc38u: goto label_1adc38;
        case 0x1adc3cu: goto label_1adc3c;
        case 0x1adc40u: goto label_1adc40;
        case 0x1adc44u: goto label_1adc44;
        case 0x1adc48u: goto label_1adc48;
        case 0x1adc4cu: goto label_1adc4c;
        case 0x1adc50u: goto label_1adc50;
        default: break;
    }

    ctx->pc = 0x1adc30u;

label_1adc30:
    // 0x1adc30: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1adc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1adc34:
    // 0x1adc34: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1adc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1adc38:
    // 0x1adc38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1adc38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1adc3c:
    // 0x1adc3c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1adc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1adc40:
    // 0x1adc40: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1adc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1adc44:
    // 0x1adc44: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1adc44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1adc48:
    // 0x1adc48: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1adc48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1adc4c:
    // 0x1adc4c: 0x3200008  jr          $t9
label_1adc50:
    if (ctx->pc == 0x1ADC50u) {
        ctx->pc = 0x1ADC54u;
        goto label_fallthrough_0x1adc4c;
    }
    ctx->pc = 0x1ADC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADC4Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1adc4c:
    ctx->pc = 0x1ADC54u;
}
