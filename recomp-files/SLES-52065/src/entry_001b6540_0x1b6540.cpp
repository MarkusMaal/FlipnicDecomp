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

// Function: entry_001b6540
// Address: 0x1b6540 - 0x1b6560
void entry_001b6540_0x1b6540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6540_0x1b6540");
#endif

    switch (ctx->pc) {
        case 0x1b6548u: goto label_1b6548;
        case 0x1b6558u: goto label_1b6558;
        default: break;
    }

    ctx->pc = 0x1b6540u;

    // 0x1b6540: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6540u;
    SET_GPR_U32(ctx, 31, 0x1B6548u);
    ctx->pc = 0x1B6544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6540u;
    // 0x1b6544: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6540u, 0x1B6548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6548u;
label_1b6548:
    // 0x1b6548: 0x104000bb  beqz        $v0, . + 4 + (0xBB << 2)
    ctx->pc = 0x1B6548u;
    {
        const bool branch_taken_0x1b6548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6548) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6550u;
    // 0x1b6550: 0xc06fd68  jal         func_1BF5A0
    ctx->pc = 0x1B6550u;
    SET_GPR_U32(ctx, 31, 0x1B6558u);
    ctx->pc = 0x1B6554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6550u;
    // 0x1b6554: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF5A0u, 0x1B6550u, 0x1B6558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6558u;
label_1b6558:
    // 0x1b6558: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x1B6558u;
    {
        const bool branch_taken_0x1b6558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6558) {
            ctx->pc = 0x1B6838u;
            return;
        }
    }
    ctx->pc = 0x1B6560u;
}
