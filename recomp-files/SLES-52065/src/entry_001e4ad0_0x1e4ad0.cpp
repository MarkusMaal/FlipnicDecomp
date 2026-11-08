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

// Function: entry_001e4ad0
// Address: 0x1e4ad0 - 0x1e4ad8
void entry_001e4ad0_0x1e4ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4ad0_0x1e4ad0");
#endif

    ctx->pc = 0x1e4ad0u;

    // 0x1e4ad0: 0xc0817ae  jal         func_205EB8
    ctx->pc = 0x1E4AD0u;
    SET_GPR_U32(ctx, 31, 0x1E4AD8u);
    ctx->pc = 0x205EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205EB8u, 0x1E4AD0u, 0x1E4AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4AD8u;
}
