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

// Function: entry_0016f3e0
// Address: 0x16f3e0 - 0x16f3f0
void entry_0016f3e0_0x16f3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f3e0_0x16f3e0");
#endif

    ctx->pc = 0x16f3e0u;

    // 0x16f3e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F3E0u;
    {
        const bool branch_taken_0x16f3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f3e0) {
            ctx->pc = 0x16F3F0u;
            return;
        }
    }
    ctx->pc = 0x16F3E8u;
    // 0x16f3e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16F3E8u;
    {
        const bool branch_taken_0x16f3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F3E8u;
        // 0x16f3ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f3e8) {
            ctx->pc = 0x16F3F4u;
            return;
        }
    }
    ctx->pc = 0x16F3F0u;
}
