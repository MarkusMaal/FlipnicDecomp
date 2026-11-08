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

// Function: entry_001e7300
// Address: 0x1e7300 - 0x1e7318
void entry_001e7300_0x1e7300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7300_0x1e7300");
#endif

    ctx->pc = 0x1e7300u;

    // 0x1e7300: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x1e7300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1e7304: 0x284200ff  slti        $v0, $v0, 0xFF
    ctx->pc = 0x1e7304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x1e7308: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7308u;
    {
        const bool branch_taken_0x1e7308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7308) {
            ctx->pc = 0x1E7318u;
            return;
        }
    }
    ctx->pc = 0x1E7310u;
    // 0x1e7310: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7310u;
    {
        const bool branch_taken_0x1e7310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7310u;
        // 0x1e7314: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7310) {
            ctx->pc = 0x1E7324u;
            return;
        }
    }
    ctx->pc = 0x1E7318u;
}
