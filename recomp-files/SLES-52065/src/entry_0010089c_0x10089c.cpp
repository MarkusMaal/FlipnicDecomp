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

// Function: entry_0010089c
// Address: 0x10089c - 0x1008a4
void entry_0010089c_0x10089c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010089c_0x10089c");
#endif

    ctx->pc = 0x10089cu;

    // 0x10089c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x10089Cu;
    {
        const bool branch_taken_0x10089c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1008A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10089Cu;
        // 0x1008a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10089c) {
            ctx->pc = 0x100924u;
            return;
        }
    }
    ctx->pc = 0x1008A4u;
}
