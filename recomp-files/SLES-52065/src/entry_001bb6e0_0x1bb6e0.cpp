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

// Function: entry_001bb6e0
// Address: 0x1bb6e0 - 0x1bb6f0
void entry_001bb6e0_0x1bb6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb6e0_0x1bb6e0");
#endif

    ctx->pc = 0x1bb6e0u;

    // 0x1bb6e0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB6E0u;
    {
        const bool branch_taken_0x1bb6e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB6E0u;
        // 0x1bb6e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb6e0) {
            ctx->pc = 0x1BB6F0u;
            return;
        }
    }
    ctx->pc = 0x1BB6E8u;
    // 0x1bb6e8: 0xc04619c  jal         func_118670
    ctx->pc = 0x1BB6E8u;
    SET_GPR_U32(ctx, 31, 0x1BB6F0u);
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1BB6E8u, 0x1BB6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB6F0u;
}
