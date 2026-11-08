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

// Function: entry_0019f378
// Address: 0x19f378 - 0x19f38c
void entry_0019f378_0x19f378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f378_0x19f378");
#endif

    ctx->pc = 0x19f378u;

    // 0x19f378: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F378u;
    {
        const bool branch_taken_0x19f378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f378) {
            ctx->pc = 0x19F38Cu;
            return;
        }
    }
    ctx->pc = 0x19F380u;
    // 0x19f380: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19f380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x19f384: 0xc064a30  jal         func_1928C0
    ctx->pc = 0x19F384u;
    SET_GPR_U32(ctx, 31, 0x19F38Cu);
    ctx->pc = 0x19F388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F384u;
    // 0x19f388: 0x24a502e0  addiu       $a1, $a1, 0x2E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1928C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1928C0u, 0x19F384u, 0x19F38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F38Cu;
}
