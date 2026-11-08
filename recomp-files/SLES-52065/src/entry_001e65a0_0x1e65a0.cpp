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

// Function: entry_001e65a0
// Address: 0x1e65a0 - 0x1e65a8
void entry_001e65a0_0x1e65a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e65a0_0x1e65a0");
#endif

    ctx->pc = 0x1e65a0u;

    // 0x1e65a0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1E65A0u;
    {
        const bool branch_taken_0x1e65a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E65A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65A0u;
        // 0x1e65a4: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e65a0) {
            ctx->pc = 0x1E6680u;
            return;
        }
    }
    ctx->pc = 0x1E65A8u;
}
