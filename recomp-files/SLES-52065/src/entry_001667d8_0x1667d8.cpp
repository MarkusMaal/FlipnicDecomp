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

// Function: entry_001667d8
// Address: 0x1667d8 - 0x1667e8
void entry_001667d8_0x1667d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001667d8_0x1667d8");
#endif

    ctx->pc = 0x1667d8u;

    // 0x1667d8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1667D8u;
    {
        const bool branch_taken_0x1667d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1667d8) {
            ctx->pc = 0x1667E8u;
            return;
        }
    }
    ctx->pc = 0x1667E0u;
    // 0x1667e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1667e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1667e4: 0xa22201d0  sb          $v0, 0x1D0($s1)
    ctx->pc = 0x1667e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 464), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1667e8u;
}
