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

// Function: entry_001c9164
// Address: 0x1c9164 - 0x1c917c
void entry_001c9164_0x1c9164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9164_0x1c9164");
#endif

    switch (ctx->pc) {
        case 0x1c9170u: goto label_1c9170;
        default: break;
    }

    ctx->pc = 0x1c9164u;

    // 0x1c9164: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9168: 0xc07307c  jal         func_1CC1F0
    ctx->pc = 0x1C9168u;
    SET_GPR_U32(ctx, 31, 0x1C9170u);
    ctx->pc = 0x1C916Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9168u;
    // 0x1c916c: 0x8c24f8b0  lw          $a0, -0x750($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC1F0u, 0x1C9168u, 0x1C9170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9170u;
label_1c9170:
    // 0x1c9170: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9174: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9174u;
    {
        const bool branch_taken_0x1c9174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9174u;
        // 0x1c9178: 0x8c22f8b0  lw          $v0, -0x750($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9174) {
            ctx->pc = 0x1C9180u;
            return;
        }
    }
    ctx->pc = 0x1C917Cu;
}
