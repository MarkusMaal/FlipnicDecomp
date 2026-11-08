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

// Function: entry_0018982c
// Address: 0x18982c - 0x18983c
void entry_0018982c_0x18982c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018982c_0x18982c");
#endif

    ctx->pc = 0x18982cu;

    // 0x18982c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18982Cu;
    {
        const bool branch_taken_0x18982c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18982c) {
            ctx->pc = 0x18983Cu;
            return;
        }
    }
    ctx->pc = 0x189834u;
    // 0x189834: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x189834u;
    {
        const bool branch_taken_0x189834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189834u;
        // 0x189838: 0x8c850020  lw          $a1, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189834) {
            ctx->pc = 0x189844u;
            return;
        }
    }
    ctx->pc = 0x18983Cu;
}
