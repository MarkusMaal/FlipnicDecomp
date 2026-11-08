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

// Function: entry_001a2f48
// Address: 0x1a2f48 - 0x1a2f58
void entry_001a2f48_0x1a2f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2f48_0x1a2f48");
#endif

    switch (ctx->pc) {
        case 0x1a2f50u: goto label_1a2f50;
        default: break;
    }

    ctx->pc = 0x1a2f48u;

    // 0x1a2f48: 0xc05e84c  jal         func_17A130
    ctx->pc = 0x1A2F48u;
    SET_GPR_U32(ctx, 31, 0x1A2F50u);
    ctx->pc = 0x17A130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A130u, 0x1A2F48u, 0x1A2F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2F50u;
label_1a2f50:
    // 0x1a2f50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2F50u;
    {
        const bool branch_taken_0x1a2f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2f50) {
            ctx->pc = 0x1A2F64u;
            return;
        }
    }
    ctx->pc = 0x1A2F58u;
}
