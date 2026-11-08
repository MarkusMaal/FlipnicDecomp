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

// Function: entry_001b6b9c
// Address: 0x1b6b9c - 0x1b6ba4
void entry_001b6b9c_0x1b6b9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6b9c_0x1b6b9c");
#endif

    ctx->pc = 0x1b6b9cu;

    // 0x1b6b9c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B6B9Cu;
    SET_GPR_U32(ctx, 31, 0x1B6BA4u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B6B9Cu, 0x1B6BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6BA4u;
}
