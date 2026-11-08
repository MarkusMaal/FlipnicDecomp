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

// Function: entry_00181e28
// Address: 0x181e28 - 0x181e38
void entry_00181e28_0x181e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181e28_0x181e28");
#endif

    switch (ctx->pc) {
        case 0x181e30u: goto label_181e30;
        default: break;
    }

    ctx->pc = 0x181e28u;

    // 0x181e28: 0xc0600cc  jal         func_180330
    ctx->pc = 0x181E28u;
    SET_GPR_U32(ctx, 31, 0x181E30u);
    ctx->pc = 0x180330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180330u, 0x181E28u, 0x181E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181E30u;
label_181e30:
    // 0x181e30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x181E30u;
    {
        const bool branch_taken_0x181e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181e30) {
            ctx->pc = 0x181E50u;
            return;
        }
    }
    ctx->pc = 0x181E38u;
}
