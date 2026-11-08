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

// Function: entry_0013e210
// Address: 0x13e210 - 0x13e22c
void entry_0013e210_0x13e210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e210_0x13e210");
#endif

    ctx->pc = 0x13e210u;

    // 0x13e210: 0x8e4301c4  lw          $v1, 0x1C4($s2)
    ctx->pc = 0x13e210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
    // 0x13e214: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x13e214u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x13e218: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x13e218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13e21c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13e21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13e220: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13E220u;
    {
        const bool branch_taken_0x13e220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e220) {
            ctx->pc = 0x13E22Cu;
            return;
        }
    }
    ctx->pc = 0x13E228u;
    // 0x13e228: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x13e228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    ctx->pc = 0x13e22cu;
}
