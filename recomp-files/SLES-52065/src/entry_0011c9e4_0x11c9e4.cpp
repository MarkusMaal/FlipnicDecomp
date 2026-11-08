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

// Function: entry_0011c9e4
// Address: 0x11c9e4 - 0x11c9f8
void entry_0011c9e4_0x11c9e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c9e4_0x11c9e4");
#endif

    ctx->pc = 0x11c9e4u;

    // 0x11c9e4: 0x0  nop
    ctx->pc = 0x11c9e4u;
    // NOP
    // 0x11c9e8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C9E8u;
    {
        const bool branch_taken_0x11c9e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c9e8) {
            ctx->pc = 0x11C9F8u;
            return;
        }
    }
    ctx->pc = 0x11C9F0u;
    // 0x11c9f0: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x11C9F0u;
    SET_GPR_U32(ctx, 31, 0x11C9F8u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x11C9F0u, 0x11C9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C9F8u;
}
