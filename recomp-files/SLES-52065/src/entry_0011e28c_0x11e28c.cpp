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

// Function: entry_0011e28c
// Address: 0x11e28c - 0x11e2a8
void entry_0011e28c_0x11e28c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e28c_0x11e28c");
#endif

    switch (ctx->pc) {
        case 0x11e2a0u: goto label_11e2a0;
        default: break;
    }

    ctx->pc = 0x11e28cu;

    // 0x11e28c: 0x8e0400cc  lw          $a0, 0xCC($s0)
    ctx->pc = 0x11e28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x11e290: 0x1080002d  beqz        $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x11E290u;
    {
        const bool branch_taken_0x11e290 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e290) {
            ctx->pc = 0x11E348u;
            return;
        }
    }
    ctx->pc = 0x11E298u;
    // 0x11e298: 0xc040150  jal         func_100540
    ctx->pc = 0x11E298u;
    SET_GPR_U32(ctx, 31, 0x11E2A0u);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E298u, 0x11E2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E2A0u;
label_11e2a0:
    // 0x11e2a0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x11E2A0u;
    {
        const bool branch_taken_0x11e2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e2a0) {
            ctx->pc = 0x11E348u;
            return;
        }
    }
    ctx->pc = 0x11E2A8u;
}
