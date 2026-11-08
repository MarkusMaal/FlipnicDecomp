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

// Function: entry_001b0034
// Address: 0x1b0034 - 0x1b0048
void entry_001b0034_0x1b0034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0034_0x1b0034");
#endif

    ctx->pc = 0x1b0034u;

    // 0x1b0034: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0034u;
    {
        const bool branch_taken_0x1b0034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0034) {
            ctx->pc = 0x1B0048u;
            return;
        }
    }
    ctx->pc = 0x1B003Cu;
    // 0x1b003c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b003cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b0040: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x1b0040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
    // 0x1b0044: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b0048u;
}
