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

// Function: entry_0011e2d0
// Address: 0x11e2d0 - 0x11e2e4
void entry_0011e2d0_0x11e2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e2d0_0x11e2d0");
#endif

    ctx->pc = 0x11e2d0u;

    // 0x11e2d0: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x11e2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x11e2d4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E2D4u;
    {
        const bool branch_taken_0x11e2d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e2d4) {
            ctx->pc = 0x11E2E4u;
            return;
        }
    }
    ctx->pc = 0x11E2DCu;
    // 0x11e2dc: 0xc040150  jal         func_100540
    ctx->pc = 0x11E2DCu;
    SET_GPR_U32(ctx, 31, 0x11E2E4u);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E2DCu, 0x11E2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E2E4u;
}
