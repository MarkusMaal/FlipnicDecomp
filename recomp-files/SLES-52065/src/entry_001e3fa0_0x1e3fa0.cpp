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

// Function: entry_001e3fa0
// Address: 0x1e3fa0 - 0x1e3fc0
void entry_001e3fa0_0x1e3fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3fa0_0x1e3fa0");
#endif

    switch (ctx->pc) {
        case 0x1e3fb8u: goto label_1e3fb8;
        default: break;
    }

    ctx->pc = 0x1e3fa0u;

    // 0x1e3fa0: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E3FA0u;
    {
        const bool branch_taken_0x1e3fa0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E3FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3FA0u;
        // 0x1e3fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3fa0) {
            ctx->pc = 0x1E3FC0u;
            return;
        }
    }
    ctx->pc = 0x1E3FA8u;
    // 0x1e3fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3fac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e3facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3fb0: 0xc07960c  jal         func_1E5830
    ctx->pc = 0x1E3FB0u;
    SET_GPR_U32(ctx, 31, 0x1E3FB8u);
    ctx->pc = 0x1E3FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3FB0u;
    // 0x1e3fb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5830u, 0x1E3FB0u, 0x1E3FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3FB8u;
label_1e3fb8:
    // 0x1e3fb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3FB8u;
    {
        const bool branch_taken_0x1e3fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3fb8) {
            ctx->pc = 0x1E3FC8u;
            return;
        }
    }
    ctx->pc = 0x1E3FC0u;
}
