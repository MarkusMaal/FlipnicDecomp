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

// Function: entry_001c93e8
// Address: 0x1c93e8 - 0x1c9400
void entry_001c93e8_0x1c93e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c93e8_0x1c93e8");
#endif

    switch (ctx->pc) {
        case 0x1c93f4u: goto label_1c93f4;
        default: break;
    }

    ctx->pc = 0x1c93e8u;

    // 0x1c93e8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c93e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c93ec: 0xc07307c  jal         func_1CC1F0
    ctx->pc = 0x1C93ECu;
    SET_GPR_U32(ctx, 31, 0x1C93F4u);
    ctx->pc = 0x1C93F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C93ECu;
    // 0x1c93f0: 0x8c24f8b0  lw          $a0, -0x750($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC1F0u, 0x1C93ECu, 0x1C93F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C93F4u;
label_1c93f4:
    // 0x1c93f4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c93f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c93f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C93F8u;
    {
        const bool branch_taken_0x1c93f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C93FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C93F8u;
        // 0x1c93fc: 0x8c26f8b0  lw          $a2, -0x750($at) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c93f8) {
            ctx->pc = 0x1C9404u;
            return;
        }
    }
    ctx->pc = 0x1C9400u;
}
