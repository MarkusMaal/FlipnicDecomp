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

// Function: entry_001a9f70
// Address: 0x1a9f70 - 0x1a9f80
void entry_001a9f70_0x1a9f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9f70_0x1a9f70");
#endif

    switch (ctx->pc) {
        case 0x1a9f78u: goto label_1a9f78;
        default: break;
    }

    ctx->pc = 0x1a9f70u;

    // 0x1a9f70: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1A9F70u;
    SET_GPR_U32(ctx, 31, 0x1A9F78u);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A9F70u, 0x1A9F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9F78u;
label_1a9f78:
    // 0x1a9f78: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1A9F78u;
    {
        const bool branch_taken_0x1a9f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9f78) {
            ctx->pc = 0x1AA0ECu;
            return;
        }
    }
    ctx->pc = 0x1A9F80u;
}
