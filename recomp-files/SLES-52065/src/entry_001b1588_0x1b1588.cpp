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

// Function: entry_001b1588
// Address: 0x1b1588 - 0x1b159c
void entry_001b1588_0x1b1588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1588_0x1b1588");
#endif

    ctx->pc = 0x1b1588u;

    // 0x1b1588: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1588u;
    {
        const bool branch_taken_0x1b1588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1588) {
            ctx->pc = 0x1B159Cu;
            return;
        }
    }
    ctx->pc = 0x1B1590u;
    // 0x1b1590: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1b1590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b1594: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1b1594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1b1598: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b159cu;
}
