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

// Function: entry_001b3570
// Address: 0x1b3570 - 0x1b3580
void entry_001b3570_0x1b3570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3570_0x1b3570");
#endif

    ctx->pc = 0x1b3570u;

    // 0x1b3570: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3570u;
    {
        const bool branch_taken_0x1b3570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3570) {
            ctx->pc = 0x1B3580u;
            return;
        }
    }
    ctx->pc = 0x1B3578u;
    // 0x1b3578: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3578u;
    {
        const bool branch_taken_0x1b3578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3578u;
        // 0x1b357c: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3578) {
            ctx->pc = 0x1B3588u;
            return;
        }
    }
    ctx->pc = 0x1B3580u;
}
