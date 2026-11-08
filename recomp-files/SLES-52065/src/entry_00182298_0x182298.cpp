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

// Function: entry_00182298
// Address: 0x182298 - 0x1822a0
void entry_00182298_0x182298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182298_0x182298");
#endif

    ctx->pc = 0x182298u;

    // 0x182298: 0xc047a64  jal         func_11E990
    ctx->pc = 0x182298u;
    SET_GPR_U32(ctx, 31, 0x1822A0u);
    ctx->pc = 0x11E990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E990u, 0x182298u, 0x1822A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1822A0u;
}
