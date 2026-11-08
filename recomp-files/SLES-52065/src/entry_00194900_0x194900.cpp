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

// Function: entry_00194900
// Address: 0x194900 - 0x194908
void entry_00194900_0x194900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194900_0x194900");
#endif

    ctx->pc = 0x194900u;

    // 0x194900: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x194900u;
    {
        const bool branch_taken_0x194900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194900u;
        // 0x194904: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194900) {
            ctx->pc = 0x19490Cu;
            return;
        }
    }
    ctx->pc = 0x194908u;
}
