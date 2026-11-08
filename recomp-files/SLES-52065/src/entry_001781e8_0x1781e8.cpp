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

// Function: entry_001781e8
// Address: 0x1781e8 - 0x1781f8
void entry_001781e8_0x1781e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001781e8_0x1781e8");
#endif

    ctx->pc = 0x1781e8u;

    // 0x1781e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1781E8u;
    {
        const bool branch_taken_0x1781e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1781e8) {
            ctx->pc = 0x1781F8u;
            return;
        }
    }
    ctx->pc = 0x1781F0u;
    // 0x1781f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1781F0u;
    {
        const bool branch_taken_0x1781f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1781F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1781F0u;
        // 0x1781f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1781f0) {
            ctx->pc = 0x1781FCu;
            return;
        }
    }
    ctx->pc = 0x1781F8u;
}
