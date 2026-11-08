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

// Function: entry_0011a5d8
// Address: 0x11a5d8 - 0x11a5e8
void entry_0011a5d8_0x11a5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a5d8_0x11a5d8");
#endif

    switch (ctx->pc) {
        case 0x11a5e0u: goto label_11a5e0;
        default: break;
    }

    ctx->pc = 0x11a5d8u;

    // 0x11a5d8: 0xc07ad50  jal         func_1EB540
    ctx->pc = 0x11A5D8u;
    SET_GPR_U32(ctx, 31, 0x11A5E0u);
    ctx->pc = 0x1EB540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB540u, 0x11A5D8u, 0x11A5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A5E0u;
label_11a5e0:
    // 0x11a5e0: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x11A5E0u;
    {
        const bool branch_taken_0x11a5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5E0u;
        // 0x11a5e4: 0x8f9083c0  lw          $s0, -0x7C40($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a5e0) {
            ctx->pc = 0x11A5B0u;
            return;
        }
    }
    ctx->pc = 0x11A5E8u;
}
