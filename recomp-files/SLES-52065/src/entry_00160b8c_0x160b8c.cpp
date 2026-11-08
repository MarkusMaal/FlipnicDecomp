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

// Function: entry_00160b8c
// Address: 0x160b8c - 0x160ba8
void entry_00160b8c_0x160b8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160b8c_0x160b8c");
#endif

    ctx->pc = 0x160b8cu;

label_160b8c:
    // 0x160b8c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x160b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x160b90: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x160b90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x160b94: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x160b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x160b98: 0x94182a  slt         $v1, $a0, $s4
    ctx->pc = 0x160b98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x160b9c: 0x0  nop
    ctx->pc = 0x160b9cu;
    // NOP
    // 0x160ba0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x160BA0u;
    {
        const bool branch_taken_0x160ba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x160ba0) {
            ctx->pc = 0x160B8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160b8c;
        }
    }
    ctx->pc = 0x160BA8u;
}
