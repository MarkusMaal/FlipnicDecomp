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

// Function: entry_00189e40
// Address: 0x189e40 - 0x189e54
void entry_00189e40_0x189e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189e40_0x189e40");
#endif

    ctx->pc = 0x189e40u;

    // 0x189e40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x189E40u;
    {
        const bool branch_taken_0x189e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189e40) {
            ctx->pc = 0x189E54u;
            return;
        }
    }
    ctx->pc = 0x189E48u;
    // 0x189e48: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x189e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x189e4c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x189e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x189e50: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189e50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x189e54u;
}
