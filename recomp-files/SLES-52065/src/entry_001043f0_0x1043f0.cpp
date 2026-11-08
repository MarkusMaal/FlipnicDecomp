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

// Function: entry_001043f0
// Address: 0x1043f0 - 0x1043fc
void entry_001043f0_0x1043f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001043f0_0x1043f0");
#endif

    ctx->pc = 0x1043f0u;

    // 0x1043f0: 0x10000389  b           . + 4 + (0x389 << 2)
    ctx->pc = 0x1043F0u;
    {
        const bool branch_taken_0x1043f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1043F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1043F0u;
        // 0x1043f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1043f0) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x1043F8u;
    // 0x1043f8: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x1043f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->pc = 0x1043fcu;
}
