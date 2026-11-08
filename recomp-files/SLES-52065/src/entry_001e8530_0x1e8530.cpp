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

// Function: entry_001e8530
// Address: 0x1e8530 - 0x1e855c
void entry_001e8530_0x1e8530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8530_0x1e8530");
#endif

    ctx->pc = 0x1e8530u;

    // 0x1e8530: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E8530u;
    {
        const bool branch_taken_0x1e8530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8530) {
            ctx->pc = 0x1E855Cu;
            return;
        }
    }
    ctx->pc = 0x1E8538u;
    // 0x1e8538: 0xafdd0124  sw          $sp, 0x124($fp)
    ctx->pc = 0x1e8538u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 292), GPR_U32(ctx, 29));
    // 0x1e853c: 0x86090000  lh          $t1, 0x0($s0)
    ctx->pc = 0x1e853cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e8540: 0x86080002  lh          $t0, 0x2($s0)
    ctx->pc = 0x1e8540u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1e8544: 0x86070004  lh          $a3, 0x4($s0)
    ctx->pc = 0x1e8544u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e8548: 0x86060006  lh          $a2, 0x6($s0)
    ctx->pc = 0x1e8548u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1e854c: 0xa4690000  sh          $t1, 0x0($v1)
    ctx->pc = 0x1e854cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x1e8550: 0xa4680002  sh          $t0, 0x2($v1)
    ctx->pc = 0x1e8550u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 8));
    // 0x1e8554: 0xa4670004  sh          $a3, 0x4($v1)
    ctx->pc = 0x1e8554u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x1e8558: 0xa4660006  sh          $a2, 0x6($v1)
    ctx->pc = 0x1e8558u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 6));
    ctx->pc = 0x1e855cu;
}
