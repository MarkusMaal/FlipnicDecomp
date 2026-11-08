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

// Function: entry_001f00e0
// Address: 0x1f00e0 - 0x1f00f0
void entry_001f00e0_0x1f00e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f00e0_0x1f00e0");
#endif

    switch (ctx->pc) {
        case 0x1f00e8u: goto label_1f00e8;
        default: break;
    }

    ctx->pc = 0x1f00e0u;

    // 0x1f00e0: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F00E0u;
    SET_GPR_U32(ctx, 31, 0x1F00E8u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F00E0u, 0x1F00E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F00E8u;
label_1f00e8:
    // 0x1f00e8: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x1F00E8u;
    {
        const bool branch_taken_0x1f00e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F00ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F00E8u;
        // 0x1f00ec: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f00e8) {
            ctx->pc = 0x1F02F0u;
            return;
        }
    }
    ctx->pc = 0x1F00F0u;
}
