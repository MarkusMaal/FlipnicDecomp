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

// Function: entry_001a8cf8
// Address: 0x1a8cf8 - 0x1a8d10
void entry_001a8cf8_0x1a8cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8cf8_0x1a8cf8");
#endif

    ctx->pc = 0x1a8cf8u;

    // 0x1a8cf8: 0x8e4206d4  lw          $v0, 0x6D4($s2)
    ctx->pc = 0x1a8cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1748)));
    // 0x1a8cfc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a8cfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a8d00: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1A8D00u;
    {
        const bool branch_taken_0x1a8d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8d00) {
            ctx->pc = 0x1A8C88u;
            return;
        }
    }
    ctx->pc = 0x1A8D08u;
    // 0x1a8d08: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1A8D08u;
    {
        const bool branch_taken_0x1a8d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8d08) {
            ctx->pc = 0x1A8DD0u;
            return;
        }
    }
    ctx->pc = 0x1A8D10u;
}
