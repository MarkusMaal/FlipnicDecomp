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

// Function: entry_00189eb8
// Address: 0x189eb8 - 0x189ec0
void entry_00189eb8_0x189eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189eb8_0x189eb8");
#endif

    ctx->pc = 0x189eb8u;

    // 0x189eb8: 0xc06d118  jal         func_1B4460
    ctx->pc = 0x189EB8u;
    SET_GPR_U32(ctx, 31, 0x189EC0u);
    ctx->pc = 0x1B4460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4460u, 0x189EB8u, 0x189EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189EC0u;
}
