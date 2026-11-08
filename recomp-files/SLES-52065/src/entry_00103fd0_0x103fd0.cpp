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

// Function: entry_00103fd0
// Address: 0x103fd0 - 0x103fdc
void entry_00103fd0_0x103fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103fd0_0x103fd0");
#endif

    ctx->pc = 0x103fd0u;

    // 0x103fd0: 0x10000491  b           . + 4 + (0x491 << 2)
    ctx->pc = 0x103FD0u;
    {
        const bool branch_taken_0x103fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103FD0u;
        // 0x103fd4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103fd0) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x103FD8u;
    // 0x103fd8: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x103fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    ctx->pc = 0x103fdcu;
}
