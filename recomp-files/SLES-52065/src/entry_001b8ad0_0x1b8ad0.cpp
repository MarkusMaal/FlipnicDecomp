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

// Function: entry_001b8ad0
// Address: 0x1b8ad0 - 0x1b8ae4
void entry_001b8ad0_0x1b8ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8ad0_0x1b8ad0");
#endif

    ctx->pc = 0x1b8ad0u;

    // 0x1b8ad0: 0x8e8300e4  lw          $v1, 0xE4($s4)
    ctx->pc = 0x1b8ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
    // 0x1b8ad4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8AD4u;
    {
        const bool branch_taken_0x1b8ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8AD4u;
        // 0x1b8ad8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ad4) {
            ctx->pc = 0x1B8AE4u;
            return;
        }
    }
    ctx->pc = 0x1B8ADCu;
    // 0x1b8adc: 0xc06e9d8  jal         func_1BA760
    ctx->pc = 0x1B8ADCu;
    SET_GPR_U32(ctx, 31, 0x1B8AE4u);
    ctx->pc = 0x1BA760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA760u, 0x1B8ADCu, 0x1B8AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8AE4u;
}
