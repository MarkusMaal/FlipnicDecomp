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

// Function: entry_001215b4
// Address: 0x1215b4 - 0x1215d0
void entry_001215b4_0x1215b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001215b4_0x1215b4");
#endif

    ctx->pc = 0x1215b4u;

label_1215b4:
    // 0x1215b4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1215b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1215b8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1215b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1215bc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1215bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1215c0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1215c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1215c4: 0x0  nop
    ctx->pc = 0x1215c4u;
    // NOP
    // 0x1215c8: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1215C8u;
    {
        const bool branch_taken_0x1215c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1215c8) {
            ctx->pc = 0x1215B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1215b4;
        }
    }
    ctx->pc = 0x1215D0u;
}
