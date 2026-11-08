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

// Function: entry_001dae00
// Address: 0x1dae00 - 0x1dae14
void entry_001dae00_0x1dae00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dae00_0x1dae00");
#endif

    switch (ctx->pc) {
        case 0x1dae10u: goto label_1dae10;
        default: break;
    }

    ctx->pc = 0x1dae00u;

    // 0x1dae00: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DAE00u;
    {
        const bool branch_taken_0x1dae00 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE00u;
        // 0x1dae04: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dae00) {
            ctx->pc = 0x1DAE14u;
            return;
        }
    }
    ctx->pc = 0x1DAE08u;
    // 0x1dae08: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1DAE08u;
    SET_GPR_U32(ctx, 31, 0x1DAE10u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1DAE08u, 0x1DAE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAE10u;
label_1dae10:
    // 0x1dae10: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dae10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1dae14u;
}
