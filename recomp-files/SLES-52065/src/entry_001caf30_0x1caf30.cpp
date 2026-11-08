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

// Function: entry_001caf30
// Address: 0x1caf30 - 0x1caf58
void entry_001caf30_0x1caf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001caf30_0x1caf30");
#endif

    switch (ctx->pc) {
        case 0x1caf50u: goto label_1caf50;
        default: break;
    }

    ctx->pc = 0x1caf30u;

    // 0x1caf30: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x1caf30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caf34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caf34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caf38: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1caf38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1caf3c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1caf3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1caf40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1caf40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caf44: 0x260a0068  addiu       $t2, $s0, 0x68
    ctx->pc = 0x1caf44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x1caf48: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1CAF48u;
    SET_GPR_U32(ctx, 31, 0x1CAF50u);
    ctx->pc = 0x1CAF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAF48u;
    // 0x1caf4c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1CAF48u, 0x1CAF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAF50u;
label_1caf50:
    // 0x1caf50: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1CAF50u;
    {
        const bool branch_taken_0x1caf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caf50) {
            ctx->pc = 0x1CAFECu;
            return;
        }
    }
    ctx->pc = 0x1CAF58u;
}
