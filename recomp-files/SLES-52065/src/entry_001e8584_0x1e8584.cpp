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

// Function: entry_001e8584
// Address: 0x1e8584 - 0x1e85b4
void entry_001e8584_0x1e8584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8584_0x1e8584");
#endif

    ctx->pc = 0x1e8584u;

    // 0x1e8584: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1E8584u;
    {
        const bool branch_taken_0x1e8584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8584) {
            ctx->pc = 0x1E85B4u;
            return;
        }
    }
    ctx->pc = 0x1E858Cu;
    // 0x1e858c: 0x0  nop
    ctx->pc = 0x1e858cu;
    // NOP
    // 0x1e8590: 0xafdd0144  sw          $sp, 0x144($fp)
    ctx->pc = 0x1e8590u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 324), GPR_U32(ctx, 29));
    // 0x1e8594: 0x84a90000  lh          $t1, 0x0($a1)
    ctx->pc = 0x1e8594u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e8598: 0x84a80002  lh          $t0, 0x2($a1)
    ctx->pc = 0x1e8598u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1e859c: 0x84a70004  lh          $a3, 0x4($a1)
    ctx->pc = 0x1e859cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e85a0: 0x84a60006  lh          $a2, 0x6($a1)
    ctx->pc = 0x1e85a0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x1e85a4: 0xa4690000  sh          $t1, 0x0($v1)
    ctx->pc = 0x1e85a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x1e85a8: 0xa4680002  sh          $t0, 0x2($v1)
    ctx->pc = 0x1e85a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 8));
    // 0x1e85ac: 0xa4670004  sh          $a3, 0x4($v1)
    ctx->pc = 0x1e85acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x1e85b0: 0xa4660006  sh          $a2, 0x6($v1)
    ctx->pc = 0x1e85b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 6));
    ctx->pc = 0x1e85b4u;
}
