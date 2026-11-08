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

// Function: entry_001a8d50
// Address: 0x1a8d50 - 0x1a8d68
void entry_001a8d50_0x1a8d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8d50_0x1a8d50");
#endif

    ctx->pc = 0x1a8d50u;

    // 0x1a8d50: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1a8d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a8d54: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1a8d54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a8d58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A8D58u;
    {
        const bool branch_taken_0x1a8d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8d58) {
            ctx->pc = 0x1A8D68u;
            return;
        }
    }
    ctx->pc = 0x1A8D60u;
    // 0x1a8d60: 0x2462fffd  addiu       $v0, $v1, -0x3
    ctx->pc = 0x1a8d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x1a8d64: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1a8d64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1a8d68u;
}
