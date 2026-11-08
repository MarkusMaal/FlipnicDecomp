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

// Function: entry_001f47b8
// Address: 0x1f47b8 - 0x1f47c0
void entry_001f47b8_0x1f47b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f47b8_0x1f47b8");
#endif

    ctx->pc = 0x1f47b8u;

    // 0x1f47b8: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F47B8u;
    {
        const bool branch_taken_0x1f47b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F47BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F47B8u;
        // 0x1f47bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f47b8) {
            ctx->pc = 0x1F47E0u;
            return;
        }
    }
    ctx->pc = 0x1F47C0u;
}
