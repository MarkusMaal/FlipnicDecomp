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

// Function: entry_001214c8
// Address: 0x1214c8 - 0x1214e4
void entry_001214c8_0x1214c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001214c8_0x1214c8");
#endif

    ctx->pc = 0x1214c8u;

label_1214c8:
    // 0x1214c8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1214c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1214cc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1214ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1214d0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1214d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1214d4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1214d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1214d8: 0x0  nop
    ctx->pc = 0x1214d8u;
    // NOP
    // 0x1214dc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1214DCu;
    {
        const bool branch_taken_0x1214dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1214dc) {
            ctx->pc = 0x1214C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1214c8;
        }
    }
    ctx->pc = 0x1214E4u;
}
