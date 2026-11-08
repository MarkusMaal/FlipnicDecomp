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

// Function: entry_0014b170
// Address: 0x14b170 - 0x14b180
void entry_0014b170_0x14b170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b170_0x14b170");
#endif

    ctx->pc = 0x14b170u;

    // 0x14b170: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x14b170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x14b174: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14b174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14b178: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14B178u;
    {
        const bool branch_taken_0x14b178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B178u;
        // 0x14b17c: 0xae430018  sw          $v1, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b178) {
            ctx->pc = 0x14B1B0u;
            return;
        }
    }
    ctx->pc = 0x14B180u;
}
