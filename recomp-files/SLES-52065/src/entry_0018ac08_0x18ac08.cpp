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

// Function: entry_0018ac08
// Address: 0x18ac08 - 0x18ac18
void entry_0018ac08_0x18ac08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ac08_0x18ac08");
#endif

    ctx->pc = 0x18ac08u;

    // 0x18ac08: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18AC08u;
    {
        const bool branch_taken_0x18ac08 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x18ac08) {
            ctx->pc = 0x18AC1Cu;
            return;
        }
    }
    ctx->pc = 0x18AC10u;
    // 0x18ac10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18AC10u;
    {
        const bool branch_taken_0x18ac10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC10u;
        // 0x18ac14: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac10) {
            ctx->pc = 0x18AC1Cu;
            return;
        }
    }
    ctx->pc = 0x18AC18u;
}
