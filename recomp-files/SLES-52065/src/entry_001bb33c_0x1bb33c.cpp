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

// Function: entry_001bb33c
// Address: 0x1bb33c - 0x1bb344
void entry_001bb33c_0x1bb33c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb33c_0x1bb33c");
#endif

    ctx->pc = 0x1bb33cu;

    // 0x1bb33c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BB33Cu;
    SET_GPR_U32(ctx, 31, 0x1BB344u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BB33Cu, 0x1BB344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB344u;
}
