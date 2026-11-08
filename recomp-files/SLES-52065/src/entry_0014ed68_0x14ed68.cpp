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

// Function: entry_0014ed68
// Address: 0x14ed68 - 0x14ed78
void entry_0014ed68_0x14ed68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ed68_0x14ed68");
#endif

    ctx->pc = 0x14ed68u;

    // 0x14ed68: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14ED68u;
    {
        const bool branch_taken_0x14ed68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ed68) {
            ctx->pc = 0x14ED78u;
            return;
        }
    }
    ctx->pc = 0x14ED70u;
    // 0x14ed70: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x14ed70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14ed74: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x14ed74u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    ctx->pc = 0x14ed78u;
}
