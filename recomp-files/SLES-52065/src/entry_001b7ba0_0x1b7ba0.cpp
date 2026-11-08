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

// Function: entry_001b7ba0
// Address: 0x1b7ba0 - 0x1b7bbc
void entry_001b7ba0_0x1b7ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7ba0_0x1b7ba0");
#endif

    switch (ctx->pc) {
        case 0x1b7ba8u: goto label_1b7ba8;
        default: break;
    }

    ctx->pc = 0x1b7ba0u;

    // 0x1b7ba0: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1B7BA0u;
    SET_GPR_U32(ctx, 31, 0x1B7BA8u);
    ctx->pc = 0x1B7BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7BA0u;
    // 0x1b7ba4: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1B7BA0u, 0x1B7BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7BA8u;
label_1b7ba8:
    // 0x1b7ba8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1b7ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1b7bac: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B7BACu;
    {
        const bool branch_taken_0x1b7bac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b7bac) {
            ctx->pc = 0x1B7B80u;
            return;
        }
    }
    ctx->pc = 0x1B7BB4u;
    // 0x1b7bb4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1B7BB4u;
    {
        const bool branch_taken_0x1b7bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7BB4u;
        // 0x1b7bb8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7bb4) {
            ctx->pc = 0x1B7C14u;
            return;
        }
    }
    ctx->pc = 0x1B7BBCu;
}
