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

// Function: entry_001f7730
// Address: 0x1f7730 - 0x1f7754
void entry_001f7730_0x1f7730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7730_0x1f7730");
#endif

    ctx->pc = 0x1f7730u;

label_1f7730:
    // 0x1f7730: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f7730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f7734: 0x0  nop
    ctx->pc = 0x1f7734u;
    // NOP
    // 0x1f7738: 0x0  nop
    ctx->pc = 0x1f7738u;
    // NOP
    // 0x1f773c: 0x0  nop
    ctx->pc = 0x1f773cu;
    // NOP
    // 0x1f7740: 0x0  nop
    ctx->pc = 0x1f7740u;
    // NOP
    // 0x1f7744: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F7744u;
    {
        const bool branch_taken_0x1f7744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f7744) {
            ctx->pc = 0x1F7730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7730;
        }
    }
    ctx->pc = 0x1F774Cu;
    // 0x1f774c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1F774Cu;
    {
        const bool branch_taken_0x1f774c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F774Cu;
        // 0x1f7750: 0x2630ccd0  addiu       $s0, $s1, -0x3330 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f774c) {
            ctx->pc = 0x1F76F0u;
            return;
        }
    }
    ctx->pc = 0x1F7754u;
}
