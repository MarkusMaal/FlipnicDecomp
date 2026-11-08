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

// Function: entry_0011c9f8
// Address: 0x11c9f8 - 0x11ca08
void entry_0011c9f8_0x11c9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c9f8_0x11c9f8");
#endif

    ctx->pc = 0x11c9f8u;

    // 0x11c9f8: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x11c9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x11c9fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11c9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11ca00: 0x100001e1  b           . + 4 + (0x1E1 << 2)
    ctx->pc = 0x11CA00u;
    {
        const bool branch_taken_0x11ca00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA00u;
        // 0x11ca04: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca00) {
            ctx->pc = 0x11D188u;
            return;
        }
    }
    ctx->pc = 0x11CA08u;
}
