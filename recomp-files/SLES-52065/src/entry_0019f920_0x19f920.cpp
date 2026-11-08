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

// Function: entry_0019f920
// Address: 0x19f920 - 0x19f930
void entry_0019f920_0x19f920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f920_0x19f920");
#endif

    ctx->pc = 0x19f920u;

    // 0x19f920: 0x8e820664  lw          $v0, 0x664($s4)
    ctx->pc = 0x19f920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
    // 0x19f924: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x19f924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x19f928: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19F928u;
    {
        const bool branch_taken_0x19f928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F928u;
        // 0x19f92c: 0xac8228e4  sw          $v0, 0x28E4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 10468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f928) {
            ctx->pc = 0x19F94Cu;
            return;
        }
    }
    ctx->pc = 0x19F930u;
}
