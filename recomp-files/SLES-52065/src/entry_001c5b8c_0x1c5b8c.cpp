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

// Function: entry_001c5b8c
// Address: 0x1c5b8c - 0x1c5b9c
void entry_001c5b8c_0x1c5b8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5b8c_0x1c5b8c");
#endif

    ctx->pc = 0x1c5b8cu;

    // 0x1c5b8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5B8Cu;
    {
        const bool branch_taken_0x1c5b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5b8c) {
            ctx->pc = 0x1C5B9Cu;
            return;
        }
    }
    ctx->pc = 0x1C5B94u;
    // 0x1c5b94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5B94u;
    {
        const bool branch_taken_0x1c5b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B94u;
        // 0x1c5b98: 0x8c850020  lw          $a1, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b94) {
            ctx->pc = 0x1C5BA4u;
            return;
        }
    }
    ctx->pc = 0x1C5B9Cu;
}
