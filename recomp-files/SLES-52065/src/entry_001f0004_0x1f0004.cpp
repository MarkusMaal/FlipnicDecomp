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

// Function: entry_001f0004
// Address: 0x1f0004 - 0x1f001c
void entry_001f0004_0x1f0004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0004_0x1f0004");
#endif

    switch (ctx->pc) {
        case 0x1f0014u: goto label_1f0014;
        default: break;
    }

    ctx->pc = 0x1f0004u;

    // 0x1f0004: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0004u;
    {
        const bool branch_taken_0x1f0004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0004) {
            ctx->pc = 0x1F001Cu;
            return;
        }
    }
    ctx->pc = 0x1F000Cu;
    // 0x1f000c: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F000Cu;
    SET_GPR_U32(ctx, 31, 0x1F0014u);
    ctx->pc = 0x1F0010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F000Cu;
    // 0x1f0010: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F000Cu, 0x1F0014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0014u;
label_1f0014:
    // 0x1f0014: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0014u;
    {
        const bool branch_taken_0x1f0014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0014u;
        // 0x1f0018: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0014) {
            ctx->pc = 0x1F0030u;
            return;
        }
    }
    ctx->pc = 0x1F001Cu;
}
