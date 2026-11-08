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

// Function: entry_001a45c0
// Address: 0x1a45c0 - 0x1a45d0
void entry_001a45c0_0x1a45c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a45c0_0x1a45c0");
#endif

    switch (ctx->pc) {
        case 0x1a45c8u: goto label_1a45c8;
        default: break;
    }

    ctx->pc = 0x1a45c0u;

    // 0x1a45c0: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1A45C0u;
    SET_GPR_U32(ctx, 31, 0x1A45C8u);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A45C0u, 0x1A45C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A45C8u;
label_1a45c8:
    // 0x1a45c8: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x1A45C8u;
    {
        const bool branch_taken_0x1a45c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a45c8) {
            ctx->pc = 0x1A486Cu;
            return;
        }
    }
    ctx->pc = 0x1A45D0u;
}
