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

// Function: entry_0010511c
// Address: 0x10511c - 0x105128
void entry_0010511c_0x10511c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010511c_0x10511c");
#endif

    ctx->pc = 0x10511cu;

    // 0x10511c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x10511Cu;
    {
        const bool branch_taken_0x10511c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10511Cu;
        // 0x105120: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10511c) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x105124u;
    // 0x105124: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x105124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    ctx->pc = 0x105128u;
}
