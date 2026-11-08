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

// Function: entry_001c937c
// Address: 0x1c937c - 0x1c9394
void entry_001c937c_0x1c937c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c937c_0x1c937c");
#endif

    switch (ctx->pc) {
        case 0x1c9388u: goto label_1c9388;
        default: break;
    }

    ctx->pc = 0x1c937cu;

    // 0x1c937c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c937cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9380: 0xc07307c  jal         func_1CC1F0
    ctx->pc = 0x1C9380u;
    SET_GPR_U32(ctx, 31, 0x1C9388u);
    ctx->pc = 0x1C9384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9380u;
    // 0x1c9384: 0x8c24f8b0  lw          $a0, -0x750($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC1F0u, 0x1C9380u, 0x1C9388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9388u;
label_1c9388:
    // 0x1c9388: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c938c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C938Cu;
    {
        const bool branch_taken_0x1c938c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C938Cu;
        // 0x1c9390: 0x8c26f8b0  lw          $a2, -0x750($at) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c938c) {
            ctx->pc = 0x1C9398u;
            return;
        }
    }
    ctx->pc = 0x1C9394u;
}
