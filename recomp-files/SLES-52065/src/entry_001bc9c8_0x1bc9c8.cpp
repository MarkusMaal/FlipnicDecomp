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

// Function: entry_001bc9c8
// Address: 0x1bc9c8 - 0x1bc9d8
void entry_001bc9c8_0x1bc9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc9c8_0x1bc9c8");
#endif

    switch (ctx->pc) {
        case 0x1bc9d0u: goto label_1bc9d0;
        default: break;
    }

    ctx->pc = 0x1bc9c8u;

    // 0x1bc9c8: 0xc06f2c8  jal         func_1BCB20
    ctx->pc = 0x1BC9C8u;
    SET_GPR_U32(ctx, 31, 0x1BC9D0u);
    ctx->pc = 0x1BCB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCB20u, 0x1BC9C8u, 0x1BC9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC9D0u;
label_1bc9d0:
    // 0x1bc9d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BC9D0u;
    {
        const bool branch_taken_0x1bc9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc9d0) {
            ctx->pc = 0x1BC9E0u;
            return;
        }
    }
    ctx->pc = 0x1BC9D8u;
}
