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
// Address: 0x1e9f48 - 0x1e9f58
void caseD_1_0x1e9f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1e9f48");
#endif

    switch (ctx->pc) {
        case 0x1e9f50u: goto label_1e9f50;
        default: break;
    }

    ctx->pc = 0x1e9f48u;

    // 0x1e9f48: 0xc07a520  jal         func_1E9480
    ctx->pc = 0x1E9F48u;
    SET_GPR_U32(ctx, 31, 0x1E9F50u);
    ctx->pc = 0x1E9480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9480u, 0x1E9F48u, 0x1E9F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9F50u;
label_1e9f50:
    // 0x1e9f50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E9F50u;
    {
        const bool branch_taken_0x1e9f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9f50) {
            ctx->pc = 0x1E9F68u;
            return;
        }
    }
    ctx->pc = 0x1E9F58u;
}
