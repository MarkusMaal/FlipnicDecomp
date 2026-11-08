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

// Function: entry_00160600
// Address: 0x160600 - 0x16060c
void entry_00160600_0x160600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160600_0x160600");
#endif

    ctx->pc = 0x160600u;

    // 0x160600: 0x4c00002  bltz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x160600u;
    {
        const bool branch_taken_0x160600 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x160600) {
            ctx->pc = 0x16060Cu;
            return;
        }
    }
    ctx->pc = 0x160608u;
    // 0x160608: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16060cu;
}
