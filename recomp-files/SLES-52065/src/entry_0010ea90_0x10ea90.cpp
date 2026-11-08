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

// Function: entry_0010ea90
// Address: 0x10ea90 - 0x10ea98
void entry_0010ea90_0x10ea90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ea90_0x10ea90");
#endif

    ctx->pc = 0x10ea90u;

    // 0x10ea90: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x10EA90u;
    {
        const bool branch_taken_0x10ea90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA90u;
        // 0x10ea94: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea90) {
            ctx->pc = 0x10EAE8u;
            return;
        }
    }
    ctx->pc = 0x10EA98u;
}
