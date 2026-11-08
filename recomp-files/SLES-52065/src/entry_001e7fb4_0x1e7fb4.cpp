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

// Function: entry_001e7fb4
// Address: 0x1e7fb4 - 0x1e7fdc
void entry_001e7fb4_0x1e7fb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7fb4_0x1e7fb4");
#endif

    ctx->pc = 0x1e7fb4u;

    // 0x1e7fb4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7FB4u;
    {
        const bool branch_taken_0x1e7fb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7fb4) {
            ctx->pc = 0x1E7FDCu;
            return;
        }
    }
    ctx->pc = 0x1E7FBCu;
    // 0x1e7fbc: 0x0  nop
    ctx->pc = 0x1e7fbcu;
    // NOP
    // 0x1e7fc0: 0xafdd0144  sw          $sp, 0x144($fp)
    ctx->pc = 0x1e7fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 324), GPR_U32(ctx, 29));
    // 0x1e7fc4: 0x84a80000  lh          $t0, 0x0($a1)
    ctx->pc = 0x1e7fc4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e7fc8: 0x84a70002  lh          $a3, 0x2($a1)
    ctx->pc = 0x1e7fc8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1e7fcc: 0x84a60004  lh          $a2, 0x4($a1)
    ctx->pc = 0x1e7fccu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e7fd0: 0xa4680000  sh          $t0, 0x0($v1)
    ctx->pc = 0x1e7fd0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x1e7fd4: 0xa4670002  sh          $a3, 0x2($v1)
    ctx->pc = 0x1e7fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x1e7fd8: 0xa4660004  sh          $a2, 0x4($v1)
    ctx->pc = 0x1e7fd8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 6));
    ctx->pc = 0x1e7fdcu;
}
