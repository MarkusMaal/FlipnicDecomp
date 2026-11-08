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

// Function: entry_0014da34
// Address: 0x14da34 - 0x14da44
void entry_0014da34_0x14da34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014da34_0x14da34");
#endif

    ctx->pc = 0x14da34u;

    // 0x14da34: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DA34u;
    {
        const bool branch_taken_0x14da34 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x14da34) {
            ctx->pc = 0x14DA44u;
            return;
        }
    }
    ctx->pc = 0x14DA3Cu;
    // 0x14da3c: 0x7a440000  lq          $a0, 0x0($s2)
    ctx->pc = 0x14da3cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14da40: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x14da40u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
    ctx->pc = 0x14da44u;
}
