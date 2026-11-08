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

// Function: entry_0019fd70
// Address: 0x19fd70 - 0x19fd78
void entry_0019fd70_0x19fd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fd70_0x19fd70");
#endif

    ctx->pc = 0x19fd70u;

    // 0x19fd70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19FD70u;
    {
        const bool branch_taken_0x19fd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD70u;
        // 0x19fd74: 0x8c900698  lw          $s0, 0x698($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd70) {
            ctx->pc = 0x19FD88u;
            return;
        }
    }
    ctx->pc = 0x19FD78u;
}
