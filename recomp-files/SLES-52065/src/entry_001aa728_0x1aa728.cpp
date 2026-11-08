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

// Function: entry_001aa728
// Address: 0x1aa728 - 0x1aa744
void entry_001aa728_0x1aa728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa728_0x1aa728");
#endif

    ctx->pc = 0x1aa728u;

label_1aa728:
    // 0x1aa728: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1aa728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1aa72c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1aa72cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1aa730: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1aa730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1aa734: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1aa734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1aa738: 0x28a20009  slti        $v0, $a1, 0x9
    ctx->pc = 0x1aa738u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1aa73c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AA73Cu;
    {
        const bool branch_taken_0x1aa73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa73c) {
            ctx->pc = 0x1AA728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa728;
        }
    }
    ctx->pc = 0x1AA744u;
}
