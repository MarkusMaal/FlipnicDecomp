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

// Function: entry_001c91d0
// Address: 0x1c91d0 - 0x1c91e8
void entry_001c91d0_0x1c91d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c91d0_0x1c91d0");
#endif

    switch (ctx->pc) {
        case 0x1c91d8u: goto label_1c91d8;
        default: break;
    }

    ctx->pc = 0x1c91d0u;

    // 0x1c91d0: 0xc073084  jal         func_1CC210
    ctx->pc = 0x1C91D0u;
    SET_GPR_U32(ctx, 31, 0x1C91D8u);
    ctx->pc = 0x1CC210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC210u, 0x1C91D0u, 0x1C91D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C91D8u;
label_1c91d8:
    // 0x1c91d8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c91d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c91dc: 0x8c22f8b8  lw          $v0, -0x748($at)
    ctx->pc = 0x1c91dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F8B8u));
    // 0x1c91e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C91E0u;
    {
        const bool branch_taken_0x1c91e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C91E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C91E0u;
        // 0x1c91e4: 0x2442000a  addiu       $v0, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c91e0) {
            ctx->pc = 0x1C91ECu;
            return;
        }
    }
    ctx->pc = 0x1C91E8u;
}
