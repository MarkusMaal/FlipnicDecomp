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

// Function: entry_0010e2b8
// Address: 0x10e2b8 - 0x10e2c8
void entry_0010e2b8_0x10e2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e2b8_0x10e2b8");
#endif

    ctx->pc = 0x10e2b8u;

    // 0x10e2b8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E2B8u;
    {
        const bool branch_taken_0x10e2b8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x10e2b8) {
            ctx->pc = 0x10E2C8u;
            return;
        }
    }
    ctx->pc = 0x10E2C0u;
    // 0x10e2c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10E2C0u;
    {
        const bool branch_taken_0x10e2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2C0u;
        // 0x10e2c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e2c0) {
            ctx->pc = 0x10E2ECu;
            return;
        }
    }
    ctx->pc = 0x10E2C8u;
}
