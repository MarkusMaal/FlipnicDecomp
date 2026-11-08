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

// Function: entry_001c8ecc
// Address: 0x1c8ecc - 0x1c8ee4
void entry_001c8ecc_0x1c8ecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8ecc_0x1c8ecc");
#endif

    ctx->pc = 0x1c8eccu;

    // 0x1c8ecc: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8ECCu;
    {
        const bool branch_taken_0x1c8ecc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C8ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8ECCu;
        // 0x1c8ed0: 0x3c010023  lui         $at, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8ecc) {
            ctx->pc = 0x1C8EE4u;
            return;
        }
    }
    ctx->pc = 0x1C8ED4u;
    // 0x1c8ed4: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c8ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c8ed8: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1c8ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1c8edc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8EDCu;
    {
        const bool branch_taken_0x1c8edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EDCu;
        // 0x1c8ee0: 0xa043282c  sb          $v1, 0x282C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 10284), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8edc) {
            ctx->pc = 0x1C8EECu;
            return;
        }
    }
    ctx->pc = 0x1C8EE4u;
}
