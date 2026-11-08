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

// Function: entry_001180d4
// Address: 0x1180d4 - 0x1180e4
void entry_001180d4_0x1180d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001180d4_0x1180d4");
#endif

    ctx->pc = 0x1180d4u;

    // 0x1180d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1180D4u;
    {
        const bool branch_taken_0x1180d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1180d4) {
            ctx->pc = 0x1180E4u;
            return;
        }
    }
    ctx->pc = 0x1180DCu;
    // 0x1180dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1180DCu;
    {
        const bool branch_taken_0x1180dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1180E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1180DCu;
        // 0x1180e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1180dc) {
            ctx->pc = 0x1180ECu;
            return;
        }
    }
    ctx->pc = 0x1180E4u;
}
