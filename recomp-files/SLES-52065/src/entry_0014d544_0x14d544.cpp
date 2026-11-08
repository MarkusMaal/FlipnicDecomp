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

// Function: entry_0014d544
// Address: 0x14d544 - 0x14d554
void entry_0014d544_0x14d544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d544_0x14d544");
#endif

    ctx->pc = 0x14d544u;

    // 0x14d544: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D544u;
    {
        const bool branch_taken_0x14d544 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D544u;
        // 0x14d548: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d544) {
            ctx->pc = 0x14D554u;
            return;
        }
    }
    ctx->pc = 0x14D54Cu;
    // 0x14d54c: 0xc0537d4  jal         func_14DF50
    ctx->pc = 0x14D54Cu;
    SET_GPR_U32(ctx, 31, 0x14D554u);
    ctx->pc = 0x14D550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D54Cu;
    // 0x14d550: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DF50u, 0x14D54Cu, 0x14D554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D554u;
}
