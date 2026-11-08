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

// Function: entry_001be8f0
// Address: 0x1be8f0 - 0x1be908
void entry_001be8f0_0x1be8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be8f0_0x1be8f0");
#endif

    ctx->pc = 0x1be8f0u;

    // 0x1be8f0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE8F0u;
    {
        const bool branch_taken_0x1be8f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be8f0) {
            ctx->pc = 0x1BE908u;
            return;
        }
    }
    ctx->pc = 0x1BE8F8u;
    // 0x1be8f8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1be8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1be8fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1be8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1be900: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1be900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1be904: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1be904u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1be908u;
}
