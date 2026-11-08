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

// Function: entry_001214a4
// Address: 0x1214a4 - 0x1214c0
void entry_001214a4_0x1214a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001214a4_0x1214a4");
#endif

    ctx->pc = 0x1214a4u;

label_1214a4:
    // 0x1214a4: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x1214a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x1214a8: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1214a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1214ac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1214acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1214b0: 0x205082b  sltu        $at, $s0, $a1
    ctx->pc = 0x1214b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1214b4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1214b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1214b8: 0x1420fffa  bnez        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1214B8u;
    {
        const bool branch_taken_0x1214b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1214b8) {
            ctx->pc = 0x1214A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1214a4;
        }
    }
    ctx->pc = 0x1214C0u;
}
