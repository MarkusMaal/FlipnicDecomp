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

// Function: entry_00103d90
// Address: 0x103d90 - 0x103d9c
void entry_00103d90_0x103d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103d90_0x103d90");
#endif

    ctx->pc = 0x103d90u;

    // 0x103d90: 0x10000521  b           . + 4 + (0x521 << 2)
    ctx->pc = 0x103D90u;
    {
        const bool branch_taken_0x103d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D90u;
        // 0x103d94: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d90) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x103D98u;
    // 0x103d98: 0x24040210  addiu       $a0, $zero, 0x210
    ctx->pc = 0x103d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    ctx->pc = 0x103d9cu;
}
