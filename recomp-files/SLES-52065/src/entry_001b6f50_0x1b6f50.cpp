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

// Function: entry_001b6f50
// Address: 0x1b6f50 - 0x1b6f68
void entry_001b6f50_0x1b6f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6f50_0x1b6f50");
#endif

    ctx->pc = 0x1b6f50u;

    // 0x1b6f50: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B6F50u;
    {
        const bool branch_taken_0x1b6f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6f50) {
            ctx->pc = 0x1B6F68u;
            return;
        }
    }
    ctx->pc = 0x1B6F58u;
    // 0x1b6f58: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b6f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b6f5c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b6f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1b6f60: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1b6f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b6f64: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1b6f64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1b6f68u;
}
