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

// Function: entry_001e61a4
// Address: 0x1e61a4 - 0x1e61b4
void entry_001e61a4_0x1e61a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e61a4_0x1e61a4");
#endif

    ctx->pc = 0x1e61a4u;

    // 0x1e61a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e61a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e61a8: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x1e61a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1e61ac: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1E61ACu;
    {
        const bool branch_taken_0x1e61ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e61ac) {
            ctx->pc = 0x1E60D0u;
            return;
        }
    }
    ctx->pc = 0x1E61B4u;
}
