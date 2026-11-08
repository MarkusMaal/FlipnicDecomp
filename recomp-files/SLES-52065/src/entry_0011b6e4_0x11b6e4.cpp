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

// Function: entry_0011b6e4
// Address: 0x11b6e4 - 0x11b6f8
void entry_0011b6e4_0x11b6e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b6e4_0x11b6e4");
#endif

    ctx->pc = 0x11b6e4u;

    // 0x11b6e4: 0x0  nop
    ctx->pc = 0x11b6e4u;
    // NOP
    // 0x11b6e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11b6ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11b6ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b6f0: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x11B6F0u;
    {
        const bool branch_taken_0x11b6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6F0u;
        // 0x11b6f4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6f0) {
            ctx->pc = 0x11B64Cu;
            return;
        }
    }
    ctx->pc = 0x11B6F8u;
}
