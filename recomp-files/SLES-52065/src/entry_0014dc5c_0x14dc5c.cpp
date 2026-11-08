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

// Function: entry_0014dc5c
// Address: 0x14dc5c - 0x14dc6c
void entry_0014dc5c_0x14dc5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dc5c_0x14dc5c");
#endif

    ctx->pc = 0x14dc5cu;

    // 0x14dc5c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DC5Cu;
    {
        const bool branch_taken_0x14dc5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dc5c) {
            ctx->pc = 0x14DC6Cu;
            return;
        }
    }
    ctx->pc = 0x14DC64u;
    // 0x14dc64: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x14dc64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14dc68: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x14dc68u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x14dc6cu;
}
