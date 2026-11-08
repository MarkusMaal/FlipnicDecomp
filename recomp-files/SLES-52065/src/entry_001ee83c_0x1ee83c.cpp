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

// Function: entry_001ee83c
// Address: 0x1ee83c - 0x1ee84c
void entry_001ee83c_0x1ee83c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee83c_0x1ee83c");
#endif

    ctx->pc = 0x1ee83cu;

    // 0x1ee83c: 0x1a400003  blez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE83Cu;
    {
        const bool branch_taken_0x1ee83c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1EE840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE83Cu;
        // 0x1ee840: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee83c) {
            ctx->pc = 0x1EE84Cu;
            return;
        }
    }
    ctx->pc = 0x1EE844u;
    // 0x1ee844: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1EE844u;
    SET_GPR_U32(ctx, 31, 0x1EE84Cu);
    ctx->pc = 0x1EE848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE844u;
    // 0x1ee848: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1EE844u, 0x1EE84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE84Cu;
}
