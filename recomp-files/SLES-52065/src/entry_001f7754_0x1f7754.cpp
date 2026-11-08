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

// Function: entry_001f7754
// Address: 0x1f7754 - 0x1f7760
void entry_001f7754_0x1f7754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7754_0x1f7754");
#endif

    ctx->pc = 0x1f7754u;

    // 0x1f7754: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1F7754u;
    {
        const bool branch_taken_0x1f7754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7754u;
        // 0x1f7758: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7754) {
            ctx->pc = 0x1F76C8u;
            return;
        }
    }
    ctx->pc = 0x1F775Cu;
    // 0x1f775c: 0xae40bb3c  sw          $zero, -0x44C4($s2)
    ctx->pc = 0x1f775cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294949692), GPR_U32(ctx, 0));
    ctx->pc = 0x1f7760u;
}
