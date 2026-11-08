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

// Function: entry_0015cb50
// Address: 0x15cb50 - 0x15cb6c
void entry_0015cb50_0x15cb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cb50_0x15cb50");
#endif

    ctx->pc = 0x15cb50u;

label_15cb50:
    // 0x15cb50: 0xdd1821  addu        $v1, $a2, $sp
    ctx->pc = 0x15cb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x15cb54: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15cb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15cb58: 0xac6400b0  sw          $a0, 0xB0($v1)
    ctx->pc = 0x15cb58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 4));
    // 0x15cb5c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x15cb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x15cb60: 0xb0182a  slt         $v1, $a1, $s0
    ctx->pc = 0x15cb60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15cb64: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15CB64u;
    {
        const bool branch_taken_0x15cb64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cb64) {
            ctx->pc = 0x15CB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15cb50;
        }
    }
    ctx->pc = 0x15CB6Cu;
}
