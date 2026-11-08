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

// Function: entry_00189c68
// Address: 0x189c68 - 0x189c70
void entry_00189c68_0x189c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189c68_0x189c68");
#endif

    ctx->pc = 0x189c68u;

    // 0x189c68: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x189C68u;
    {
        const bool branch_taken_0x189c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C68u;
        // 0x189c6c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c68) {
            ctx->pc = 0x189CA4u;
            return;
        }
    }
    ctx->pc = 0x189C70u;
}
