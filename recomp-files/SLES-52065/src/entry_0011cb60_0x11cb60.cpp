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

// Function: entry_0011cb60
// Address: 0x11cb60 - 0x11cb70
void entry_0011cb60_0x11cb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cb60_0x11cb60");
#endif

    ctx->pc = 0x11cb60u;

    // 0x11cb60: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CB60u;
    {
        const bool branch_taken_0x11cb60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cb60) {
            ctx->pc = 0x11CB70u;
            return;
        }
    }
    ctx->pc = 0x11CB68u;
    // 0x11cb68: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x11CB68u;
    SET_GPR_U32(ctx, 31, 0x11CB70u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x11CB68u, 0x11CB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CB70u;
}
