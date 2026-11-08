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

// Function: entry_0011b824
// Address: 0x11b824 - 0x11b838
void entry_0011b824_0x11b824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b824_0x11b824");
#endif

    ctx->pc = 0x11b824u;

    // 0x11b824: 0x0  nop
    ctx->pc = 0x11b824u;
    // NOP
    // 0x11b828: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B828u;
    {
        const bool branch_taken_0x11b828 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b828) {
            ctx->pc = 0x11B838u;
            return;
        }
    }
    ctx->pc = 0x11B830u;
    // 0x11b830: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x11B830u;
    SET_GPR_U32(ctx, 31, 0x11B838u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x11B830u, 0x11B838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B838u;
}
