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

// Function: entry_0017e29c
// Address: 0x17e29c - 0x17e2b0
void entry_0017e29c_0x17e29c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e29c_0x17e29c");
#endif

    ctx->pc = 0x17e29cu;

    // 0x17e29c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x17e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17e2a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E2A0u;
    {
        const bool branch_taken_0x17e2a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e2a0) {
            ctx->pc = 0x17E2B0u;
            return;
        }
    }
    ctx->pc = 0x17E2A8u;
    // 0x17e2a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17E2A8u;
    {
        const bool branch_taken_0x17e2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E2A8u;
        // 0x17e2ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e2a8) {
            ctx->pc = 0x17E2B8u;
            return;
        }
    }
    ctx->pc = 0x17E2B0u;
}
