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

// Function: entry_001a7554
// Address: 0x1a7554 - 0x1a756c
void entry_001a7554_0x1a7554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7554_0x1a7554");
#endif

    ctx->pc = 0x1a7554u;

    // 0x1a7554: 0x8603001e  lh          $v1, 0x1E($s0)
    ctx->pc = 0x1a7554u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x1a7558: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a755c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A755Cu;
    {
        const bool branch_taken_0x1a755c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a755c) {
            ctx->pc = 0x1A756Cu;
            return;
        }
    }
    ctx->pc = 0x1A7564u;
    // 0x1a7564: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A7564u;
    {
        const bool branch_taken_0x1a7564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7564) {
            ctx->pc = 0x1A7570u;
            return;
        }
    }
    ctx->pc = 0x1A756Cu;
}
