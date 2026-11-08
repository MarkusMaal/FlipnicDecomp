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

// Function: entry_001bc120
// Address: 0x1bc120 - 0x1bc138
void entry_001bc120_0x1bc120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc120_0x1bc120");
#endif

    ctx->pc = 0x1bc120u;

    // 0x1bc120: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC120u;
    {
        const bool branch_taken_0x1bc120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc120) {
            ctx->pc = 0x1BC138u;
            return;
        }
    }
    ctx->pc = 0x1BC128u;
    // 0x1bc128: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1bc128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bc12c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1bc12cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1bc130: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1bc130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1bc134: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1bc134u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1bc138u;
}
