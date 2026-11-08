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

// Function: entry_001e7d2c
// Address: 0x1e7d2c - 0x1e7d54
void entry_001e7d2c_0x1e7d2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7d2c_0x1e7d2c");
#endif

    ctx->pc = 0x1e7d2cu;

    // 0x1e7d2c: 0x0  nop
    ctx->pc = 0x1e7d2cu;
    // NOP
    // 0x1e7d30: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1e7d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e7d34: 0x24e70006  addiu       $a3, $a3, 0x6
    ctx->pc = 0x1e7d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6));
    // 0x1e7d38: 0x25080006  addiu       $t0, $t0, 0x6
    ctx->pc = 0x1e7d38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
    // 0x1e7d3c: 0xe3202b  sltu        $a0, $a3, $v1
    ctx->pc = 0x1e7d3cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e7d40: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1e7d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1e7d44: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1E7D44u;
    {
        const bool branch_taken_0x1e7d44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7D44u;
        // 0x1e7d48: 0xae650004  sw          $a1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7d44) {
            ctx->pc = 0x1E7D04u;
            return;
        }
    }
    ctx->pc = 0x1E7D4Cu;
    // 0x1e7d4c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1E7D4Cu;
    {
        const bool branch_taken_0x1e7d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7d4c) {
            ctx->pc = 0x1E7E24u;
            return;
        }
    }
    ctx->pc = 0x1E7D54u;
}
