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

// Function: entry_001b1a4c
// Address: 0x1b1a4c - 0x1b1a64
void entry_001b1a4c_0x1b1a4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1a4c_0x1b1a4c");
#endif

    ctx->pc = 0x1b1a4cu;

    // 0x1b1a4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1A4Cu;
    {
        const bool branch_taken_0x1b1a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a4c) {
            ctx->pc = 0x1B1A64u;
            return;
        }
    }
    ctx->pc = 0x1B1A54u;
    // 0x1b1a54: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b1a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b1a58: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x1b1a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1b1a5c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1b1a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1b1a60: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1a60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b1a64u;
}
