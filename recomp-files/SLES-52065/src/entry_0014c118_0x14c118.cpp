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

// Function: entry_0014c118
// Address: 0x14c118 - 0x14c120
void entry_0014c118_0x14c118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c118_0x14c118");
#endif

    ctx->pc = 0x14c118u;

    // 0x14c118: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14C118u;
    {
        const bool branch_taken_0x14c118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C118u;
        // 0x14c11c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c118) {
            ctx->pc = 0x14C138u;
            return;
        }
    }
    ctx->pc = 0x14C120u;
}
