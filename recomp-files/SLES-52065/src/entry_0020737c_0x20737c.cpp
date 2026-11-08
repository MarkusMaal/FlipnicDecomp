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

// Function: entry_0020737c
// Address: 0x20737c - 0x207384
void entry_0020737c_0x20737c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020737c_0x20737c");
#endif

    ctx->pc = 0x20737cu;

    // 0x20737c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20737Cu;
    {
        const bool branch_taken_0x20737c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x20737c) {
            ctx->pc = 0x207380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20737Cu;
            // 0x207380: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x207384u;
            return;
        }
    }
    ctx->pc = 0x207384u;
}
