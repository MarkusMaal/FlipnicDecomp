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

// Function: entry_00114258
// Address: 0x114258 - 0x114260
void entry_00114258_0x114258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114258_0x114258");
#endif

    ctx->pc = 0x114258u;

    // 0x114258: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x114258u;
    {
        const bool branch_taken_0x114258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114258u;
        // 0x11425c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114258) {
            ctx->pc = 0x114278u;
            return;
        }
    }
    ctx->pc = 0x114260u;
}
