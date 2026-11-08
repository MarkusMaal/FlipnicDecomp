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

// Function: entry_00140e80
// Address: 0x140e80 - 0x140e94
void entry_00140e80_0x140e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140e80_0x140e80");
#endif

    ctx->pc = 0x140e80u;

    // 0x140e80: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x140e80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x140e84: 0x14e0ffed  bnez        $a3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x140E84u;
    {
        const bool branch_taken_0x140e84 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x140e84) {
            ctx->pc = 0x140E3Cu;
            return;
        }
    }
    ctx->pc = 0x140E8Cu;
    // 0x140e8c: 0x10000155  b           . + 4 + (0x155 << 2)
    ctx->pc = 0x140E8Cu;
    {
        const bool branch_taken_0x140e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140e8c) {
            ctx->pc = 0x1413E4u;
            return;
        }
    }
    ctx->pc = 0x140E94u;
}
