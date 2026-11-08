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

// Function: entry_00104c9c
// Address: 0x104c9c - 0x104ca8
void entry_00104c9c_0x104c9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104c9c_0x104c9c");
#endif

    ctx->pc = 0x104c9cu;

    // 0x104c9c: 0x1000015e  b           . + 4 + (0x15E << 2)
    ctx->pc = 0x104C9Cu;
    {
        const bool branch_taken_0x104c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104C9Cu;
        // 0x104ca0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104c9c) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x104CA4u;
    // 0x104ca4: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x104ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    ctx->pc = 0x104ca8u;
}
