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

// Function: entry_0011a620
// Address: 0x11a620 - 0x11a630
void entry_0011a620_0x11a620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a620_0x11a620");
#endif

    switch (ctx->pc) {
        case 0x11a628u: goto label_11a628;
        default: break;
    }

    ctx->pc = 0x11a620u;

    // 0x11a620: 0xc07ad50  jal         func_1EB540
    ctx->pc = 0x11A620u;
    SET_GPR_U32(ctx, 31, 0x11A628u);
    ctx->pc = 0x1EB540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB540u, 0x11A620u, 0x11A628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A628u;
label_11a628:
    // 0x11a628: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x11A628u;
    {
        const bool branch_taken_0x11a628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A628u;
        // 0x11a62c: 0x8f9083c0  lw          $s0, -0x7C40($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a628) {
            ctx->pc = 0x11A600u;
            return;
        }
    }
    ctx->pc = 0x11A630u;
}
