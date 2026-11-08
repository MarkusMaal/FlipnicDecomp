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

// Function: entry_001b96a0
// Address: 0x1b96a0 - 0x1b96ac
void entry_001b96a0_0x1b96a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b96a0_0x1b96a0");
#endif

    switch (ctx->pc) {
        case 0x1b96a8u: goto label_1b96a8;
        default: break;
    }

    ctx->pc = 0x1b96a0u;

    // 0x1b96a0: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1B96A0u;
    SET_GPR_U32(ctx, 31, 0x1B96A8u);
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1B96A0u, 0x1B96A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B96A8u;
label_1b96a8:
    // 0x1b96a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b96a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1b96acu;
}
