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

// Function: entry_001d92ac
// Address: 0x1d92ac - 0x1d92c0
void entry_001d92ac_0x1d92ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d92ac_0x1d92ac");
#endif

    switch (ctx->pc) {
        case 0x1d92bcu: goto label_1d92bc;
        default: break;
    }

    ctx->pc = 0x1d92acu;

    // 0x1d92ac: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D92ACu;
    {
        const bool branch_taken_0x1d92ac = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D92B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D92ACu;
        // 0x1d92b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d92ac) {
            ctx->pc = 0x1D92C0u;
            return;
        }
    }
    ctx->pc = 0x1D92B4u;
    // 0x1d92b4: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1D92B4u;
    SET_GPR_U32(ctx, 31, 0x1D92BCu);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1D92B4u, 0x1D92BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D92BCu;
label_1d92bc:
    // 0x1d92bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d92bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d92c0u;
}
