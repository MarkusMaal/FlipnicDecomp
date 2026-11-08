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

// Function: stage_exit_branch
// Address: 0x1002d8 - 0x100300
void stage_exit_branch_0x1002d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("stage_exit_branch_0x1002d8");
#endif

    switch (ctx->pc) {
        case 0x1002e0u: goto label_1002e0;
        case 0x1002e8u: goto label_1002e8;
        case 0x1002fcu: goto label_1002fc;
        default: break;
    }

    ctx->pc = 0x1002d8u;

    // 0x1002d8: 0xc06d298  jal         func_1B4A60
    ctx->pc = 0x1002D8u;
    SET_GPR_U32(ctx, 31, 0x1002E0u);
    ctx->pc = 0x1B4A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4A60u, 0x1002D8u, 0x1002E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002E0u;
label_1002e0:
    // 0x1002e0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1002E0u;
    SET_GPR_U32(ctx, 31, 0x1002E8u);
    ctx->pc = 0x1002E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1002E0u;
    // 0x1002e4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1002E0u, 0x1002E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002E8u;
label_1002e8:
    // 0x1002e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1002e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1002ec: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1002ECu;
    {
        const bool branch_taken_0x1002ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1002F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1002ECu;
        // 0x1002f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1002ec) {
            ctx->pc = 0x100300u;
            return;
        }
    }
    ctx->pc = 0x1002F4u;
    // 0x1002f4: 0xc0404f8  jal         func_1013E0
    ctx->pc = 0x1002F4u;
    SET_GPR_U32(ctx, 31, 0x1002FCu);
    ctx->pc = 0x1013E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1013E0u, 0x1002F4u, 0x1002FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002FCu;
label_1002fc:
    // 0x1002fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1002fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x100300u;
}
