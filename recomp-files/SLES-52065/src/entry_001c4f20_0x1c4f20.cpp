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

// Function: entry_001c4f20
// Address: 0x1c4f20 - 0x1c4f2c
void entry_001c4f20_0x1c4f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4f20_0x1c4f20");
#endif

    ctx->pc = 0x1c4f20u;

    // 0x1c4f20: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C4F20u;
    {
        const bool branch_taken_0x1c4f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4f20) {
            ctx->pc = 0x1C4F2Cu;
            return;
        }
    }
    ctx->pc = 0x1C4F28u;
    // 0x1c4f28: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x1c4f28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    ctx->pc = 0x1c4f2cu;
}
