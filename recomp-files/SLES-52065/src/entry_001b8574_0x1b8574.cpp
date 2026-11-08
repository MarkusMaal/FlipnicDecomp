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

// Function: entry_001b8574
// Address: 0x1b8574 - 0x1b8598
void entry_001b8574_0x1b8574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8574_0x1b8574");
#endif

    switch (ctx->pc) {
        case 0x1b8580u: goto label_1b8580;
        case 0x1b8594u: goto label_1b8594;
        default: break;
    }

    ctx->pc = 0x1b8574u;

    // 0x1b8574: 0x0  nop
    ctx->pc = 0x1b8574u;
    // NOP
    // 0x1b8578: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B8578u;
    SET_GPR_U32(ctx, 31, 0x1B8580u);
    ctx->pc = 0x1B857Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8578u;
    // 0x1b857c: 0x24040140  addiu       $a0, $zero, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B8578u, 0x1B8580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8580u;
label_1b8580:
    // 0x1b8580: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1b8580u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8584: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8584u;
    {
        const bool branch_taken_0x1b8584 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8584u;
        // 0x1b8588: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8584) {
            ctx->pc = 0x1B8598u;
            return;
        }
    }
    ctx->pc = 0x1B858Cu;
    // 0x1b858c: 0xc06e244  jal         func_1B8910
    ctx->pc = 0x1B858Cu;
    SET_GPR_U32(ctx, 31, 0x1B8594u);
    ctx->pc = 0x1B8910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8910u, 0x1B858Cu, 0x1B8594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8594u;
label_1b8594:
    // 0x1b8594: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1b8594u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b8598u;
}
