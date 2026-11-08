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

// Function: entry_00107910
// Address: 0x107910 - 0x10791c
void entry_00107910_0x107910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107910_0x107910");
#endif

    ctx->pc = 0x107910u;

    // 0x107910: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x107910u;
    {
        const bool branch_taken_0x107910 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x107910) {
            ctx->pc = 0x10791Cu;
            return;
        }
    }
    ctx->pc = 0x107918u;
    // 0x107918: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x107918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->pc = 0x10791cu;
}
