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

// Function: entry_001e84d4
// Address: 0x1e84d4 - 0x1e8504
void entry_001e84d4_0x1e84d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e84d4_0x1e84d4");
#endif

    ctx->pc = 0x1e84d4u;

    // 0x1e84d4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1E84D4u;
    {
        const bool branch_taken_0x1e84d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e84d4) {
            ctx->pc = 0x1E8504u;
            return;
        }
    }
    ctx->pc = 0x1E84DCu;
    // 0x1e84dc: 0x0  nop
    ctx->pc = 0x1e84dcu;
    // NOP
    // 0x1e84e0: 0xafdd0104  sw          $sp, 0x104($fp)
    ctx->pc = 0x1e84e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 260), GPR_U32(ctx, 29));
    // 0x1e84e4: 0x84a90000  lh          $t1, 0x0($a1)
    ctx->pc = 0x1e84e4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e84e8: 0x84a80002  lh          $t0, 0x2($a1)
    ctx->pc = 0x1e84e8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1e84ec: 0x84a70004  lh          $a3, 0x4($a1)
    ctx->pc = 0x1e84ecu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e84f0: 0x84a60006  lh          $a2, 0x6($a1)
    ctx->pc = 0x1e84f0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x1e84f4: 0xa4690000  sh          $t1, 0x0($v1)
    ctx->pc = 0x1e84f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x1e84f8: 0xa4680002  sh          $t0, 0x2($v1)
    ctx->pc = 0x1e84f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 8));
    // 0x1e84fc: 0xa4670004  sh          $a3, 0x4($v1)
    ctx->pc = 0x1e84fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x1e8500: 0xa4660006  sh          $a2, 0x6($v1)
    ctx->pc = 0x1e8500u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 6));
    ctx->pc = 0x1e8504u;
}
