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

// Function: entry_001b6580
// Address: 0x1b6580 - 0x1b65a0
void entry_001b6580_0x1b6580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6580_0x1b6580");
#endif

    switch (ctx->pc) {
        case 0x1b6588u: goto label_1b6588;
        case 0x1b6598u: goto label_1b6598;
        default: break;
    }

    ctx->pc = 0x1b6580u;

    // 0x1b6580: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6580u;
    SET_GPR_U32(ctx, 31, 0x1B6588u);
    ctx->pc = 0x1B6584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6580u;
    // 0x1b6584: 0x24040094  addiu       $a0, $zero, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6580u, 0x1B6588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6588u;
label_1b6588:
    // 0x1b6588: 0x104000ab  beqz        $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x1B6588u;
    {
        const bool branch_taken_0x1b6588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6588) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6590u;
    // 0x1b6590: 0xc0700c4  jal         func_1C0310
    ctx->pc = 0x1B6590u;
    SET_GPR_U32(ctx, 31, 0x1B6598u);
    ctx->pc = 0x1B6594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6590u;
    // 0x1b6594: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0310u, 0x1B6590u, 0x1B6598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6598u;
label_1b6598:
    // 0x1b6598: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x1B6598u;
    {
        const bool branch_taken_0x1b6598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6598) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B65A0u;
}
