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

// Function: entry_001413d8
// Address: 0x1413d8 - 0x1413e4
void entry_001413d8_0x1413d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001413d8_0x1413d8");
#endif

    ctx->pc = 0x1413d8u;

    // 0x1413d8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1413d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1413dc: 0x14c0ffed  bnez        $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1413DCu;
    {
        const bool branch_taken_0x1413dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1413dc) {
            ctx->pc = 0x141394u;
            return;
        }
    }
    ctx->pc = 0x1413E4u;
}
