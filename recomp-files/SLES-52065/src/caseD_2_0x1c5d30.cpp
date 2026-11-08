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

// Function: caseD_2
// Address: 0x1c5d30 - 0x1c5d58
void caseD_2_0x1c5d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1c5d30");
#endif

    ctx->pc = 0x1c5d30u;

    // 0x1c5d30: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x1c5d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1c5d34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c5d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c5d38: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x1c5d38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x1c5d3c: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x1c5d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1c5d40: 0x1c40005f  bgtz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x1C5D40u;
    {
        const bool branch_taken_0x1c5d40 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1c5d40) {
            ctx->pc = 0x1C5EC0u;
            return;
        }
    }
    ctx->pc = 0x1C5D48u;
    // 0x1c5d48: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x1c5d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1c5d4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c5d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c5d50: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1C5D50u;
    {
        const bool branch_taken_0x1c5d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D50u;
        // 0x1c5d54: 0xae420050  sw          $v0, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5d50) {
            ctx->pc = 0x1C5EC0u;
            return;
        }
    }
    ctx->pc = 0x1C5D58u;
}
