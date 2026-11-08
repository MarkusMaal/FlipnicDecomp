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

// Function: entry_0011e1f0
// Address: 0x11e1f0 - 0x11e204
void entry_0011e1f0_0x11e1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e1f0_0x11e1f0");
#endif

    ctx->pc = 0x11e1f0u;

    // 0x11e1f0: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x11e1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x11e1f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E1F4u;
    {
        const bool branch_taken_0x11e1f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e1f4) {
            ctx->pc = 0x11E204u;
            return;
        }
    }
    ctx->pc = 0x11E1FCu;
    // 0x11e1fc: 0xc040150  jal         func_100540
    ctx->pc = 0x11E1FCu;
    SET_GPR_U32(ctx, 31, 0x11E204u);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E1FCu, 0x11E204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E204u;
}
