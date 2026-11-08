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

// Function: entry_001b8540
// Address: 0x1b8540 - 0x1b8560
void entry_001b8540_0x1b8540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8540_0x1b8540");
#endif

    switch (ctx->pc) {
        case 0x1b8548u: goto label_1b8548;
        case 0x1b855cu: goto label_1b855c;
        default: break;
    }

    ctx->pc = 0x1b8540u;

    // 0x1b8540: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B8540u;
    SET_GPR_U32(ctx, 31, 0x1B8548u);
    ctx->pc = 0x1B8544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8540u;
    // 0x1b8544: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B8540u, 0x1B8548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8548u;
label_1b8548:
    // 0x1b8548: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1b8548u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b854c: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B854Cu;
    {
        const bool branch_taken_0x1b854c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B854Cu;
        // 0x1b8550: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b854c) {
            ctx->pc = 0x1B8560u;
            return;
        }
    }
    ctx->pc = 0x1B8554u;
    // 0x1b8554: 0xc06e1fc  jal         func_1B87F0
    ctx->pc = 0x1B8554u;
    SET_GPR_U32(ctx, 31, 0x1B855Cu);
    ctx->pc = 0x1B87F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B87F0u, 0x1B8554u, 0x1B855Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B855Cu;
label_1b855c:
    // 0x1b855c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1b855cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b8560u;
}
