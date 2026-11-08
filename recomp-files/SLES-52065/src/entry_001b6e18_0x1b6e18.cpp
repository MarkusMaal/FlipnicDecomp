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

// Function: entry_001b6e18
// Address: 0x1b6e18 - 0x1b6e34
void entry_001b6e18_0x1b6e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6e18_0x1b6e18");
#endif

    ctx->pc = 0x1b6e18u;

    // 0x1b6e18: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6E18u;
    {
        const bool branch_taken_0x1b6e18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6e18) {
            ctx->pc = 0x1B6E34u;
            return;
        }
    }
    ctx->pc = 0x1B6E20u;
    // 0x1b6e20: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1b6e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1b6e24: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1b6e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1b6e28: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1b6e28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b6e2c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1B6E2Cu;
    {
        const bool branch_taken_0x1b6e2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6e2c) {
            ctx->pc = 0x1B6E58u;
            return;
        }
    }
    ctx->pc = 0x1B6E34u;
}
