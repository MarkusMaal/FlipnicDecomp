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

// Function: entry_001a8d68
// Address: 0x1a8d68 - 0x1a8d78
void entry_001a8d68_0x1a8d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8d68_0x1a8d68");
#endif

    ctx->pc = 0x1a8d68u;

    // 0x1a8d68: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1a8d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a8d6c: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8D6Cu;
    {
        const bool branch_taken_0x1a8d6c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a8d6c) {
            ctx->pc = 0x1A8D78u;
            return;
        }
    }
    ctx->pc = 0x1A8D74u;
    // 0x1a8d74: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1a8d74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1a8d78u;
}
