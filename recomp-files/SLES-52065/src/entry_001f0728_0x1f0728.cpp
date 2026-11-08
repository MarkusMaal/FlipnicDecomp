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

// Function: entry_001f0728
// Address: 0x1f0728 - 0x1f0738
void entry_001f0728_0x1f0728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0728_0x1f0728");
#endif

    ctx->pc = 0x1f0728u;

    // 0x1f0728: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F0728u;
    {
        const bool branch_taken_0x1f0728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0728u;
        // 0x1f072c: 0x2e820401  sltiu       $v0, $s4, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0728) {
            ctx->pc = 0x1F0738u;
            return;
        }
    }
    ctx->pc = 0x1F0730u;
    // 0x1f0730: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0730u;
    {
        const bool branch_taken_0x1f0730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0730) {
            ctx->pc = 0x1F0748u;
            return;
        }
    }
    ctx->pc = 0x1F0738u;
}
