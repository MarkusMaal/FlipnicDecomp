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

// Function: FUN_001adb80
// Address: 0x1adb80 - 0x1adba4
void FUN_001adb80_0x1adb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001adb80_0x1adb80");
#endif

    switch (ctx->pc) {
        case 0x1adb80u: goto label_1adb80;
        case 0x1adb84u: goto label_1adb84;
        case 0x1adb88u: goto label_1adb88;
        case 0x1adb8cu: goto label_1adb8c;
        case 0x1adb90u: goto label_1adb90;
        case 0x1adb94u: goto label_1adb94;
        case 0x1adb98u: goto label_1adb98;
        case 0x1adb9cu: goto label_1adb9c;
        case 0x1adba0u: goto label_1adba0;
        default: break;
    }

    ctx->pc = 0x1adb80u;

label_1adb80:
    // 0x1adb80: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1adb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1adb84:
    // 0x1adb84: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1adb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1adb88:
    // 0x1adb88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1adb88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1adb8c:
    // 0x1adb8c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1adb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1adb90:
    // 0x1adb90: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1adb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1adb94:
    // 0x1adb94: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1adb94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1adb98:
    // 0x1adb98: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1adb98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1adb9c:
    // 0x1adb9c: 0x3200008  jr          $t9
label_1adba0:
    if (ctx->pc == 0x1ADBA0u) {
        ctx->pc = 0x1ADBA4u;
        goto label_fallthrough_0x1adb9c;
    }
    ctx->pc = 0x1ADB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADB9Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1adb9c:
    ctx->pc = 0x1ADBA4u;
}
