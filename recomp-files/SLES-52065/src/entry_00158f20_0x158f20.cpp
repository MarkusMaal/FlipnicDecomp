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

// Function: entry_00158f20
// Address: 0x158f20 - 0x158f30
void entry_00158f20_0x158f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158f20_0x158f20");
#endif

    ctx->pc = 0x158f20u;

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
