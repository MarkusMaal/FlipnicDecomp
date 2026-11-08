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

// Function: entry_0014d4f4
// Address: 0x14d4f4 - 0x14d504
void entry_0014d4f4_0x14d4f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d4f4_0x14d4f4");
#endif

    ctx->pc = 0x14d4f4u;

    // 0x14d4f4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D4F4u;
    {
        const bool branch_taken_0x14d4f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D4F4u;
        // 0x14d4f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d4f4) {
            ctx->pc = 0x14D504u;
            return;
        }
    }
    ctx->pc = 0x14D4FCu;
    // 0x14d4fc: 0xc0537d4  jal         func_14DF50
    ctx->pc = 0x14D4FCu;
    SET_GPR_U32(ctx, 31, 0x14D504u);
    ctx->pc = 0x14D500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D4FCu;
    // 0x14d500: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DF50u, 0x14D4FCu, 0x14D504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D504u;
}
