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

// Function: entry_001ecc88
// Address: 0x1ecc88 - 0x1ecc90
void entry_001ecc88_0x1ecc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ecc88_0x1ecc88");
#endif

    ctx->pc = 0x1ecc88u;

    // 0x1ecc88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1ECC88u;
    {
        const bool branch_taken_0x1ecc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC88u;
        // 0x1ecc8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecc88) {
            ctx->pc = 0x1ECCA0u;
            return;
        }
    }
    ctx->pc = 0x1ECC90u;
}
