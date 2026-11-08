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

// Function: entry_001fa9c0
// Address: 0x1fa9c0 - 0x1fa9cc
void entry_001fa9c0_0x1fa9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa9c0_0x1fa9c0");
#endif

    ctx->pc = 0x1fa9c0u;

    // 0x1fa9c0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1fa9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1fa9c4: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x1FA9C4u;
    {
        const bool branch_taken_0x1fa9c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA9C4u;
        // 0x1fa9c8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa9c4) {
            ctx->pc = 0x1FA9A0u;
            return;
        }
    }
    ctx->pc = 0x1FA9CCu;
}
