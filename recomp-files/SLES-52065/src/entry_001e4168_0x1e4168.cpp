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

// Function: entry_001e4168
// Address: 0x1e4168 - 0x1e4178
void entry_001e4168_0x1e4168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4168_0x1e4168");
#endif

    ctx->pc = 0x1e4168u;

    // 0x1e4168: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4168u;
    {
        const bool branch_taken_0x1e4168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e4168) {
            ctx->pc = 0x1E4178u;
            return;
        }
    }
    ctx->pc = 0x1E4170u;
    // 0x1e4170: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1E4170u;
    {
        const bool branch_taken_0x1e4170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4170u;
        // 0x1e4174: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4170) {
            ctx->pc = 0x1E41D4u;
            return;
        }
    }
    ctx->pc = 0x1E4178u;
}
