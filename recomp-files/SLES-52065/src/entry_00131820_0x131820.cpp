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

// Function: entry_00131820
// Address: 0x131820 - 0x131830
void entry_00131820_0x131820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131820_0x131820");
#endif

    switch (ctx->pc) {
        case 0x131820u: goto label_131820;
        case 0x131824u: goto label_131824;
        case 0x131828u: goto label_131828;
        case 0x13182cu: goto label_13182c;
        default: break;
    }

    ctx->pc = 0x131820u;

label_131820:
    // 0x131820: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x131820u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_131824:
    // 0x131824: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x131824u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_131828:
    // 0x131828: 0x3200008  jr          $t9
label_13182c:
    if (ctx->pc == 0x13182Cu) {
        ctx->pc = 0x131830u;
        goto label_fallthrough_0x131828;
    }
    ctx->pc = 0x131828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131828u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x131828:
    ctx->pc = 0x131830u;
}
