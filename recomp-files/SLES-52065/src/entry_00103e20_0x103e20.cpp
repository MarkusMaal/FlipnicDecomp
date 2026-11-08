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

// Function: entry_00103e20
// Address: 0x103e20 - 0x103e2c
void entry_00103e20_0x103e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103e20_0x103e20");
#endif

    ctx->pc = 0x103e20u;

    // 0x103e20: 0x100004fd  b           . + 4 + (0x4FD << 2)
    ctx->pc = 0x103E20u;
    {
        const bool branch_taken_0x103e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E20u;
        // 0x103e24: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103e20) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x103E28u;
    // 0x103e28: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x103e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    ctx->pc = 0x103e2cu;
}
