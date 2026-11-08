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

// Function: entry_0011b2cc
// Address: 0x11b2cc - 0x11b2dc
void entry_0011b2cc_0x11b2cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b2cc_0x11b2cc");
#endif

    switch (ctx->pc) {
        case 0x11b2d4u: goto label_11b2d4;
        default: break;
    }

    ctx->pc = 0x11b2ccu;

    // 0x11b2cc: 0xc080702  jal         func_201C08
    ctx->pc = 0x11B2CCu;
    SET_GPR_U32(ctx, 31, 0x11B2D4u);
    ctx->pc = 0x11B2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B2CCu;
    // 0x11b2d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11B2CCu, 0x11B2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B2D4u;
label_11b2d4:
    // 0x11b2d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11B2D4u;
    {
        const bool branch_taken_0x11b2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b2d4) {
            ctx->pc = 0x11B2F8u;
            return;
        }
    }
    ctx->pc = 0x11B2DCu;
}
