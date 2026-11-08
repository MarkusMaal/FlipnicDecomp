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

// Function: entry_0011e7ac
// Address: 0x11e7ac - 0x11e7b8
void entry_0011e7ac_0x11e7ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e7ac_0x11e7ac");
#endif

    ctx->pc = 0x11e7acu;

    // 0x11e7ac: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x11e7acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x11e7b0: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x11E7B0u;
    {
        const bool branch_taken_0x11e7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7B0u;
        // 0x11e7b4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7b0) {
            ctx->pc = 0x11E740u;
            return;
        }
    }
    ctx->pc = 0x11E7B8u;
}
