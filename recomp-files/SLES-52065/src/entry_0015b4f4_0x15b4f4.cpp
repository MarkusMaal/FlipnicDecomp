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

// Function: entry_0015b4f4
// Address: 0x15b4f4 - 0x15b504
void entry_0015b4f4_0x15b4f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b4f4_0x15b4f4");
#endif

    ctx->pc = 0x15b4f4u;

    // 0x15b4f4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B4F4u;
    {
        const bool branch_taken_0x15b4f4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x15b4f4) {
            ctx->pc = 0x15B504u;
            return;
        }
    }
    ctx->pc = 0x15B4FCu;
    // 0x15b4fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15b500: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x15b500u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x15b504u;
}
