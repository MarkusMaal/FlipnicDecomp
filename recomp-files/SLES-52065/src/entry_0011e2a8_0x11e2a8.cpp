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

// Function: entry_0011e2a8
// Address: 0x11e2a8 - 0x11e2bc
void entry_0011e2a8_0x11e2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e2a8_0x11e2a8");
#endif

    ctx->pc = 0x11e2a8u;

    // 0x11e2a8: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x11e2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x11e2ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E2ACu;
    {
        const bool branch_taken_0x11e2ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e2ac) {
            ctx->pc = 0x11E2BCu;
            return;
        }
    }
    ctx->pc = 0x11E2B4u;
    // 0x11e2b4: 0xc040150  jal         func_100540
    ctx->pc = 0x11E2B4u;
    SET_GPR_U32(ctx, 31, 0x11E2BCu);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E2B4u, 0x11E2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E2BCu;
}
