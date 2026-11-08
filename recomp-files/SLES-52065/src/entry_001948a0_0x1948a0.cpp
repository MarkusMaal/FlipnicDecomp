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

// Function: entry_001948a0
// Address: 0x1948a0 - 0x1948a8
void entry_001948a0_0x1948a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001948a0_0x1948a0");
#endif

    ctx->pc = 0x1948a0u;

    // 0x1948a0: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x1948A0u;
    {
        const bool branch_taken_0x1948a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1948A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948A0u;
        // 0x1948a4: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1948a0) {
            ctx->pc = 0x19485Cu;
            return;
        }
    }
    ctx->pc = 0x1948A8u;
}
