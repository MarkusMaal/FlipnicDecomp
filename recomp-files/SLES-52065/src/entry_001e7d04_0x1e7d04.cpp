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

// Function: entry_001e7d04
// Address: 0x1e7d04 - 0x1e7d2c
void entry_001e7d04_0x1e7d04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7d04_0x1e7d04");
#endif

    ctx->pc = 0x1e7d04u;

    // 0x1e7d04: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7D04u;
    {
        const bool branch_taken_0x1e7d04 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7d04) {
            ctx->pc = 0x1E7D2Cu;
            return;
        }
    }
    ctx->pc = 0x1E7D0Cu;
    // 0x1e7d0c: 0x0  nop
    ctx->pc = 0x1e7d0cu;
    // NOP
    // 0x1e7d10: 0xafdd00c4  sw          $sp, 0xC4($fp)
    ctx->pc = 0x1e7d10u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 196), GPR_U32(ctx, 29));
    // 0x1e7d14: 0x84e60000  lh          $a2, 0x0($a3)
    ctx->pc = 0x1e7d14u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e7d18: 0x84e50002  lh          $a1, 0x2($a3)
    ctx->pc = 0x1e7d18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1e7d1c: 0x84e40004  lh          $a0, 0x4($a3)
    ctx->pc = 0x1e7d1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1e7d20: 0xa5060000  sh          $a2, 0x0($t0)
    ctx->pc = 0x1e7d20u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x1e7d24: 0xa5050002  sh          $a1, 0x2($t0)
    ctx->pc = 0x1e7d24u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x1e7d28: 0xa5040004  sh          $a0, 0x4($t0)
    ctx->pc = 0x1e7d28u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1e7d2cu;
}
