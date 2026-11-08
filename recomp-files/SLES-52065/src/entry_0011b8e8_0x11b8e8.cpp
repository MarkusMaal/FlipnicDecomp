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

// Function: entry_0011b8e8
// Address: 0x11b8e8 - 0x11b8f0
void entry_0011b8e8_0x11b8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b8e8_0x11b8e8");
#endif

    ctx->pc = 0x11b8e8u;

    // 0x11b8e8: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x11B8E8u;
    {
        const bool branch_taken_0x11b8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8E8u;
        // 0x11b8ec: 0x8e52003c  lw          $s2, 0x3C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8e8) {
            ctx->pc = 0x11B8A8u;
            return;
        }
    }
    ctx->pc = 0x11B8F0u;
}
