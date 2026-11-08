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

// Function: entry_001638a4
// Address: 0x1638a4 - 0x1638c0
void entry_001638a4_0x1638a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001638a4_0x1638a4");
#endif

    switch (ctx->pc) {
        case 0x1638b0u: goto label_1638b0;
        default: break;
    }

    ctx->pc = 0x1638a4u;

    // 0x1638a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1638a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1638a8: 0xc058d4c  jal         func_163530
    ctx->pc = 0x1638A8u;
    SET_GPR_U32(ctx, 31, 0x1638B0u);
    ctx->pc = 0x1638ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1638A8u;
    // 0x1638ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163530u, 0x1638A8u, 0x1638B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1638B0u;
label_1638b0:
    // 0x1638b0: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1638B0u;
    {
        const bool branch_taken_0x1638b0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1638B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1638B0u;
        // 0x1638b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1638b0) {
            ctx->pc = 0x1638C0u;
            return;
        }
    }
    ctx->pc = 0x1638B8u;
    // 0x1638b8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1638B8u;
    {
        const bool branch_taken_0x1638b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1638BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1638B8u;
        // 0x1638bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1638b8) {
            ctx->pc = 0x1639F0u;
            return;
        }
    }
    ctx->pc = 0x1638C0u;
}
