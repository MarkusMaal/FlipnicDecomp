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
// Address: 0x1c3000 - 0x1c3018
void caseD_0_0x1c3000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1c3000");
#endif

    switch (ctx->pc) {
        case 0x1c3008u: goto label_1c3008;
        default: break;
    }

    ctx->pc = 0x1c3000u;

    // 0x1c3000: 0xc0747dc  jal         func_1D1F70
    ctx->pc = 0x1C3000u;
    SET_GPR_U32(ctx, 31, 0x1C3008u);
    ctx->pc = 0x1C3004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3000u;
    // 0x1c3004: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1F70u, 0x1C3000u, 0x1C3008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3008u;
label_1c3008:
    // 0x1c3008: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3008u;
    {
        const bool branch_taken_0x1c3008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3008u;
        // 0x1c300c: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3008) {
            ctx->pc = 0x1C3018u;
            return;
        }
    }
    ctx->pc = 0x1C3010u;
    // 0x1c3010: 0xc0746b4  jal         func_1D1AD0
    ctx->pc = 0x1C3010u;
    SET_GPR_U32(ctx, 31, 0x1C3018u);
    ctx->pc = 0x1D1AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1AD0u, 0x1C3010u, 0x1C3018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3018u;
}
