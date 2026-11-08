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

// Function: entry_0014d4b4
// Address: 0x14d4b4 - 0x14d4c4
void entry_0014d4b4_0x14d4b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d4b4_0x14d4b4");
#endif

    ctx->pc = 0x14d4b4u;

    // 0x14d4b4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D4B4u;
    {
        const bool branch_taken_0x14d4b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D4B4u;
        // 0x14d4b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d4b4) {
            ctx->pc = 0x14D4C4u;
            return;
        }
    }
    ctx->pc = 0x14D4BCu;
    // 0x14d4bc: 0xc0537d4  jal         func_14DF50
    ctx->pc = 0x14D4BCu;
    SET_GPR_U32(ctx, 31, 0x14D4C4u);
    ctx->pc = 0x14D4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D4BCu;
    // 0x14d4c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DF50u, 0x14D4BCu, 0x14D4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D4C4u;
}
