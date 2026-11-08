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

// Function: entry_001c5b78
// Address: 0x1c5b78 - 0x1c5b8c
void entry_001c5b78_0x1c5b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5b78_0x1c5b78");
#endif

    ctx->pc = 0x1c5b78u;

    // 0x1c5b78: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5B78u;
    {
        const bool branch_taken_0x1c5b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5b78) {
            ctx->pc = 0x1C5B8Cu;
            return;
        }
    }
    ctx->pc = 0x1C5B80u;
    // 0x1c5b80: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1c5b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c5b84: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1c5b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1c5b88: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1c5b88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1c5b8cu;
}
