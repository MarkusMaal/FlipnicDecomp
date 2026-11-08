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

// Function: entry_001e836c
// Address: 0x1e836c - 0x1e838c
void entry_001e836c_0x1e836c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e836c_0x1e836c");
#endif

    ctx->pc = 0x1e836cu;

    // 0x1e836c: 0x0  nop
    ctx->pc = 0x1e836cu;
    // NOP
    // 0x1e8370: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x1e8370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e8374: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x1e8374u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x1e8378: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x1e8378u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x1e837c: 0x125202b  sltu        $a0, $t1, $a1
    ctx->pc = 0x1e837cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1e8380: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e8380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e8384: 0x1480ffed  bnez        $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1E8384u;
    {
        const bool branch_taken_0x1e8384 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8384u;
        // 0x1e8388: 0xae660004  sw          $a2, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8384) {
            ctx->pc = 0x1E833Cu;
            return;
        }
    }
    ctx->pc = 0x1E838Cu;
}
