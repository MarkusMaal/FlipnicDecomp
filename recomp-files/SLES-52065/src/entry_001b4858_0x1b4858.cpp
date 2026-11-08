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

// Function: entry_001b4858
// Address: 0x1b4858 - 0x1b4860
void entry_001b4858_0x1b4858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4858_0x1b4858");
#endif

    ctx->pc = 0x1b4858u;

    // 0x1b4858: 0x1600ff8b  bnez        $s0, . + 4 + (-0x75 << 2)
    ctx->pc = 0x1B4858u;
    {
        const bool branch_taken_0x1b4858 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4858u;
        // 0x1b485c: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4858) {
            ctx->pc = 0x1B4688u;
            return;
        }
    }
    ctx->pc = 0x1B4860u;
}
