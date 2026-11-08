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

// Function: entry_001eee70
// Address: 0x1eee70 - 0x1eee78
void entry_001eee70_0x1eee70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eee70_0x1eee70");
#endif

    ctx->pc = 0x1eee70u;

    // 0x1eee70: 0xc07bb24  jal         func_1EEC90
    ctx->pc = 0x1EEE70u;
    SET_GPR_U32(ctx, 31, 0x1EEE78u);
    ctx->pc = 0x1EEC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEC90u, 0x1EEE70u, 0x1EEE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEE78u;
}
