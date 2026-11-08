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

// Function: entry_001a9fb0
// Address: 0x1a9fb0 - 0x1a9fc0
void entry_001a9fb0_0x1a9fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9fb0_0x1a9fb0");
#endif

    switch (ctx->pc) {
        case 0x1a9fb8u: goto label_1a9fb8;
        default: break;
    }

    ctx->pc = 0x1a9fb0u;

    // 0x1a9fb0: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1A9FB0u;
    SET_GPR_U32(ctx, 31, 0x1A9FB8u);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A9FB0u, 0x1A9FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9FB8u;
label_1a9fb8:
    // 0x1a9fb8: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1A9FB8u;
    {
        const bool branch_taken_0x1a9fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9fb8) {
            ctx->pc = 0x1AA0ECu;
            return;
        }
    }
    ctx->pc = 0x1A9FC0u;
}
