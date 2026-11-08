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

// Function: entry_001b6640
// Address: 0x1b6640 - 0x1b6660
void entry_001b6640_0x1b6640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6640_0x1b6640");
#endif

    switch (ctx->pc) {
        case 0x1b6648u: goto label_1b6648;
        case 0x1b6658u: goto label_1b6658;
        default: break;
    }

    ctx->pc = 0x1b6640u;

    // 0x1b6640: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6640u;
    SET_GPR_U32(ctx, 31, 0x1B6648u);
    ctx->pc = 0x1B6644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6640u;
    // 0x1b6644: 0x2404009c  addiu       $a0, $zero, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6640u, 0x1B6648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6648u;
label_1b6648:
    // 0x1b6648: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x1B6648u;
    {
        const bool branch_taken_0x1b6648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6648) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6650u;
    // 0x1b6650: 0xc072b14  jal         func_1CAC50
    ctx->pc = 0x1B6650u;
    SET_GPR_U32(ctx, 31, 0x1B6658u);
    ctx->pc = 0x1B6654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6650u;
    // 0x1b6654: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAC50u, 0x1B6650u, 0x1B6658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6658u;
label_1b6658:
    // 0x1b6658: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x1B6658u;
    {
        const bool branch_taken_0x1b6658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6658) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6660u;
}
