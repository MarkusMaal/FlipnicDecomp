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

// Function: entry_001d744c
// Address: 0x1d744c - 0x1d7458
void entry_001d744c_0x1d744c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d744c_0x1d744c");
#endif

    switch (ctx->pc) {
        case 0x1d7454u: goto label_1d7454;
        default: break;
    }

    ctx->pc = 0x1d744cu;

    // 0x1d744c: 0xc077882  jal         func_1DE208
    ctx->pc = 0x1D744Cu;
    SET_GPR_U32(ctx, 31, 0x1D7454u);
    ctx->pc = 0x1DE208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE208u, 0x1D744Cu, 0x1D7454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7454u;
label_1d7454:
    // 0x1d7454: 0x8ea20030  lw          $v0, 0x30($s5)
    ctx->pc = 0x1d7454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    ctx->pc = 0x1d7458u;
}
