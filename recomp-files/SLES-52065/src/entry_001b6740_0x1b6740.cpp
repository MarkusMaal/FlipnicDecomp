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

// Function: entry_001b6740
// Address: 0x1b6740 - 0x1b6760
void entry_001b6740_0x1b6740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6740_0x1b6740");
#endif

    switch (ctx->pc) {
        case 0x1b6748u: goto label_1b6748;
        case 0x1b6758u: goto label_1b6758;
        default: break;
    }

    ctx->pc = 0x1b6740u;

    // 0x1b6740: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6740u;
    SET_GPR_U32(ctx, 31, 0x1B6748u);
    ctx->pc = 0x1B6744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6740u;
    // 0x1b6744: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6740u, 0x1B6748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6748u;
label_1b6748:
    // 0x1b6748: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1B6748u;
    {
        const bool branch_taken_0x1b6748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6748) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6750u;
    // 0x1b6750: 0xc073230  jal         func_1CC8C0
    ctx->pc = 0x1B6750u;
    SET_GPR_U32(ctx, 31, 0x1B6758u);
    ctx->pc = 0x1B6754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6750u;
    // 0x1b6754: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC8C0u, 0x1B6750u, 0x1B6758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6758u;
label_1b6758:
    // 0x1b6758: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1B6758u;
    {
        const bool branch_taken_0x1b6758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6758) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6760u;
}
