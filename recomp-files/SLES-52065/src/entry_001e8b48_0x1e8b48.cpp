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

// Function: entry_001e8b48
// Address: 0x1e8b48 - 0x1e8b78
void entry_001e8b48_0x1e8b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8b48_0x1e8b48");
#endif

    switch (ctx->pc) {
        case 0x1e8b58u: goto label_1e8b58;
        default: break;
    }

    ctx->pc = 0x1e8b48u;

    // 0x1e8b48: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E8B48u;
    {
        const bool branch_taken_0x1e8b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8B48u;
        // 0x1e8b4c: 0x27828778  addiu       $v0, $gp, -0x7888 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8b48) {
            ctx->pc = 0x1E8B78u;
            return;
        }
    }
    ctx->pc = 0x1E8B50u;
    // 0x1e8b50: 0xc07a704  jal         func_1E9C10
    ctx->pc = 0x1E8B50u;
    SET_GPR_U32(ctx, 31, 0x1E8B58u);
    ctx->pc = 0x1E8B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8B50u;
    // 0x1e8b54: 0x27c40030  addiu       $a0, $fp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9C10u, 0x1E8B50u, 0x1E8B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8B58u;
label_1e8b58:
    // 0x1e8b58: 0x0  nop
    ctx->pc = 0x1e8b58u;
    // NOP
    // 0x1e8b5c: 0x0  nop
    ctx->pc = 0x1e8b5cu;
    // NOP
    // 0x1e8b60: 0x0  nop
    ctx->pc = 0x1e8b60u;
    // NOP
    // 0x1e8b64: 0x0  nop
    ctx->pc = 0x1e8b64u;
    // NOP
    // 0x1e8b68: 0x0  nop
    ctx->pc = 0x1e8b68u;
    // NOP
    // 0x1e8b6c: 0x0  nop
    ctx->pc = 0x1e8b6cu;
    // NOP
    // 0x1e8b70: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E8B70u;
    {
        const bool branch_taken_0x1e8b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8b70) {
            ctx->pc = 0x1E8B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8b58;
        }
    }
    ctx->pc = 0x1E8B78u;
}
