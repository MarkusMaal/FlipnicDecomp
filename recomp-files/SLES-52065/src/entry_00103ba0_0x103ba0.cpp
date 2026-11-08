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

// Function: entry_00103ba0
// Address: 0x103ba0 - 0x103bac
void entry_00103ba0_0x103ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103ba0_0x103ba0");
#endif

    ctx->pc = 0x103ba0u;

    // 0x103ba0: 0x1000059d  b           . + 4 + (0x59D << 2)
    ctx->pc = 0x103BA0u;
    {
        const bool branch_taken_0x103ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103BA0u;
        // 0x103ba4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ba0) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x103BA8u;
    // 0x103ba8: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x103ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    ctx->pc = 0x103bacu;
}
