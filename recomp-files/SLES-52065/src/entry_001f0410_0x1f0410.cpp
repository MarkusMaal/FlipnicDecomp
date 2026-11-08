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

// Function: entry_001f0410
// Address: 0x1f0410 - 0x1f0428
void entry_001f0410_0x1f0410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0410_0x1f0410");
#endif

    ctx->pc = 0x1f0410u;

label_1f0410:
    // 0x1f0410: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x1f0410u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1f0414: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0414u;
    {
        const bool branch_taken_0x1f0414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0414u;
        // 0x1f0418: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0414) {
            ctx->pc = 0x1F0428u;
            return;
        }
    }
    ctx->pc = 0x1F041Cu;
    // 0x1f041c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f041cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f0420: 0x5045fffb  beql        $v0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F0420u;
    {
        const bool branch_taken_0x1f0420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1f0420) {
            ctx->pc = 0x1F0424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0420u;
            // 0x1f0424: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0410;
        }
    }
    ctx->pc = 0x1F0428u;
}
