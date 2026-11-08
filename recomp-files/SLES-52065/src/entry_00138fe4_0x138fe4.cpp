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

// Function: entry_00138fe4
// Address: 0x138fe4 - 0x138ff8
void entry_00138fe4_0x138fe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138fe4_0x138fe4");
#endif

    ctx->pc = 0x138fe4u;

    // 0x138fe4: 0x29230002  slti        $v1, $t1, 0x2
    ctx->pc = 0x138fe4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x138fe8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x138FE8u;
    {
        const bool branch_taken_0x138fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x138fe8) {
            ctx->pc = 0x138FF8u;
            return;
        }
    }
    ctx->pc = 0x138FF0u;
    // 0x138ff0: 0x15300011  bne         $t1, $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x138FF0u;
    {
        const bool branch_taken_0x138ff0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 16));
        if (branch_taken_0x138ff0) {
            ctx->pc = 0x139038u;
            return;
        }
    }
    ctx->pc = 0x138FF8u;
}
