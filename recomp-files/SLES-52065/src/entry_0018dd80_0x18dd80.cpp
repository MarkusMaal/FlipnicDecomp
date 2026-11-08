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

// Function: entry_0018dd80
// Address: 0x18dd80 - 0x18dd90
void entry_0018dd80_0x18dd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dd80_0x18dd80");
#endif

    switch (ctx->pc) {
        case 0x18dd88u: goto label_18dd88;
        default: break;
    }

    ctx->pc = 0x18dd80u;

    // 0x18dd80: 0xc063e14  jal         func_18F850
    ctx->pc = 0x18DD80u;
    SET_GPR_U32(ctx, 31, 0x18DD88u);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x18DD80u, 0x18DD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD88u;
label_18dd88:
    // 0x18dd88: 0x10000171  b           . + 4 + (0x171 << 2)
    ctx->pc = 0x18DD88u;
    {
        const bool branch_taken_0x18dd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dd88) {
            ctx->pc = 0x18E350u;
            return;
        }
    }
    ctx->pc = 0x18DD90u;
}
