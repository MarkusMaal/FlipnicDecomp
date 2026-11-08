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

// Function: entry_0016c340
// Address: 0x16c340 - 0x16c358
void entry_0016c340_0x16c340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c340_0x16c340");
#endif

    switch (ctx->pc) {
        case 0x16c350u: goto label_16c350;
        default: break;
    }

    ctx->pc = 0x16c340u;

    // 0x16c340: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16C340u;
    {
        const bool branch_taken_0x16c340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C340u;
        // 0x16c344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c340) {
            ctx->pc = 0x16C358u;
            return;
        }
    }
    ctx->pc = 0x16C348u;
    // 0x16c348: 0xc059990  jal         func_166640
    ctx->pc = 0x16C348u;
    SET_GPR_U32(ctx, 31, 0x16C350u);
    ctx->pc = 0x16C34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C348u;
    // 0x16c34c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166640u, 0x16C348u, 0x16C350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C350u;
label_16c350:
    // 0x16c350: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16C350u;
    {
        const bool branch_taken_0x16c350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c350) {
            ctx->pc = 0x16C35Cu;
            return;
        }
    }
    ctx->pc = 0x16C358u;
}
