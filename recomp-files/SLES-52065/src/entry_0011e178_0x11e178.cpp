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

// Function: entry_0011e178
// Address: 0x11e178 - 0x11e194
void entry_0011e178_0x11e178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e178_0x11e178");
#endif

    switch (ctx->pc) {
        case 0x11e18cu: goto label_11e18c;
        default: break;
    }

    ctx->pc = 0x11e178u;

    // 0x11e178: 0x8e0400cc  lw          $a0, 0xCC($s0)
    ctx->pc = 0x11e178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x11e17c: 0x10800072  beqz        $a0, . + 4 + (0x72 << 2)
    ctx->pc = 0x11E17Cu;
    {
        const bool branch_taken_0x11e17c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e17c) {
            ctx->pc = 0x11E348u;
            return;
        }
    }
    ctx->pc = 0x11E184u;
    // 0x11e184: 0xc040150  jal         func_100540
    ctx->pc = 0x11E184u;
    SET_GPR_U32(ctx, 31, 0x11E18Cu);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11E184u, 0x11E18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E18Cu;
label_11e18c:
    // 0x11e18c: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x11E18Cu;
    {
        const bool branch_taken_0x11e18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e18c) {
            ctx->pc = 0x11E348u;
            return;
        }
    }
    ctx->pc = 0x11E194u;
}
