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

// Function: entry_0018a690
// Address: 0x18a690 - 0x18a698
void entry_0018a690_0x18a690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a690_0x18a690");
#endif

    ctx->pc = 0x18a690u;

    // 0x18a690: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18A690u;
    {
        const bool branch_taken_0x18a690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A690u;
        // 0x18a694: 0x8f9080dc  lw          $s0, -0x7F24($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934748)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a690) {
            ctx->pc = 0x18A69Cu;
            return;
        }
    }
    ctx->pc = 0x18A698u;
}
