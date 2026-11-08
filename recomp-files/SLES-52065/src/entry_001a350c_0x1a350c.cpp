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

// Function: entry_001a350c
// Address: 0x1a350c - 0x1a3530
void entry_001a350c_0x1a350c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a350c_0x1a350c");
#endif

    ctx->pc = 0x1a350cu;

    // 0x1a350c: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x1a350cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1a3510: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a3510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a3514: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a3514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a3518: 0x84632828  lh          $v1, 0x2828($v1)
    ctx->pc = 0x1a3518u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10280)));
    // 0x1a351c: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A351Cu;
    {
        const bool branch_taken_0x1a351c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a351c) {
            ctx->pc = 0x1A3544u;
            return;
        }
    }
    ctx->pc = 0x1A3524u;
    // 0x1a3524: 0x8e2207c0  lw          $v0, 0x7C0($s1)
    ctx->pc = 0x1a3524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1984)));
    // 0x1a3528: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a3528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a352c: 0xae2207c0  sw          $v0, 0x7C0($s1)
    ctx->pc = 0x1a352cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1984), GPR_U32(ctx, 2));
    ctx->pc = 0x1a3530u;
}
