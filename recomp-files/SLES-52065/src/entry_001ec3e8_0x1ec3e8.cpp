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

// Function: entry_001ec3e8
// Address: 0x1ec3e8 - 0x1ec3f8
void entry_001ec3e8_0x1ec3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec3e8_0x1ec3e8");
#endif

    switch (ctx->pc) {
        case 0x1ec3f0u: goto label_1ec3f0;
        default: break;
    }

    ctx->pc = 0x1ec3e8u;

    // 0x1ec3e8: 0xc07b5a2  jal         func_1ED688
    ctx->pc = 0x1EC3E8u;
    SET_GPR_U32(ctx, 31, 0x1EC3F0u);
    ctx->pc = 0x1ED688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED688u, 0x1EC3E8u, 0x1EC3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC3F0u;
label_1ec3f0:
    // 0x1ec3f0: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x1EC3F0u;
    {
        const bool branch_taken_0x1ec3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec3f0) {
            ctx->pc = 0x1EC360u;
            return;
        }
    }
    ctx->pc = 0x1EC3F8u;
}
