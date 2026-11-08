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

// Function: entry_001ef37c
// Address: 0x1ef37c - 0x1ef384
void entry_001ef37c_0x1ef37c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef37c_0x1ef37c");
#endif

    ctx->pc = 0x1ef37cu;

    // 0x1ef37c: 0xc07ad94  jal         func_1EB650
    ctx->pc = 0x1EF37Cu;
    SET_GPR_U32(ctx, 31, 0x1EF384u);
    ctx->pc = 0x1EB650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB650u, 0x1EF37Cu, 0x1EF384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF384u;
}
