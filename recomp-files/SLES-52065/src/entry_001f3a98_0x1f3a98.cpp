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

// Function: entry_001f3a98
// Address: 0x1f3a98 - 0x1f3ab8
void entry_001f3a98_0x1f3a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3a98_0x1f3a98");
#endif

    ctx->pc = 0x1f3a98u;

label_1f3a98:
    // 0x1f3a98: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1f3a98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f3a9c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f3a9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f3aa0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f3aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f3aa4: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1f3aa4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f3aa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3aac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F3AACu;
    {
        const bool branch_taken_0x1f3aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3aac) {
            ctx->pc = 0x1F3A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3a98;
        }
    }
    ctx->pc = 0x1F3AB4u;
    // 0x1f3ab4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1f3ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1f3ab8u;
}
