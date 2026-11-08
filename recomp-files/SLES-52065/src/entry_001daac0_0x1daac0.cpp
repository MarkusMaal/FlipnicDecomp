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

// Function: entry_001daac0
// Address: 0x1daac0 - 0x1daac8
void entry_001daac0_0x1daac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001daac0_0x1daac0");
#endif

    ctx->pc = 0x1daac0u;

    // 0x1daac0: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x1DAAC0u;
    {
        const bool branch_taken_0x1daac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAAC0u;
        // 0x1daac4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daac0) {
            ctx->pc = 0x1DAD88u;
            return;
        }
    }
    ctx->pc = 0x1DAAC8u;
}
