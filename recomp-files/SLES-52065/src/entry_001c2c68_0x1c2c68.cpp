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

// Function: entry_001c2c68
// Address: 0x1c2c68 - 0x1c2c70
void entry_001c2c68_0x1c2c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2c68_0x1c2c68");
#endif

    ctx->pc = 0x1c2c68u;

    // 0x1c2c68: 0xc07460c  jal         func_1D1830
    ctx->pc = 0x1C2C68u;
    SET_GPR_U32(ctx, 31, 0x1C2C70u);
    ctx->pc = 0x1D1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1830u, 0x1C2C68u, 0x1C2C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2C70u;
}
