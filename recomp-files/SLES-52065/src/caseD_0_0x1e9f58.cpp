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

// Function: caseD_0
// Address: 0x1e9f58 - 0x1e9f68
void caseD_0_0x1e9f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1e9f58");
#endif

    switch (ctx->pc) {
        case 0x1e9f60u: goto label_1e9f60;
        default: break;
    }

    ctx->pc = 0x1e9f58u;

    // 0x1e9f58: 0xc07aa0c  jal         func_1EA830
    ctx->pc = 0x1E9F58u;
    SET_GPR_U32(ctx, 31, 0x1E9F60u);
    ctx->pc = 0x1E9F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9F58u;
    // 0x1e9f5c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA830u, 0x1E9F58u, 0x1E9F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9F60u;
label_1e9f60:
    // 0x1e9f60: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x1E9F60u;
    {
        const bool branch_taken_0x1e9f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9F60u;
        // 0x1e9f64: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9f60) {
            ctx->pc = 0x1E9F20u;
            return;
        }
    }
    ctx->pc = 0x1E9F68u;
}
