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

// Function: entry_0016e3b4
// Address: 0x16e3b4 - 0x16e3c4
void entry_0016e3b4_0x16e3b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e3b4_0x16e3b4");
#endif

    ctx->pc = 0x16e3b4u;

    // 0x16e3b4: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x16E3B4u;
    {
        const bool branch_taken_0x16e3b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E3B4u;
        // 0x16e3b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e3b4) {
            ctx->pc = 0x16E3C4u;
            return;
        }
    }
    ctx->pc = 0x16E3BCu;
    // 0x16e3bc: 0xc05b734  jal         func_16DCD0
    ctx->pc = 0x16E3BCu;
    SET_GPR_U32(ctx, 31, 0x16E3C4u);
    ctx->pc = 0x16DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DCD0u, 0x16E3BCu, 0x16E3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E3C4u;
}
