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

// Function: entry_001b97fc
// Address: 0x1b97fc - 0x1b9810
void entry_001b97fc_0x1b97fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b97fc_0x1b97fc");
#endif

    switch (ctx->pc) {
        case 0x1b9808u: goto label_1b9808;
        default: break;
    }

    ctx->pc = 0x1b97fcu;

    // 0x1b97fc: 0x26060060  addiu       $a2, $s0, 0x60
    ctx->pc = 0x1b97fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1b9800: 0xc07d36a  jal         func_1F4DA8
    ctx->pc = 0x1B9800u;
    SET_GPR_U32(ctx, 31, 0x1B9808u);
    ctx->pc = 0x1B9804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9800u;
    // 0x1b9804: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DA8u, 0x1B9800u, 0x1B9808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9808u;
label_1b9808:
    // 0x1b9808: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9808u;
    {
        const bool branch_taken_0x1b9808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9808) {
            ctx->pc = 0x1B9818u;
            return;
        }
    }
    ctx->pc = 0x1B9810u;
}
