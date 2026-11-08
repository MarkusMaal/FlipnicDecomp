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

// Function: entry_001da698
// Address: 0x1da698 - 0x1da6a8
void entry_001da698_0x1da698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da698_0x1da698");
#endif

    ctx->pc = 0x1da698u;

    // 0x1da698: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1da698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1da69c: 0x8c447320  lw          $a0, 0x7320($v0)
    ctx->pc = 0x1da69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29472)));
    // 0x1da6a0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DA6A0u;
    {
        const bool branch_taken_0x1da6a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da6a0) {
            ctx->pc = 0x1DA6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA6A0u;
            // 0x1da6a4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA6A8u;
            return;
        }
    }
    ctx->pc = 0x1DA6A8u;
}
