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

// Function: caseD_0
// Address: 0x1ea7d4 - 0x1ea7e0
void caseD_0_0x1ea7d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1ea7d4");
#endif

    ctx->pc = 0x1ea7d4u;

    // 0x1ea7d4: 0x0  nop
    ctx->pc = 0x1ea7d4u;
    // NOP
    // 0x1ea7d8: 0xc07a520  jal         func_1E9480
    ctx->pc = 0x1EA7D8u;
    SET_GPR_U32(ctx, 31, 0x1EA7E0u);
    ctx->pc = 0x1E9480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9480u, 0x1EA7D8u, 0x1EA7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA7E0u;
}
