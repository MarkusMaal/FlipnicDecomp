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

// Function: entry_0010454c
// Address: 0x10454c - 0x104558
void entry_0010454c_0x10454c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010454c_0x10454c");
#endif

    ctx->pc = 0x10454cu;

    // 0x10454c: 0x10000332  b           . + 4 + (0x332 << 2)
    ctx->pc = 0x10454Cu;
    {
        const bool branch_taken_0x10454c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10454Cu;
        // 0x104550: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10454c) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x104554u;
    // 0x104554: 0x24040250  addiu       $a0, $zero, 0x250
    ctx->pc = 0x104554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    ctx->pc = 0x104558u;
}
