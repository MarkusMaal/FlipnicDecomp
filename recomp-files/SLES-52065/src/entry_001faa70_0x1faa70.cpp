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

// Function: entry_001faa70
// Address: 0x1faa70 - 0x1faa8c
void entry_001faa70_0x1faa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001faa70_0x1faa70");
#endif

    ctx->pc = 0x1faa70u;

label_1faa70:
    // 0x1faa70: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1faa70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1faa74: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1faa74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1faa78: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1faa78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1faa7c: 0xd4102a  slt         $v0, $a2, $s4
    ctx->pc = 0x1faa7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1faa80: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1faa80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1faa84: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FAA84u;
    {
        const bool branch_taken_0x1faa84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faa84) {
            ctx->pc = 0x1FAA70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1faa70;
        }
    }
    ctx->pc = 0x1FAA8Cu;
}
