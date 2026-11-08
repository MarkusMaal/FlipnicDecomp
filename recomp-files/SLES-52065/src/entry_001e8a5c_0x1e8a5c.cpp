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

// Function: entry_001e8a5c
// Address: 0x1e8a5c - 0x1e8a8c
void entry_001e8a5c_0x1e8a5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8a5c_0x1e8a5c");
#endif

    switch (ctx->pc) {
        case 0x1e8a6cu: goto label_1e8a6c;
        default: break;
    }

    ctx->pc = 0x1e8a5cu;

    // 0x1e8a5c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E8A5Cu;
    {
        const bool branch_taken_0x1e8a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A5Cu;
        // 0x1e8a60: 0x27828768  addiu       $v0, $gp, -0x7898 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a5c) {
            ctx->pc = 0x1E8A8Cu;
            return;
        }
    }
    ctx->pc = 0x1E8A64u;
    // 0x1e8a64: 0xc07a704  jal         func_1E9C10
    ctx->pc = 0x1E8A64u;
    SET_GPR_U32(ctx, 31, 0x1E8A6Cu);
    ctx->pc = 0x1E8A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8A64u;
    // 0x1e8a68: 0x27c40020  addiu       $a0, $fp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9C10u, 0x1E8A64u, 0x1E8A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8A6Cu;
label_1e8a6c:
    // 0x1e8a6c: 0x0  nop
    ctx->pc = 0x1e8a6cu;
    // NOP
    // 0x1e8a70: 0x0  nop
    ctx->pc = 0x1e8a70u;
    // NOP
    // 0x1e8a74: 0x0  nop
    ctx->pc = 0x1e8a74u;
    // NOP
    // 0x1e8a78: 0x0  nop
    ctx->pc = 0x1e8a78u;
    // NOP
    // 0x1e8a7c: 0x0  nop
    ctx->pc = 0x1e8a7cu;
    // NOP
    // 0x1e8a80: 0x0  nop
    ctx->pc = 0x1e8a80u;
    // NOP
    // 0x1e8a84: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E8A84u;
    {
        const bool branch_taken_0x1e8a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8a84) {
            ctx->pc = 0x1E8A6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8a6c;
        }
    }
    ctx->pc = 0x1E8A8Cu;
}
