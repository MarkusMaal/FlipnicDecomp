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

// Function: entry_0020631c
// Address: 0x20631c - 0x206324
void entry_0020631c_0x20631c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020631c_0x20631c");
#endif

    ctx->pc = 0x20631cu;

    // 0x20631c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20631Cu;
    {
        const bool branch_taken_0x20631c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x20631c) {
            ctx->pc = 0x206320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20631Cu;
            // 0x206320: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x206324u;
            return;
        }
    }
    ctx->pc = 0x206324u;
}
