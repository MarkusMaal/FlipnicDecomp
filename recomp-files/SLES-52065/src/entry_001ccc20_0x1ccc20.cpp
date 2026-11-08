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

// Function: entry_001ccc20
// Address: 0x1ccc20 - 0x1ccc38
void entry_001ccc20_0x1ccc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccc20_0x1ccc20");
#endif

    switch (ctx->pc) {
        case 0x1ccc28u: goto label_1ccc28;
        default: break;
    }

    ctx->pc = 0x1ccc20u;

    // 0x1ccc20: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CCC20u;
    SET_GPR_U32(ctx, 31, 0x1CCC28u);
    ctx->pc = 0x1CCC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCC20u;
    // 0x1ccc24: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CCC20u, 0x1CCC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC28u;
label_1ccc28:
    // 0x1ccc28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CCC28u;
    {
        const bool branch_taken_0x1ccc28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC28u;
        // 0x1ccc2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc28) {
            ctx->pc = 0x1CCC38u;
            return;
        }
    }
    ctx->pc = 0x1CCC30u;
    // 0x1ccc30: 0xc073314  jal         func_1CCC50
    ctx->pc = 0x1CCC30u;
    SET_GPR_U32(ctx, 31, 0x1CCC38u);
    ctx->pc = 0x1CCC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCC30u;
    // 0x1ccc34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCC50u, 0x1CCC30u, 0x1CCC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC38u;
}
