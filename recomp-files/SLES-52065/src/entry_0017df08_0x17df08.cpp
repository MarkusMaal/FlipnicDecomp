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

// Function: entry_0017df08
// Address: 0x17df08 - 0x17df18
void entry_0017df08_0x17df08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017df08_0x17df08");
#endif

    ctx->pc = 0x17df08u;

    // 0x17df08: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x17df08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x17df0c: 0x2a610002  slti        $at, $s3, 0x2
    ctx->pc = 0x17df0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17df10: 0x1420ffeb  bnez        $at, . + 4 + (-0x15 << 2)
    ctx->pc = 0x17DF10u;
    {
        const bool branch_taken_0x17df10 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17df10) {
            ctx->pc = 0x17DEC0u;
            return;
        }
    }
    ctx->pc = 0x17DF18u;
}
