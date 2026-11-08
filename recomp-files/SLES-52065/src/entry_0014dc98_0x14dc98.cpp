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

// Function: entry_0014dc98
// Address: 0x14dc98 - 0x14dca8
void entry_0014dc98_0x14dc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dc98_0x14dc98");
#endif

    ctx->pc = 0x14dc98u;

    // 0x14dc98: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DC98u;
    {
        const bool branch_taken_0x14dc98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dc98) {
            ctx->pc = 0x14DCA8u;
            return;
        }
    }
    ctx->pc = 0x14DCA0u;
    // 0x14dca0: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x14dca0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14dca4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x14dca4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->pc = 0x14dca8u;
}
