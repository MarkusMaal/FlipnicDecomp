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

// Function: entry_00145650
// Address: 0x145650 - 0x145660
void entry_00145650_0x145650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145650_0x145650");
#endif

    ctx->pc = 0x145650u;

    // 0x145650: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x145650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x145654: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x145654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x145658: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x145658u;
    {
        const bool branch_taken_0x145658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14565Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145658u;
        // 0x14565c: 0xae230018  sw          $v1, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145658) {
            ctx->pc = 0x145690u;
            return;
        }
    }
    ctx->pc = 0x145660u;
}
