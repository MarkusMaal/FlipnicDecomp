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

// Function: entry_00120e18
// Address: 0x120e18 - 0x120e28
void entry_00120e18_0x120e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120e18_0x120e18");
#endif

    ctx->pc = 0x120e18u;

    // 0x120e18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x120e18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x120e1c: 0x214182a  slt         $v1, $s0, $s4
    ctx->pc = 0x120e1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x120e20: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x120E20u;
    {
        const bool branch_taken_0x120e20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x120e20) {
            ctx->pc = 0x120DBCu;
            return;
        }
    }
    ctx->pc = 0x120E28u;
}
