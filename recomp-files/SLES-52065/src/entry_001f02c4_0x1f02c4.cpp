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

// Function: entry_001f02c4
// Address: 0x1f02c4 - 0x1f02dc
void entry_001f02c4_0x1f02c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f02c4_0x1f02c4");
#endif

    switch (ctx->pc) {
        case 0x1f02d4u: goto label_1f02d4;
        default: break;
    }

    ctx->pc = 0x1f02c4u;

    // 0x1f02c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F02C4u;
    {
        const bool branch_taken_0x1f02c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f02c4) {
            ctx->pc = 0x1F02DCu;
            return;
        }
    }
    ctx->pc = 0x1F02CCu;
    // 0x1f02cc: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F02CCu;
    SET_GPR_U32(ctx, 31, 0x1F02D4u);
    ctx->pc = 0x1F02D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F02CCu;
    // 0x1f02d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F02CCu, 0x1F02D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F02D4u;
label_1f02d4:
    // 0x1f02d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F02D4u;
    {
        const bool branch_taken_0x1f02d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F02D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F02D4u;
        // 0x1f02d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f02d4) {
            ctx->pc = 0x1F02F0u;
            return;
        }
    }
    ctx->pc = 0x1F02DCu;
}
