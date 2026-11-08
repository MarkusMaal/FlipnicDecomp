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

// Function: entry_001b7848
// Address: 0x1b7848 - 0x1b7864
void entry_001b7848_0x1b7848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7848_0x1b7848");
#endif

    switch (ctx->pc) {
        case 0x1b7854u: goto label_1b7854;
        default: break;
    }

    ctx->pc = 0x1b7848u;

label_1b7848:
    // 0x1b7848: 0x2712821  addu        $a1, $s3, $s1
    ctx->pc = 0x1b7848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1b784c: 0xc06df0c  jal         func_1B7C30
    ctx->pc = 0x1B784Cu;
    SET_GPR_U32(ctx, 31, 0x1B7854u);
    ctx->pc = 0x1B7850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B784Cu;
    // 0x1b7850: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C30u, 0x1B784Cu, 0x1B7854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7854u;
label_1b7854:
    // 0x1b7854: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b7854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b7858: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x1b7858u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1b785c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B785Cu;
    {
        const bool branch_taken_0x1b785c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B785Cu;
        // 0x1b7860: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b785c) {
            ctx->pc = 0x1B7848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7848;
        }
    }
    ctx->pc = 0x1B7864u;
}
