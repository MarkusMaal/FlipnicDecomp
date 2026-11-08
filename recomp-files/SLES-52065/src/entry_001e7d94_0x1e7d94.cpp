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

// Function: entry_001e7d94
// Address: 0x1e7d94 - 0x1e7db4
void entry_001e7d94_0x1e7d94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7d94_0x1e7d94");
#endif

    ctx->pc = 0x1e7d94u;

    // 0x1e7d94: 0x0  nop
    ctx->pc = 0x1e7d94u;
    // NOP
    // 0x1e7d98: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1e7d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e7d9c: 0x25080006  addiu       $t0, $t0, 0x6
    ctx->pc = 0x1e7d9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
    // 0x1e7da0: 0x25290006  addiu       $t1, $t1, 0x6
    ctx->pc = 0x1e7da0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6));
    // 0x1e7da4: 0x103202b  sltu        $a0, $t0, $v1
    ctx->pc = 0x1e7da4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e7da8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1e7da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1e7dac: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1E7DACu;
    {
        const bool branch_taken_0x1e7dac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7DACu;
        // 0x1e7db0: 0xae650004  sw          $a1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7dac) {
            ctx->pc = 0x1E7D6Cu;
            return;
        }
    }
    ctx->pc = 0x1E7DB4u;
}
