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

// Function: entry_0013e2e0
// Address: 0x13e2e0 - 0x13e2f4
void entry_0013e2e0_0x13e2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e2e0_0x13e2e0");
#endif

    ctx->pc = 0x13e2e0u;

    // 0x13e2e0: 0x8ea201c0  lw          $v0, 0x1C0($s5)
    ctx->pc = 0x13e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 448)));
    // 0x13e2e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E2E4u;
    {
        const bool branch_taken_0x13e2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E2E4u;
        // 0x13e2e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e2e4) {
            ctx->pc = 0x13E2F4u;
            return;
        }
    }
    ctx->pc = 0x13E2ECu;
    // 0x13e2ec: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x13E2ECu;
    {
        const bool branch_taken_0x13e2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e2ec) {
            ctx->pc = 0x13E550u;
            return;
        }
    }
    ctx->pc = 0x13E2F4u;
}
