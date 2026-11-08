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

// Function: entry_0010490c
// Address: 0x10490c - 0x104918
void entry_0010490c_0x10490c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010490c_0x10490c");
#endif

    ctx->pc = 0x10490cu;

    // 0x10490c: 0x10000242  b           . + 4 + (0x242 << 2)
    ctx->pc = 0x10490Cu;
    {
        const bool branch_taken_0x10490c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10490Cu;
        // 0x104910: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10490c) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x104914u;
    // 0x104914: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x104914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->pc = 0x104918u;
}
