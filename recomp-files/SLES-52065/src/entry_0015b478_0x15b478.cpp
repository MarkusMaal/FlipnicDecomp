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

// Function: entry_0015b478
// Address: 0x15b478 - 0x15b484
void entry_0015b478_0x15b478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b478_0x15b478");
#endif

    ctx->pc = 0x15b478u;

    // 0x15b478: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15B478u;
    {
        const bool branch_taken_0x15b478 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x15b478) {
            ctx->pc = 0x15B484u;
            return;
        }
    }
    ctx->pc = 0x15B480u;
    // 0x15b480: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15b480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x15b484u;
}
