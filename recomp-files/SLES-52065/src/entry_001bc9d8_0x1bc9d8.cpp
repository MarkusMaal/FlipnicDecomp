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

// Function: entry_001bc9d8
// Address: 0x1bc9d8 - 0x1bc9e0
void entry_001bc9d8_0x1bc9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc9d8_0x1bc9d8");
#endif

    ctx->pc = 0x1bc9d8u;

    // 0x1bc9d8: 0xc06f390  jal         func_1BCE40
    ctx->pc = 0x1BC9D8u;
    SET_GPR_U32(ctx, 31, 0x1BC9E0u);
    ctx->pc = 0x1BCE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCE40u, 0x1BC9D8u, 0x1BC9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC9E0u;
}
