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

// Function: entry_001e8304
// Address: 0x1e8304 - 0x1e832c
void entry_001e8304_0x1e8304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8304_0x1e8304");
#endif

    ctx->pc = 0x1e8304u;

    // 0x1e8304: 0x0  nop
    ctx->pc = 0x1e8304u;
    // NOP
    // 0x1e8308: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x1e8308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e830c: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x1e830cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x1e8310: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1e8310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e8314: 0x125182b  sltu        $v1, $t1, $a1
    ctx->pc = 0x1e8314u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1e8318: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e8318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e831c: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1E831Cu;
    {
        const bool branch_taken_0x1e831c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E831Cu;
        // 0x1e8320: 0xae660004  sw          $a2, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e831c) {
            ctx->pc = 0x1E82D4u;
            return;
        }
    }
    ctx->pc = 0x1E8324u;
    // 0x1e8324: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1E8324u;
    {
        const bool branch_taken_0x1e8324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8324) {
            ctx->pc = 0x1E83F4u;
            return;
        }
    }
    ctx->pc = 0x1E832Cu;
}
