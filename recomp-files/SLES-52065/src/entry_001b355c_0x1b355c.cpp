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

// Function: entry_001b355c
// Address: 0x1b355c - 0x1b3570
void entry_001b355c_0x1b355c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b355c_0x1b355c");
#endif

    ctx->pc = 0x1b355cu;

    // 0x1b355c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B355Cu;
    {
        const bool branch_taken_0x1b355c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b355c) {
            ctx->pc = 0x1B3570u;
            return;
        }
    }
    ctx->pc = 0x1B3564u;
    // 0x1b3564: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b3564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b3568: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b3568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b356c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b356cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b3570u;
}
