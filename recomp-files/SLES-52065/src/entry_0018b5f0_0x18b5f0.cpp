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

// Function: entry_0018b5f0
// Address: 0x18b5f0 - 0x18b600
void entry_0018b5f0_0x18b5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b5f0_0x18b5f0");
#endif

    ctx->pc = 0x18b5f0u;

    // 0x18b5f0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B5F0u;
    {
        const bool branch_taken_0x18b5f0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x18B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B5F0u;
        // 0x18b5f4: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b5f0) {
            ctx->pc = 0x18B600u;
            return;
        }
    }
    ctx->pc = 0x18B5F8u;
    // 0x18b5f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18B5F8u;
    {
        const bool branch_taken_0x18b5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b5f8) {
            ctx->pc = 0x18B618u;
            return;
        }
    }
    ctx->pc = 0x18B600u;
}
