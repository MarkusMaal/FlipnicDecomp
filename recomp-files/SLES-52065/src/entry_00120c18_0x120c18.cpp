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

// Function: entry_00120c18
// Address: 0x120c18 - 0x120c28
void entry_00120c18_0x120c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120c18_0x120c18");
#endif

    ctx->pc = 0x120c18u;

    // 0x120c18: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x120c18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x120c1c: 0x2b4182a  slt         $v1, $s5, $s4
    ctx->pc = 0x120c1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x120c20: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x120C20u;
    {
        const bool branch_taken_0x120c20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x120c20) {
            ctx->pc = 0x120BB4u;
            return;
        }
    }
    ctx->pc = 0x120C28u;
}
