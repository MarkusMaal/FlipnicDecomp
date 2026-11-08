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

// Function: entry_0011bd04
// Address: 0x11bd04 - 0x11bd0c
void entry_0011bd04_0x11bd04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bd04_0x11bd04");
#endif

    ctx->pc = 0x11bd04u;

    // 0x11bd04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11BD04u;
    {
        const bool branch_taken_0x11bd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD04u;
        // 0x11bd08: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd04) {
            ctx->pc = 0x11BD18u;
            return;
        }
    }
    ctx->pc = 0x11BD0Cu;
}
