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

// Function: entry_00116e40
// Address: 0x116e40 - 0x116e48
void entry_00116e40_0x116e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116e40_0x116e40");
#endif

    ctx->pc = 0x116e40u;

    // 0x116e40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x116E40u;
    {
        const bool branch_taken_0x116e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E40u;
        // 0x116e44: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e40) {
            ctx->pc = 0x116E50u;
            return;
        }
    }
    ctx->pc = 0x116E48u;
}
