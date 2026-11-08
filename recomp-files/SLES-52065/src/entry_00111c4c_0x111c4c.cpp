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

// Function: entry_00111c4c
// Address: 0x111c4c - 0x111c5c
void entry_00111c4c_0x111c4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111c4c_0x111c4c");
#endif

    ctx->pc = 0x111c4cu;

    // 0x111c4c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x111C4Cu;
    {
        const bool branch_taken_0x111c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C4Cu;
        // 0x111c50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111c4c) {
            ctx->pc = 0x111C84u;
            return;
        }
    }
    ctx->pc = 0x111C54u;
    // 0x111c54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x111C54u;
    {
        const bool branch_taken_0x111c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x111c54) {
            ctx->pc = 0x111C68u;
            return;
        }
    }
    ctx->pc = 0x111C5Cu;
}
