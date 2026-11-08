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

// Function: entry_0019fc70
// Address: 0x19fc70 - 0x19fc78
void entry_0019fc70_0x19fc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fc70_0x19fc70");
#endif

    ctx->pc = 0x19fc70u;

    // 0x19fc70: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x19FC70u;
    {
        const bool branch_taken_0x19fc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC70u;
        // 0x19fc74: 0x8c900690  lw          $s0, 0x690($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc70) {
            ctx->pc = 0x19FD88u;
            return;
        }
    }
    ctx->pc = 0x19FC78u;
}
