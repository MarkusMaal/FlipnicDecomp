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

// Function: entry_002083dc
// Address: 0x2083dc - 0x2083f0
void entry_002083dc_0x2083dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002083dc_0x2083dc");
#endif

    ctx->pc = 0x2083dcu;

    // 0x2083dc: 0x14e60034  bne         $a3, $a2, . + 4 + (0x34 << 2)
    ctx->pc = 0x2083DCu;
    {
        const bool branch_taken_0x2083dc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x2083E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083DCu;
        // 0x2083e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083dc) {
            ctx->pc = 0x2084B0u;
            return;
        }
    }
    ctx->pc = 0x2083E4u;
    // 0x2083e4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2083e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2083e8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2083E8u;
    {
        const bool branch_taken_0x2083e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2083ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083E8u;
        // 0x2083ec: 0x24442c00  addiu       $a0, $v0, 0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083e8) {
            ctx->pc = 0x2084B0u;
            return;
        }
    }
    ctx->pc = 0x2083F0u;
}
