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

// Function: entry_00189398
// Address: 0x189398 - 0x1893a0
void entry_00189398_0x189398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189398_0x189398");
#endif

    ctx->pc = 0x189398u;

    // 0x189398: 0xc06d118  jal         func_1B4460
    ctx->pc = 0x189398u;
    SET_GPR_U32(ctx, 31, 0x1893A0u);
    ctx->pc = 0x1B4460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4460u, 0x189398u, 0x1893A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1893A0u;
}
