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

// Function: entry_0011b620
// Address: 0x11b620 - 0x11b630
void entry_0011b620_0x11b620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b620_0x11b620");
#endif

    ctx->pc = 0x11b620u;

    // 0x11b620: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x11b620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x11b624: 0x29030160  slti        $v1, $t0, 0x160
    ctx->pc = 0x11b624u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)352) ? 1 : 0);
    // 0x11b628: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x11B628u;
    {
        const bool branch_taken_0x11b628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B628u;
        // 0x11b62c: 0xa84821  addu        $t1, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b628) {
            ctx->pc = 0x11B5B0u;
            return;
        }
    }
    ctx->pc = 0x11B630u;
}
