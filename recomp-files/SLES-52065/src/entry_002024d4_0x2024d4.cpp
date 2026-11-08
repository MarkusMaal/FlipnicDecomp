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

// Function: entry_002024d4
// Address: 0x2024d4 - 0x2024dc
void entry_002024d4_0x2024d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002024d4_0x2024d4");
#endif

    ctx->pc = 0x2024d4u;

    // 0x2024d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2024D4u;
    {
        const bool branch_taken_0x2024d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2024D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024D4u;
        // 0x2024d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2024d4) {
            ctx->pc = 0x2024E0u;
            return;
        }
    }
    ctx->pc = 0x2024DCu;
}
