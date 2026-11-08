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

// Function: entry_001fdcd0
// Address: 0x1fdcd0 - 0x1fdce0
void entry_001fdcd0_0x1fdcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdcd0_0x1fdcd0");
#endif

    switch (ctx->pc) {
        case 0x1fdcd8u: goto label_1fdcd8;
        default: break;
    }

    ctx->pc = 0x1fdcd0u;

    // 0x1fdcd0: 0xc07fe9e  jal         func_1FFA78
    ctx->pc = 0x1FDCD0u;
    SET_GPR_U32(ctx, 31, 0x1FDCD8u);
    ctx->pc = 0x1FDCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDCD0u;
    // 0x1fdcd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA78u, 0x1FDCD0u, 0x1FDCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDCD8u;
label_1fdcd8:
    // 0x1fdcd8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1FDCD8u;
    {
        const bool branch_taken_0x1fdcd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDCD8u;
        // 0x1fdcdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdcd8) {
            ctx->pc = 0x1FDD14u;
            return;
        }
    }
    ctx->pc = 0x1FDCE0u;
}
