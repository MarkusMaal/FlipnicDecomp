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

// Function: entry_0019f9c8
// Address: 0x19f9c8 - 0x19f9d0
void entry_0019f9c8_0x19f9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f9c8_0x19f9c8");
#endif

    ctx->pc = 0x19f9c8u;

    // 0x19f9c8: 0xc067a50  jal         func_19E940
    ctx->pc = 0x19F9C8u;
    SET_GPR_U32(ctx, 31, 0x19F9D0u);
    ctx->pc = 0x19E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E940u, 0x19F9C8u, 0x19F9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F9D0u;
}
