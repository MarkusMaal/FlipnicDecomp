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

// Function: entry_001e5d04
// Address: 0x1e5d04 - 0x1e5d14
void entry_001e5d04_0x1e5d04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5d04_0x1e5d04");
#endif

    ctx->pc = 0x1e5d04u;

    // 0x1e5d04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e5d04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e5d08: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x1e5d08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1e5d0c: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1E5D0Cu;
    {
        const bool branch_taken_0x1e5d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5d0c) {
            ctx->pc = 0x1E5C30u;
            return;
        }
    }
    ctx->pc = 0x1E5D14u;
}
