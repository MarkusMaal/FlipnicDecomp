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

// Function: entry_0011b6d4
// Address: 0x11b6d4 - 0x11b6e4
void entry_0011b6d4_0x11b6d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b6d4_0x11b6d4");
#endif

    ctx->pc = 0x11b6d4u;

    // 0x11b6d4: 0x0  nop
    ctx->pc = 0x11b6d4u;
    // NOP
    // 0x11b6d8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x11b6d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x11b6dc: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x11B6DCu;
    {
        const bool branch_taken_0x11b6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6DCu;
        // 0x11b6e0: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6dc) {
            ctx->pc = 0x11B64Cu;
            return;
        }
    }
    ctx->pc = 0x11B6E4u;
}
