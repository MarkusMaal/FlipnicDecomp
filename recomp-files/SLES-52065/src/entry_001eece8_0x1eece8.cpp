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

// Function: entry_001eece8
// Address: 0x1eece8 - 0x1eecf8
void entry_001eece8_0x1eece8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eece8_0x1eece8");
#endif

    ctx->pc = 0x1eece8u;

    // 0x1eece8: 0x1a800003  blez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EECE8u;
    {
        const bool branch_taken_0x1eece8 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1EECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECE8u;
        // 0x1eecec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eece8) {
            ctx->pc = 0x1EECF8u;
            return;
        }
    }
    ctx->pc = 0x1EECF0u;
    // 0x1eecf0: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1EECF0u;
    SET_GPR_U32(ctx, 31, 0x1EECF8u);
    ctx->pc = 0x1EECF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EECF0u;
    // 0x1eecf4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1EECF0u, 0x1EECF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EECF8u;
}
