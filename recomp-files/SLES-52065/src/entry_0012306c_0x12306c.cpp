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

// Function: entry_0012306c
// Address: 0x12306c - 0x123080
void entry_0012306c_0x12306c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012306c_0x12306c");
#endif

    ctx->pc = 0x12306cu;

    // 0x12306c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x12306cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x123070: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x123070u;
    {
        const bool branch_taken_0x123070 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x123070) {
            ctx->pc = 0x123080u;
            return;
        }
    }
    ctx->pc = 0x123078u;
    // 0x123078: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x123078u;
    {
        const bool branch_taken_0x123078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123078u;
        // 0x12307c: 0x8c650008  lw          $a1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123078) {
            ctx->pc = 0x12308Cu;
            return;
        }
    }
    ctx->pc = 0x123080u;
}
