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

// Function: entry_001b3d58
// Address: 0x1b3d58 - 0x1b3d74
void entry_001b3d58_0x1b3d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3d58_0x1b3d58");
#endif

    ctx->pc = 0x1b3d58u;

    // 0x1b3d58: 0x1a600029  blez        $s3, . + 4 + (0x29 << 2)
    ctx->pc = 0x1B3D58u;
    {
        const bool branch_taken_0x1b3d58 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x1b3d58) {
            ctx->pc = 0x1B3E00u;
            return;
        }
    }
    ctx->pc = 0x1B3D60u;
    // 0x1b3d60: 0x6610004  bgez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3D60u;
    {
        const bool branch_taken_0x1b3d60 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x1b3d60) {
            ctx->pc = 0x1B3D74u;
            return;
        }
    }
    ctx->pc = 0x1B3D68u;
    // 0x1b3d68: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1b3d68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b3d6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B3D6Cu;
    {
        const bool branch_taken_0x1b3d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3d6c) {
            ctx->pc = 0x1B3D8Cu;
            return;
        }
    }
    ctx->pc = 0x1B3D74u;
}
