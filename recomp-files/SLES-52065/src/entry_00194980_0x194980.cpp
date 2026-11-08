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

// Function: entry_00194980
// Address: 0x194980 - 0x194988
void entry_00194980_0x194980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194980_0x194980");
#endif

    ctx->pc = 0x194980u;

    // 0x194980: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x194980u;
    {
        const bool branch_taken_0x194980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194980u;
        // 0x194984: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194980) {
            ctx->pc = 0x19493Cu;
            return;
        }
    }
    ctx->pc = 0x194988u;
}
