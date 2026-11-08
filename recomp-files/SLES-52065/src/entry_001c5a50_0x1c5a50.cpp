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

// Function: entry_001c5a50
// Address: 0x1c5a50 - 0x1c5a64
void entry_001c5a50_0x1c5a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5a50_0x1c5a50");
#endif

    switch (ctx->pc) {
        case 0x1c5a58u: goto label_1c5a58;
        default: break;
    }

    ctx->pc = 0x1c5a50u;

    // 0x1c5a50: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1C5A50u;
    SET_GPR_U32(ctx, 31, 0x1C5A58u);
    ctx->pc = 0x1C5A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5A50u;
    // 0x1c5a54: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1C5A50u, 0x1C5A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5A58u;
label_1c5a58:
    // 0x1c5a58: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c5a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c5a5c: 0x1462ffde  bne         $v1, $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1C5A5Cu;
    {
        const bool branch_taken_0x1c5a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c5a5c) {
            ctx->pc = 0x1C59D8u;
            return;
        }
    }
    ctx->pc = 0x1C5A64u;
}
