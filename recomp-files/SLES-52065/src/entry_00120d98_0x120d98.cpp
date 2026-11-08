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

// Function: entry_00120d98
// Address: 0x120d98 - 0x120da8
void entry_00120d98_0x120d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120d98_0x120d98");
#endif

    ctx->pc = 0x120d98u;

    // 0x120d98: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x120d98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x120d9c: 0x257182a  slt         $v1, $s2, $s7
    ctx->pc = 0x120d9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x120da0: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x120DA0u;
    {
        const bool branch_taken_0x120da0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x120da0) {
            ctx->pc = 0x120D34u;
            return;
        }
    }
    ctx->pc = 0x120DA8u;
}
