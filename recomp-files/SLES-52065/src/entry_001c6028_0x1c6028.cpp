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

// Function: entry_001c6028
// Address: 0x1c6028 - 0x1c6044
void entry_001c6028_0x1c6028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6028_0x1c6028");
#endif

    ctx->pc = 0x1c6028u;

    // 0x1c6028: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c6028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c602c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c602cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6030: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1c6030u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c6034: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6034u;
    {
        const bool branch_taken_0x1c6034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c6034) {
            ctx->pc = 0x1C6044u;
            return;
        }
    }
    ctx->pc = 0x1C603Cu;
    // 0x1c603c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C603Cu;
    {
        const bool branch_taken_0x1c603c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c603c) {
            ctx->pc = 0x1C6048u;
            return;
        }
    }
    ctx->pc = 0x1C6044u;
}
