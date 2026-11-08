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

// Function: entry_00189ea0
// Address: 0x189ea0 - 0x189eb0
void entry_00189ea0_0x189ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189ea0_0x189ea0");
#endif

    ctx->pc = 0x189ea0u;

    // 0x189ea0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x189EA0u;
    {
        const bool branch_taken_0x189ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189ea0) {
            ctx->pc = 0x189EB0u;
            return;
        }
    }
    ctx->pc = 0x189EA8u;
    // 0x189ea8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x189EA8u;
    {
        const bool branch_taken_0x189ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189EA8u;
        // 0x189eac: 0x8c850020  lw          $a1, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189ea8) {
            ctx->pc = 0x189EB8u;
            return;
        }
    }
    ctx->pc = 0x189EB0u;
}
