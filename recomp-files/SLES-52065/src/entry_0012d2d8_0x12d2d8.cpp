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

// Function: entry_0012d2d8
// Address: 0x12d2d8 - 0x12d2e8
void entry_0012d2d8_0x12d2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d2d8_0x12d2d8");
#endif

    ctx->pc = 0x12d2d8u;

    // 0x12d2d8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D2D8u;
    {
        const bool branch_taken_0x12d2d8 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x12d2d8) {
            ctx->pc = 0x12D2E8u;
            return;
        }
    }
    ctx->pc = 0x12D2E0u;
    // 0x12d2e0: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x12d2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x12d2e4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x12d2e4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    ctx->pc = 0x12d2e8u;
}
