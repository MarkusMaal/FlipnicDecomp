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

// Function: entry_001bd8f0
// Address: 0x1bd8f0 - 0x1bd900
void entry_001bd8f0_0x1bd8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd8f0_0x1bd8f0");
#endif

    ctx->pc = 0x1bd8f0u;

    // 0x1bd8f0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD8F0u;
    {
        const bool branch_taken_0x1bd8f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd8f0) {
            ctx->pc = 0x1BD900u;
            return;
        }
    }
    ctx->pc = 0x1BD8F8u;
    // 0x1bd8f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bd8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd8fc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1bd8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1bd900u;
}
