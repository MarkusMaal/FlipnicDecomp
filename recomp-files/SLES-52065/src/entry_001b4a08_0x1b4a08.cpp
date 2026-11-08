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

// Function: entry_001b4a08
// Address: 0x1b4a08 - 0x1b4a18
void entry_001b4a08_0x1b4a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4a08_0x1b4a08");
#endif

    ctx->pc = 0x1b4a08u;

    // 0x1b4a08: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x1b4a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1b4a0c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1b4a0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b4a10: 0x1460ffbf  bnez        $v1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x1B4A10u;
    {
        const bool branch_taken_0x1b4a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4a10) {
            ctx->pc = 0x1B4910u;
            return;
        }
    }
    ctx->pc = 0x1B4A18u;
}
