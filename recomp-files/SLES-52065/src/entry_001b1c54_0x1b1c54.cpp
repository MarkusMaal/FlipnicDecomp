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

// Function: entry_001b1c54
// Address: 0x1b1c54 - 0x1b1c6c
void entry_001b1c54_0x1b1c54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1c54_0x1b1c54");
#endif

    ctx->pc = 0x1b1c54u;

    // 0x1b1c54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1C54u;
    {
        const bool branch_taken_0x1b1c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1c54) {
            ctx->pc = 0x1B1C6Cu;
            return;
        }
    }
    ctx->pc = 0x1B1C5Cu;
    // 0x1b1c5c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b1c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b1c60: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x1b1c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x1b1c64: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1b1c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1b1c68: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1c68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b1c6cu;
}
