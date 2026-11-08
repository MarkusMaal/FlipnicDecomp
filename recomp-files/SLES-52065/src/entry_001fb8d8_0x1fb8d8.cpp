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

// Function: entry_001fb8d8
// Address: 0x1fb8d8 - 0x1fb8e0
void entry_001fb8d8_0x1fb8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb8d8_0x1fb8d8");
#endif

    ctx->pc = 0x1fb8d8u;

    // 0x1fb8d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FB8D8u;
    {
        const bool branch_taken_0x1fb8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8D8u;
        // 0x1fb8dc: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb8d8) {
            ctx->pc = 0x1FB8F0u;
            return;
        }
    }
    ctx->pc = 0x1FB8E0u;
}
