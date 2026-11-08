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

// Function: entry_0019fd78
// Address: 0x19fd78 - 0x19fd80
void entry_0019fd78_0x19fd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fd78_0x19fd78");
#endif

    ctx->pc = 0x19fd78u;

    // 0x19fd78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19FD78u;
    {
        const bool branch_taken_0x19fd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD78u;
        // 0x19fd7c: 0x8c9006a0  lw          $s0, 0x6A0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd78) {
            ctx->pc = 0x19FD88u;
            return;
        }
    }
    ctx->pc = 0x19FD80u;
}
