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

// Function: entry_0019fc78
// Address: 0x19fc78 - 0x19fc80
void entry_0019fc78_0x19fc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fc78_0x19fc78");
#endif

    ctx->pc = 0x19fc78u;

    // 0x19fc78: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x19FC78u;
    {
        const bool branch_taken_0x19fc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC78u;
        // 0x19fc7c: 0x8c900694  lw          $s0, 0x694($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc78) {
            ctx->pc = 0x19FD88u;
            return;
        }
    }
    ctx->pc = 0x19FC80u;
}
