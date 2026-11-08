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

// Function: entry_00148390
// Address: 0x148390 - 0x14839c
void entry_00148390_0x148390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148390_0x148390");
#endif

    ctx->pc = 0x148390u;

    // 0x148390: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x148390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x148394: 0x1455ffd6  bne         $v0, $s5, . + 4 + (-0x2A << 2)
    ctx->pc = 0x148394u;
    {
        const bool branch_taken_0x148394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x148394) {
            ctx->pc = 0x1482F0u;
            return;
        }
    }
    ctx->pc = 0x14839Cu;
}
