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

// Function: entry_001c43cc
// Address: 0x1c43cc - 0x1c43e8
void entry_001c43cc_0x1c43cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c43cc_0x1c43cc");
#endif

    switch (ctx->pc) {
        case 0x1c43dcu: goto label_1c43dc;
        default: break;
    }

    ctx->pc = 0x1c43ccu;

    // 0x1c43cc: 0x8c24ca84  lw          $a0, -0x357C($at)
    ctx->pc = 0x1c43ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
    // 0x1c43d0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c43d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c43d4: 0xc06d024  jal         func_1B4090
    ctx->pc = 0x1C43D4u;
    SET_GPR_U32(ctx, 31, 0x1C43DCu);
    ctx->pc = 0x1C43D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43D4u;
    // 0x1c43d8: 0x8c25f5e0  lw          $a1, -0xA20($at) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4090u, 0x1C43D4u, 0x1C43DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43DCu;
label_1c43dc:
    // 0x1c43dc: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1c43dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1c43e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C43E0u;
    {
        const bool branch_taken_0x1c43e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C43E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43E0u;
        // 0x1c43e4: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c43e0) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C43E8u;
}
