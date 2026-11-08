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

// Function: entry_001798b4
// Address: 0x1798b4 - 0x1798d0
void entry_001798b4_0x1798b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001798b4_0x1798b4");
#endif

    ctx->pc = 0x1798b4u;

label_1798b4:
    // 0x1798b4: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x1798b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1798b8: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x1798b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1798bc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1798bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1798c0: 0xe5182a  slt         $v1, $a3, $a1
    ctx->pc = 0x1798c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1798c4: 0x0  nop
    ctx->pc = 0x1798c4u;
    // NOP
    // 0x1798c8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1798C8u;
    {
        const bool branch_taken_0x1798c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1798c8) {
            ctx->pc = 0x1798B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1798b4;
        }
    }
    ctx->pc = 0x1798D0u;
}
