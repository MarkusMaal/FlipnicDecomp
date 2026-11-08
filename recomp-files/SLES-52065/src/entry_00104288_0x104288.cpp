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

// Function: entry_00104288
// Address: 0x104288 - 0x104294
void entry_00104288_0x104288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104288_0x104288");
#endif

    ctx->pc = 0x104288u;

    // 0x104288: 0x100003e3  b           . + 4 + (0x3E3 << 2)
    ctx->pc = 0x104288u;
    {
        const bool branch_taken_0x104288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104288u;
        // 0x10428c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104288) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x104290u;
    // 0x104290: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x104290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    ctx->pc = 0x104294u;
}
