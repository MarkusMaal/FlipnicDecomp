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

// Function: entry_001bc9b8
// Address: 0x1bc9b8 - 0x1bc9c8
void entry_001bc9b8_0x1bc9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc9b8_0x1bc9b8");
#endif

    switch (ctx->pc) {
        case 0x1bc9c0u: goto label_1bc9c0;
        default: break;
    }

    ctx->pc = 0x1bc9b8u;

    // 0x1bc9b8: 0xc06f280  jal         func_1BCA00
    ctx->pc = 0x1BC9B8u;
    SET_GPR_U32(ctx, 31, 0x1BC9C0u);
    ctx->pc = 0x1BCA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCA00u, 0x1BC9B8u, 0x1BC9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC9C0u;
label_1bc9c0:
    // 0x1bc9c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BC9C0u;
    {
        const bool branch_taken_0x1bc9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc9c0) {
            ctx->pc = 0x1BC9E0u;
            return;
        }
    }
    ctx->pc = 0x1BC9C8u;
}
