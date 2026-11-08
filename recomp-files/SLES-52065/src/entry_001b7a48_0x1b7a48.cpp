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

// Function: entry_001b7a48
// Address: 0x1b7a48 - 0x1b7a64
void entry_001b7a48_0x1b7a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7a48_0x1b7a48");
#endif

    switch (ctx->pc) {
        case 0x1b7a54u: goto label_1b7a54;
        default: break;
    }

    ctx->pc = 0x1b7a48u;

label_1b7a48:
    // 0x1b7a48: 0x2712821  addu        $a1, $s3, $s1
    ctx->pc = 0x1b7a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1b7a4c: 0xc06df4c  jal         func_1B7D30
    ctx->pc = 0x1B7A4Cu;
    SET_GPR_U32(ctx, 31, 0x1B7A54u);
    ctx->pc = 0x1B7A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7A4Cu;
    // 0x1b7a50: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7D30u, 0x1B7A4Cu, 0x1B7A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7A54u;
label_1b7a54:
    // 0x1b7a54: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b7a54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b7a58: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x1b7a58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1b7a5c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B7A5Cu;
    {
        const bool branch_taken_0x1b7a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A5Cu;
        // 0x1b7a60: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a5c) {
            ctx->pc = 0x1B7A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7a48;
        }
    }
    ctx->pc = 0x1B7A64u;
}
