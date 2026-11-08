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

// Function: entry_0011b488
// Address: 0x11b488 - 0x11b498
void entry_0011b488_0x11b488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b488_0x11b488");
#endif

    ctx->pc = 0x11b488u;

    // 0x11b488: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11b488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11b48c: 0x28480160  slti        $t0, $v0, 0x160
    ctx->pc = 0x11b48cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)352) ? 1 : 0);
    // 0x11b490: 0x1500ffbd  bnez        $t0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x11B490u;
    {
        const bool branch_taken_0x11b490 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B490u;
        // 0x11b494: 0xa24821  addu        $t1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b490) {
            ctx->pc = 0x11B388u;
            return;
        }
    }
    ctx->pc = 0x11B498u;
}
