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

// Function: entry_0014dabc
// Address: 0x14dabc - 0x14dacc
void entry_0014dabc_0x14dabc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dabc_0x14dabc");
#endif

    ctx->pc = 0x14dabcu;

    // 0x14dabc: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DABCu;
    {
        const bool branch_taken_0x14dabc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dabc) {
            ctx->pc = 0x14DACCu;
            return;
        }
    }
    ctx->pc = 0x14DAC4u;
    // 0x14dac4: 0x78e40000  lq          $a0, 0x0($a3)
    ctx->pc = 0x14dac4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14dac8: 0x7d040000  sq          $a0, 0x0($t0)
    ctx->pc = 0x14dac8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 4));
    ctx->pc = 0x14daccu;
}
