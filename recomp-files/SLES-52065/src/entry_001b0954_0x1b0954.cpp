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

// Function: entry_001b0954
// Address: 0x1b0954 - 0x1b0968
void entry_001b0954_0x1b0954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0954_0x1b0954");
#endif

    ctx->pc = 0x1b0954u;

    // 0x1b0954: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0954u;
    {
        const bool branch_taken_0x1b0954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0954) {
            ctx->pc = 0x1B0968u;
            return;
        }
    }
    ctx->pc = 0x1B095Cu;
    // 0x1b095c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1b095cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1b0960: 0x561026  xor         $v0, $v0, $s6
    ctx->pc = 0x1b0960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 22));
    // 0x1b0964: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b0968u;
}
