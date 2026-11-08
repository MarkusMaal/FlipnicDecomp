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

// Function: entry_001e7f14
// Address: 0x1e7f14 - 0x1e7f3c
void entry_001e7f14_0x1e7f14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7f14_0x1e7f14");
#endif

    ctx->pc = 0x1e7f14u;

    // 0x1e7f14: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7F14u;
    {
        const bool branch_taken_0x1e7f14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7f14) {
            ctx->pc = 0x1E7F3Cu;
            return;
        }
    }
    ctx->pc = 0x1E7F1Cu;
    // 0x1e7f1c: 0x0  nop
    ctx->pc = 0x1e7f1cu;
    // NOP
    // 0x1e7f20: 0xafdd0104  sw          $sp, 0x104($fp)
    ctx->pc = 0x1e7f20u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 260), GPR_U32(ctx, 29));
    // 0x1e7f24: 0x84a80000  lh          $t0, 0x0($a1)
    ctx->pc = 0x1e7f24u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e7f28: 0x84a70002  lh          $a3, 0x2($a1)
    ctx->pc = 0x1e7f28u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1e7f2c: 0x84a60004  lh          $a2, 0x4($a1)
    ctx->pc = 0x1e7f2cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e7f30: 0xa4680000  sh          $t0, 0x0($v1)
    ctx->pc = 0x1e7f30u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x1e7f34: 0xa4670002  sh          $a3, 0x2($v1)
    ctx->pc = 0x1e7f34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x1e7f38: 0xa4660004  sh          $a2, 0x4($v1)
    ctx->pc = 0x1e7f38u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 6));
    ctx->pc = 0x1e7f3cu;
}
