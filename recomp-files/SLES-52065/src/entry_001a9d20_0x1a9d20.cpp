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

// Function: entry_001a9d20
// Address: 0x1a9d20 - 0x1a9d30
void entry_001a9d20_0x1a9d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9d20_0x1a9d20");
#endif

    switch (ctx->pc) {
        case 0x1a9d28u: goto label_1a9d28;
        default: break;
    }

    ctx->pc = 0x1a9d20u;

    // 0x1a9d20: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1A9D20u;
    SET_GPR_U32(ctx, 31, 0x1A9D28u);
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A9D20u, 0x1A9D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9D28u;
label_1a9d28:
    // 0x1a9d28: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x1A9D28u;
    {
        const bool branch_taken_0x1a9d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9d28) {
            ctx->pc = 0x1AA0ECu;
            return;
        }
    }
    ctx->pc = 0x1A9D30u;
}
