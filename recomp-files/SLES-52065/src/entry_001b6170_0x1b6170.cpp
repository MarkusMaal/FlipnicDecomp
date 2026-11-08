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

// Function: entry_001b6170
// Address: 0x1b6170 - 0x1b6178
void entry_001b6170_0x1b6170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6170_0x1b6170");
#endif

    ctx->pc = 0x1b6170u;

    // 0x1b6170: 0xc073e84  jal         func_1CFA10
    ctx->pc = 0x1B6170u;
    SET_GPR_U32(ctx, 31, 0x1B6178u);
    ctx->pc = 0x1CFA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA10u, 0x1B6170u, 0x1B6178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6178u;
}
