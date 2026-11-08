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

// Function: entry_001e95bc
// Address: 0x1e95bc - 0x1e95c4
void entry_001e95bc_0x1e95bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e95bc_0x1e95bc");
#endif

    ctx->pc = 0x1e95bcu;

label_1e95bc:
    // 0x1e95bc: 0x3200008  jr          $t9
label_1e95c0:
    if (ctx->pc == 0x1E95C0u) {
        ctx->pc = 0x1E95C4u;
        goto label_fallthrough_0x1e95bc;
    }
    ctx->pc = 0x1E95BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E95BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1e95bc:
    ctx->pc = 0x1E95C4u;
}
