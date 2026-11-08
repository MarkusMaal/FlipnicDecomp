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

// Function: entry_001e7d6c
// Address: 0x1e7d6c - 0x1e7d94
void entry_001e7d6c_0x1e7d6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7d6c_0x1e7d6c");
#endif

    ctx->pc = 0x1e7d6cu;

    // 0x1e7d6c: 0x11200009  beqz        $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7D6Cu;
    {
        const bool branch_taken_0x1e7d6c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7d6c) {
            ctx->pc = 0x1E7D94u;
            return;
        }
    }
    ctx->pc = 0x1E7D74u;
    // 0x1e7d74: 0x0  nop
    ctx->pc = 0x1e7d74u;
    // NOP
    // 0x1e7d78: 0xafdd00e4  sw          $sp, 0xE4($fp)
    ctx->pc = 0x1e7d78u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 228), GPR_U32(ctx, 29));
    // 0x1e7d7c: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x1e7d7cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1e7d80: 0x85050002  lh          $a1, 0x2($t0)
    ctx->pc = 0x1e7d80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x1e7d84: 0x85040004  lh          $a0, 0x4($t0)
    ctx->pc = 0x1e7d84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1e7d88: 0xa5260000  sh          $a2, 0x0($t1)
    ctx->pc = 0x1e7d88u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x1e7d8c: 0xa5250002  sh          $a1, 0x2($t1)
    ctx->pc = 0x1e7d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x1e7d90: 0xa5240004  sh          $a0, 0x4($t1)
    ctx->pc = 0x1e7d90u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1e7d94u;
}
