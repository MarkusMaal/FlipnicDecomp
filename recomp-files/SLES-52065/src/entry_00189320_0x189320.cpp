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

// Function: entry_00189320
// Address: 0x189320 - 0x189334
void entry_00189320_0x189320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189320_0x189320");
#endif

    ctx->pc = 0x189320u;

    // 0x189320: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x189320u;
    {
        const bool branch_taken_0x189320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189320) {
            ctx->pc = 0x189334u;
            return;
        }
    }
    ctx->pc = 0x189328u;
    // 0x189328: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x189328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18932c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x18932cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x189330: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189330u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x189334u;
}
