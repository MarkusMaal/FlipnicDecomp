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

// Function: entry_001d0d90
// Address: 0x1d0d90 - 0x1d0da0
void entry_001d0d90_0x1d0d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0d90_0x1d0d90");
#endif

    ctx->pc = 0x1d0d90u;

    // 0x1d0d90: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d0d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d0d94: 0x28a20022  slti        $v0, $a1, 0x22
    ctx->pc = 0x1d0d94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x1d0d98: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D0D98u;
    {
        const bool branch_taken_0x1d0d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0d98) {
            ctx->pc = 0x1D0D74u;
            return;
        }
    }
    ctx->pc = 0x1D0DA0u;
}
