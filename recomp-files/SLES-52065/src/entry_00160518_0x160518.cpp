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

// Function: entry_00160518
// Address: 0x160518 - 0x160524
void entry_00160518_0x160518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160518_0x160518");
#endif

    ctx->pc = 0x160518u;

    // 0x160518: 0x4c00002  bltz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x160518u;
    {
        const bool branch_taken_0x160518 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x160518) {
            ctx->pc = 0x160524u;
            return;
        }
    }
    ctx->pc = 0x160520u;
    // 0x160520: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x160524u;
}
