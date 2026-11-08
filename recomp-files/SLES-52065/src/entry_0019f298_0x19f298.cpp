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

// Function: entry_0019f298
// Address: 0x19f298 - 0x19f2a8
void entry_0019f298_0x19f298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f298_0x19f298");
#endif

    switch (ctx->pc) {
        case 0x19f2a0u: goto label_19f2a0;
        default: break;
    }

    ctx->pc = 0x19f298u;

    // 0x19f298: 0xc063e14  jal         func_18F850
    ctx->pc = 0x19F298u;
    SET_GPR_U32(ctx, 31, 0x19F2A0u);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19F298u, 0x19F2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F2A0u;
label_19f2a0:
    // 0x19f2a0: 0x100001c8  b           . + 4 + (0x1C8 << 2)
    ctx->pc = 0x19F2A0u;
    {
        const bool branch_taken_0x19f2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f2a0) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F2A8u;
}
