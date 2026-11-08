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

// Function: entry_001ccc00
// Address: 0x1ccc00 - 0x1ccc20
void entry_001ccc00_0x1ccc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccc00_0x1ccc00");
#endif

    switch (ctx->pc) {
        case 0x1ccc08u: goto label_1ccc08;
        case 0x1ccc1cu: goto label_1ccc1c;
        default: break;
    }

    ctx->pc = 0x1ccc00u;

    // 0x1ccc00: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CCC00u;
    SET_GPR_U32(ctx, 31, 0x1CCC08u);
    ctx->pc = 0x1CCC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCC00u;
    // 0x1ccc04: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CCC00u, 0x1CCC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC08u;
label_1ccc08:
    // 0x1ccc08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CCC08u;
    {
        const bool branch_taken_0x1ccc08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC08u;
        // 0x1ccc0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc08) {
            ctx->pc = 0x1CCC20u;
            return;
        }
    }
    ctx->pc = 0x1CCC10u;
    // 0x1ccc10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccc14: 0xc073314  jal         func_1CCC50
    ctx->pc = 0x1CCC14u;
    SET_GPR_U32(ctx, 31, 0x1CCC1Cu);
    ctx->pc = 0x1CCC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCC14u;
    // 0x1ccc18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCC50u, 0x1CCC14u, 0x1CCC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC1Cu;
label_1ccc1c:
    // 0x1ccc1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ccc20u;
}
