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

// Function: entry_00199820
// Address: 0x199820 - 0x19982c
void entry_00199820_0x199820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199820_0x199820");
#endif

    ctx->pc = 0x199820u;

    // 0x199820: 0x8e82068c  lw          $v0, 0x68C($s4)
    ctx->pc = 0x199820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1676)));
    // 0x199824: 0x441fff3  bgez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x199824u;
    {
        const bool branch_taken_0x199824 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x199828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199824u;
        // 0x199828: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199824) {
            ctx->pc = 0x1997F4u;
            return;
        }
    }
    ctx->pc = 0x19982Cu;
}
