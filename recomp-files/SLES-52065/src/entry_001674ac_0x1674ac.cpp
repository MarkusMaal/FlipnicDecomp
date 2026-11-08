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

// Function: entry_001674ac
// Address: 0x1674ac - 0x1674bc
void entry_001674ac_0x1674ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001674ac_0x1674ac");
#endif

    switch (ctx->pc) {
        case 0x1674b4u: goto label_1674b4;
        default: break;
    }

    ctx->pc = 0x1674acu;

    // 0x1674ac: 0xc054810  jal         func_152040
    ctx->pc = 0x1674ACu;
    SET_GPR_U32(ctx, 31, 0x1674B4u);
    ctx->pc = 0x152040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152040u, 0x1674ACu, 0x1674B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1674B4u;
label_1674b4:
    // 0x1674b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1674B4u;
    {
        const bool branch_taken_0x1674b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1674b4) {
            ctx->pc = 0x1674C4u;
            return;
        }
    }
    ctx->pc = 0x1674BCu;
}
