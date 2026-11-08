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

// Function: entry_001fbeb8
// Address: 0x1fbeb8 - 0x1fbed4
void entry_001fbeb8_0x1fbeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fbeb8_0x1fbeb8");
#endif

    ctx->pc = 0x1fbeb8u;

label_1fbeb8:
    // 0x1fbeb8: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1fbeb8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fbebc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fbebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fbec0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1fbec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fbec4: 0x0  nop
    ctx->pc = 0x1fbec4u;
    // NOP
    // 0x1fbec8: 0x0  nop
    ctx->pc = 0x1fbec8u;
    // NOP
    // 0x1fbecc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FBECCu;
    {
        const bool branch_taken_0x1fbecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fbecc) {
            ctx->pc = 0x1FBEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fbeb8;
        }
    }
    ctx->pc = 0x1FBED4u;
}
