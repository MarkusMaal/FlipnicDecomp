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

// Function: entry_00140c78
// Address: 0x140c78 - 0x140c88
void entry_00140c78_0x140c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140c78_0x140c78");
#endif

    ctx->pc = 0x140c78u;

    // 0x140c78: 0x8ceb0000  lw          $t3, 0x0($a3)
    ctx->pc = 0x140c78u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x140c7c: 0x8faa0094  lw          $t2, 0x94($sp)
    ctx->pc = 0x140c7cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x140c80: 0x156affdc  bne         $t3, $t2, . + 4 + (-0x24 << 2)
    ctx->pc = 0x140C80u;
    {
        const bool branch_taken_0x140c80 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 10));
        if (branch_taken_0x140c80) {
            ctx->pc = 0x140BF4u;
            return;
        }
    }
    ctx->pc = 0x140C88u;
}
