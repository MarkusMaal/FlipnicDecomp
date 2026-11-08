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

// Function: entry_00111210
// Address: 0x111210 - 0x11121c
void entry_00111210_0x111210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111210_0x111210");
#endif

    ctx->pc = 0x111210u;

    // 0x111210: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x111210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111214: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x111214u;
    {
        const bool branch_taken_0x111214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111214u;
        // 0x111218: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111214) {
            ctx->pc = 0x11124Cu;
            return;
        }
    }
    ctx->pc = 0x11121Cu;
}
