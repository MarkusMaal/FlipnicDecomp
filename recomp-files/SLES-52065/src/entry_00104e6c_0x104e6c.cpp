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

// Function: entry_00104e6c
// Address: 0x104e6c - 0x104e78
void entry_00104e6c_0x104e6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104e6c_0x104e6c");
#endif

    ctx->pc = 0x104e6cu;

    // 0x104e6c: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x104E6Cu;
    {
        const bool branch_taken_0x104e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104E6Cu;
        // 0x104e70: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104e6c) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x104E74u;
    // 0x104e74: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x104e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    ctx->pc = 0x104e78u;
}
