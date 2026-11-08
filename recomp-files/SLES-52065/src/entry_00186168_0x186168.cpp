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

// Function: entry_00186168
// Address: 0x186168 - 0x186178
void entry_00186168_0x186168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186168_0x186168");
#endif

    ctx->pc = 0x186168u;

    // 0x186168: 0x8f8386d0  lw          $v1, -0x7930($gp)
    ctx->pc = 0x186168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936272)));
    // 0x18616c: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x18616cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x186170: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x186170u;
    {
        const bool branch_taken_0x186170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186170) {
            ctx->pc = 0x1860D8u;
            return;
        }
    }
    ctx->pc = 0x186178u;
}
