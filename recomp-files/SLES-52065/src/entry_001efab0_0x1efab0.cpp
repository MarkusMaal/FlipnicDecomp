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

// Function: entry_001efab0
// Address: 0x1efab0 - 0x1efac0
void entry_001efab0_0x1efab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001efab0_0x1efab0");
#endif

    switch (ctx->pc) {
        case 0x1efab8u: goto label_1efab8;
        default: break;
    }

    ctx->pc = 0x1efab0u;

    // 0x1efab0: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1EFAB0u;
    SET_GPR_U32(ctx, 31, 0x1EFAB8u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1EFAB0u, 0x1EFAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFAB8u;
label_1efab8:
    // 0x1efab8: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1EFAB8u;
    {
        const bool branch_taken_0x1efab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFAB8u;
        // 0x1efabc: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efab8) {
            ctx->pc = 0x1EFBA4u;
            return;
        }
    }
    ctx->pc = 0x1EFAC0u;
}
