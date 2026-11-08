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

// Function: FUN_00158f00
// Address: 0x158f00 - 0x158f30
void FUN_00158f00_0x158f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00158f00_0x158f00");
#endif

    switch (ctx->pc) {
        case 0x158f00u: goto label_158f00;
        case 0x158f04u: goto label_158f04;
        case 0x158f08u: goto label_158f08;
        case 0x158f0cu: goto label_158f0c;
        case 0x158f10u: goto label_158f10;
        case 0x158f14u: goto label_158f14;
        case 0x158f18u: goto label_158f18;
        case 0x158f1cu: goto label_158f1c;
        case 0x158f20u: goto label_158f20;
        case 0x158f24u: goto label_158f24;
        case 0x158f28u: goto label_158f28;
        case 0x158f2cu: goto label_158f2c;
        default: break;
    }

    ctx->pc = 0x158f00u;

label_158f00:
    // 0x158f00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x158f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_158f04:
    // 0x158f04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_158f08:
    if (ctx->pc == 0x158F08u) {
        ctx->pc = 0x158F0Cu;
        goto label_158f0c;
    }
    ctx->pc = 0x158F04u;
    {
        const bool branch_taken_0x158f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158f04) {
            ctx->pc = 0x158F20u;
            goto label_158f20;
        }
    }
    ctx->pc = 0x158F0Cu;
label_158f0c:
    // 0x158f0c: 0x84420032  lh          $v0, 0x32($v0)
    ctx->pc = 0x158f0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 50)));
label_158f10:
    // 0x158f10: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_158f14:
    if (ctx->pc == 0x158F14u) {
        ctx->pc = 0x158F18u;
        goto label_158f18;
    }
    ctx->pc = 0x158F10u;
    {
        const bool branch_taken_0x158f10 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x158f10) {
            ctx->pc = 0x158F20u;
            goto label_158f20;
        }
    }
    ctx->pc = 0x158F18u;
label_158f18:
    // 0x158f18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x158f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_158f1c:
    // 0x158f1c: 0xa082007a  sb          $v0, 0x7A($a0)
    ctx->pc = 0x158f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 122), (uint8_t)GPR_U32(ctx, 2));
label_158f20:
    // 0x158f20: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x158f20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_158f24:
    // 0x158f24: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x158f24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_158f28:
    // 0x158f28: 0x3200008  jr          $t9
label_158f2c:
    if (ctx->pc == 0x158F2Cu) {
        ctx->pc = 0x158F30u;
        goto label_fallthrough_0x158f28;
    }
    ctx->pc = 0x158F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158F28u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x158f28:
    ctx->pc = 0x158F30u;
}
