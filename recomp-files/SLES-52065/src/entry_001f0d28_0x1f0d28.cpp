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

// Function: entry_001f0d28
// Address: 0x1f0d28 - 0x1f0d40
void entry_001f0d28_0x1f0d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0d28_0x1f0d28");
#endif

    switch (ctx->pc) {
        case 0x1f0d38u: goto label_1f0d38;
        default: break;
    }

    ctx->pc = 0x1f0d28u;

    // 0x1f0d28: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0D28u;
    {
        const bool branch_taken_0x1f0d28 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0d28) {
            ctx->pc = 0x1F0D40u;
            return;
        }
    }
    ctx->pc = 0x1F0D30u;
    // 0x1f0d30: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F0D30u;
    SET_GPR_U32(ctx, 31, 0x1F0D38u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F0D30u, 0x1F0D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0D38u;
label_1f0d38:
    // 0x1f0d38: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1F0D38u;
    {
        const bool branch_taken_0x1f0d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D38u;
        // 0x1f0d3c: 0x2402fff9  addiu       $v0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0d38) {
            ctx->pc = 0x1F0E50u;
            return;
        }
    }
    ctx->pc = 0x1F0D40u;
}
