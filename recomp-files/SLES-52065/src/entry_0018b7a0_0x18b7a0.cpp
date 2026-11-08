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

// Function: entry_0018b7a0
// Address: 0x18b7a0 - 0x18b7b0
void entry_0018b7a0_0x18b7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b7a0_0x18b7a0");
#endif

    ctx->pc = 0x18b7a0u;

    // 0x18b7a0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B7A0u;
    {
        const bool branch_taken_0x18b7a0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x18B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B7A0u;
        // 0x18b7a4: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b7a0) {
            ctx->pc = 0x18B7B0u;
            return;
        }
    }
    ctx->pc = 0x18B7A8u;
    // 0x18b7a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18B7A8u;
    {
        const bool branch_taken_0x18b7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b7a8) {
            ctx->pc = 0x18B7C8u;
            return;
        }
    }
    ctx->pc = 0x18B7B0u;
}
