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

// Function: entry_001bffd4
// Address: 0x1bffd4 - 0x1bffec
void entry_001bffd4_0x1bffd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bffd4_0x1bffd4");
#endif

    ctx->pc = 0x1bffd4u;

    // 0x1bffd4: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BFFD4u;
    {
        const bool branch_taken_0x1bffd4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BFFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFFD4u;
        // 0x1bffd8: 0x3c010023  lui         $at, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bffd4) {
            ctx->pc = 0x1BFFECu;
            return;
        }
    }
    ctx->pc = 0x1BFFDCu;
    // 0x1bffdc: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1bffdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1bffe0: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1bffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1bffe4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BFFE4u;
    {
        const bool branch_taken_0x1bffe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFFE4u;
        // 0x1bffe8: 0xa043282c  sb          $v1, 0x282C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 10284), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bffe4) {
            ctx->pc = 0x1BFFF4u;
            return;
        }
    }
    ctx->pc = 0x1BFFECu;
}
