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

// Function: entry_0016e270
// Address: 0x16e270 - 0x16e278
void entry_0016e270_0x16e270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e270_0x16e270");
#endif

    ctx->pc = 0x16e270u;

    // 0x16e270: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x16E270u;
    {
        const bool branch_taken_0x16e270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E270u;
        // 0x16e274: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e270) {
            ctx->pc = 0x16E2C8u;
            return;
        }
    }
    ctx->pc = 0x16E278u;
}
