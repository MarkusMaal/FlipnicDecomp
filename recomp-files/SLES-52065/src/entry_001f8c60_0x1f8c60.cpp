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

// Function: entry_001f8c60
// Address: 0x1f8c60 - 0x1f8c74
void entry_001f8c60_0x1f8c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8c60_0x1f8c60");
#endif

    ctx->pc = 0x1f8c60u;

    // 0x1f8c60: 0x8c431630  lw          $v1, 0x1630($v0)
    ctx->pc = 0x1f8c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5680)));
    // 0x1f8c64: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8C64u;
    {
        const bool branch_taken_0x1f8c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8c64) {
            ctx->pc = 0x1F8C74u;
            return;
        }
    }
    ctx->pc = 0x1F8C6Cu;
    // 0x1f8c6c: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x1f8c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x1f8c70: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f8c70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1f8c74u;
}
