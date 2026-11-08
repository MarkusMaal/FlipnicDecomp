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

// Function: entry_00205e20
// Address: 0x205e20 - 0x205e28
void entry_00205e20_0x205e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205e20_0x205e20");
#endif

    ctx->pc = 0x205e20u;

    // 0x205e20: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x205E20u;
    {
        const bool branch_taken_0x205e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E20u;
        // 0x205e24: 0x2407002d  addiu       $a3, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205e20) {
            ctx->pc = 0x205DB8u;
            return;
        }
    }
    ctx->pc = 0x205E28u;
}
