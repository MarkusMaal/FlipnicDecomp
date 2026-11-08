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

// Function: entry_001e9318
// Address: 0x1e9318 - 0x1e9338
void entry_001e9318_0x1e9318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9318_0x1e9318");
#endif

    ctx->pc = 0x1e9318u;

label_1e9318:
    // 0x1e9318: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e9318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e931c: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x1e931cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1e9320: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1e9320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e9324: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1e9324u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9328: 0x0  nop
    ctx->pc = 0x1e9328u;
    // NOP
    // 0x1e932c: 0x0  nop
    ctx->pc = 0x1e932cu;
    // NOP
    // 0x1e9330: 0x1443fff9  bne         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E9330u;
    {
        const bool branch_taken_0x1e9330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e9330) {
            ctx->pc = 0x1E9318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9318;
        }
    }
    ctx->pc = 0x1E9338u;
}
