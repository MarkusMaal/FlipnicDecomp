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

// Function: entry_001b1864
// Address: 0x1b1864 - 0x1b187c
void entry_001b1864_0x1b1864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1864_0x1b1864");
#endif

    ctx->pc = 0x1b1864u;

    // 0x1b1864: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1b1864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b1868: 0x14400413  bnez        $v0, . + 4 + (0x413 << 2)
    ctx->pc = 0x1B1868u;
    {
        const bool branch_taken_0x1b1868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1868u;
        // 0x1b186c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1868) {
            ctx->pc = 0x1B28B8u;
            return;
        }
    }
    ctx->pc = 0x1B1870u;
    // 0x1b1870: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b1870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1874: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b1874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1878: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b1878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1b187cu;
}
