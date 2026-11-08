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

// Function: entry_001b6214
// Address: 0x1b6214 - 0x1b621c
void entry_001b6214_0x1b6214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6214_0x1b6214");
#endif

    ctx->pc = 0x1b6214u;

    // 0x1b6214: 0xc0740b4  jal         func_1D02D0
    ctx->pc = 0x1B6214u;
    SET_GPR_U32(ctx, 31, 0x1B621Cu);
    ctx->pc = 0x1D02D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02D0u, 0x1B6214u, 0x1B621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B621Cu;
}
