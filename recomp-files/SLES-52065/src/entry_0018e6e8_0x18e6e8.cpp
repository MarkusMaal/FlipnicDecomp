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

// Function: entry_0018e6e8
// Address: 0x18e6e8 - 0x18e6f0
void entry_0018e6e8_0x18e6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e6e8_0x18e6e8");
#endif

    ctx->pc = 0x18e6e8u;

    // 0x18e6e8: 0xc063e34  jal         func_18F8D0
    ctx->pc = 0x18E6E8u;
    SET_GPR_U32(ctx, 31, 0x18E6F0u);
    ctx->pc = 0x18F8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F8D0u, 0x18E6E8u, 0x18E6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E6F0u;
}
