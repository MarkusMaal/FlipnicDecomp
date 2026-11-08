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

// Function: entry_001b7ac8
// Address: 0x1b7ac8 - 0x1b7ae4
void entry_001b7ac8_0x1b7ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7ac8_0x1b7ac8");
#endif

    switch (ctx->pc) {
        case 0x1b7ad4u: goto label_1b7ad4;
        default: break;
    }

    ctx->pc = 0x1b7ac8u;

label_1b7ac8:
    // 0x1b7ac8: 0x2712821  addu        $a1, $s3, $s1
    ctx->pc = 0x1b7ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1b7acc: 0xc06dec4  jal         func_1B7B10
    ctx->pc = 0x1B7ACCu;
    SET_GPR_U32(ctx, 31, 0x1B7AD4u);
    ctx->pc = 0x1B7AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7ACCu;
    // 0x1b7ad0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7B10u, 0x1B7ACCu, 0x1B7AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7AD4u;
label_1b7ad4:
    // 0x1b7ad4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b7ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b7ad8: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x1b7ad8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1b7adc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B7ADCu;
    {
        const bool branch_taken_0x1b7adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7ADCu;
        // 0x1b7ae0: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7adc) {
            ctx->pc = 0x1B7AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7ac8;
        }
    }
    ctx->pc = 0x1B7AE4u;
}
