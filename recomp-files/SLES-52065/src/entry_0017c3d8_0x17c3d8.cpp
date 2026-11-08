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

// Function: entry_0017c3d8
// Address: 0x17c3d8 - 0x17c3e8
void entry_0017c3d8_0x17c3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c3d8_0x17c3d8");
#endif

    switch (ctx->pc) {
        case 0x17c3e0u: goto label_17c3e0;
        default: break;
    }

    ctx->pc = 0x17c3d8u;

    // 0x17c3d8: 0xc042570  jal         func_1095C0
    ctx->pc = 0x17C3D8u;
    SET_GPR_U32(ctx, 31, 0x17C3E0u);
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x17C3D8u, 0x17C3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C3E0u;
label_17c3e0:
    // 0x17c3e0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x17C3E0u;
    {
        const bool branch_taken_0x17c3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c3e0) {
            ctx->pc = 0x17C42Cu;
            return;
        }
    }
    ctx->pc = 0x17C3E8u;
}
