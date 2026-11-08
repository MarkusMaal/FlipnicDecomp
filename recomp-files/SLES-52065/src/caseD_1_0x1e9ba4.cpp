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

// Function: caseD_1
// Address: 0x1e9ba4 - 0x1e9bb8
void caseD_1_0x1e9ba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1e9ba4");
#endif

    switch (ctx->pc) {
        case 0x1e9bb0u: goto label_1e9bb0;
        default: break;
    }

    ctx->pc = 0x1e9ba4u;

    // 0x1e9ba4: 0x0  nop
    ctx->pc = 0x1e9ba4u;
    // NOP
    // 0x1e9ba8: 0xc07a520  jal         func_1E9480
    ctx->pc = 0x1E9BA8u;
    SET_GPR_U32(ctx, 31, 0x1E9BB0u);
    ctx->pc = 0x1E9480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9480u, 0x1E9BA8u, 0x1E9BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9BB0u;
label_1e9bb0:
    // 0x1e9bb0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E9BB0u;
    {
        const bool branch_taken_0x1e9bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9bb0) {
            ctx->pc = 0x1E9BCCu;
            return;
        }
    }
    ctx->pc = 0x1E9BB8u;
}
