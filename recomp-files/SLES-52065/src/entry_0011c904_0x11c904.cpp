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

// Function: entry_0011c904
// Address: 0x11c904 - 0x11c918
void entry_0011c904_0x11c904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c904_0x11c904");
#endif

    ctx->pc = 0x11c904u;

    // 0x11c904: 0x0  nop
    ctx->pc = 0x11c904u;
    // NOP
    // 0x11c908: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C908u;
    {
        const bool branch_taken_0x11c908 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c908) {
            ctx->pc = 0x11C918u;
            return;
        }
    }
    ctx->pc = 0x11C910u;
    // 0x11c910: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x11C910u;
    SET_GPR_U32(ctx, 31, 0x11C918u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x11C910u, 0x11C918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C918u;
}
