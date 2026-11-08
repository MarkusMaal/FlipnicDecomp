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

// Function: entry_0011b80c
// Address: 0x11b80c - 0x11b818
void entry_0011b80c_0x11b80c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b80c_0x11b80c");
#endif

    ctx->pc = 0x11b80cu;

    // 0x11b80c: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x11b80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x11b810: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11B810u;
    {
        const bool branch_taken_0x11b810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B810u;
        // 0x11b814: 0xae430038  sw          $v1, 0x38($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b810) {
            ctx->pc = 0x11B824u;
            return;
        }
    }
    ctx->pc = 0x11B818u;
}
