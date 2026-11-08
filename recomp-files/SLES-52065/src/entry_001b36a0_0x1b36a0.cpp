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

// Function: entry_001b36a0
// Address: 0x1b36a0 - 0x1b36b0
void entry_001b36a0_0x1b36a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b36a0_0x1b36a0");
#endif

    ctx->pc = 0x1b36a0u;

    // 0x1b36a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B36A0u;
    {
        const bool branch_taken_0x1b36a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b36a0) {
            ctx->pc = 0x1B36B0u;
            return;
        }
    }
    ctx->pc = 0x1B36A8u;
    // 0x1b36a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B36A8u;
    {
        const bool branch_taken_0x1b36a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B36ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B36A8u;
        // 0x1b36ac: 0x8c850020  lw          $a1, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b36a8) {
            ctx->pc = 0x1B36B8u;
            return;
        }
    }
    ctx->pc = 0x1B36B0u;
}
