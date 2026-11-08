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

// Function: entry_001ea6e0
// Address: 0x1ea6e0 - 0x1ea6e8
void entry_001ea6e0_0x1ea6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea6e0_0x1ea6e0");
#endif

    ctx->pc = 0x1ea6e0u;

label_1ea6e0:
    // 0x1ea6e0: 0x60f809  jalr        $v1
label_1ea6e4:
    if (ctx->pc == 0x1EA6E4u) {
        ctx->pc = 0x1EA6E8u;
        goto label_fallthrough_0x1ea6e0;
    }
    ctx->pc = 0x1EA6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EA6E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA6E0u, 0x1EA6E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1ea6e0:
    ctx->pc = 0x1EA6E8u;
}
