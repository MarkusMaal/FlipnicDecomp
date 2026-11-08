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

// Function: entry_001e7cd4
// Address: 0x1e7cd4 - 0x1e7cf4
void entry_001e7cd4_0x1e7cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7cd4_0x1e7cd4");
#endif

    ctx->pc = 0x1e7cd4u;

    // 0x1e7cd4: 0x0  nop
    ctx->pc = 0x1e7cd4u;
    // NOP
    // 0x1e7cd8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x1e7cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e7cdc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e7cdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1e7ce0: 0x25080006  addiu       $t0, $t0, 0x6
    ctx->pc = 0x1e7ce0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
    // 0x1e7ce4: 0xf1082b  sltu        $at, $a3, $s1
    ctx->pc = 0x1e7ce4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1e7ce8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e7ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e7cec: 0x1420ffef  bnez        $at, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1E7CECu;
    {
        const bool branch_taken_0x1e7cec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7CECu;
        // 0x1e7cf0: 0xae640004  sw          $a0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7cec) {
            ctx->pc = 0x1E7CACu;
            return;
        }
    }
    ctx->pc = 0x1E7CF4u;
}
