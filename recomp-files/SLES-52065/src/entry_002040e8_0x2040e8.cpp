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

// Function: entry_002040e8
// Address: 0x2040e8 - 0x2040f0
void entry_002040e8_0x2040e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002040e8_0x2040e8");
#endif

    ctx->pc = 0x2040e8u;

    // 0x2040e8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2040E8u;
    {
        const bool branch_taken_0x2040e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2040ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2040E8u;
        // 0x2040ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2040e8) {
            ctx->pc = 0x2041F8u;
            return;
        }
    }
    ctx->pc = 0x2040F0u;
}
