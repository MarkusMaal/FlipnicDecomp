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

// Function: entry_001e48dc
// Address: 0x1e48dc - 0x1e48e4
void entry_001e48dc_0x1e48dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e48dc_0x1e48dc");
#endif

    ctx->pc = 0x1e48dcu;

    // 0x1e48dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E48DCu;
    {
        const bool branch_taken_0x1e48dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E48E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48DCu;
        // 0x1e48e0: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e48dc) {
            ctx->pc = 0x1E48F4u;
            return;
        }
    }
    ctx->pc = 0x1E48E4u;
}
