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

// Function: entry_0018b81c
// Address: 0x18b81c - 0x18b82c
void entry_0018b81c_0x18b81c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b81c_0x18b81c");
#endif

    ctx->pc = 0x18b81cu;

    // 0x18b81c: 0x0  nop
    ctx->pc = 0x18b81cu;
    // NOP
    // 0x18b820: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18b820u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b824: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18B824u;
    {
        const bool branch_taken_0x18b824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B824u;
        // 0x18b828: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b824) {
            ctx->pc = 0x18B84Cu;
            return;
        }
    }
    ctx->pc = 0x18B82Cu;
}
