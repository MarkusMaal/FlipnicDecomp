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

// Function: entry_001f1be0
// Address: 0x1f1be0 - 0x1f1bf8
void entry_001f1be0_0x1f1be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1be0_0x1f1be0");
#endif

    switch (ctx->pc) {
        case 0x1f1bf0u: goto label_1f1bf0;
        default: break;
    }

    ctx->pc = 0x1f1be0u;

    // 0x1f1be0: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1BE0u;
    {
        const bool branch_taken_0x1f1be0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1be0) {
            ctx->pc = 0x1F1BF8u;
            return;
        }
    }
    ctx->pc = 0x1F1BE8u;
    // 0x1f1be8: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F1BE8u;
    SET_GPR_U32(ctx, 31, 0x1F1BF0u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F1BE8u, 0x1F1BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1BF0u;
label_1f1bf0:
    // 0x1f1bf0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1F1BF0u;
    {
        const bool branch_taken_0x1f1bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BF0u;
        // 0x1f1bf4: 0x2402fff9  addiu       $v0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1bf0) {
            ctx->pc = 0x1F1D0Cu;
            return;
        }
    }
    ctx->pc = 0x1F1BF8u;
}
