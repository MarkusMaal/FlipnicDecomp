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

// Function: entry_001a8eb0
// Address: 0x1a8eb0 - 0x1a8ec8
void entry_001a8eb0_0x1a8eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8eb0_0x1a8eb0");
#endif

    ctx->pc = 0x1a8eb0u;

    // 0x1a8eb0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1a8eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a8eb4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1a8eb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a8eb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A8EB8u;
    {
        const bool branch_taken_0x1a8eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8eb8) {
            ctx->pc = 0x1A8EC8u;
            return;
        }
    }
    ctx->pc = 0x1A8EC0u;
    // 0x1a8ec0: 0x2462fffd  addiu       $v0, $v1, -0x3
    ctx->pc = 0x1a8ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x1a8ec4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1a8ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1a8ec8u;
}
