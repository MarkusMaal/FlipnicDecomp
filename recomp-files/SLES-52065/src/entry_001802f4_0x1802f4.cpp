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

// Function: entry_001802f4
// Address: 0x1802f4 - 0x180300
void entry_001802f4_0x1802f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001802f4_0x1802f4");
#endif

    ctx->pc = 0x1802f4u;

    // 0x1802f4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1802f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1802f8: 0x1651ffd6  bne         $s2, $s1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1802F8u;
    {
        const bool branch_taken_0x1802f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        if (branch_taken_0x1802f8) {
            ctx->pc = 0x180254u;
            return;
        }
    }
    ctx->pc = 0x180300u;
}
