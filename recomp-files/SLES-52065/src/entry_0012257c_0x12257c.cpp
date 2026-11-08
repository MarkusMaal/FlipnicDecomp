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

// Function: entry_0012257c
// Address: 0x12257c - 0x12259c
void entry_0012257c_0x12257c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012257c_0x12257c");
#endif

    ctx->pc = 0x12257cu;

    // 0x12257c: 0x0  nop
    ctx->pc = 0x12257cu;
    // NOP
    // 0x122580: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x122580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x122584: 0x0  nop
    ctx->pc = 0x122584u;
    // NOP
    // 0x122588: 0x0  nop
    ctx->pc = 0x122588u;
    // NOP
    // 0x12258c: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12258Cu;
    {
        const bool branch_taken_0x12258c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x12258c) {
            ctx->pc = 0x122578u;
            return;
        }
    }
    ctx->pc = 0x122594u;
    // 0x122594: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x122594u;
    {
        const bool branch_taken_0x122594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122594u;
        // 0x122598: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122594) {
            ctx->pc = 0x1225C0u;
            return;
        }
    }
    ctx->pc = 0x12259Cu;
}
