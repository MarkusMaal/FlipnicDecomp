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

// Function: entry_0015e738
// Address: 0x15e738 - 0x15e750
void entry_0015e738_0x15e738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e738_0x15e738");
#endif

    ctx->pc = 0x15e738u;

label_15e738:
    // 0x15e738: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15e738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15e73c: 0x85182a  slt         $v1, $a0, $a1
    ctx->pc = 0x15e73cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x15e740: 0x0  nop
    ctx->pc = 0x15e740u;
    // NOP
    // 0x15e744: 0x0  nop
    ctx->pc = 0x15e744u;
    // NOP
    // 0x15e748: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x15E748u;
    {
        const bool branch_taken_0x15e748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e748) {
            ctx->pc = 0x15E738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15e738;
        }
    }
    ctx->pc = 0x15E750u;
}
