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

// Function: entry_001b0418
// Address: 0x1b0418 - 0x1b042c
void entry_001b0418_0x1b0418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0418_0x1b0418");
#endif

    ctx->pc = 0x1b0418u;

    // 0x1b0418: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0418u;
    {
        const bool branch_taken_0x1b0418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0418) {
            ctx->pc = 0x1B042Cu;
            return;
        }
    }
    ctx->pc = 0x1B0420u;
    // 0x1b0420: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1b0420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b0424: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x1b0424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
    // 0x1b0428: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0428u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b042cu;
}
