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

// Function: entry_001ad6e8
// Address: 0x1ad6e8 - 0x1ad6f8
void entry_001ad6e8_0x1ad6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad6e8_0x1ad6e8");
#endif

    switch (ctx->pc) {
        case 0x1ad6f0u: goto label_1ad6f0;
        default: break;
    }

    ctx->pc = 0x1ad6e8u;

    // 0x1ad6e8: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AD6E8u;
    SET_GPR_U32(ctx, 31, 0x1AD6F0u);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AD6E8u, 0x1AD6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD6F0u;
label_1ad6f0:
    // 0x1ad6f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1AD6F0u;
    {
        const bool branch_taken_0x1ad6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad6f0) {
            ctx->pc = 0x1AD708u;
            return;
        }
    }
    ctx->pc = 0x1AD6F8u;
}
