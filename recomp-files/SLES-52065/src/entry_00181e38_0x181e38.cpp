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

// Function: entry_00181e38
// Address: 0x181e38 - 0x181e48
void entry_00181e38_0x181e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181e38_0x181e38");
#endif

    switch (ctx->pc) {
        case 0x181e40u: goto label_181e40;
        default: break;
    }

    ctx->pc = 0x181e38u;

    // 0x181e38: 0xc0602b8  jal         func_180AE0
    ctx->pc = 0x181E38u;
    SET_GPR_U32(ctx, 31, 0x181E40u);
    ctx->pc = 0x180AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180AE0u, 0x181E38u, 0x181E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181E40u;
label_181e40:
    // 0x181e40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x181E40u;
    {
        const bool branch_taken_0x181e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181e40) {
            ctx->pc = 0x181E50u;
            return;
        }
    }
    ctx->pc = 0x181E48u;
}
