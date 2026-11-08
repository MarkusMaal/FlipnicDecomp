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

// Function: entry_00121628
// Address: 0x121628 - 0x121644
void entry_00121628_0x121628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121628_0x121628");
#endif

    ctx->pc = 0x121628u;

label_121628:
    // 0x121628: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x121628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12162c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x12162cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x121630: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x121630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x121634: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x121634u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x121638: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x121638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x12163c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12163Cu;
    {
        const bool branch_taken_0x12163c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12163c) {
            ctx->pc = 0x121628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_121628;
        }
    }
    ctx->pc = 0x121644u;
}
