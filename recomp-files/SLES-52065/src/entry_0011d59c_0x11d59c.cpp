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

// Function: entry_0011d59c
// Address: 0x11d59c - 0x11d5a8
void entry_0011d59c_0x11d59c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d59c_0x11d59c");
#endif

    ctx->pc = 0x11d59cu;

    // 0x11d59c: 0x0  nop
    ctx->pc = 0x11d59cu;
    // NOP
    // 0x11d5a0: 0x1000ff10  b           . + 4 + (-0xF0 << 2)
    ctx->pc = 0x11D5A0u;
    {
        const bool branch_taken_0x11d5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D5A0u;
        // 0x11d5a4: 0x8e100038  lw          $s0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d5a0) {
            ctx->pc = 0x11D1E4u;
            return;
        }
    }
    ctx->pc = 0x11D5A8u;
}
