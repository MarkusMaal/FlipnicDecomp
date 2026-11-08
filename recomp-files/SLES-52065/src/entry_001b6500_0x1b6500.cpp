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

// Function: entry_001b6500
// Address: 0x1b6500 - 0x1b6520
void entry_001b6500_0x1b6500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6500_0x1b6500");
#endif

    switch (ctx->pc) {
        case 0x1b6508u: goto label_1b6508;
        case 0x1b6518u: goto label_1b6518;
        default: break;
    }

    ctx->pc = 0x1b6500u;

    // 0x1b6500: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6500u;
    SET_GPR_U32(ctx, 31, 0x1B6508u);
    ctx->pc = 0x1B6504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6500u;
    // 0x1b6504: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6500u, 0x1B6508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6508u;
label_1b6508:
    // 0x1b6508: 0x104000cb  beqz        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x1B6508u;
    {
        const bool branch_taken_0x1b6508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6508) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6510u;
    // 0x1b6510: 0xc06f1b4  jal         func_1BC6D0
    ctx->pc = 0x1B6510u;
    SET_GPR_U32(ctx, 31, 0x1B6518u);
    ctx->pc = 0x1B6514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6510u;
    // 0x1b6514: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC6D0u, 0x1B6510u, 0x1B6518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6518u;
label_1b6518:
    // 0x1b6518: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x1B6518u;
    {
        const bool branch_taken_0x1b6518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6518) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6520u;
}
