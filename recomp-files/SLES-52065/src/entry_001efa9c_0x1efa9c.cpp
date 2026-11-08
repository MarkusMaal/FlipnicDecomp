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

// Function: entry_001efa9c
// Address: 0x1efa9c - 0x1efab0
void entry_001efa9c_0x1efa9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001efa9c_0x1efa9c");
#endif

    ctx->pc = 0x1efa9cu;

    // 0x1efa9c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EFA9Cu;
    {
        const bool branch_taken_0x1efa9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efa9c) {
            ctx->pc = 0x1EFAB0u;
            return;
        }
    }
    ctx->pc = 0x1EFAA4u;
    // 0x1efaa4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1efaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1efaa8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFAA8u;
    {
        const bool branch_taken_0x1efaa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efaa8) {
            ctx->pc = 0x1EFAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EFAA8u;
            // 0x1efaac: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFAC0u;
            return;
        }
    }
    ctx->pc = 0x1EFAB0u;
}
