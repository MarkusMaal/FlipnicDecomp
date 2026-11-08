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

// Function: entry_001f04b0
// Address: 0x1f04b0 - 0x1f04c0
void entry_001f04b0_0x1f04b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f04b0_0x1f04b0");
#endif

    switch (ctx->pc) {
        case 0x1f04b8u: goto label_1f04b8;
        default: break;
    }

    ctx->pc = 0x1f04b0u;

    // 0x1f04b0: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F04B0u;
    SET_GPR_U32(ctx, 31, 0x1F04B8u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F04B0u, 0x1F04B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F04B8u;
label_1f04b8:
    // 0x1f04b8: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1F04B8u;
    {
        const bool branch_taken_0x1f04b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F04BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F04B8u;
        // 0x1f04bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f04b8) {
            ctx->pc = 0x1F066Cu;
            return;
        }
    }
    ctx->pc = 0x1F04C0u;
}
