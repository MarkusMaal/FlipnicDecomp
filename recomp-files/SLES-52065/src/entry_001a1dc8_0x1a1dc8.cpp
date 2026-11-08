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

// Function: entry_001a1dc8
// Address: 0x1a1dc8 - 0x1a1ddc
void entry_001a1dc8_0x1a1dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1dc8_0x1a1dc8");
#endif

    switch (ctx->pc) {
        case 0x1a1dd0u: goto label_1a1dd0;
        default: break;
    }

    ctx->pc = 0x1a1dc8u;

    // 0x1a1dc8: 0xc045ae8  jal         func_116BA0
    ctx->pc = 0x1A1DC8u;
    SET_GPR_U32(ctx, 31, 0x1A1DD0u);
    ctx->pc = 0x116BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116BA0u, 0x1A1DC8u, 0x1A1DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1DD0u;
label_1a1dd0:
    // 0x1a1dd0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1DD0u;
    {
        const bool branch_taken_0x1a1dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1dd0) {
            ctx->pc = 0x1A1DDCu;
            return;
        }
    }
    ctx->pc = 0x1A1DD8u;
    // 0x1a1dd8: 0x2610000a  addiu       $s0, $s0, 0xA
    ctx->pc = 0x1a1dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
    ctx->pc = 0x1a1ddcu;
}
