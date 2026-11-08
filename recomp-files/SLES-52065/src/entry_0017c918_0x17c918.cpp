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

// Function: entry_0017c918
// Address: 0x17c918 - 0x17c928
void entry_0017c918_0x17c918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c918_0x17c918");
#endif

    switch (ctx->pc) {
        case 0x17c920u: goto label_17c920;
        default: break;
    }

    ctx->pc = 0x17c918u;

    // 0x17c918: 0xc042570  jal         func_1095C0
    ctx->pc = 0x17C918u;
    SET_GPR_U32(ctx, 31, 0x17C920u);
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x17C918u, 0x17C920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C920u;
label_17c920:
    // 0x17c920: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x17C920u;
    {
        const bool branch_taken_0x17c920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c920) {
            ctx->pc = 0x17C96Cu;
            return;
        }
    }
    ctx->pc = 0x17C928u;
}
