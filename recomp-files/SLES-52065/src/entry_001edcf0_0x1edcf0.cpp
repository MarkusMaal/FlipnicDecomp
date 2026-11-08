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

// Function: entry_001edcf0
// Address: 0x1edcf0 - 0x1edd0c
void entry_001edcf0_0x1edcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001edcf0_0x1edcf0");
#endif

    ctx->pc = 0x1edcf0u;

label_1edcf0:
    // 0x1edcf0: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1edcf0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1edcf4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1edcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1edcf8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1edcf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1edcfc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1edcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1edd00: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1edd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1edd04: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1EDD04u;
    {
        const bool branch_taken_0x1edd04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edd04) {
            ctx->pc = 0x1EDCF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1edcf0;
        }
    }
    ctx->pc = 0x1EDD0Cu;
}
