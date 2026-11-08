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

// Function: entry_00120d18
// Address: 0x120d18 - 0x120d28
void entry_00120d18_0x120d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120d18_0x120d18");
#endif

    ctx->pc = 0x120d18u;

    // 0x120d18: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x120d18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x120d1c: 0x254182a  slt         $v1, $s2, $s4
    ctx->pc = 0x120d1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x120d20: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x120D20u;
    {
        const bool branch_taken_0x120d20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x120d20) {
            ctx->pc = 0x120CBCu;
            return;
        }
    }
    ctx->pc = 0x120D28u;
}
