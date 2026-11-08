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

// Function: entry_001b0f40
// Address: 0x1b0f40 - 0x1b0f54
void entry_001b0f40_0x1b0f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0f40_0x1b0f40");
#endif

    ctx->pc = 0x1b0f40u;

    // 0x1b0f40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0F40u;
    {
        const bool branch_taken_0x1b0f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0f40) {
            ctx->pc = 0x1B0F54u;
            return;
        }
    }
    ctx->pc = 0x1B0F48u;
    // 0x1b0f48: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1b0f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1b0f4c: 0x551026  xor         $v0, $v0, $s5
    ctx->pc = 0x1b0f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 21));
    // 0x1b0f50: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0f50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b0f54u;
}
