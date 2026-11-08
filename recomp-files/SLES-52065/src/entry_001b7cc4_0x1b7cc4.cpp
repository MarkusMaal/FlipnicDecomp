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

// Function: entry_001b7cc4
// Address: 0x1b7cc4 - 0x1b7ce4
void entry_001b7cc4_0x1b7cc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7cc4_0x1b7cc4");
#endif

    switch (ctx->pc) {
        case 0x1b7cd0u: goto label_1b7cd0;
        default: break;
    }

    ctx->pc = 0x1b7cc4u;

    // 0x1b7cc4: 0x0  nop
    ctx->pc = 0x1b7cc4u;
    // NOP
    // 0x1b7cc8: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1B7CC8u;
    SET_GPR_U32(ctx, 31, 0x1B7CD0u);
    ctx->pc = 0x1B7CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7CC8u;
    // 0x1b7ccc: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1B7CC8u, 0x1B7CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7CD0u;
label_1b7cd0:
    // 0x1b7cd0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1b7cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1b7cd4: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B7CD4u;
    {
        const bool branch_taken_0x1b7cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b7cd4) {
            ctx->pc = 0x1B7CA8u;
            return;
        }
    }
    ctx->pc = 0x1B7CDCu;
    // 0x1b7cdc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1B7CDCu;
    {
        const bool branch_taken_0x1b7cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7CDCu;
        // 0x1b7ce0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7cdc) {
            ctx->pc = 0x1B7D20u;
            return;
        }
    }
    ctx->pc = 0x1B7CE4u;
}
