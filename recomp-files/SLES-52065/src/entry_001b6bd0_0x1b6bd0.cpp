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

// Function: entry_001b6bd0
// Address: 0x1b6bd0 - 0x1b6be8
void entry_001b6bd0_0x1b6bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6bd0_0x1b6bd0");
#endif

    switch (ctx->pc) {
        case 0x1b6be4u: goto label_1b6be4;
        default: break;
    }

    ctx->pc = 0x1b6bd0u;

    // 0x1b6bd0: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1b6bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b6bd4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6BD4u;
    {
        const bool branch_taken_0x1b6bd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6BD4u;
        // 0x1b6bd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6bd4) {
            ctx->pc = 0x1B6BE8u;
            return;
        }
    }
    ctx->pc = 0x1B6BDCu;
    // 0x1b6bdc: 0xc06dab4  jal         func_1B6AD0
    ctx->pc = 0x1B6BDCu;
    SET_GPR_U32(ctx, 31, 0x1B6BE4u);
    ctx->pc = 0x1B6BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6BDCu;
    // 0x1b6be0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6AD0u, 0x1B6BDCu, 0x1B6BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6BE4u;
label_1b6be4:
    // 0x1b6be4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b6be8u;
}
