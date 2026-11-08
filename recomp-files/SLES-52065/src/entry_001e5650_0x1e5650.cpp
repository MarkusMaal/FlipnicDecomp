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

// Function: entry_001e5650
// Address: 0x1e5650 - 0x1e5658
void entry_001e5650_0x1e5650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5650_0x1e5650");
#endif

    ctx->pc = 0x1e5650u;

    // 0x1e5650: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1E5650u;
    {
        const bool branch_taken_0x1e5650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5650u;
        // 0x1e5654: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5650) {
            ctx->pc = 0x1E5730u;
            return;
        }
    }
    ctx->pc = 0x1E5658u;
}
