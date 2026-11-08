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

// Function: entry_0014867c
// Address: 0x14867c - 0x148684
void entry_0014867c_0x14867c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014867c_0x14867c");
#endif

    ctx->pc = 0x14867cu;

    // 0x14867c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14867Cu;
    {
        const bool branch_taken_0x14867c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14867Cu;
        // 0x148680: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14867c) {
            ctx->pc = 0x1486A8u;
            return;
        }
    }
    ctx->pc = 0x148684u;
}
