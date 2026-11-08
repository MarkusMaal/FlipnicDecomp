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

// Function: entry_0015d8d8
// Address: 0x15d8d8 - 0x15d8f4
void entry_0015d8d8_0x15d8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d8d8_0x15d8d8");
#endif

    ctx->pc = 0x15d8d8u;

label_15d8d8:
    // 0x15d8d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15d8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15d8dc: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x15d8dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x15d8e0: 0x0  nop
    ctx->pc = 0x15d8e0u;
    // NOP
    // 0x15d8e4: 0x0  nop
    ctx->pc = 0x15d8e4u;
    // NOP
    // 0x15d8e8: 0x0  nop
    ctx->pc = 0x15d8e8u;
    // NOP
    // 0x15d8ec: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15D8ECu;
    {
        const bool branch_taken_0x15d8ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d8ec) {
            ctx->pc = 0x15D8D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d8d8;
        }
    }
    ctx->pc = 0x15D8F4u;
}
