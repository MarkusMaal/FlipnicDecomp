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

// Function: entry_0011e2f8
// Address: 0x11e2f8 - 0x11e314
void entry_0011e2f8_0x11e2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e2f8_0x11e2f8");
#endif

    switch (ctx->pc) {
        case 0x11e30cu: goto label_11e30c;
        default: break;
    }

    ctx->pc = 0x11e2f8u;

    // 0x11e2f8: 0x8e0400cc  lw          $a0, 0xCC($s0)
    ctx->pc = 0x11e2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x11e2fc: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11E2FCu;
    {
        const bool branch_taken_0x11e2fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e2fc) {
            ctx->pc = 0x11E348u;
            return;
        }
    }
    ctx->pc = 0x11E304u;
    // 0x11e304: 0xc040150  jal         func_100540
    ctx->pc = 0x11E304u;
    SET_GPR_U32(ctx, 31, 0x11E30Cu);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E304u, 0x11E30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E30Cu;
label_11e30c:
    // 0x11e30c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x11E30Cu;
    {
        const bool branch_taken_0x11e30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e30c) {
            ctx->pc = 0x11E348u;
            return;
        }
    }
    ctx->pc = 0x11E314u;
}
