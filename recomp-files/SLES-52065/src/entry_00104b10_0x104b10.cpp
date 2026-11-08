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

// Function: entry_00104b10
// Address: 0x104b10 - 0x104b1c
void entry_00104b10_0x104b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104b10_0x104b10");
#endif

    ctx->pc = 0x104b10u;

    // 0x104b10: 0x100001c1  b           . + 4 + (0x1C1 << 2)
    ctx->pc = 0x104B10u;
    {
        const bool branch_taken_0x104b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B10u;
        // 0x104b14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b10) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x104B18u;
    // 0x104b18: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x104b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->pc = 0x104b1cu;
}
