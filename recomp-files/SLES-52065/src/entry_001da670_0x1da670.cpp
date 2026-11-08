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

// Function: entry_001da670
// Address: 0x1da670 - 0x1da688
void entry_001da670_0x1da670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da670_0x1da670");
#endif

    ctx->pc = 0x1da670u;

    // 0x1da670: 0x148200cb  bne         $a0, $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x1DA670u;
    {
        const bool branch_taken_0x1da670 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DA674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA670u;
        // 0x1da674: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da670) {
            ctx->pc = 0x1DA9A0u;
            return;
        }
    }
    ctx->pc = 0x1DA678u;
    // 0x1da678: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1da678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1da67c: 0x8c447320  lw          $a0, 0x7320($v0)
    ctx->pc = 0x1da67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29472)));
    // 0x1da680: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DA680u;
    {
        const bool branch_taken_0x1da680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da680) {
            ctx->pc = 0x1DA684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA680u;
            // 0x1da684: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA688u;
            return;
        }
    }
    ctx->pc = 0x1DA688u;
}
