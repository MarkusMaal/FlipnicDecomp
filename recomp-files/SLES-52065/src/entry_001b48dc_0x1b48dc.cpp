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

// Function: entry_001b48dc
// Address: 0x1b48dc - 0x1b48f8
void entry_001b48dc_0x1b48dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b48dc_0x1b48dc");
#endif

    ctx->pc = 0x1b48dcu;

    // 0x1b48dc: 0x0  nop
    ctx->pc = 0x1b48dcu;
    // NOP
    // 0x1b48e0: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x1b48e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1b48e4: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1b48e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b48e8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B48E8u;
    {
        const bool branch_taken_0x1b48e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b48e8) {
            ctx->pc = 0x1B48C8u;
            return;
        }
    }
    ctx->pc = 0x1B48F0u;
    // 0x1b48f0: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1B48F0u;
    {
        const bool branch_taken_0x1b48f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B48F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B48F0u;
        // 0x1b48f4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b48f0) {
            ctx->pc = 0x1B4A3Cu;
            return;
        }
    }
    ctx->pc = 0x1B48F8u;
}
