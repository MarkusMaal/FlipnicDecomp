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

// Function: entry_0011e264
// Address: 0x11e264 - 0x11e278
void entry_0011e264_0x11e264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e264_0x11e264");
#endif

    ctx->pc = 0x11e264u;

    // 0x11e264: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x11e264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x11e268: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E268u;
    {
        const bool branch_taken_0x11e268 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e268) {
            ctx->pc = 0x11E278u;
            return;
        }
    }
    ctx->pc = 0x11E270u;
    // 0x11e270: 0xc040150  jal         func_100540
    ctx->pc = 0x11E270u;
    SET_GPR_U32(ctx, 31, 0x11E278u);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E270u, 0x11E278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E278u;
}
