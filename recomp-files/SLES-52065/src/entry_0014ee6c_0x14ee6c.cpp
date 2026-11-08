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

// Function: entry_0014ee6c
// Address: 0x14ee6c - 0x14ee7c
void entry_0014ee6c_0x14ee6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ee6c_0x14ee6c");
#endif

    ctx->pc = 0x14ee6cu;

    // 0x14ee6c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14EE6Cu;
    {
        const bool branch_taken_0x14ee6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ee6c) {
            ctx->pc = 0x14EE7Cu;
            return;
        }
    }
    ctx->pc = 0x14EE74u;
    // 0x14ee74: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x14ee74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14ee78: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x14ee78u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    ctx->pc = 0x14ee7cu;
}
