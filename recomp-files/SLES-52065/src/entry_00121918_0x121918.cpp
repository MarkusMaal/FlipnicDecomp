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

// Function: entry_00121918
// Address: 0x121918 - 0x12192c
void entry_00121918_0x121918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121918_0x121918");
#endif

    switch (ctx->pc) {
        case 0x121920u: goto label_121920;
        default: break;
    }

    ctx->pc = 0x121918u;

    // 0x121918: 0xc048608  jal         func_121820
    ctx->pc = 0x121918u;
    SET_GPR_U32(ctx, 31, 0x121920u);
    ctx->pc = 0x12191Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121918u;
    // 0x12191c: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121820u, 0x121918u, 0x121920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121920u;
label_121920:
    // 0x121920: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x121920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x121924: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x121924u;
    {
        const bool branch_taken_0x121924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121924u;
        // 0x121928: 0xafa201b0  sw          $v0, 0x1B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121924) {
            ctx->pc = 0x1219A0u;
            return;
        }
    }
    ctx->pc = 0x12192Cu;
}
