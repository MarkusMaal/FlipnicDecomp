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

// Function: entry_001b3a0c
// Address: 0x1b3a0c - 0x1b3a20
void entry_001b3a0c_0x1b3a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3a0c_0x1b3a0c");
#endif

    ctx->pc = 0x1b3a0cu;

    // 0x1b3a0c: 0x0  nop
    ctx->pc = 0x1b3a0cu;
    // NOP
    // 0x1b3a10: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x1b3a10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1b3a14: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1B3A14u;
    {
        const bool branch_taken_0x1b3a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3a14) {
            ctx->pc = 0x1B39A0u;
            return;
        }
    }
    ctx->pc = 0x1B3A1Cu;
    // 0x1b3a1c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b3a1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x1b3a20u;
}
