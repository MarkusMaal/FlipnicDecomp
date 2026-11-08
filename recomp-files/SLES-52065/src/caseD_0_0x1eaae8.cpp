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

// Function: caseD_0
// Address: 0x1eaae8 - 0x1eaaf8
void caseD_0_0x1eaae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1eaae8");
#endif

    switch (ctx->pc) {
        case 0x1eaaf0u: goto label_1eaaf0;
        default: break;
    }

    ctx->pc = 0x1eaae8u;

    // 0x1eaae8: 0xc07a520  jal         func_1E9480
    ctx->pc = 0x1EAAE8u;
    SET_GPR_U32(ctx, 31, 0x1EAAF0u);
    ctx->pc = 0x1E9480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9480u, 0x1EAAE8u, 0x1EAAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAAF0u;
label_1eaaf0:
    // 0x1eaaf0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EAAF0u;
    {
        const bool branch_taken_0x1eaaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eaaf0) {
            ctx->pc = 0x1EAB14u;
            return;
        }
    }
    ctx->pc = 0x1EAAF8u;
}
