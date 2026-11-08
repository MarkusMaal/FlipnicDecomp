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

// Function: entry_001e3c6c
// Address: 0x1e3c6c - 0x1e3c78
void entry_001e3c6c_0x1e3c6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3c6c_0x1e3c6c");
#endif

    ctx->pc = 0x1e3c6cu;

    // 0x1e3c6c: 0x0  nop
    ctx->pc = 0x1e3c6cu;
    // NOP
    // 0x1e3c70: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1E3C70u;
    {
        const bool branch_taken_0x1e3c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C70u;
        // 0x1e3c74: 0x8e320010  lw          $s2, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c70) {
            ctx->pc = 0x1E3CD8u;
            return;
        }
    }
    ctx->pc = 0x1E3C78u;
}
