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

// Function: entry_00124ee4
// Address: 0x124ee4 - 0x124ef4
void entry_00124ee4_0x124ee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124ee4_0x124ee4");
#endif

    switch (ctx->pc) {
        case 0x124eecu: goto label_124eec;
        default: break;
    }

    ctx->pc = 0x124ee4u;

    // 0x124ee4: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x124EE4u;
    SET_GPR_U32(ctx, 31, 0x124EECu);
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x124EE4u, 0x124EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124EECu;
label_124eec:
    // 0x124eec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x124EECu;
    {
        const bool branch_taken_0x124eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124eec) {
            ctx->pc = 0x124F10u;
            return;
        }
    }
    ctx->pc = 0x124EF4u;
}
