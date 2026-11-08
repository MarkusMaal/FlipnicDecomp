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

// Function: entry_0011e218
// Address: 0x11e218 - 0x11e234
void entry_0011e218_0x11e218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e218_0x11e218");
#endif

    switch (ctx->pc) {
        case 0x11e22cu: goto label_11e22c;
        default: break;
    }

    ctx->pc = 0x11e218u;

    // 0x11e218: 0x8e0400cc  lw          $a0, 0xCC($s0)
    ctx->pc = 0x11e218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x11e21c: 0x1080004a  beqz        $a0, . + 4 + (0x4A << 2)
    ctx->pc = 0x11E21Cu;
    {
        const bool branch_taken_0x11e21c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e21c) {
            ctx->pc = 0x11E348u;
            return;
        }
    }
    ctx->pc = 0x11E224u;
    // 0x11e224: 0xc040150  jal         func_100540
    ctx->pc = 0x11E224u;
    SET_GPR_U32(ctx, 31, 0x11E22Cu);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E224u, 0x11E22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E22Cu;
label_11e22c:
    // 0x11e22c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x11E22Cu;
    {
        const bool branch_taken_0x11e22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e22c) {
            ctx->pc = 0x11E348u;
            return;
        }
    }
    ctx->pc = 0x11E234u;
}
