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

// Function: entry_001184a0
// Address: 0x1184a0 - 0x1184ac
void entry_001184a0_0x1184a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001184a0_0x1184a0");
#endif

    ctx->pc = 0x1184a0u;

    // 0x1184a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1184a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1184a4: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x1184A4u;
    {
        const bool branch_taken_0x1184a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1184A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1184A4u;
        // 0x1184a8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1184a4) {
            ctx->pc = 0x118560u;
            return;
        }
    }
    ctx->pc = 0x1184ACu;
}
