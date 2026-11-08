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

// Function: entry_00103e68
// Address: 0x103e68 - 0x103e74
void entry_00103e68_0x103e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103e68_0x103e68");
#endif

    ctx->pc = 0x103e68u;

    // 0x103e68: 0x100004eb  b           . + 4 + (0x4EB << 2)
    ctx->pc = 0x103E68u;
    {
        const bool branch_taken_0x103e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E68u;
        // 0x103e6c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103e68) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x103E70u;
    // 0x103e70: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x103e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->pc = 0x103e74u;
}
