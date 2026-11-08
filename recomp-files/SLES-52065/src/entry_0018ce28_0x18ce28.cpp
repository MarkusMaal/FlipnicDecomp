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

// Function: entry_0018ce28
// Address: 0x18ce28 - 0x18ce38
void entry_0018ce28_0x18ce28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ce28_0x18ce28");
#endif

    ctx->pc = 0x18ce28u;

    // 0x18ce28: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CE28u;
    {
        const bool branch_taken_0x18ce28 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE28u;
        // 0x18ce2c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce28) {
            ctx->pc = 0x18CE38u;
            return;
        }
    }
    ctx->pc = 0x18CE30u;
    // 0x18ce30: 0xc063e08  jal         func_18F820
    ctx->pc = 0x18CE30u;
    SET_GPR_U32(ctx, 31, 0x18CE38u);
    ctx->pc = 0x18CE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CE30u;
    // 0x18ce34: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18CE30u, 0x18CE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CE38u;
}
