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

// Function: entry_001e4d0c
// Address: 0x1e4d0c - 0x1e4d18
void entry_001e4d0c_0x1e4d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4d0c_0x1e4d0c");
#endif

    ctx->pc = 0x1e4d0cu;

    // 0x1e4d0c: 0x0  nop
    ctx->pc = 0x1e4d0cu;
    // NOP
    // 0x1e4d10: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1E4D10u;
    {
        const bool branch_taken_0x1e4d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D10u;
        // 0x1e4d14: 0x8e320010  lw          $s2, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4d10) {
            ctx->pc = 0x1E4DA0u;
            return;
        }
    }
    ctx->pc = 0x1E4D18u;
}
